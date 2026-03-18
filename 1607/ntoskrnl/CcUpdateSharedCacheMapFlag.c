/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14006B19C
 * Callers:
 *     CcCopyReadEx @ 0x140032C70 (CcCopyReadEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B550 (CcBoostLowPriorityWorkerThread.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C840 (CcPurgeAndClearCacheSection.c)
 *     CcUpdateReadHistory @ 0x14006E6CC (CcUpdateReadHistory.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400717E0 (CcApplyLowIoPriorityToThread.c)
 *     CcUnmapVacb @ 0x14042B660 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x140447390 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x1404586BC (CcMdlRead.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // al

  v6 = KeAcquireQueuedSpinLock(5uLL);
  if ( a3 )
    *(_DWORD *)(a1 + 152) |= a2;
  else
    *(_DWORD *)(a1 + 152) &= ~a2;
  KeReleaseQueuedSpinLock(5uLL, v6);
}
