/*
 * XREFs of PopAcquireRwLockExclusive @ 0x1400FBFA8
 * Callers:
 *     PopGetTransitionsToOnCount @ 0x140114774 (PopGetTransitionsToOnCount.c)
 *     PopThermalSxExit @ 0x140114838 (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x140124ACC (PopThermalSxEntry.c)
 *     PopThermalPowerSettingCallback @ 0x140131A74 (PopThermalPowerSettingCallback.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140144FE0 (PopThermalUpdateTelemetryClientCount.c)
 *     PpmUpdateIdleDomains @ 0x140201678 (PpmUpdateIdleDomains.c)
 *     PopCoolingTelemetryWorker @ 0x140201C7C (PopCoolingTelemetryWorker.c)
 *     PopPropogateCoolingChange @ 0x140201D2C (PopPropogateCoolingChange.c)
 *     PopThermalTelemetryWorker @ 0x14020724C (PopThermalTelemetryWorker.c)
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopAcquirePowerRequestPushLock @ 0x140520750 (PopAcquirePowerRequestPushLock.c)
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
 *     PopEsPowerSettingPolicyCallback @ 0x140580F78 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x14058100C (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A420 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A52C (PopRecordPowerButton.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AB58 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B0C8 (PpmInstallPlatformIdleStates.c)
 *     PpmRegisterVetoList @ 0x14066B6F0 (PpmRegisterVetoList.c)
 *     PoSetThermalActiveCooling @ 0x14066B7B4 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x14066B84C (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066B928 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BA80 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BC28 (PopOrphanCoolingExtension.c)
 *     PopBatteryAdd @ 0x14066EBA0 (PopBatteryAdd.c)
 *     PopBatteryEtwCallback @ 0x14066EEC0 (PopBatteryEtwCallback.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x14067044C (PopThermalReadCounters.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670654 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopPolicyDeviceTargetChange @ 0x140672E7C (PopPolicyDeviceTargetChange.c)
 *     PopFanUpdateCsState @ 0x140673064 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406730D8 (PopFanUpdateRunningState.c)
 *     PopFanWorker @ 0x140673168 (PopFanWorker.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406738AC (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140673934 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PpmApplyProfile @ 0x140675A3C (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x140675E04 (PpmProfileAcDcUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall PopAcquireRwLockExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v3, (ULONG_PTR)a1);
  if ( v4 )
    v4[26] |= 1u;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
