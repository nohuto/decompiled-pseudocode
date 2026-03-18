/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x14010E920
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiProtectAweRegion @ 0x140224890 (MiProtectAweRegion.c)
 *     MiAweViewInserter @ 0x1406A5BEC (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x1406A5CE0 (MiAweViewRemover.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406A6148 (MiRemoveUserPhysicalPagesVad.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14015B838 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseAutoExpandPushLockExclusive(_DWORD *BugCheckParameter2, __int64 BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  int v5; // ecx
  signed __int64 v6; // rax
  signed __int64 v7; // r8
  __int64 v8; // rtt

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
    v5 = BugCheckParameter2[3];
    if ( (v5 & 0xF0000u) < 0xF0000 )
      BugCheckParameter2[3] = v5 + 0x10000;
  }
  _m_prefetchw(BugCheckParameter2);
  v6 = *(_QWORD *)BugCheckParameter2;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v6 - 16;
  else
    v7 = 0LL;
  if ( (v6 & 2) != 0
    || (v8 = *(_QWORD *)BugCheckParameter2,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v7, v6)) )
  {
    ExfReleasePushLock(BugCheckParameter2, BugCheckParameter1);
  }
  if ( (v2 & 2) == 0 )
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
