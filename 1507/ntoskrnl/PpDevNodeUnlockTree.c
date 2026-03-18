/*
 * XREFs of PpDevNodeUnlockTree @ 0x1404E1F18
 * Callers:
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x140156FFC (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1401570B4 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401FA940 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x14045C0EC (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1404E0D40 (PiGetDeviceDepth.c)
 *     IoGetLegacyVetoList @ 0x1404E10D8 (IoGetLegacyVetoList.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1404E118C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetRelatedDevice @ 0x1404E1314 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDelayedRemoveWorker @ 0x1405394A0 (PnpDelayedRemoveWorker.c)
 *     PnpRestartDeviceNode @ 0x14058C398 (PnpRestartDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405B7B04 (IopQueryInterfaceRecurseUp.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 *     IopRetryDeviceRemovalForReset @ 0x14067D5BC (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x14067D89C (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x14067E910 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x14067EA30 (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14068D6AC (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x140693FF4 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x140694AD8 (PiControlQueryConflictList.c)
 *     PiQueryDeviceRelations @ 0x140695374 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x140696190 (IopWarmEjectDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v3; // ax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v4 = a1 - 1;
  if ( !v4 || (v5 = v4 - 1) == 0 || (v6 = v5 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v6 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v3;
  if ( !v3
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
