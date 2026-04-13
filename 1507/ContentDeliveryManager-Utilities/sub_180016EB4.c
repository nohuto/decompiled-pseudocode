/*
 * XREFs of sub_180016EB4 @ 0x180016EB4
 * Callers:
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800165C8 @ 0x1800165C8 (sub_1800165C8.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180016EB4(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2);
  return a2;
}
