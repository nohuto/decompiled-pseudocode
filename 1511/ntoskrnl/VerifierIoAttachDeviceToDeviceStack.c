/*
 * XREFs of VerifierIoAttachDeviceToDeviceStack @ 0x1406C06D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PDEVICE_OBJECT __stdcall VerifierIoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return pXdvIoAttachDeviceToDeviceStack(SourceDevice, TargetDevice);
}
