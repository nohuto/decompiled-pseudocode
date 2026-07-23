/*
 * XREFs of PipDereferenceDependencyNode @ 0x14056840C
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1401CD0E0 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F11B4 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B12C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14062B42C (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14062B56C (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14062B648 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14062B6E8 (PipUnlinkDeviceObjectAndDependencyNode.c)
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
