/*
 * XREFs of NormBuffer__LastStartBase @ 0x140249ED4
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x140249EFC (NormBuffer__LastStartBasePair.c)
 *     Normalization__NormalizeCharacter @ 0x1406CEEA8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1406CE340 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a1 + 96) = Normalization__GetFirstDecomposedCharPlane0(
                             *(_QWORD *)(a1 + 112),
                             *(unsigned int *)(a1 + 88));
  return *(unsigned int *)(a1 + 96);
}
