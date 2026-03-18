/*
 * XREFs of KeRemoveByKeyDeviceQueue @ 0x1402046FC
 * Callers:
 *     IopStartNextPacketByKey @ 0x1401F6CB0 (IopStartNextPacketByKey.c)
 *     VerifierKeRemoveByKeyDeviceQueue @ 0x1407422B0 (VerifierKeRemoveByKeyDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  KSPIN_LOCK *p_Lock; // rcx
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // rcx
  struct _KDEVICE_QUEUE_ENTRY *i; // rax
  bool v8; // cc
  LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rax
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  p_Lock = &DeviceQueue->Lock;
  Flink = 0LL;
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
    if ( LODWORD(DeviceQueue->DeviceListHead.Blink[1].Flink) >= SortKey )
    {
      i = (struct _KDEVICE_QUEUE_ENTRY *)(*(_QWORD *)&DeviceQueue->32 >> 8);
      if ( i )
      {
        v8 = SortKey <= *(_DWORD *)((*(_QWORD *)&DeviceQueue->32 >> 8) + 0x10);
        if ( SortKey > *(_DWORD *)((*(_QWORD *)&DeviceQueue->32 >> 8) + 0x10) )
          goto LABEL_13;
      }
      for ( i = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
            ;
            i = (struct _KDEVICE_QUEUE_ENTRY *)i->DeviceListEntry.Flink )
      {
        v8 = SortKey <= i->SortKey;
LABEL_13:
        Flink = i;
        if ( v8 )
          break;
      }
    }
    else
    {
      Flink = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
    }
    Blink = Flink->DeviceListEntry.Blink;
    if ( Blink == p_DeviceListHead )
      Blink = 0LL;
    DeviceQueue->1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(((_QWORD)Blink << 8) | (unsigned __int8)*(_DWORD *)&DeviceQueue->Busy);
    v10 = Flink->DeviceListEntry.Flink;
    v11 = Flink->DeviceListEntry.Blink;
    if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink
      || (struct _KDEVICE_QUEUE_ENTRY *)v11->Flink != Flink )
    {
      __fastfail(3u);
    }
    v11->Flink = v10;
    v10->Blink = v11;
    Flink->Inserted = 0;
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
