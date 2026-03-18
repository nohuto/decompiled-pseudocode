/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiAweViewInserter @ 0x1406268B8 (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x140626990 (MiAweViewRemover.c)
 *     MiProtectAweRegion @ 0x140626D90 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x140626F34 (MiRemoveUserPhysicalPagesVad.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x1400DCB0C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14012CD78 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseAutoExpandPushLockExclusive(_DWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  signed __int64 v5; // rax
  signed __int64 v6; // r8
  __int64 v7; // rtt
  int v8; // [rsp+48h] [rbp+10h] BYREF

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
    v8 = BugCheckParameter2[3];
    if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v8) )
      BugCheckParameter2[3] = v8;
  }
  _m_prefetchw(BugCheckParameter2);
  v5 = *(_QWORD *)BugCheckParameter2;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v5 - 16;
  else
    v6 = 0LL;
  if ( (v5 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v6, v5)) )
  {
    ExfReleasePushLock(BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
