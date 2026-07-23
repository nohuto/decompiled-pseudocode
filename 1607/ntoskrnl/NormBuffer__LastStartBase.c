/*
 * XREFs of NormBuffer__LastStartBase @ 0x1402152A4
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x1402152CC (NormBuffer__LastStartBasePair.c)
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x14068ABC0 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a1 + 96) = Normalization__GetFirstDecomposedCharPlane0(
                             *(_QWORD *)(a1 + 112),
                             *(unsigned int *)(a1 + 88));
  return *(unsigned int *)(a1 + 96);
}
