/*
 * XREFs of PipDereferenceDependencyNode @ 0x140534E54
 * Callers:
 *     IoResolveDependency @ 0x14013888C (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1401BECFC (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140600ACC (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x14060102C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14060132C (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14060146C (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x140601548 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x1406015E8 (PipUnlinkDeviceObjectAndDependencyNode.c)
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
