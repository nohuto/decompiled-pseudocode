/*
 * XREFs of PopReleasePolicyLock @ 0x1403EB86C
 * Callers:
 *     PopSystemRequiredCallback @ 0x1400D082C (PopSystemRequiredCallback.c)
 *     PoSetUserPresent @ 0x14012DE68 (PoSetUserPresent.c)
 *     PopForceCompleteSleepStudySession @ 0x1401481F8 (PopForceCompleteSleepStudySession.c)
 *     PopThermalSxEntry @ 0x14014822C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1401486FC (PopThermalSxExit.c)
 *     PopVideoPowerSettingCallback @ 0x140162F84 (PopVideoPowerSettingCallback.c)
 *     PdcPoLowPower @ 0x14016ED90 (PdcPoLowPower.c)
 *     PopSwitchForcedShutdownSettingCallback @ 0x1401703E4 (PopSwitchForcedShutdownSettingCallback.c)
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 *     PopVideoBrightnessCapableSettingCallback @ 0x140236E98 (PopVideoBrightnessCapableSettingCallback.c)
 *     PoSetSystemState @ 0x14023AD3C (PoSetSystemState.c)
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x14055EEA4 (PopWnfAudioCallback.c)
 *     NtSetThreadExecutionState @ 0x14056371C (NtSetThreadExecutionState.c)
 *     NtInitiatePowerAction @ 0x140565308 (NtInitiatePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140566108 (PopPolicyWorkerAction.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x140566C24 (PopUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x140569744 (PoUserShutdownInitiated.c)
 *     PopDispatchFullWake @ 0x14056993C (PopDispatchFullWake.c)
 *     PopPolicyWorkerActionPromote @ 0x1405699EC (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x14056B8DC (PopRecalculateCBTriggerLevels.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140598D80 (PopHardDiskPowerSettingCallback.c)
 *     PopConsoleLockPowerSettingCallback @ 0x140598EE8 (PopConsoleLockPowerSettingCallback.c)
 *     PdcPoReportButton @ 0x140599008 (PdcPoReportButton.c)
 *     PopSleepPowerSettingCallback @ 0x14059905C (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x1405992F4 (PopPowerButtonSettingCallback.c)
 *     PopBatteryAlarmPowerSettingCallback @ 0x1405994BC (PopBatteryAlarmPowerSettingCallback.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     PopPdcRegister @ 0x1405C0D24 (PopPdcRegister.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1405C2068 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405C22C8 (PopCoalescingPowerSettingCallback.c)
 *     PopAllowAwayModeSettingCallback @ 0x1405C25FC (PopAllowAwayModeSettingCallback.c)
 *     PopRtcWakeSettingCallback @ 0x1405C2748 (PopRtcWakeSettingCallback.c)
 *     PopEsBrightnessSettingCallback @ 0x1405C27A0 (PopEsBrightnessSettingCallback.c)
 *     PopWiFiInStandbyCallback @ 0x1405C28F0 (PopWiFiInStandbyCallback.c)
 *     PopNotifyPolicyDevice @ 0x1405C3158 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x1405C343C (PopThermalZoneAdd.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 *     PopBatteryAdd @ 0x1406B6124 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1406B6CA8 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406B6F28 (PopBatteryUpdateCompositeInformation.c)
 *     PdcPoReportLidState @ 0x1406B76A0 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerAction @ 0x1406B77CC (PdcPoSetPowerAction.c)
 *     PdcPoVerifyActionPolicy @ 0x1406B782C (PdcPoVerifyActionPolicy.c)
 *     PdcPoVerifyPowerState @ 0x1406B784C (PdcPoVerifyPowerState.c)
 *     PopPdcCsDeviceNotification @ 0x1406B787C (PopPdcCsDeviceNotification.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1406B7AC0 (PopPdcUpdateDeviceCompliance.c)
 *     PopThermalProcessUsermodeEvent @ 0x1406B7D70 (PopThermalProcessUsermodeEvent.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 *     PopUpdateOverThrottledCount @ 0x1406B837C (PopUpdateOverThrottledCount.c)
 *     PopIdleAoAcDozeToS4 @ 0x1406BCE08 (PopIdleAoAcDozeToS4.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PopCheckForWork @ 0x1400D01A4 (PopCheckForWork.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 PopReleasePolicyLock()
{
  __int64 v0; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v2; // ax

  PopPolicyLockThread = 0LL;
  ExReleaseResourceLite(&PopPolicyLock);
  PopCheckForWork();
  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v2;
  if ( !v2
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  LOBYTE(v0) = 1;
  return PsBoostThreadIo((__int64)KeGetCurrentThread(), v0);
}
