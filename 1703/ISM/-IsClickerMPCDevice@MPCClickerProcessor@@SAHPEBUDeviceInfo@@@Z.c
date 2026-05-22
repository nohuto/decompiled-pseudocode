/*
 * XREFs of ?IsClickerMPCDevice@MPCClickerProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1800491D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCClickerProcessor::IsClickerMPCDevice(const struct DeviceInfo *a1)
{
  return (*((_DWORD *)a1 + 1) >> 10) & 1;
}
