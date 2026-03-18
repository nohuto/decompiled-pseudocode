/*
 * XREFs of PpDevNodeUnlockTree @ 0x1403F49E0
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x1401106F8 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140110784 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401CD674 (IoTranslateBusAddress.c)
 *     PiGetRelatedDevice @ 0x1403F3930 (PiGetRelatedDevice.c)
 *     PiGetDeviceDepth @ 0x1403F3B10 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1403F3B7C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x1403F3ED0 (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x1403F3F84 (PiControlGetPropertyData.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PnpDelayedRemoveWorker @ 0x1404C3D40 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1404C5220 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipForDeviceNodeSubtree @ 0x14051D928 (PipForDeviceNodeSubtree.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PiQueryPowerRelations @ 0x140570A48 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405761E8 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14057D324 (PiPagePathSetState.c)
 *     IopRetryDeviceRemovalForReset @ 0x14062C83C (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x14062CDC0 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x14062DC88 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x14062DF9C (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14062E200 (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14064207C (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x140649CD4 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x14064A8B8 (PiControlQueryConflictList.c)
 *     PiQueryDeviceRelations @ 0x14064B0AC (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x14064C5EC (IopWarmEjectDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A5C20 (ExConvertExclusiveToSharedLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}
