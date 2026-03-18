/*
 * XREFs of ACPIThermalLoop @ 0x1C0019DF4
 * Callers:
 *     ACPIThermalComplete @ 0x1C0019BD0 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0019BE0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C001A458 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C006F0F0 (ACPIThermalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
