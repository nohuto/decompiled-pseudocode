/*
 * XREFs of _fclrf @ 0x1800A0AAA
 * Callers:
 *     _clrfp @ 0x18009FA7C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
