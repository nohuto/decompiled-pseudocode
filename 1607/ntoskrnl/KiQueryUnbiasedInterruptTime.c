/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x1400F02D4
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003634 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiInitializeUserApc @ 0x1400A7C9C (KiInitializeUserApc.c)
 *     CmpCompleteLazyWrite @ 0x1400B027C (CmpCompleteLazyWrite.c)
 *     MiWorkingSetManager @ 0x1400BDF08 (MiWorkingSetManager.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BE310 (MiEmptyDecayClusterTimers.c)
 *     MiAdjustModifiedPageLoad @ 0x1400BEA50 (MiAdjustModifiedPageLoad.c)
 *     KeThawProcess @ 0x1400C7448 (KeThawProcess.c)
 *     KiCheckWaitNext @ 0x1400D0B40 (KiCheckWaitNext.c)
 *     KeRemovePriQueue @ 0x1400E79D0 (KeRemovePriQueue.c)
 *     CmpArmLazyWriter @ 0x1400F0130 (CmpArmLazyWriter.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140115404 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140115484 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118268 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     KeFreezeProcessNew @ 0x1401D2130 (KeFreezeProcessNew.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14021DEA8 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     PfTGenerateTrace @ 0x1403E5A04 (PfTGenerateTrace.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x1403FB594 (CmpDoFlushNextHive.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     CmpDoReconcileNextHive @ 0x1404806D8 (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1404807FC (CmpIsHiveEligibleForLazyReconcile.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 *     PsThawProcess @ 0x14051DFE8 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14051E428 (PsFreezeProcess.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PopTransitionTelemetryOsState @ 0x140545DA0 (PopTransitionTelemetryOsState.c)
 *     PfTLoggingWorker @ 0x14055B15C (PfTLoggingWorker.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14055B6E8 (CmpInitDelayDerefKCBEngine.c)
 *     HvMarkBaseBlockDirty @ 0x140564650 (HvMarkBaseBlockDirty.c)
 *     PopDiagInitialize @ 0x1407A91B0 (PopDiagInitialize.c)
 *     CmpInitializeTransactions @ 0x1407ABC20 (CmpInitializeTransactions.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 *     PspInitPhase2 @ 0x1407B5F0C (PspInitPhase2.c)
 * Callees:
 *     <none>
 */

__int64 KiQueryUnbiasedInterruptTime()
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
