/*
 * XREFs of ?IsControllerDevice@ControllerProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180032320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::IsControllerDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 6) & 1;
}
