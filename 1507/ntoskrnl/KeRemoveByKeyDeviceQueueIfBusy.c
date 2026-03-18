/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x14020485C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  KSPIN_LOCK *p_Lock; // rcx
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _KDEVICE_QUEUE_ENTRY *i; // rcx
  struct _LIST_ENTRY *v8; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // rcx
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  p_Lock = &DeviceQueue->Lock;
  Flink = 0LL;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(p_Lock, &LockHandle);
  if ( DeviceQueue->Busy )
  {
    p_DeviceListHead = &DeviceQueue->DeviceListHead;
    if ( p_DeviceListHead->Flink == p_DeviceListHead )
    {
      DeviceQueue->Busy = 0;
    }
    else
    {
      for ( i = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
            i != (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead;
            i = (struct _KDEVICE_QUEUE_ENTRY *)i->DeviceListEntry.Flink )
      {
        Flink = i;
        if ( SortKey <= i->SortKey )
          break;
      }
      if ( i == (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead )
      {
        Flink = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
        v8 = p_DeviceListHead->Flink->Flink;
        if ( p_DeviceListHead->Flink->Blink != p_DeviceListHead || (struct _KDEVICE_QUEUE_ENTRY *)v8->Blink != Flink )
          __fastfail(3u);
      }
      else
      {
        v8 = Flink->DeviceListEntry.Flink;
        p_DeviceListHead = Flink->DeviceListEntry.Blink;
        if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink
          || (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink != Flink )
        {
          __fastfail(3u);
        }
      }
      p_DeviceListHead->Flink = v8;
      v8->Blink = p_DeviceListHead;
      Flink->Inserted = 0;
      v9 = DeviceQueue->1;
      if ( Flink == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v9 >> 8) )
        DeviceQueue->1 = v9;
    }
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
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
  }
  return Flink;
}
