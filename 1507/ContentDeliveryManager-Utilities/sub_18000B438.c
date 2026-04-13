/*
 * XREFs of sub_18000B438 @ 0x18000B438
 * Callers:
 *     sub_180011ED8 @ 0x180011ED8 (sub_180011ED8.c)
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 *     sub_1800146D4 @ 0x1800146D4 (sub_1800146D4.c)
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_180014D90 @ 0x180014D90 (sub_180014D90.c)
 *     sub_180014F10 @ 0x180014F10 (sub_180014F10.c)
 *     sub_180015080 @ 0x180015080 (sub_180015080.c)
 *     sub_1800151F0 @ 0x1800151F0 (sub_1800151F0.c)
 *     sub_180015360 @ 0x180015360 (sub_180015360.c)
 *     sub_1800154D0 @ 0x1800154D0 (sub_1800154D0.c)
 *     sub_180015980 @ 0x180015980 (sub_180015980.c)
 *     sub_1800165C8 @ 0x1800165C8 (sub_1800165C8.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

_QWORD *__fastcall sub_18000B438(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi

  v3 = **(_QWORD **)(a1 + 64);
  *a2 = v3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
