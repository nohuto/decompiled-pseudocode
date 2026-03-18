/*
 * XREFs of KiGetCpuSetData @ 0x1400F43F4
 * Callers:
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403A8E4C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeQueryCpuSetInformation @ 0x14061ACFC (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
