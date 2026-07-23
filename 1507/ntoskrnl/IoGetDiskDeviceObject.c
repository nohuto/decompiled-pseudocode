/*
 * XREFs of IoGetDiskDeviceObject @ 0x1401F5F80
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x140006BC8 (IoAcquireVpbSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 */

NTSTATUS __stdcall IoGetDiskDeviceObject(PDEVICE_OBJECT FileSystemDeviceObject, PDEVICE_OBJECT *DiskDeviceObject)
{
  NTSTATUS v2; // ebx
  PVPB Vpb; // rcx
  struct _DEVICE_OBJECT *RealDevice; // rcx
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( FileSystemDeviceObject->Vpb )
    return -1073741811;
  IoAcquireVpbSpinLock(&Irql);
  Vpb = FileSystemDeviceObject->DeviceObjectExtension->Vpb;
  if ( Vpb )
  {
    if ( Vpb->ReferenceCount && (Vpb->Flags & 1) != 0 )
    {
      RealDevice = Vpb->RealDevice;
      *DiskDeviceObject = RealDevice;
      ObfReferenceObjectWithTag(RealDevice, 0x746C6644u);
    }
    else
    {
      v2 = -1073741202;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  KeReleaseQueuedSpinLock(9uLL, Irql);
  return v2;
}
