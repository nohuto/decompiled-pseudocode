/*
 * XREFs of LongMult @ 0x1C02791F0
 * Callers:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall LongMult(int a1, int a2, LONG *a3)
{
  return LongLongToLong(a2 * (__int64)a1, a3);
}
