/*
 * XREFs of KeInsertDeviceQueue @ 0x14014F7D0
 * Callers:
 *     IoAllocateController @ 0x14014F6C4 (IoAllocateController.c)
 *     IoStartPacket @ 0x14014F72C (IoStartPacket.c)
 *     VerifierKeInsertDeviceQueue @ 0x140742194 (VerifierKeInsertDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  KSPIN_LOCK *p_Lock; // rcx
  BOOLEAN v5; // si
  BOOLEAN Busy; // al
  struct _LIST_ENTRY *Blink; // rcx
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  p_Lock = &DeviceQueue->Lock;
  v5 = 0;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(p_Lock, &LockHandle);
  Busy = DeviceQueue->Busy;
  DeviceQueue->Busy = 1;
  if ( Busy == 1 )
  {
    Blink = DeviceQueue->DeviceListHead.Blink;
    DeviceQueueEntry->DeviceListEntry.Flink = &DeviceQueue->DeviceListHead;
    DeviceQueueEntry->DeviceListEntry.Blink = Blink;
    if ( Blink->Flink != &DeviceQueue->DeviceListHead )
      __fastfail(3u);
    Blink->Flink = &DeviceQueueEntry->DeviceListEntry;
    v5 = 1;
    DeviceQueue->DeviceListHead.Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v5;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          return v5;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      return v5;
    }
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  return v5;
}
