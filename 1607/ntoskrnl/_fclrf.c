/*
 * XREFs of _fclrf @ 0x140151F0A
 * Callers:
 *     _clrfp @ 0x140151E1C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
