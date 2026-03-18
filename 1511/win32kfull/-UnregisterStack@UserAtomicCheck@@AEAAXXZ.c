/*
 * XREFs of ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50
 * Callers:
 *     NtUserGetIconInfo @ 0x1C004A220 (NtUserGetIconInfo.c)
 *     NtUserKillTimer @ 0x1C004A440 (NtUserKillTimer.c)
 *     NtUserSetTimer @ 0x1C004A550 (NtUserSetTimer.c)
 *     NtUserGetObjectInformation @ 0x1C004BEE0 (NtUserGetObjectInformation.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0082E7C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
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
