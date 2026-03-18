/*
 * XREFs of PipDereferenceDependencyNode @ 0x140567ECC
 * Callers:
 *     IoResolveDependency @ 0x1401428E4 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1401CD294 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14062AB18 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B078 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14062B378 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14062B4B8 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14062B594 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14062B634 (PipUnlinkDeviceObjectAndDependencyNode.c)
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
