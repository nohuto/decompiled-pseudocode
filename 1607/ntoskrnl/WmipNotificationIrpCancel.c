/*
 * XREFs of WmipNotificationIrpCancel @ 0x1400A262C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x1400A2684 (WmipClearIrpObjectList.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel(&WmipCancelSpinLock, &LockHandle);
  WmipClearIrpObjectList(a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  pIofCompleteRequest(a2, 0);
}
