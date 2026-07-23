/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14006AD1C
 * Callers:
 *     CcCopyReadEx @ 0x1400327F0 (CcCopyReadEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B0D0 (CcBoostLowPriorityWorkerThread.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcUpdateReadHistory @ 0x14006E24C (CcUpdateReadHistory.c)
 *     CcApplyLowIoPriorityToThread @ 0x140071360 (CcApplyLowIoPriorityToThread.c)
 *     CcUnmapVacb @ 0x14042A530 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
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
