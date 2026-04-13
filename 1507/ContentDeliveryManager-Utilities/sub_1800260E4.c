/*
 * XREFs of sub_1800260E4 @ 0x1800260E4
 * Callers:
 *     sub_180026074 @ 0x180026074 (sub_180026074.c)
 *     sub_180026450 @ 0x180026450 (sub_180026450.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_1800260E4(__int64 a1, __int64 a2, int a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 result; // rax

  while ( --a3 >= 0 )
  {
    a1 -= a2;
    result = a4(a1);
  }
  return result;
}
