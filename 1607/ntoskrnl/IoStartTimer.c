/*
 * XREFs of IoStartTimer @ 0x1401C9198
 * Callers:
 *     <none>
 * Callees:
 *     IopEnableTimer @ 0x1401C4B38 (IopEnableTimer.c)
 */

void __stdcall IoStartTimer(PDEVICE_OBJECT DeviceObject)
{
  if ( (DeviceObject->DeviceObjectExtension->ExtensionFlags & 0xF) == 0 )
    IopEnableTimer((__int64)DeviceObject->Timer);
}
