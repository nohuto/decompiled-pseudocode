/*
 * XREFs of Normalization__CanCombineWithStartFirstPair @ 0x1800E36B4
 * Callers:
 *     Normalization__IsNormalized @ 0x1800E39AC (Normalization__IsNormalized.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800E3518 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1800E372C (Normalization__GetFirstDecomposedCharPlane0.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x1800E3938 (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__CanCombineWithStartFirstPair(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int SecondDecomposedCharPlane0; // eax

  if ( !*a2 )
  {
    if ( !*a3 )
      *a3 = Normalization__GetFirstDecomposedCharPlane0(a1, a4);
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(a1, a4);
    *a2 = Normalization__CanCombinableCharactersCombine(a1, *a3, SecondDecomposedCharPlane0);
  }
  return Normalization__CanCombinableCharactersCombine(a1, *a2, a5);
}
