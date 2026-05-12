/*
 * XREFs of RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C0032824
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C0034460 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

void __fastcall RaUnitSetHierarchicalResetSrbTimeoutCountdown(__int64 a1, int a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1504), &LockHandle);
  *(_DWORD *)(a1 + 1492) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
