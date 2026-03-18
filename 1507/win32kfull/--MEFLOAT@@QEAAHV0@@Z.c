/*
 * XREFs of ??MEFLOAT@@QEAAHV0@@Z @ 0x1C0292B98
 * Callers:
 *     GreSetMiterLimit @ 0x1C00EE814 (GreSetMiterLimit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::operator<(float *a1, int a2)
{
  return *(float *)&a2 > *a1;
}
