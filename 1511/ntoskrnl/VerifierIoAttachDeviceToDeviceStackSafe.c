/*
 * XREFs of VerifierIoAttachDeviceToDeviceStackSafe @ 0x1406C06DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return pXdvIoAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, AttachedToDeviceObject);
}
