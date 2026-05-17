/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1800F1038
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1800F1564 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800F15DC (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__SortBeforeSameClass @ 0x1800F16E8 (NormBuffer__SortBeforeSameClass.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((__int64)(*(unsigned __int8 *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL))
                           - 1) << 7)
                + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 40LL));
  LOBYTE(a2) = v4 & 0x3F;
  NormBuffer__SortBeforeSameClass(a1, a2);
  LOBYTE(v5) = v4 & 0x3F;
  LOBYTE(v6) = v4 & 0xC0;
  return NormBuffer__InsertAtBlockedLocation(a1, v3, v5, v6);
}
