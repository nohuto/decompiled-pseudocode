/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1400708F8
 * Callers:
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E6C0 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FEF0 (MiInsertAndUnlockStandbyPages.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1401D38D0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1401D38F8 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  v2 = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( v2 )
    return KxWaitForLockOwnerShip(a1, v2);
  return result;
}
