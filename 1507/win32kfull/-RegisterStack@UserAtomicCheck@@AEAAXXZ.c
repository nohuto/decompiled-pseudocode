/*
 * XREFs of ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00955A8
 * Callers:
 *     NtUserGetObjectInformation @ 0x1C00934A0 (NtUserGetObjectInformation.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0093620 (xxxCleanupThreadPointerInputInfo.c)
 *     NtUserGetIconInfo @ 0x1C00936E0 (NtUserGetIconInfo.c)
 *     NtUserCheckMenuItem @ 0x1C0093980 (NtUserCheckMenuItem.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall UserAtomicCheck::RegisterStack(UserAtomicCheck *this)
{
  unsigned int v1; // ecx
  unsigned __int64 v2; // rbx

  if ( gpAtomickCheckStacks )
  {
    *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
    v1 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v1 >= gdwAtomicCheckLogSize )
          return;
      }
      v2 = (unsigned __int64)v1 << 6;
      *(_DWORD *)(v2 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v2 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v2 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v2 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
}
