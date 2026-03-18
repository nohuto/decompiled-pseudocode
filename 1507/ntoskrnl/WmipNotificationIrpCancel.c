/*
 * XREFs of WmipNotificationIrpCancel @ 0x140074B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     WmipClearIrpObjectList @ 0x140074C14 (WmipClearIrpObjectList.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  KeAcquireInStackQueuedSpinLockAtDpcLevel(&WmipCancelSpinLock, &LockHandle);
  WmipClearIrpObjectList(a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(&LockHandle);
  Next = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_6;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_6:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_4:
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Status = -1073741536;
  a2->IoStatus.Information = 0LL;
  pIofCompleteRequest(a2, 0);
}
