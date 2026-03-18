/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x14009DBD0
 * Callers:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     KeInitializeQueue @ 0x1400931DC (KeInitializeQueue.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14009393C (KeQueryLogicalProcessorRelationship.c)
 *     PopCheckForIdleness @ 0x1400973B4 (PopCheckForIdleness.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KiGenericCallDpcWorker @ 0x1400D7FC4 (KiGenericCallDpcWorker.c)
 *     KiOutSwapKernelStacks @ 0x1400E8164 (KiOutSwapKernelStacks.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140116010 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140117958 (KeAdjustInterruptTime.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140122F3C (KiIntSteerChooseInitialTargetProcessors.c)
 *     KeIpiGenericCall @ 0x14012568C (KeIpiGenericCall.c)
 *     KeQueryActiveProcessorCount @ 0x14012FBA0 (KeQueryActiveProcessorCount.c)
 *     KiAddProcessorToGroupDatabase @ 0x1401368D4 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x14013F23C (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401AB784 (DbgkpLkmdSnapGlobals.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1401AE688 (HvlGetProcessorIndexFromVpIndex.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401B2D20 (HvlpMarkHvlPagesForHibernation.c)
 *     IoFillDumpHeader @ 0x1401B7838 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401BA414 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x1401C22D0 (KdpSetCommonState.c)
 *     KeCheckForTimer @ 0x1401C3440 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1401C743C (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1401C8EC0 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1401E8634 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x1403A76C0 (KeRestoreMtrrBroadcast.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1404D07B8 (ExProcessorCounterSetCallback.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     PopCheckSkipTick @ 0x140530B7C (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1405F45B4 (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x1405F7004 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x14061A46C (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     KdpAllowDisable @ 0x1406AD278 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1406AD2BC (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1406AD3A0 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1406AD478 (KdpSysWriteControlSpace.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_1403825B8[GroupNumber] - (((unsigned __int64)qword_1403825B8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
