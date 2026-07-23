/*
 * XREFs of KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x140021E00 (CcWaitForUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 *     CcNotifyExternalCaches @ 0x140134614 (CcNotifyExternalCaches.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     CcSerializeWithLazyWriter @ 0x1401B1BE8 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAcquireQueuedSpinLockAtDpcLevel(__int64 a1)
{
  return KxAcquireQueuedSpinLock(a1, *(_QWORD *)(a1 + 8));
}
