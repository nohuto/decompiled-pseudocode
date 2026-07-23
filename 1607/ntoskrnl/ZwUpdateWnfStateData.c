/*
 * XREFs of ZwUpdateWnfStateData @ 0x14015D930
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1400AAD94 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x140114DA8 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x1401324AC (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     PopBackgroundActivityPolicyCallback @ 0x140201C90 (PopBackgroundActivityPolicyCallback.c)
 *     PopThermalStandbyNotify @ 0x14020701C (PopThermalStandbyNotify.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     PspEnforceLimits @ 0x1404672E8 (PspEnforceLimits.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14048A778 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14048AAD0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404C2DC4 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PspJobNotificationWorker @ 0x1404C6744 (PspJobNotificationWorker.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PiUEventBroadcastEventWorker @ 0x140528570 (PiUEventBroadcastEventWorker.c)
 *     PopDispatchNotificationsToList @ 0x14052B6C0 (PopDispatchNotificationsToList.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052EC84 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopPerfBoostPowerRequest @ 0x140544C80 (PopPerfBoostPowerRequest.c)
 *     PopUpdateConsoleDisplayState @ 0x140547D14 (PopUpdateConsoleDisplayState.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     PopNetEvaluationWorkerCallback @ 0x14057C7A8 (PopNetEvaluationWorkerCallback.c)
 *     PopEsUpdateSetting @ 0x140580B4C (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x140580D4C (PopEsPublishState.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580FE8 (PopThermalHandlePreviousShutdown.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405815F0 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061AA7C (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F950 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E514 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E598 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14062E6E0 (PiUEventSendDeviceInstallNotification.c)
 *     PiDcContainerRequiresConfiguration @ 0x140630830 (PiDcContainerRequiresConfiguration.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 *     PopUpdateOverThrottledCount @ 0x1406707A8 (PopUpdateOverThrottledCount.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406708E8 (PopDiagNextCsSleepStudySession.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406777D8 (TtmpUpdatePrimaryDisplayWnf.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140680910 (PspSendNoWakeChargeLimitNotification.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     PopCheckShutdownMarker @ 0x1407BA97C (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
