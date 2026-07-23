/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x1400D1ED0
 * Callers:
 *     PopCheckForIdleness @ 0x1400086B0 (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14007D310 (KeQueryLogicalProcessorRelationship.c)
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     KdpSetCommonState @ 0x1400841C8 (KdpSetCommonState.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     KiGenericCallDpcWorker @ 0x14009515C (KiGenericCallDpcWorker.c)
 *     KiOutSwapKernelStacks @ 0x1400A5934 (KiOutSwapKernelStacks.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140124ECC (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140126F7C (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x14012FFD4 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x140139934 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x14013F4AC (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x1401481A4 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401B7514 (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401BF590 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1401BFC60 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1401C5444 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     KeQueryActiveProcessorCount @ 0x1401D2EA8 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x1401D346C (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1401D6214 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1401D7A84 (KeSwitchFrozenProcessor.c)
 *     MiStackTheftFreezeProcessors @ 0x1401E6410 (MiStackTheftFreezeProcessors.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140200E70 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x1403D36E8 (KeRestoreMtrrBroadcast.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x140406328 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 *     PopCheckSkipTick @ 0x140581B3C (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14061E9C4 (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140620DC0 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x14064F784 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
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
