/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140070478
 * Callers:
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FA70 (MiInsertAndUnlockStandbyPages.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1401D36FC (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1401D3724 (KeAcquireQueuedSpinLockRaiseToSynch.c)
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
