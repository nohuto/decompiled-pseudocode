/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x1401318A4
 * Callers:
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
