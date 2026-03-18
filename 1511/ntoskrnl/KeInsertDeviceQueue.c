/*
 * XREFs of KeInsertDeviceQueue @ 0x14011B36C
 * Callers:
 *     IoAllocateController @ 0x14011B1AC (IoAllocateController.c)
 *     IoStartPacket @ 0x14011B2C8 (IoStartPacket.c)
 *     VerifierKeInsertDeviceQueue @ 0x1406C099C (VerifierKeInsertDeviceQueue.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14011B460 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14011B480 (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

BOOLEAN __stdcall KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN v4; // di
  BOOLEAN Busy; // al
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
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
    v4 = 1;
    DeviceQueue->DeviceListHead.Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v4;
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v4;
}
