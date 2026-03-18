/*
 * XREFs of ACPIThermalLoop @ 0x1C0008D9C
 * Callers:
 *     ACPIThermalComplete @ 0x1C0008530 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0008540 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C000950C (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
