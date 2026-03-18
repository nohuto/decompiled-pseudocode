/*
 * XREFs of PopReleaseRwLock @ 0x14009D768
 * Callers:
 *     PpmIdleUsingStateSelection @ 0x140097180 (PpmIdleUsingStateSelection.c)
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x14011AAA0 (PopThermalSxExit.c)
 *     PopThermalPowerSettingCallback @ 0x140126CDC (PopThermalPowerSettingCallback.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PpmQueryPlatformStateResidency @ 0x1401E82FC (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleDomains @ 0x1401E8C54 (PpmUpdateIdleDomains.c)
 *     PopCoolingTelemetryWorker @ 0x1401E9260 (PopCoolingTelemetryWorker.c)
 *     PopPropogateCoolingChange @ 0x1401E9310 (PopPropogateCoolingChange.c)
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 *     PopThermalTraceRundownEvents @ 0x1401EE73C (PopThermalTraceRundownEvents.c)
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopCurrentPowerState @ 0x140454230 (PopCurrentPowerState.c)
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     PopReleasePowerRequestPushLock @ 0x140455D44 (PopReleasePowerRequestPushLock.c)
 *     PopProcessorInformation @ 0x14046167C (PopProcessorInformation.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1404CFCC8 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopEsEnterSleepShutdown @ 0x1404F7350 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x1404F8D74 (PopEsExitSleep.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 *     PopTransitionTelemetryOsState @ 0x14050BE6C (PopTransitionTelemetryOsState.c)
 *     PpmReapplyIdlePolicy @ 0x14051B090 (PpmReapplyIdlePolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14052FF24 (PpmUpdateIdleStates.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     PopExecutionRequiredSettingCallback @ 0x14054A5D0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x14054B2B0 (PopPowerRequestOverrideInitialize.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x14054B364 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     PopAssociateThermalRequest @ 0x14054C3E0 (PopAssociateThermalRequest.c)
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x140632414 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x14063248C (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x140632510 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x140632588 (PopSetSpecialRequest.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140632690 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140632C00 (PpmInstallPlatformIdleStates.c)
 *     PpmRegisterVetoList @ 0x1406331F8 (PpmRegisterVetoList.c)
 *     PoSetThermalActiveCooling @ 0x1406332BC (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x140633354 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x140633430 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140633730 (PopOrphanCoolingExtension.c)
 *     PopRundownThermalRequests @ 0x140633974 (PopRundownThermalRequests.c)
 *     PopGetPowerRequestListInfo @ 0x140633C50 (PopGetPowerRequestListInfo.c)
 *     PopBatteryAdd @ 0x1406367E0 (PopBatteryAdd.c)
 *     PopBatteryDeviceState @ 0x1406368C0 (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x140636AE4 (PopBatteryEtwCallback.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 *     PoThermalCounterSetCallback @ 0x140637DBC (PoThermalCounterSetCallback.c)
 *     PopThermalReadCounters @ 0x140638014 (PopThermalReadCounters.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140638208 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14063A82C (PpmCompareAndApplyPolicySettings.c)
 *     PopPolicyDeviceTargetChange @ 0x14063BAF0 (PopPolicyDeviceTargetChange.c)
 *     PopFanUpdateCsState @ 0x14063BCD8 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x14063BD4C (PopFanUpdateRunningState.c)
 *     PopFanWorker @ 0x14063BDDC (PopFanWorker.c)
 *     PpmWmiGetAllData @ 0x14063BEEC (PpmWmiGetAllData.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14063C334 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopFanReportBootStartDevices @ 0x14076620C (PopFanReportBootStartDevices.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
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
