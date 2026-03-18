/*
 * XREFs of __security_check_cookie @ 0x1C0029D80
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0001EB0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0002320 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0004D70 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhUpdateUxdSettings @ 0x1C0005860 (UsbhUpdateUxdSettings.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0005CB4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetD3Policy @ 0x1C00060F4 (UsbhGetD3Policy.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C000639C (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetDeviceFlags @ 0x1C0006AA0 (UsbhGetDeviceFlags.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhCreateDevice @ 0x1C000A574 (UsbhCreateDevice.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhQueryBusRelations @ 0x1C00158F0 (UsbhQueryBusRelations.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0017580 (UsbhSyncPowerOnPorts.c)
 *     UsbhEtwLogHubInformation @ 0x1C0019A0C (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0019B00 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C0019C30 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogPortInformation @ 0x1C001AEB0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001BF04 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001C020 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001C128 (UsbhEtwLogDeviceDescription.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001C3D0 (UsbhFdoPower_WaitWake.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001C900 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEnumChildren @ 0x1C001CD70 (UsbhAcpiEnumChildren.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001D890 (UsbhHubSSH_PnpStart.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E054 (UsbhEtwLogHubPastExceptions.c)
 *     DriverEntry @ 0x1C00263A0 (DriverEntry.c)
 *     UsbhInitializeDevice @ 0x1C0026B6C (UsbhInitializeDevice.c)
 *     UsbhIsHighSpeedCapable @ 0x1C00281F4 (UsbhIsHighSpeedCapable.c)
 *     UsbhGetMsOsContainerID @ 0x1C0029BB8 (UsbhGetMsOsContainerID.c)
 *     __GSHandlerCheckCommon @ 0x1C0029DF0 (__GSHandlerCheckCommon.c)
 *     UsbhGetPortStatus @ 0x1C003C2C8 (UsbhGetPortStatus.c)
 *     UsbhSetPortPower @ 0x1C003C7D4 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003FB3C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00401C4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetBillboardInfo @ 0x1C00434A0 (UsbhGetBillboardInfo.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A218 (UsbhIoctlValidateParameters.c)
 *     QueryFeatureOverride @ 0x1C004A8D4 (QueryFeatureOverride.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C004C1D0 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004D7D0 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C004DF9C (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051720 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0054050 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00544B0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00547D0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0054AE8 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0056604 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C00566A8 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0056858 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C0056AF4 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0056D1C (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0056ED0 (UsbhPropagateUxdState.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C00574A0 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005758C (UsbhEtwLogHubException.c)
 *     MyRegQueryUlong @ 0x1C0058174 (MyRegQueryUlong.c)
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
