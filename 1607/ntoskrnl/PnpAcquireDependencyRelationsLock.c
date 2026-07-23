/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1403F3058
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F11B4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F128C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1403F12EC (PipNotifyDeviceDependencyList.c)
 *     IoDeleteAllDependencyRelations @ 0x1403F1C9C (IoDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1403F371C (PnpCheckForActiveDependencies.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140484BC8 (PnpRequestDeviceRemoval.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessDependencyRelations @ 0x140486338 (PnpProcessDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x1404863A8 (IopSortRelationListForRemove.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404888E8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiQueryPowerDependencyRelations @ 0x140571314 (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x14062AB14 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14062ACD0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14062AD48 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1407BCCAC (PiDeviceDependencyInit.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
