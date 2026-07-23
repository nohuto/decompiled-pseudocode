/*
 * XREFs of NormBuffer__InsertAtBlockedLocation @ 0x1402151F8
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140214FD0 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x14021501C (NormBuffer__AppendEx.c)
 */

char __fastcall NormBuffer__InsertAtBlockedLocation(_QWORD *a1, int a2, char a3)
{
  __int16 *v4; // r8

  v4 = (__int16 *)a1[13];
  if ( v4 == (__int16 *)a1[5] )
    return NormBuffer__AppendEx((__int64)a1, a2, a3);
  else
    return NormBuffer__Insert(a1, a2, v4);
}
