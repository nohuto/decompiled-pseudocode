/*
 * XREFs of ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484
 * Callers:
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     NtUserGetObjectInformation @ 0x1C00934A0 (NtUserGetObjectInformation.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0093620 (xxxCleanupThreadPointerInputInfo.c)
 *     NtUserGetIconInfo @ 0x1C00936E0 (NtUserGetIconInfo.c)
 *     NtUserCheckMenuItem @ 0x1C0093980 (NtUserCheckMenuItem.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     CreateDeviceInfo @ 0x1C01DE948 (CreateDeviceInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall UserAtomicCheck::UnregisterStack(UserAtomicCheck *this)
{
  unsigned int v1; // edx

  if ( gpAtomickCheckStacks )
  {
    v1 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
      {
        if ( ++v1 >= gdwAtomicCheckLogSize )
          return;
      }
      *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
}
