/*
 * XREFs of IoGetAttachedDevice @ 0x14002DEC0
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1401C8918 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1404EF33C (IopCopyOffloadCapable.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
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
