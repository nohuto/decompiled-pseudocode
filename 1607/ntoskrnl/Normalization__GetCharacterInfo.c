/*
 * XREFs of Normalization__GetCharacterInfo @ 0x14058200C
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140214FD0 (NormBuffer__AppendAndSortDecomposed.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140215314 (NormBuffer__RecheckStartCombinations.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__GetCharacterInfo(__int64 a1, int a2, _BYTE *a3, _BYTE *a4)
{
  char v4; // al
  char v5; // cl
  char result; // al

  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((__int64)(*(unsigned __int8 *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                + *(_QWORD *)(a1 + 40));
  v5 = v4 & 0x3F;
  result = v4 & 0xC0;
  *a3 = v5;
  *a4 = result;
  return result;
}
