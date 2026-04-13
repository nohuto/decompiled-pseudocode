/*
 * XREFs of sub_180008814 @ 0x180008814
 * Callers:
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_18001012C @ 0x18001012C (sub_18001012C.c)
 *     sub_180015FA4 @ 0x180015FA4 (sub_180015FA4.c)
 * Callees:
 *     sub_1800063E0 @ 0x1800063E0 (sub_1800063E0.c)
 */

RTL_SRWLOCK **__fastcall sub_180008814(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  sub_1800063E0(a2, a1);
  return a2;
}
