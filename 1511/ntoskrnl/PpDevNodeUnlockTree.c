/*
 * XREFs of PpDevNodeUnlockTree @ 0x140458C1C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x140124628 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1401246B4 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401BF0DC (IoTranslateBusAddress.c)
 *     PiGetDeviceDepth @ 0x1404579D4 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140457D6C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x14045808C (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404583AC (PnpReleaseDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x140458AB4 (PiControlGetSetDeviceStatus.c)
 *     PipForDeviceNodeSubtree @ 0x140495BA8 (PipForDeviceNodeSubtree.c)
 *     PnpDelayedRemoveWorker @ 0x14049F5E8 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiGetRelatedDevice @ 0x1404F2758 (PiGetRelatedDevice.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PiQueryPowerRelations @ 0x14053E790 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x140541978 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1405493FC (PiPagePathSetState.c)
 *     IopRetryDeviceRemovalForReset @ 0x1406027D4 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x140602A7C (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x14060388C (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140603BA0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140603E04 (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14060DC70 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x14061527C (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x140615E78 (PiControlQueryConflictList.c)
 *     PiQueryDeviceRelations @ 0x140616688 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1406178CC (IopWarmEjectDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 */

__int64 __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v3 = a1 - 1;
  if ( !v3 || (v4 = v3 - 1) == 0 || (v5 = v4 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v5 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
