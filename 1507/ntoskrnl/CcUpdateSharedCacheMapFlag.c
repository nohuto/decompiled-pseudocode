/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1400851D0
 * Callers:
 *     CcUpdateReadHistory @ 0x140033B8C (CcUpdateReadHistory.c)
 *     CcApplyLowIoPriorityToThread @ 0x140041E40 (CcApplyLowIoPriorityToThread.c)
 *     CcCopyReadEx @ 0x140053770 (CcCopyReadEx.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14012E1F4 (CcBoostLowPriorityWorkerThread.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
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
