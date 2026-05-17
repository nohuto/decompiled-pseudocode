/*
 * XREFs of NormBuffer__InsertAtBlockedLocation @ 0x1800E3004
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18005F468 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800E2DBC (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x180001640 (NormBuffer__AppendEx.c)
 */

char __fastcall NormBuffer__InsertAtBlockedLocation(_QWORD *a1, __int64 a2, char a3)
{
  __int16 *v4; // r8

  v4 = (__int16 *)a1[13];
  if ( v4 == (__int16 *)a1[5] )
    return NormBuffer__AppendEx((__int64)a1, a2, a3);
  else
    return NormBuffer__Insert(a1, a2, v4);
}
