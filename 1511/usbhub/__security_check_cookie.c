/*
 * XREFs of __security_check_cookie @ 0x1C0028D40
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0004D20 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0006AFC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetD3Policy @ 0x1C0006F34 (UsbhGetD3Policy.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C00071DC (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetDeviceFlags @ 0x1C0008734 (UsbhGetDeviceFlags.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C00096A0 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhInitializeDevice @ 0x1C0009770 (UsbhInitializeDevice.c)
 *     UsbhCreateDevice @ 0x1C0009880 (UsbhCreateDevice.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0009C70 (UsbhHubSSH_PnpStart.c)
 *     UsbhFdoPower_WaitWake @ 0x1C000A640 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C000B4F0 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C000B5F4 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000B6FC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubInformation @ 0x1C000BE7C (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C000D720 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogPortInformation @ 0x1C000E9A0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhQueryBusRelations @ 0x1C0012300 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001B4B0 (UsbhSyncPowerOnPorts.c)
 *     UsbhQueryHubState @ 0x1C001C92C (UsbhQueryHubState.c)
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0022E20 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEnumChildren @ 0x1C0023290 (UsbhAcpiEnumChildren.c)
 *     DriverEntry @ 0x1C0025208 (DriverEntry.c)
 *     UsbhIsHighSpeedCapable @ 0x1C0027224 (UsbhIsHighSpeedCapable.c)
 *     UsbhGetMsOsContainerID @ 0x1C0028B78 (UsbhGetMsOsContainerID.c)
 *     __GSHandlerCheckCommon @ 0x1C0028DB0 (__GSHandlerCheckCommon.c)
 *     UsbhGetPortStatus @ 0x1C003C4F4 (UsbhGetPortStatus.c)
 *     UsbhSetPortPower @ 0x1C003CA04 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003FD6C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003FF7C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00403E0 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A368 (UsbhIoctlValidateParameters.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C004C130 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D730 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C004DEFC (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C0051140 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051680 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0054020 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054480 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054750 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0054A28 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005677C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0056820 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C00569D0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C0056C6C (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0056E94 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0057048 (UsbhPropagateUxdState.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0057610 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C00576FC (UsbhEtwLogHubException.c)
 *     MyRegQueryUlong @ 0x1C00582E4 (MyRegQueryUlong.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
