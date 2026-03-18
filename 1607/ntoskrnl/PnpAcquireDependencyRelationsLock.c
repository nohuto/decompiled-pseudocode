/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1403F4194
 * Callers:
 *     IoResolveDependency @ 0x1401428E4 (IoResolveDependency.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F23C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1403F2428 (PipNotifyDeviceDependencyList.c)
 *     IoDeleteAllDependencyRelations @ 0x1403F2DD8 (IoDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1403F4858 (PnpCheckForActiveDependencies.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x1404C3E90 (PnpRequestDeviceRemoval.c)
 *     PnpProcessDependencyRelations @ 0x1404C4960 (PnpProcessDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x1404C49D0 (IopSortRelationListForRemove.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404C4CE4 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1404C5028 (PnpQueuePendingSurpriseRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x140570DD4 (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x14062AA60 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14062AB18 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14062AC1C (IoReserveDependency.c)
 *     IoSetDependency @ 0x14062AC94 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1407BCCAC (PiDeviceDependencyInit.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
