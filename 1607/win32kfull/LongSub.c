/*
 * XREFs of LongSub @ 0x1C0261794
 * Callers:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall LongSub(int a1, int a2, LONG *a3)
{
  return LongLongToLong(a1 - (__int64)a2, a3);
}
