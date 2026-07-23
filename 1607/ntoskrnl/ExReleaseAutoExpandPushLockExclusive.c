/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x140096C30
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiAweViewInserter @ 0x14065C15C (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x14065C234 (MiAweViewRemover.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C3F0 (MiCleanPhysicalProcessPages.c)
 *     MiProtectAweRegion @ 0x14065C5C4 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C778 (MiRemoveUserPhysicalPagesVad.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x140096CCC (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140133A2C (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExReleaseAutoExpandPushLockExclusive(
        _DWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  signed __int64 v5; // rax
  signed __int64 v6; // r8
  unsigned __int64 result; // rax
  __int64 v8; // rtt
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter2[2];
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v9 = BugCheckParameter2[3];
    if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v9) )
      BugCheckParameter2[3] = v9;
  }
  _m_prefetchw(BugCheckParameter2);
  v5 = *(_QWORD *)BugCheckParameter2;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v5 - 16;
  else
    v6 = 0LL;
  if ( (v5 & 2) != 0
    || (v8 = *(_QWORD *)BugCheckParameter2,
        result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v6, v5),
        v8 != result) )
  {
    result = ExfReleasePushLock(BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
