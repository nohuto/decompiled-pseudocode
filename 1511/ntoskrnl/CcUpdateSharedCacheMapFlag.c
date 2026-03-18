/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1400E7E70
 * Callers:
 *     CcCopyReadEx @ 0x1400A32F0 (CcCopyReadEx.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400B0B0C (CcApplyLowIoPriorityToThread.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1400E7D3C (CcBoostLowPriorityWorkerThread.c)
 *     CcUpdateReadHistory @ 0x1400FC468 (CcUpdateReadHistory.c)
 *     CcMapAndCopyFromCache @ 0x14047A640 (CcMapAndCopyFromCache.c)
 *     CcUnmapVacb @ 0x14047B6A0 (CcUnmapVacb.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
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
