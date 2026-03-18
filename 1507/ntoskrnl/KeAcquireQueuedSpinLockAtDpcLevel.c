/*
 * XREFs of KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58
 * Callers:
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     CcWaitForUninitializeCacheMap @ 0x140122008 (CcWaitForUninitializeCacheMap.c)
 *     CcIncrementWriteBehindPriority @ 0x1401DC810 (CcIncrementWriteBehindPriority.c)
 *     CcNotifyExternalCaches @ 0x1401DCA54 (CcNotifyExternalCaches.c)
 *     CcSerializeWithLazyWriter @ 0x1401DD344 (CcSerializeWithLazyWriter.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x1401DE2D8 (CcReferenceSharedCacheMapByVacb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAcquireQueuedSpinLockAtDpcLevel(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, *(_QWORD *)(a1 + 8));
  v1 = (_QWORD *)_InterlockedExchange64(*(volatile __int64 **)(a1 + 8), a1);
  if ( v1 )
    return KxWaitForLockOwnerShip(a1, v1);
  return result;
}
