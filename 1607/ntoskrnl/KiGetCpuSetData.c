/*
 * XREFs of KiGetCpuSetData @ 0x1400B3A7C
 * Callers:
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403D39E4 (KiConfigureCpuSetSchedulingInformation.c)
 *     KeQueryCpuSetInformation @ 0x140578C68 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
