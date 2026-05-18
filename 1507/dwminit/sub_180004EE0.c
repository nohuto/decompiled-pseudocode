/*
 * XREFs of sub_180004EE0 @ 0x180004EE0
 * Callers:
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180004EE0(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(a1 + 24))(a1, a2, a3, 24LL);
}
