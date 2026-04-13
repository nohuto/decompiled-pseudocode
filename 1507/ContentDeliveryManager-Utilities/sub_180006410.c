/*
 * XREFs of sub_180006410 @ 0x180006410
 * Callers:
 *     sub_180006540 @ 0x180006540 (sub_180006540.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall sub_180006410(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2)
{
  AcquireSRWLockShared(a2);
  *a1 = a2;
  return a1;
}
