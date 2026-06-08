/*
 * XREFs of SetPerformanceEnergyBiasPolicy @ 0x1C00020A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SetPerformanceEnergyBiasPolicy(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v2 = __readmsr(0x1B0u);
  result = ((unsigned __int8)v2 ^ (unsigned __int8)(15 * (100 - a2) / 0x64u)) & 0xF ^ v2;
  __writemsr(0x1B0u, result);
  return result;
}
