/*
 * XREFs of SetPerformanceEnergyBiasPolicy @ 0x1C0002330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetPerformanceEnergyBiasPolicy(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 15 * (100 - a2) / 0x64u;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 66LL) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1C000EFC0)(
             *(unsigned int *)(*(_QWORD *)a1 + 68LL),
             432LL,
             -16LL,
             v2 & 0xF);
  v4 = __readmsr(0x1B0u);
  result = ((unsigned __int8)v2 ^ (unsigned __int8)v4) & 0xF ^ v4;
  __writemsr(0x1B0u, result);
  return result;
}
