/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14012638C
 * Callers:
 *     VerifierIoAttachDeviceToDeviceStack @ 0x1406C06D4 (VerifierIoAttachDeviceToDeviceStack.c)
 *     VfFilterAttach @ 0x1406CEA4C (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
