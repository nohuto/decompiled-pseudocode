/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1400D4030
 * Callers:
 *     PopCheckForIdleness @ 0x140008B3C (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14007D290 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x14007DE44 (KeInitializeQueue.c)
 *     KdpSetCommonState @ 0x140083548 (KdpSetCommonState.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140085F34 (KeQueryMaximumProcessorCountEx.c)
 *     KiGenericCallDpcWorker @ 0x14009595C (KiGenericCallDpcWorker.c)
 *     KiOutSwapKernelStacks @ 0x1400A73BC (KiOutSwapKernelStacks.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     KiFlushViaHypervisor @ 0x1400E1020 (KiFlushViaHypervisor.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14012495C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140126A0C (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x14012FA64 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x1401393C4 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x14013EF3C (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x140147C34 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401B7630 (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401BF6AC (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1401BFD7C (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1401C55A4 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401C8248 (KeCapturePersistentThreadState.c)
 *     KeQueryActiveProcessorCount @ 0x1401D307C (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x1401D3640 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1401D63E8 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1401D7C58 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x1401E65E4 (MiStackTheftFreezeProcessors.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140201044 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x1403D36E8 (KeRestoreMtrrBroadcast.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x140407468 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     EtwpFlushActiveBuffers @ 0x140510490 (EtwpFlushActiveBuffers.c)
 *     PopCheckSkipTick @ 0x140581690 (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14061E910 (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140620D0C (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x14064F6A0 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 *     KdpSysReadControlSpace @ 0x1406F343C (KdpSysReadControlSpace.c)
 *     KdpGetStateChange @ 0x1406F3504 (KdpGetStateChange.c)
 *     KdpSysWriteControlSpace @ 0x1406F3668 (KdpSysWriteControlSpace.c)
 *     KdpAllowDisable @ 0x1406F5F60 (KdpAllowDisable.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140792718 (KiIntSteerDetermineSteeringEnabled.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
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
    v2 = qword_1403AA618[GroupNumber] - (((unsigned __int64)qword_1403AA618[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
