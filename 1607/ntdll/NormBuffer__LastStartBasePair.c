/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x1800F1390
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180058880 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__LastStartBase @ 0x1800F1360 (NormBuffer__LastStartBase.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F18B8 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x1800F1D20 (Normalization__GetSecondDecomposedCharPlane0.c)
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
