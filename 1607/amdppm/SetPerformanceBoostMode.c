/*
 * XREFs of SetPerformanceBoostMode @ 0x1C0001150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetPerformanceBoostMode(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(*(_QWORD *)a1 + 66LL) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1C0009670)(
             *(unsigned int *)(*(_QWORD *)a1 + 68LL),
             3221291029LL,
             -33554433LL,
             (unsigned __int8)((unsigned int)(a2 - 1) > 1) << 25);
  v3 = __readmsr(0xC0010015);
  result = ((unsigned int)v3 ^ (((unsigned int)(a2 - 1) > 1) << 25)) & 0x2000000 ^ v3;
  __writemsr(0xC0010015, result);
  return result;
}
