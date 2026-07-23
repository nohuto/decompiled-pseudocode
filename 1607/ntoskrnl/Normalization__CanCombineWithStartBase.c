/*
 * XREFs of Normalization__CanCombineWithStartBase @ 0x14068AB08
 * Callers:
 *     Normalization__IsNormalized @ 0x14068AEDC (Normalization__IsNormalized.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x14068ABC0 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__CanCombineWithStartBase(__int64 a1, int *a2, unsigned int a3, int a4)
{
  if ( !*a2 )
    *a2 = Normalization__GetFirstDecomposedCharPlane0(a1, a3);
  return Normalization__CanCombinableCharactersCombine(a1, *a2, a4);
}
