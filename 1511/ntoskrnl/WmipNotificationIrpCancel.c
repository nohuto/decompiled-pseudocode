/*
 * XREFs of WmipNotificationIrpCancel @ 0x1400C8F08
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     WmipClearIrpObjectList @ 0x1400C8F60 (WmipClearIrpObjectList.c)
 */

__int64 __fastcall WmipNotificationIrpCancel(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel(&WmipCancelSpinLock, &LockHandle);
  WmipClearIrpObjectList(a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 48) = -1073741536;
  return pIofCompleteRequest(a2, 0LL);
}
