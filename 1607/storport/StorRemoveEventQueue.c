/*
 * XREFs of StorRemoveEventQueue @ 0x1C002BC38
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000C928 (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C002BCA0 (StorRemoveEventQueueInternal.c)
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
