/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1404E1670
 * Callers:
 *     IoResolveDependency @ 0x1401681EC (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140461408 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpCheckForActiveDependencies @ 0x1404E1D24 (PnpCheckForActiveDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x1404E3C20 (PipNotifyDeviceDependencyList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404E3C7C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpRequestDeviceRemoval @ 0x140534B48 (PnpRequestDeviceRemoval.c)
 *     IoDeleteAllDependencyRelations @ 0x140534DB0 (IoDeleteAllDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     IopSortRelationListForRemove @ 0x1405356C4 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x140535B08 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiQueryPowerDependencyRelations @ 0x1405B3CE0 (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x14067B624 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14067B6DC (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14067B7E0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14067B858 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1407E8898 (PiDeviceDependencyInit.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
