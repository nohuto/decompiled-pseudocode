/*
 * XREFs of _fclrf @ 0x14015194A
 * Callers:
 *     _clrfp @ 0x140151864 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
