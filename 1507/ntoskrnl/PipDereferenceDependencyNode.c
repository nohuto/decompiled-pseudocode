/*
 * XREFs of PipDereferenceDependencyNode @ 0x1405B1AE4
 * Callers:
 *     IoResolveDependency @ 0x1401681EC (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1401FA5B0 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14067B6DC (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14067BC3C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14067BF3C (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14067C07C (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14067C158 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14067C1F8 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipDereferenceDependencyNode(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 88))-- == 1 )
    return PipDeleteDependencyNode();
  return result;
}
