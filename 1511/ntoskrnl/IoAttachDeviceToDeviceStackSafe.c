/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x140096E90
 * Callers:
 *     IoAttachDevice @ 0x1405F98F4 (IoAttachDevice.c)
 *     VerifierIoAttachDeviceToDeviceStackSafe @ 0x1406C06DC (VerifierIoAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140097FFC (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, AttachedToDeviceObject) == 0 ? 0xC000000E : 0;
}
