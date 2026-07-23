/*
 * XREFs of IoStartPacket @ 0x14011B2C8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     KeInsertDeviceQueue @ 0x14011B36C (KeInsertDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1401C7880 (KeInsertByKeyDeviceQueue.c)
 */

void __stdcall IoStartPacket(PDEVICE_OBJECT DeviceObject, PIRP Irp, PULONG Key, PDRIVER_CANCEL CancelFunction)
{
  KIRQL v4; // bp
  unsigned __int8 CurrentIrql; // r15
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rdx
  KDEVICE_QUEUE *p_DeviceQueue; // rcx
  BOOLEAN inserted; // al
  UCHAR Irql; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  Irql = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( CancelFunction )
  {
    IoAcquireCancelSpinLock(&Irql);
    v4 = Irql;
    Irp->CancelRoutine = CancelFunction;
  }
  p_Tail = &Irp->Tail;
  p_DeviceQueue = &DeviceObject->DeviceQueue;
  if ( Key )
    inserted = KeInsertByKeyDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry, *Key);
  else
    inserted = KeInsertDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry);
  if ( inserted )
  {
    if ( CancelFunction )
    {
      if ( Irp->Cancel )
      {
        Irp->CancelRoutine = 0LL;
        Irp->CancelIrql = v4;
        ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))CancelFunction)(DeviceObject, Irp);
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v4);
      }
    }
  }
  else
  {
    DeviceObject->CurrentIrp = Irp;
    if ( CancelFunction )
    {
      if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x200) != 0 )
        Irp->CancelRoutine = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v4);
    }
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))DeviceObject->DriverObject->DriverStartIo)(DeviceObject, Irp);
  }
  __writecr8(CurrentIrql);
}
