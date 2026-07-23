/*
 * XREFs of PipMergeDependencyNodes @ 0x14062B56C
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 * Callees:
 *     PipMoveListEntries @ 0x1401CD208 (PipMoveListEntries.c)
 *     PipDereferenceDependencyNode @ 0x14056840C (PipDereferenceDependencyNode.c)
 *     PipMergeDependencyEdgeList @ 0x14062B42C (PipMergeDependencyEdgeList.c)
 */

__int64 __fastcall PipMergeDependencyNodes(__int64 a1, __int64 a2)
{
  ++*(_DWORD *)(a1 + 88);
  ++*(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) |= *(_DWORD *)(a2 + 92);
  PipMoveListEntries((_QWORD *)(a1 + 56), a2 + 56);
  PipMergeDependencyEdgeList(a1, a2, 0);
  PipMergeDependencyEdgeList(a1, a2, 1);
  PipDereferenceDependencyNode(a1);
  return PipDereferenceDependencyNode(a2);
}
