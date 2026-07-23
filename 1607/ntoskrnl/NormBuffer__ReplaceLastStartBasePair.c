/*
 * XREFs of NormBuffer__ReplaceLastStartBasePair @ 0x1402154B8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140214FD0 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__GetThirdAndLastDecomposedCharPlane0 @ 0x14068AE4C (Normalization__GetThirdAndLastDecomposedCharPlane0.c)
 */

int __fastcall NormBuffer__ReplaceLastStartBasePair(__int64 a1, int a2, char a3, char a4)
{
  unsigned int ThirdAndLastDecomposedCharPlane0; // eax
  __int64 v9; // r10

  ThirdAndLastDecomposedCharPlane0 = Normalization__GetThirdAndLastDecomposedCharPlane0(
                                       *(_QWORD *)(a1 + 112),
                                       *(unsigned int *)(a1 + 88));
  v9 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_WORD *)(v9 - 2) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  if ( ThirdAndLastDecomposedCharPlane0 )
    return NormBuffer__AppendAndSortDecomposed(a1, ThirdAndLastDecomposedCharPlane0);
  else
    return 1;
}
