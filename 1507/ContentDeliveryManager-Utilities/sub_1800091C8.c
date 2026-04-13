/*
 * XREFs of sub_1800091C8 @ 0x1800091C8
 * Callers:
 *     StartAddress @ 0x180009330 (StartAddress.c)
 * Callees:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800091C8(_QWORD *a1)
{
  __int64 v2; // rdi

  sub_180009508(a1);
  v2 = a1[9];
  a1[9] = 0LL;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return v2;
}
