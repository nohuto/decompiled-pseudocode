/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C0008540
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIThermalUpdateTemperature @ 0x1C000950C (ACPIThermalUpdateTemperature.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    FreeDataBuffs(a3, 1LL);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
