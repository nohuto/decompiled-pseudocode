/*
 * XREFs of ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00766E8
 * Callers:
 *     NtUserGetIconInfo @ 0x1C003BA50 (NtUserGetIconInfo.c)
 *     NtUserGetObjectInformation @ 0x1C0076070 (NtUserGetObjectInformation.c)
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 *     NtUserKillTimer @ 0x1C0076520 (NtUserKillTimer.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00A420C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0155248 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
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
