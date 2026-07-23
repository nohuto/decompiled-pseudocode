/*
 * XREFs of ZwUpdateWnfStateData @ 0x140153CA0
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1400CC524 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x14011AAA0 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x140127250 (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     PopThermalStandbyNotify @ 0x1401EE650 (PopThermalStandbyNotify.c)
 *     PspEnforceLimits @ 0x1403E9998 (PspEnforceLimits.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404A45AC (DbgkpStartSystemErrorHandler.c)
 *     PopDispatchNotificationsToList @ 0x1404B4D24 (PopDispatchNotificationsToList.c)
 *     PspJobNotificationWorker @ 0x1404BC1D8 (PspJobNotificationWorker.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404E1078 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404E13D0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventBroadcastEventWorker @ 0x1404E24F4 (PiUEventBroadcastEventWorker.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404E61F8 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x14050C75C (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x14050CDD8 (PopPerfBoostPowerRequest.c)
 *     PiDcContainerRequiresConfiguration @ 0x14050E088 (PiDcContainerRequiresConfiguration.c)
 *     PopThermalHandlePreviousShutdown @ 0x140530008 (PopThermalHandlePreviousShutdown.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     PopEsUpdateSetting @ 0x14054A80C (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x14054ACE4 (PopEsPublishState.c)
 *     FsRtlpHeatRegisterVolume @ 0x1405F54F4 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14060412C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406041B0 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1406042FC (PiUEventSendDeviceInstallNotification.c)
 *     PopUpdateOverThrottledCount @ 0x140638278 (PopUpdateOverThrottledCount.c)
 *     PopDiagNextSleepStudySession @ 0x14063861C (PopDiagNextSleepStudySession.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406424AC (PspSendNoWakeChargeLimitNotification.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
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
