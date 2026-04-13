/*
 * XREFs of sub_180015B2C @ 0x180015B2C
 * Callers:
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180015B2C(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2);
  return a2;
}
