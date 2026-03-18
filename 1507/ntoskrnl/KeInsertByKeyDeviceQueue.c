/*
 * XREFs of KeInsertByKeyDeviceQueue @ 0x1402045C4
 * Callers:
 *     IoStartPacket @ 0x14014F72C (IoStartPacket.c)
 *     VerifierKeInsertByKeyDeviceQueue @ 0x14074218C (VerifierKeInsertByKeyDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeInsertByKeyDeviceQueue(
        PKDEVICE_QUEUE DeviceQueue,
        PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
        ULONG SortKey)
{
  KSPIN_LOCK *p_Lock; // rcx
  BOOLEAN v7; // si
  BOOLEAN Busy; // al
  LIST_ENTRY *p_DeviceListHead; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  DeviceQueueEntry->SortKey = SortKey;
  p_Lock = &DeviceQueue->Lock;
  v7 = 0;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(p_Lock, &LockHandle);
  Busy = DeviceQueue->Busy;
  DeviceQueue->Busy = 1;
  if ( Busy == 1 )
  {
    p_DeviceListHead = &DeviceQueue->DeviceListHead;
    if ( p_DeviceListHead->Flink != p_DeviceListHead && SortKey < LODWORD(DeviceQueue->DeviceListHead.Blink[1].Flink) )
    {
      do
        p_DeviceListHead = p_DeviceListHead->Flink;
      while ( SortKey >= LODWORD(p_DeviceListHead[1].Flink) );
    }
    Blink = p_DeviceListHead->Blink;
    DeviceQueueEntry->DeviceListEntry.Flink = p_DeviceListHead;
    DeviceQueueEntry->DeviceListEntry.Blink = Blink;
    if ( Blink->Flink != p_DeviceListHead )
      __fastfail(3u);
    Blink->Flink = &DeviceQueueEntry->DeviceListEntry;
    v7 = 1;
    p_DeviceListHead->Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v7;
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
          return v7;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      return v7;
    }
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
  }
  return v7;
}
