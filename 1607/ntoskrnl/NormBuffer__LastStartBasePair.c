/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x1402152CC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__LastStartBase @ 0x1402152A4 (NormBuffer__LastStartBase.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14068A984 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x14068ADD4 (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBasePair(__int64 a1)
{
  unsigned int SecondDecomposedCharPlane0; // ebx
  unsigned int StartBase; // eax

  if ( !*(_DWORD *)(a1 + 100) )
  {
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(
                                   *(_QWORD *)(a1 + 112),
                                   *(unsigned int *)(a1 + 88));
    StartBase = NormBuffer__LastStartBase(a1);
    *(_DWORD *)(a1 + 100) = Normalization__CanCombinableCharactersCombine(
                              *(_QWORD *)(a1 + 112),
                              StartBase,
                              SecondDecomposedCharPlane0);
  }
  return *(unsigned int *)(a1 + 100);
}
