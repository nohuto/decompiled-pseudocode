/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x140249BFC
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x14024A078 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14024A0E8 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__SortBeforeSameClass @ 0x14024A198 (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x1405C752C (Normalization__GetCharacterInfo.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  Normalization__GetCharacterInfo(*(_QWORD *)(a1 + 112), a2, &v8, &v9);
  LOBYTE(v4) = v8;
  NormBuffer__SortBeforeSameClass(a1, v4);
  LOBYTE(v5) = v9;
  LOBYTE(v6) = v8;
  return NormBuffer__InsertAtBlockedLocation(a1, v3, v6, v5);
}
