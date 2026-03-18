/*
 * XREFs of PpDevNodeLockTree @ 0x1404E20D8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1401570B4 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401FA940 (IoTranslateBusAddress.c)
 *     PipForDeviceNodeSubtree @ 0x14045C0EC (PipForDeviceNodeSubtree.c)
 *     PiGetDeviceDepth @ 0x1404E0D40 (PiGetDeviceDepth.c)
 *     IoGetLegacyVetoList @ 0x1404E10D8 (IoGetLegacyVetoList.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1404E118C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetRelatedDevice @ 0x1404E1314 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
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
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG i; // esi
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
        for ( i = IsResourceAcquiredSharedLite; i; --i )
          ExReleaseResourceLite(&IopDeviceTreeLock);
        for ( ; IsResourceAcquiredSharedLite; --IsResourceAcquiredSharedLite )
          ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
      }
    }
    else
    {
      ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
      ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
    }
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
      goto LABEL_2;
    v2 = 0;
    v9 = KeGetCurrentThread();
    v10 = v9->KernelApcDisable + 1;
    v9->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
      && !v9->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v2;
}
