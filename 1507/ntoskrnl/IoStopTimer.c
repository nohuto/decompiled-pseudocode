/*
 * XREFs of IoStopTimer @ 0x1401F67F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
