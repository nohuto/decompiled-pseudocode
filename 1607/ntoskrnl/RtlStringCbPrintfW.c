/*
 * XREFs of RtlStringCbPrintfW @ 0x14000C1D4
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E524C (PfSnGetPrefetchInstructions.c)
 *     IopGetLegacyVetoListDrivers @ 0x140405564 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x140407468 (ExProcessorCounterSetCallback.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140407E08 (EtwpGetSecurityDescriptorByGuid.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x140494CBC (EtwpCreateNtFileName.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     WmipSecurityMethod @ 0x1404E1DBC (WmipSecurityMethod.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404E9B2C (PiBuildDeviceNodeInstancePath.c)
 *     EtwpExpandFileName @ 0x1404EE8AC (EtwpExpandFileName.c)
 *     PfSnOperationProcess @ 0x1404F014C (PfSnOperationProcess.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 *     WmipInsertStaticNames @ 0x140504A34 (WmipInsertStaticNames.c)
 *     PopDiagTracePowerRequestCreate @ 0x14052000C (PopDiagTracePowerRequestCreate.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     PfpSourceGetPrefetchSupport @ 0x140533638 (PfpSourceGetPrefetchSupport.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpUnloadAttachedDriver @ 0x140544D78 (PnpUnloadAttachedDriver.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1405464D0 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpCreatePerfKeys @ 0x14055D7CC (CmpCreatePerfKeys.c)
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405637E0 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140563BFC (EtwpGetAutoLoggerProviderFilter.c)
 *     SepReadAndPopulateCapes @ 0x14056BD0C (SepReadAndPopulateCapes.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     PpmWmiRegisterInfo @ 0x1405757D8 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x14057A068 (SepSetSystemPaths.c)
 *     KiSynchCounterSetCallback @ 0x14064F6A0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F7A0 (KiSynchNumaCounterSetCallback.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     sub_1406B9CE8 @ 0x1406B9CE8 (sub_1406B9CE8.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0D60 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x1406D2FF8 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1406D646C (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x1407BA050 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x1407D29AC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x14014CCB4 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}
