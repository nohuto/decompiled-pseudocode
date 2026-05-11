/*
 * XREFs of _fclrf @ 0x1C000703A
 * Callers:
 *     _clrfp @ 0x1C0006F50 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
