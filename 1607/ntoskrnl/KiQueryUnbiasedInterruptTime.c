/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x1400EE154
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiInitializeUserApc @ 0x1400A6214 (KiInitializeUserApc.c)
 *     CmpCompleteLazyWrite @ 0x1400AE420 (CmpCompleteLazyWrite.c)
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BC1A0 (MiEmptyDecayClusterTimers.c)
 *     MiAdjustModifiedPageLoad @ 0x1400BC8E0 (MiAdjustModifiedPageLoad.c)
 *     KeThawProcess @ 0x1400C52E8 (KeThawProcess.c)
 *     KiCheckWaitNext @ 0x1400CE9E0 (KiCheckWaitNext.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140115974 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401159F4 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     KeFreezeProcessNew @ 0x1401D1F5C (KeFreezeProcessNew.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14021DCD4 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     PfTGenerateTrace @ 0x1403E7030 (PfTGenerateTrace.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpDoFlushNextHive @ 0x1403FA454 (CmpDoFlushNextHive.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x14047F550 (CmpIsHiveEligibleForLazyReconcile.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     PopTransitionTelemetryOsState @ 0x1405462E0 (PopTransitionTelemetryOsState.c)
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14055BC28 (CmpInitDelayDerefKCBEngine.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
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
