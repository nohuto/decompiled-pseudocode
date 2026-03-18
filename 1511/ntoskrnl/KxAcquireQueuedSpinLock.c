/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1400AF9C0
 * Callers:
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x140102D74 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1401C4718 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1401C4740 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1);
  if ( _InterlockedExchange64(a2, a1) )
    return KxWaitForLockOwnerShip(a1);
  return result;
}
