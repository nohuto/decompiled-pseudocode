/*
 * XREFs of IoGetAttachedDevice @ 0x1400D1B70
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400D19EC (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1401F5D08 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x1403FE590 (IopShutdownBaseFileSystems.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x14055A658 (IopCopyOffloadCapable.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *i; // rax

  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  return DeviceObject;
}
