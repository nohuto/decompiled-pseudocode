/*
 * XREFs of ?IsButtonDevice@ButtonProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18002FE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ButtonProcessor::IsButtonDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 7) & 1;
}
