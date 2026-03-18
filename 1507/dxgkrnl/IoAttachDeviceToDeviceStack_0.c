/*
 * XREFs of IoAttachDeviceToDeviceStack_0 @ 0x1C000FF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack_0(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IoAttachDeviceToDeviceStack(SourceDevice, TargetDevice);
}
