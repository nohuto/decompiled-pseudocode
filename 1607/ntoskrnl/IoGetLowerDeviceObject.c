/*
 * XREFs of IoGetLowerDeviceObject @ 0x1400B1D38
 * Callers:
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // al
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  KIRQL v4; // di
  struct _DEVICE_OBJECT *AttachedTo; // rbx
  ULONG ExtensionFlags; // edx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v4 = v2;
  AttachedTo = 0LL;
  ExtensionFlags = DeviceObjectExtension->ExtensionFlags;
  if ( (ExtensionFlags & 0xF) == 0 || (ExtensionFlags & 0xE) == 0 && DeviceObjectExtension->AttachedTo )
  {
    if ( DeviceObjectExtension->AttachedTo )
    {
      AttachedTo = DeviceObjectExtension->AttachedTo;
      ObfReferenceObjectWithTag(AttachedTo, 0x746C6644u);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return AttachedTo;
}
