/*
 * XREFs of _fclrf @ 0x1C000727A
 * Callers:
 *     _clrfp @ 0x1C0007190 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
