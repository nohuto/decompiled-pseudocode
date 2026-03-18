/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C0019E30
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ACPIThermalUpdateTemperature @ 0x1C001A6D0 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
