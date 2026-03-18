/*
 * XREFs of ??MEFLOAT@@QEAAHV0@@Z @ 0x1C02923A8
 * Callers:
 *     GreSetMiterLimit @ 0x1C01026D4 (GreSetMiterLimit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::operator<(float *a1, int a2)
{
  return *(float *)&a2 > *a1;
}
