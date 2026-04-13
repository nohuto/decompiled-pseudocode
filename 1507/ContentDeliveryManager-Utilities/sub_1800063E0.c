/*
 * XREFs of sub_1800063E0 @ 0x1800063E0
 * Callers:
 *     sub_180006440 @ 0x180006440 (sub_180006440.c)
 *     sub_180006540 @ 0x180006540 (sub_180006540.c)
 *     sub_180008814 @ 0x180008814 (sub_180008814.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall sub_1800063E0(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2)
{
  AcquireSRWLockExclusive(a2);
  *a1 = a2;
  return a1;
}
