/*
 * XREFs of PpDevNodeLockTree @ 0x140458D00
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1401246B4 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401BF0DC (IoTranslateBusAddress.c)
 *     PiGetDeviceDepth @ 0x1404579D4 (PiGetDeviceDepth.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140457D6C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetLegacyVetoList @ 0x14045808C (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
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
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
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
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v2;
    }
    goto LABEL_2;
  }
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
  return v2;
}
