/*
 * XREFs of KeRemoveDeviceQueue @ 0x1400ACC50
 * Callers:
 *     IoFreeController @ 0x1400ACA80 (IoFreeController.c)
 *     IopStartNextPacket @ 0x1400ACAB8 (IopStartNextPacket.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1400ACCCC (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1400ACCEC (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rax
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
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}
