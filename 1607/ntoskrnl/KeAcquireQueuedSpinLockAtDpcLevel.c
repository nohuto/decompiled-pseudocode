/*
 * XREFs of KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E6C0
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x140022280 (CcWaitForUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcLazyWriteScan @ 0x140070CA0 (CcLazyWriteScan.c)
 *     CcNotifyExternalCaches @ 0x1401340A4 (CcNotifyExternalCaches.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     CcSerializeWithLazyWriter @ 0x1401B1D04 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAcquireQueuedSpinLockAtDpcLevel(__int64 a1)
{
  return KxAcquireQueuedSpinLock(a1, *(_QWORD *)(a1 + 8));
}
