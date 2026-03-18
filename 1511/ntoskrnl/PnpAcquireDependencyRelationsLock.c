/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14045837C
 * Callers:
 *     IoResolveDependency @ 0x14013888C (IoResolveDependency.c)
 *     IoDeleteAllDependencyRelations @ 0x140455F30 (IoDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpCheckForActiveDependencies @ 0x140458A70 (PnpCheckForActiveDependencies.c)
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 *     PnpProcessDependencyRelations @ 0x14049EFE4 (PnpProcessDependencyRelations.c)
 *     IopSortRelationListForRemove @ 0x14049F054 (IopSortRelationListForRemove.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404EA628 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404EEF24 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1404EEF84 (PipNotifyDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x14053EB5C (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x140600A14 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x140600ACC (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140600BD0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140600C48 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x140771DFC (PiDeviceDependencyInit.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
