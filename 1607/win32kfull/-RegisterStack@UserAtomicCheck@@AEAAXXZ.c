/*
 * XREFs of ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C
 * Callers:
 *     NtUserGetIconInfo @ 0x1C003BA50 (NtUserGetIconInfo.c)
 *     NtUserSetThreadInputBlocked @ 0x1C0075FC0 (NtUserSetThreadInputBlocked.c)
 *     NtUserGetObjectInformation @ 0x1C0076070 (NtUserGetObjectInformation.c)
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 *     NtUserKillTimer @ 0x1C0076520 (NtUserKillTimer.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0107DE0 (xxxCleanupThreadPointerInputInfo.c)
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
