/*
 * XREFs of sub_180015FA4 @ 0x180015FA4
 * Callers:
 *     sub_180014A2C @ 0x180014A2C (sub_180014A2C.c)
 * Callees:
 *     sub_180008814 @ 0x180008814 (sub_180008814.c)
 */

RTL_SRWLOCK **__fastcall sub_180015FA4(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  sub_180008814(a1 + 31, a2);
  return a2;
}
