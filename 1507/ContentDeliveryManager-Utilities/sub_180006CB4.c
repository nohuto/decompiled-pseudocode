/*
 * XREFs of sub_180006CB4 @ 0x180006CB4
 * Callers:
 *     unknown_libname_22 @ 0x1800271C7 (unknown_libname_22.c)
 *     sub_1800271F1 @ 0x1800271F1 (sub_1800271F1.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180006CB4(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *a1 = 0LL;
  }
}
