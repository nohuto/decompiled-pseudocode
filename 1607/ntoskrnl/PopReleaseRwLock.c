/*
 * XREFs of PopReleaseRwLock @ 0x14000DCD8
 * Callers:
 *     PpmIdleUsingStateSelection @ 0x14000A354 (PpmIdleUsingStateSelection.c)
 *     PoGetIdleTimes @ 0x14000DBB4 (PoGetIdleTimes.c)
 *     PopThermalTraceRundownEvents @ 0x140110994 (PopThermalTraceRundownEvents.c)
 *     PopGetTransitionsToOnCount @ 0x140114774 (PopGetTransitionsToOnCount.c)
 *     PopThermalSxExit @ 0x140114838 (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x140124ACC (PopThermalSxEntry.c)
 *     PopThermalPowerSettingCallback @ 0x140131A74 (PopThermalPowerSettingCallback.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140144FE0 (PopThermalUpdateTelemetryClientCount.c)
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleDomains @ 0x140201678 (PpmUpdateIdleDomains.c)
 *     PopCoolingTelemetryWorker @ 0x140201C7C (PopCoolingTelemetryWorker.c)
 *     PopPropogateCoolingChange @ 0x140201D2C (PopPropogateCoolingChange.c)
 *     PopThermalTelemetryWorker @ 0x14020724C (PopThermalTelemetryWorker.c)
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     PopProcessorInformation @ 0x14051DE1C (PopProcessorInformation.c)
 *     PopCreateKernelPowerRequest @ 0x14051E314 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopCurrentPowerState @ 0x14051FC88 (PopCurrentPowerState.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     PopReleasePowerRequestPushLock @ 0x140520694 (PopReleasePowerRequestPushLock.c)
 *     PopSystemRequiredCallback @ 0x1405206C0 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140520920 (PopExecutionRequiredCallback.c)
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 *     PopRundownThermalRequests @ 0x14052B5D4 (PopRundownThermalRequests.c)
 *     PopEsExitSleep @ 0x1405318DC (PopEsExitSleep.c)
 *     PopEsEnterSleepShutdown @ 0x140533FB8 (PopEsEnterSleepShutdown.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopEsWorker @ 0x1405458F4 (PopEsWorker.c)
 *     PopTransitionTelemetryOsState @ 0x140545DA0 (PopTransitionTelemetryOsState.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14054EC10 (PpmUpdateIdleStates.c)
 *     PopNotifyPolicyDevice @ 0x14056C058 (PopNotifyPolicyDevice.c)
 *     PopAssociateThermalRequest @ 0x14056C5C0 (PopAssociateThermalRequest.c)
 *     PopThermalWorker @ 0x140573F40 (PopThermalWorker.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     PopExecutionRequiredSettingCallback @ 0x14057F2A0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405809E8 (PopPowerRequestOverrideInitialize.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140580F78 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x14058100C (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopPowerRequestPowerSourceSettingCallback @ 0x140581300 (PopPowerRequestPowerSourceSettingCallback.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A420 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A52C (PopRecordPowerButton.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x14066A868 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x14066A8E0 (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x14066A964 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x14066AA50 (PopSetSpecialRequest.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AB58 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B0C8 (PpmInstallPlatformIdleStates.c)
 *     PpmReapplyIdlePolicy @ 0x14066B6C0 (PpmReapplyIdlePolicy.c)
 *     PpmRegisterVetoList @ 0x14066B6F0 (PpmRegisterVetoList.c)
 *     PoSetThermalActiveCooling @ 0x14066B7B4 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x14066B84C (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066B928 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BA80 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BC28 (PopOrphanCoolingExtension.c)
 *     PopGetPowerRequestListInfo @ 0x14066C054 (PopGetPowerRequestListInfo.c)
 *     PopBatteryAdd @ 0x14066EBA0 (PopBatteryAdd.c)
 *     PopBatteryDeviceState @ 0x14066EC9C (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x14066EEC0 (PopBatteryEtwCallback.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 *     PoThermalCounterSetCallback @ 0x1406701F4 (PoThermalCounterSetCallback.c)
 *     PopThermalReadCounters @ 0x14067044C (PopThermalReadCounters.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670654 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 *     PopPolicyDeviceTargetChange @ 0x140672E7C (PopPolicyDeviceTargetChange.c)
 *     PopFanUpdateCsState @ 0x140673064 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406730D8 (PopFanUpdateRunningState.c)
 *     PopFanWorker @ 0x140673168 (PopFanWorker.c)
 *     PpmWmiGetAllData @ 0x140673278 (PpmWmiGetAllData.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406738AC (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140673934 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
