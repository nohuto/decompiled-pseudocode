/*
 * XREFs of ZwUpdateWnfStateData @ 0x140182610
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x14006D85C (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x1401486FC (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x140157A80 (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140213164 (MmMarkPhysicalMemoryAsBad.c)
 *     PopThermalStandbyNotify @ 0x14023CAA4 (PopThermalStandbyNotify.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404090C4 (DbgkpStartSystemErrorHandler.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14045F91C (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PspEnforceLimits @ 0x140506688 (PspEnforceLimits.c)
 *     PiUEventBroadcastEventWorker @ 0x14051CD24 (PiUEventBroadcastEventWorker.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140537028 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PopDispatchNotificationsToList @ 0x1405464FC (PopDispatchNotificationsToList.c)
 *     PspJobNotificationWorker @ 0x140554D90 (PspJobNotificationWorker.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PopEsWorker @ 0x140581C48 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14058201C (PopEsUpdateState.c)
 *     PopUpdateConsoleDisplayState @ 0x140583A58 (PopUpdateConsoleDisplayState.c)
 *     PopPerfBoostPowerRequest @ 0x14058420C (PopPerfBoostPowerRequest.c)
 *     PiDcContainerRequiresConfiguration @ 0x140584570 (PiDcContainerRequiresConfiguration.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14058DFD4 (PiUEventSendDeviceInstallNotification.c)
 *     PopThermalHandlePreviousShutdown @ 0x14059A040 (PopThermalHandlePreviousShutdown.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     PopEsUpdateSetting @ 0x1405C1768 (PopEsUpdateSetting.c)
 *     FsRtlpHeatRegisterVolume @ 0x14066E590 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14067EDA8 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14067EE2C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopUpdateOverThrottledCount @ 0x1406B837C (PopUpdateOverThrottledCount.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406C4A58 (PspSendNoWakeChargeLimitNotification.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
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
