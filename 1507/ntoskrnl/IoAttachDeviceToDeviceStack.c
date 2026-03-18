/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140159CF4
 * Callers:
 *     VerifierIoAttachDeviceToDeviceStack @ 0x140741EC8 (VerifierIoAttachDeviceToDeviceStack.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
