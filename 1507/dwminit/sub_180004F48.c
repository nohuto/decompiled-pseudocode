/*
 * XREFs of sub_180004F48 @ 0x180004F48
 * Callers:
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180004F48(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int16 a6)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(a1 + 32))(a1, a2, a3, 4LL, 0LL);
}
