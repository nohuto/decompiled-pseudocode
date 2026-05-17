/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1800E7E5C
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1800E8378 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800E83F0 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__SortBeforeSameClass @ 0x1800E84F8 (NormBuffer__SortBeforeSameClass.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)a2 >> 7)
                                                        + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL)) << 7)
                + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 40LL)
                - 128);
  LOBYTE(a2) = v4 & 0x3F;
  NormBuffer__SortBeforeSameClass(a1, a2);
  LOBYTE(v5) = v4 & 0x3F;
  LOBYTE(v6) = v4 & 0xC0;
  return NormBuffer__InsertAtBlockedLocation(a1, v3, v5, v6);
}
