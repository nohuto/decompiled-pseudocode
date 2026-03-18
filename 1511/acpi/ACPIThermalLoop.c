/*
 * XREFs of ACPIThermalLoop @ 0x1C001A034
 * Callers:
 *     ACPIThermalComplete @ 0x1C0019E20 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0019E30 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C001A6D0 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
