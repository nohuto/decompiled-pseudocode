/*
 * XREFs of IoStopTimer @ 0x1401C91BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
