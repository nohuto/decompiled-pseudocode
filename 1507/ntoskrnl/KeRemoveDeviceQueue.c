/*
 * XREFs of KeRemoveDeviceQueue @ 0x14014F5A4
 * Callers:
 *     IoFreeController @ 0x14014F4F0 (IoFreeController.c)
 *     IopStartNextPacket @ 0x14014F528 (IopStartNextPacket.c)
 *     VerifierKeRemoveDeviceQueue @ 0x1407422B8 (VerifierKeRemoveDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  KSPIN_LOCK *p_Lock; // rcx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rcx
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  Flink = 0LL;
  p_Lock = &DeviceQueue->Lock;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(p_Lock, &LockHandle);
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  if ( p_DeviceListHead->Flink == p_DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    Flink = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
    v5 = p_DeviceListHead->Flink->Flink;
    if ( p_DeviceListHead->Flink->Blink != p_DeviceListHead || (struct _KDEVICE_QUEUE_ENTRY *)v5->Blink != Flink )
      __fastfail(3u);
    p_DeviceListHead->Flink = v5;
    v5->Blink = p_DeviceListHead;
    Flink->Inserted = 0;
    v6 = DeviceQueue->1;
    if ( Flink == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v6 >> 8) )
      DeviceQueue->1 = v6;
  }
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
          return Flink;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      return Flink;
    }
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  return Flink;
}
