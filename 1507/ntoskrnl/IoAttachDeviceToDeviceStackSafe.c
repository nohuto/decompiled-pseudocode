/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x14013138C
 * Callers:
 *     IoAttachDevice @ 0x140673B70 (IoAttachDevice.c)
 *     VerifierIoAttachDeviceToDeviceStackSafe @ 0x140741ED0 (VerifierIoAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400D19EC (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, AttachedToDeviceObject) == 0LL
       ? 0xC000000E
       : 0;
}
