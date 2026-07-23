/*
 * XREFs of PopAcquireRwLockExclusive @ 0x1400F9D28
 * Callers:
 *     PopGetTransitionsToOnCount @ 0x140114CE4 (PopGetTransitionsToOnCount.c)
 *     PopThermalSxExit @ 0x140114DA8 (PopThermalSxExit.c)
 *     PopThermalSxEntry @ 0x14012503C (PopThermalSxEntry.c)
 *     PopThermalPowerSettingCallback @ 0x140131FE4 (PopThermalPowerSettingCallback.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140145550 (PopThermalUpdateTelemetryClientCount.c)
 *     PpmUpdateIdleDomains @ 0x1402014A4 (PpmUpdateIdleDomains.c)
 *     PopCoolingTelemetryWorker @ 0x140201AA8 (PopCoolingTelemetryWorker.c)
 *     PopPropogateCoolingChange @ 0x140201B58 (PopPropogateCoolingChange.c)
 *     PopThermalTelemetryWorker @ 0x140207078 (PopThermalTelemetryWorker.c)
 *     PpmSetProfilePolicySetting @ 0x1403F652C (PpmSetProfilePolicySetting.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
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
 *     PopEsPowerSettingPolicyCallback @ 0x140581424 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1405814B8 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A504 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A610 (PopRecordPowerButton.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AC3C (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B1AC (PpmInstallPlatformIdleStates.c)
 *     PpmRegisterVetoList @ 0x14066B7D4 (PpmRegisterVetoList.c)
 *     PoSetThermalActiveCooling @ 0x14066B898 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x14066B930 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066BA0C (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BD0C (PopOrphanCoolingExtension.c)
 *     PopBatteryAdd @ 0x14066EC84 (PopBatteryAdd.c)
 *     PopBatteryEtwCallback @ 0x14066EFA4 (PopBatteryEtwCallback.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x140670530 (PopThermalReadCounters.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670738 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopPolicyDeviceTargetChange @ 0x140672F60 (PopPolicyDeviceTargetChange.c)
 *     PopFanUpdateCsState @ 0x140673148 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406731BC (PopFanUpdateRunningState.c)
 *     PopFanWorker @ 0x14067324C (PopFanWorker.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140673990 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140673A18 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PpmApplyProfile @ 0x140675B20 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x140675EE8 (PpmProfileAcDcUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
