/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x1401D67C4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1400ACCCC (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1400ACCEC (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _KDEVICE_QUEUE_ENTRY *i; // rcx
  struct _LIST_ENTRY *v8; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Flink = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
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
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}
