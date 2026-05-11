/*
 * XREFs of _fclrf @ 0x1C00073EA
 * Callers:
 *     _clrfp @ 0x1C0007300 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
