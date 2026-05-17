/*
 * XREFs of Normalization__CanCombineWithStartBase @ 0x1800F1A44
 * Callers:
 *     Normalization__IsNormalized @ 0x180002D18 (Normalization__IsNormalized.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1800F1B08 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__CanCombineWithStartBase(__int64 a1, int *a2, unsigned int a3, int a4)
{
  if ( !*a2 )
    *a2 = Normalization__GetFirstDecomposedCharPlane0(a1, a3);
  return Normalization__CanCombinableCharactersCombine(a1, *a2, a4);
}
