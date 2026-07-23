/*
 * XREFs of KeRemoveByKeyDeviceQueue @ 0x1401D66F8
 * Callers:
 *     IopStartNextPacketByKey @ 0x1401C955C (IopStartNextPacketByKey.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1400ACCCC (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1400ACCEC (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // r8
  struct _KDEVICE_QUEUE_ENTRY *i; // rax
  bool v7; // cc
  LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Flink = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
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
        v7 = SortKey <= *(_DWORD *)((*(_QWORD *)&DeviceQueue->32 >> 8) + 0x10);
        if ( SortKey > *(_DWORD *)((*(_QWORD *)&DeviceQueue->32 >> 8) + 0x10) )
          goto LABEL_10;
      }
      for ( i = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
            ;
            i = (struct _KDEVICE_QUEUE_ENTRY *)i->DeviceListEntry.Flink )
      {
        v7 = SortKey <= i->SortKey;
LABEL_10:
        Flink = i;
        if ( v7 )
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
    v9 = Flink->DeviceListEntry.Flink;
    v10 = Flink->DeviceListEntry.Blink;
    if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink
      || (struct _KDEVICE_QUEUE_ENTRY *)v10->Flink != Flink )
    {
      __fastfail(3u);
    }
    v10->Flink = v9;
    v9->Blink = v10;
    Flink->Inserted = 0;
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}
