/*
 * XREFs of PopAcquirePolicyLock @ 0x14039C560
 * Callers:
 *     PopSystemRequiredCallback @ 0x140099070 (PopSystemRequiredCallback.c)
 *     PoSetUserPresent @ 0x1400F1D98 (PoSetUserPresent.c)
 *     PopForceCompleteSleepStudySession @ 0x14011A0AC (PopForceCompleteSleepStudySession.c)
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x14011AAA0 (PopThermalSxExit.c)
 *     PopVideoPowerSettingCallback @ 0x14013C9A0 (PopVideoPowerSettingCallback.c)
 *     PdcPoLowPower @ 0x140141138 (PdcPoLowPower.c)
 *     PopSwitchForcedShutdownSettingCallback @ 0x140142590 (PopSwitchForcedShutdownSettingCallback.c)
 *     PopCheckAndHandleThermalConditions @ 0x140142CE0 (PopCheckAndHandleThermalConditions.c)
 *     PopVideoBrightnessCapableSettingCallback @ 0x1401E94C8 (PopVideoBrightnessCapableSettingCallback.c)
 *     PoSetSystemState @ 0x1401ECA80 (PoSetSystemState.c)
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 *     PopWnfAudioCallback @ 0x1404EACF8 (PopWnfAudioCallback.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x1404F32A4 (PopIdleGlobalUserPresenceCallback.c)
 *     PoUserShutdownInitiated @ 0x1404F5250 (PoUserShutdownInitiated.c)
 *     PopDispatchFullWake @ 0x1404F5684 (PopDispatchFullWake.c)
 *     PopPolicyWorkerActionPromote @ 0x1404F56DC (PopPolicyWorkerActionPromote.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1404F7554 (PopPolicyWorkerAction.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x1404F878C (PopUserShutdownCancelled.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1404F9A14 (PopRecalculateCBTriggerLevels.c)
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 *     PopRtcWakeSettingCallback @ 0x140530E00 (PopRtcWakeSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x14053D7D0 (PopHardDiskPowerSettingCallback.c)
 *     PopConsoleLockPowerSettingCallback @ 0x14053D938 (PopConsoleLockPowerSettingCallback.c)
 *     PdcPoReportButton @ 0x14053DA58 (PdcPoReportButton.c)
 *     PopSleepPowerSettingCallback @ 0x14053DAAC (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x14053DD44 (PopPowerButtonSettingCallback.c)
 *     PopBatteryAlarmPowerSettingCallback @ 0x14053DF0C (PopBatteryAlarmPowerSettingCallback.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     PopPdcRegister @ 0x1405495D4 (PopPdcRegister.c)
 *     PopDeepSleepPowerSettingCallback @ 0x14054AB4C (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14054AE3C (PopCoalescingPowerSettingCallback.c)
 *     PopAllowAwayModeSettingCallback @ 0x14054B1E4 (PopAllowAwayModeSettingCallback.c)
 *     PopWiFiInStandbyCallback @ 0x14054B42C (PopWiFiInStandbyCallback.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x14054C0D8 (PopThermalZoneAdd.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 *     PopBatteryAdd @ 0x1406367E0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406370C8 (PopBatteryUpdateCompositeInformation.c)
 *     PdcPoCurrentPdcPhase @ 0x1406376E0 (PdcPoCurrentPdcPhase.c)
 *     PdcPoQueryExpectedStandbyTime @ 0x140637838 (PdcPoQueryExpectedStandbyTime.c)
 *     PdcPoReportLidState @ 0x140637910 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerAction @ 0x140637A74 (PdcPoSetPowerAction.c)
 *     PdcPoVerifyActionPolicy @ 0x140637AD4 (PdcPoVerifyActionPolicy.c)
 *     PdcPoVerifyPowerState @ 0x140637AF4 (PdcPoVerifyPowerState.c)
 *     PopPdcCsDeviceNotification @ 0x140637B24 (PopPdcCsDeviceNotification.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140637D34 (PopPdcUpdateDeviceCompliance.c)
 *     PopThermalProcessUsermodeEvent @ 0x140637F74 (PopThermalProcessUsermodeEvent.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 *     PopUpdateOverThrottledCount @ 0x140638278 (PopUpdateOverThrottledCount.c)
 *     PopIdleAoAcDozeToS4 @ 0x14063C808 (PopIdleAoAcDozeToS4.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14063C8C8 (PopUpdateSmartUserPresencePredictions.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 */

struct _KTHREAD *PopAcquirePolicyLock()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopPolicyLock, 1u);
  result = KeGetCurrentThread();
  PopPolicyLockThread = (__int64)result;
  return result;
}
