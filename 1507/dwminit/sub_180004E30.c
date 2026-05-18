/*
 * XREFs of sub_180004E30 @ 0x180004E30
 * Callers:
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180004E30(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 8))(a1, a2, 0LL);
}
