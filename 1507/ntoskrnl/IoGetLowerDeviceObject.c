/*
 * XREFs of IoGetLowerDeviceObject @ 0x1401306A8
 * Callers:
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
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
