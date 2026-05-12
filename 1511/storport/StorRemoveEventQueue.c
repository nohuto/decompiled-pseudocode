/*
 * XREFs of StorRemoveEventQueue @ 0x1C00285B8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C001109C (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C0028620 (StorRemoveEventQueueInternal.c)
 */

void __fastcall StorRemoveEventQueue(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 14LL * *(unsigned int *)(a2 + 36);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&a1[v3 + 26], &LockHandle);
  StorRemoveEventQueueInternal(&a1[v3 + 16], *a1, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
