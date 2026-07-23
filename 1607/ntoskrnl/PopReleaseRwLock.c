/*
 * XREFs of PopReleaseRwLock @ 0x14000D858
 * Callers:
 *     PpmIdleUsingStateSelection @ 0x140009ED4 (PpmIdleUsingStateSelection.c)
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     PopThermalTraceRundownEvents @ 0x140110EF8 (PopThermalTraceRundownEvents.c)
 *     PopGetTransitionsToOnCount @ 0x140114CE4 (PopGetTransitionsToOnCount.c)
 *     PopThermalSxExit @ 0x140114DA8 (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x14012503C (PopThermalSxEntry.c)
 *     PopThermalPowerSettingCallback @ 0x140131FE4 (PopThermalPowerSettingCallback.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140145550 (PopThermalUpdateTelemetryClientCount.c)
 *     PpmQueryPlatformStateResidency @ 0x140200B3C (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleDomains @ 0x1402014A4 (PpmUpdateIdleDomains.c)
 *     PopCoolingTelemetryWorker @ 0x140201AA8 (PopCoolingTelemetryWorker.c)
 *     PopPropogateCoolingChange @ 0x140201B58 (PopPropogateCoolingChange.c)
 *     PopThermalTelemetryWorker @ 0x140207078 (PopThermalTelemetryWorker.c)
 *     PpmSetProfilePolicySetting @ 0x1403F652C (PpmSetProfilePolicySetting.c)
 *     PopProcessorInformation @ 0x140500E84 (PopProcessorInformation.c)
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopCurrentPowerState @ 0x140502CF0 (PopCurrentPowerState.c)
 *     PopCreatePowerRequestObject @ 0x1405035C0 (PopCreatePowerRequestObject.c)
 *     PopReleasePowerRequestPushLock @ 0x1405036FC (PopReleasePowerRequestPushLock.c)
 *     PopSystemRequiredCallback @ 0x140503728 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140503988 (PopExecutionRequiredCallback.c)
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 *     PopRundownThermalRequests @ 0x14052C224 (PopRundownThermalRequests.c)
 *     PopEsExitSleep @ 0x140531E1C (PopEsExitSleep.c)
 *     PopEsEnterSleepShutdown @ 0x1405344F8 (PopEsEnterSleepShutdown.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopEsWorker @ 0x140545E34 (PopEsWorker.c)
 *     PopTransitionTelemetryOsState @ 0x1405462E0 (PopTransitionTelemetryOsState.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14054EFB0 (PpmUpdateIdleStates.c)
 *     PopNotifyPolicyDevice @ 0x14056C598 (PopNotifyPolicyDevice.c)
 *     PopAssociateThermalRequest @ 0x14056CB00 (PopAssociateThermalRequest.c)
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 *     PpmRegisterProfiles @ 0x140578A20 (PpmRegisterProfiles.c)
 *     PopExecutionRequiredSettingCallback @ 0x14057F74C (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140580E94 (PopPowerRequestOverrideInitialize.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140581424 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1405814B8 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopPowerRequestPowerSourceSettingCallback @ 0x1405817AC (PopPowerRequestPowerSourceSettingCallback.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A504 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A610 (PopRecordPowerButton.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x14066A94C (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x14066A9C4 (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x14066AA48 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x14066AB34 (PopSetSpecialRequest.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AC3C (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B1AC (PpmInstallPlatformIdleStates.c)
 *     PpmReapplyIdlePolicy @ 0x14066B7A4 (PpmReapplyIdlePolicy.c)
 *     PpmRegisterVetoList @ 0x14066B7D4 (PpmRegisterVetoList.c)
 *     PoSetThermalActiveCooling @ 0x14066B898 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x14066B930 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066BA0C (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BD0C (PopOrphanCoolingExtension.c)
 *     PopGetPowerRequestListInfo @ 0x14066C138 (PopGetPowerRequestListInfo.c)
 *     PopBatteryAdd @ 0x14066EC84 (PopBatteryAdd.c)
 *     PopBatteryDeviceState @ 0x14066ED80 (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x14066EFA4 (PopBatteryEtwCallback.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 *     PoThermalCounterSetCallback @ 0x1406702D8 (PoThermalCounterSetCallback.c)
 *     PopThermalReadCounters @ 0x140670530 (PopThermalReadCounters.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670738 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140672A94 (PpmCompareAndApplyPolicySettings.c)
 *     PopPolicyDeviceTargetChange @ 0x140672F60 (PopPolicyDeviceTargetChange.c)
 *     PopFanUpdateCsState @ 0x140673148 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406731BC (PopFanUpdateRunningState.c)
 *     PopFanWorker @ 0x14067324C (PopFanWorker.c)
 *     PpmWmiGetAllData @ 0x14067335C (PpmWmiGetAllData.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140673990 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140673A18 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

void __fastcall PopReleaseRwLock(signed __int64 *BugCheckParameter2)
{
  signed __int64 v1; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v1 = 0LL;
  if ( BugCheckParameter2[1] )
    BugCheckParameter2[1] = 0LL;
  _m_prefetchw(BugCheckParameter2);
  v3 = *BugCheckParameter2;
  if ( (*BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v1 = v3 - 16;
  if ( (v3 & 2) != 0 || (v4 = *BugCheckParameter2, v4 != _InterlockedCompareExchange64(BugCheckParameter2, v1, v3)) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
