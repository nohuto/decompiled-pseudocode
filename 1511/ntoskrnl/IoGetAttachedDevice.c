/*
 * XREFs of IoGetAttachedDevice @ 0x140097FE0
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140097FFC (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1401BAAD4 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x1403AE170 (IopShutdownBaseFileSystems.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1404C4ECC (IopCopyOffloadCapable.c)
 *     VfFilterAttach @ 0x1406CEA4C (VfFilterAttach.c)
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
