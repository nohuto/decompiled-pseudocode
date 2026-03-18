/*
 * XREFs of VerifierIoAttachDeviceToDeviceStack @ 0x140741EC8
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
