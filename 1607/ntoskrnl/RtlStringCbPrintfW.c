/*
 * XREFs of RtlStringCbPrintfW @ 0x14000BD54
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 *     IopGetLegacyVetoListDrivers @ 0x140404424 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x140406328 (ExProcessorCounterSetCallback.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140406CC8 (EtwpGetSecurityDescriptorByGuid.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404910B8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x14049574C (EtwpCreateNtFileName.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 *     EtwpExpandFileName @ 0x1404D0974 (EtwpExpandFileName.c)
 *     PfSnOperationProcess @ 0x1404D2240 (PfSnOperationProcess.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 *     WmipInsertStaticNames @ 0x1404E79C4 (WmipInsertStaticNames.c)
 *     PopDiagTracePowerRequestCreate @ 0x140503074 (PopDiagTracePowerRequestCreate.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14050D31C (PiBuildDeviceNodeInstancePath.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     PfpSourceGetPrefetchSupport @ 0x140533B78 (PfpSourceGetPrefetchSupport.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpUnloadAttachedDriver @ 0x1405452B8 (PnpUnloadAttachedDriver.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140546A10 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpCreatePerfKeys @ 0x14055DD0C (CmpCreatePerfKeys.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14056413C (EtwpGetAutoLoggerProviderFilter.c)
 *     SepReadAndPopulateCapes @ 0x14056C24C (SepReadAndPopulateCapes.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     PpmWmiRegisterInfo @ 0x140575D18 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x14057A5A8 (SepSetSystemPaths.c)
 *     KiSynchCounterSetCallback @ 0x14064F784 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F884 (KiSynchNumaCounterSetCallback.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     sub_1406B9E20 @ 0x1406B9E20 (sub_1406B9E20.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x1407BA050 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x1407D29AC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x14014D224 (_vsnwprintf.c)
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
