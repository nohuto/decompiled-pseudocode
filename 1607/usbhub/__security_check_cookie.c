/*
 * XREFs of __security_check_cookie @ 0x1C0029400
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002520 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0003644 (UsbhCheckHubPowerStatus.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 *     UsbhGetDeviceFlags @ 0x1C0008938 (UsbhGetDeviceFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0008AE8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetD3Policy @ 0x1C0009024 (UsbhGetD3Policy.c)
 *     UsbhCreateDevice @ 0x1C0009548 (UsbhCreateDevice.c)
 *     UsbhReset1Complete @ 0x1C0009900 (UsbhReset1Complete.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C000B2AC (UsbhGetGlobalUxdSettings.c)
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhQueryBusRelations @ 0x1C0017A30 (UsbhQueryBusRelations.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0018950 (UsbhSyncPowerOnPorts.c)
 *     UsbhEtwLogHubInformation @ 0x1C001BAA8 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C001BD40 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001C9F0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D1D0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001DC1C (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001DD90 (UsbhEtwLogDeviceDescription.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001DF80 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001E330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E450 (UsbhHubSSH_PnpStart.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E6C8 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EDC0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C001F230 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhAcpiEnumChildren @ 0x1C001F3DC (UsbhAcpiEnumChildren.c)
 *     DriverEntry @ 0x1C0026384 (DriverEntry.c)
 *     UsbhInitializeDevice @ 0x1C0026B94 (UsbhInitializeDevice.c)
 *     UsbhIsHighSpeedCapable @ 0x1C00279D4 (UsbhIsHighSpeedCapable.c)
 *     UsbhGetMsOsContainerID @ 0x1C0029238 (UsbhGetMsOsContainerID.c)
 *     __GSHandlerCheckCommon @ 0x1C0029528 (__GSHandlerCheckCommon.c)
 *     UsbhGetPortStatus @ 0x1C003C914 (UsbhGetPortStatus.c)
 *     UsbhSetPortPower @ 0x1C003CE24 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C004008C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0040714 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A768 (UsbhIoctlValidateParameters.c)
 *     QueryFeatureOverride @ 0x1C004AE68 (QueryFeatureOverride.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C004C840 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DEA0 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C004E66C (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C00517E0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D20 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0054650 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054D80 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0055058 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0056DAC (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0056E50 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0057000 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005729C (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C00574C4 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0057678 (UsbhPropagateUxdState.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0057BD4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C0057CC0 (UsbhEtwLogHubException.c)
 *     MyRegQueryUlong @ 0x1C00588A4 (MyRegQueryUlong.c)
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
