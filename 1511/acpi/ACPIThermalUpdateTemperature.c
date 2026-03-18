/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x1C001A6D0
 * Callers:
 *     ACPIThermalTMPCallback @ 0x1C0019E30 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C0040920 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalReadTemperature @ 0x1C007F29C (ACPIThermalReadTemperature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(result + 16) != a2 )
  {
    *(_DWORD *)(result + 16) = a2;
    return ACPIThermalLoop(a1, 2048LL);
  }
  return result;
}
