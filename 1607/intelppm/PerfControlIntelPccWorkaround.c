/*
 * XREFs of PerfControlIntelPccWorkaround @ 0x1C0003F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfControlIntelPccWorkaround(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8)
{
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-18h]

  result = 0LL;
  if ( a8 )
  {
    if ( a7 )
    {
      v9 = 0LL;
      *(_DWORD *)((char *)&v9 + 1) = (unsigned __int8)(a1[3] / 0xAuLL);
      return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_1C000EFC0)(
               *(unsigned int *)(*a1 + 68LL),
               409LL,
               -65536LL,
               v9);
    }
  }
  return result;
}
