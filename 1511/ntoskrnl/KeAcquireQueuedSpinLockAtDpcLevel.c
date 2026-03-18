/*
 * XREFs of KeAcquireQueuedSpinLockAtDpcLevel @ 0x140102D74
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x14003897C (CcWaitForUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     CcNotifyExternalCaches @ 0x14012D654 (CcNotifyExternalCaches.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     CcIncrementWriteBehindPriority @ 0x1401A8AD8 (CcIncrementWriteBehindPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAcquireQueuedSpinLockAtDpcLevel(__int64 a1)
{
  return KxAcquireQueuedSpinLock(a1, *(volatile __int64 **)(a1 + 8));
}
