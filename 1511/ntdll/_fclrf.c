/*
 * XREFs of _fclrf @ 0x18009F69A
 * Callers:
 *     _clrfp @ 0x18009E660 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
