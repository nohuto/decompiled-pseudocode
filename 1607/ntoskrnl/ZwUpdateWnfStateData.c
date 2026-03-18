/*
 * XREFs of ZwUpdateWnfStateData @ 0x14015D3C0
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1400AC82C (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x140114838 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x140131F3C (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2344 (MmMarkPhysicalMemoryAsBad.c)
 *     PopBackgroundActivityPolicyCallback @ 0x140201E64 (PopBackgroundActivityPolicyCallback.c)
 *     PopThermalStandbyNotify @ 0x1402071F0 (PopThermalStandbyNotify.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1403F0858 (PiUEventNotifyClientPendingEvent.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     PspEnforceLimits @ 0x140468418 (PspEnforceLimits.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404DF7C0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PspJobNotificationWorker @ 0x1404E3A8C (PspJobNotificationWorker.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PiUEventBroadcastEventWorker @ 0x140528030 (PiUEventBroadcastEventWorker.c)
 *     PopDispatchNotificationsToList @ 0x14052AA70 (PopDispatchNotificationsToList.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052E744 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopPerfBoostPowerRequest @ 0x140544740 (PopPerfBoostPowerRequest.c)
 *     PopUpdateConsoleDisplayState @ 0x1405477D4 (PopUpdateConsoleDisplayState.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 *     PopNetEvaluationWorkerCallback @ 0x14057C2FC (PopNetEvaluationWorkerCallback.c)
 *     PopEsUpdateSetting @ 0x1405806A0 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1405808A0 (PopEsPublishState.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580B3C (PopThermalHandlePreviousShutdown.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140581144 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061A9C8 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F89C (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E460 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E4E4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14062E62C (PiUEventSendDeviceInstallNotification.c)
 *     PiDcContainerRequiresConfiguration @ 0x14063077C (PiDcContainerRequiresConfiguration.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 *     PopUpdateOverThrottledCount @ 0x1406706C4 (PopUpdateOverThrottledCount.c)
 *     PopDiagNextCsSleepStudySession @ 0x140670804 (PopDiagNextCsSleepStudySession.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406776F4 (TtmpUpdatePrimaryDisplayWnf.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14068082C (PspSendNoWakeChargeLimitNotification.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     PopCheckShutdownMarker @ 0x1407BA97C (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUpdateWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
