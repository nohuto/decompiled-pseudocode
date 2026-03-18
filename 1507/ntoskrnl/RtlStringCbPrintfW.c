/*
 * XREFs of RtlStringCbPrintfW @ 0x1400CEF64
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x1404AC9D0 (EtwpCreateNtFileName.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D0148 (IopGetLegacyVetoListDrivers.c)
 *     WmipInsertStaticNames @ 0x1404D2380 (WmipInsertStaticNames.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404D2714 (EtwpGetSecurityDescriptorByGuid.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     ExProcessorCounterSetCallback @ 0x1404FA400 (ExProcessorCounterSetCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x1405395A8 (PnpUnloadAttachedDriver.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 *     EtwpExpandFileName @ 0x14055903C (EtwpExpandFileName.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     PfpSourceGetPrefetchSupport @ 0x14055C83C (PfpSourceGetPrefetchSupport.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140582B84 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405945D0 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x1405A4110 (CmpCreatePerfKeys.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PpmWmiRegisterInfo @ 0x1405B75E8 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1405BC640 (SepSetSystemPaths.c)
 *     KiSynchCounterSetCallback @ 0x140698A90 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140698B8C (KiSynchNumaCounterSetCallback.c)
 *     PfSnOperationProcess @ 0x1406AFE3C (PfSnOperationProcess.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     sub_1406FC0FC @ 0x1406FC0FC (sub_1406FC0FC.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14070C8A4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14070E32C (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140711860 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
 *     CreateSystemRootLink @ 0x1407E59E8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x1407FC9D8 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x140171A38 (_vsnwprintf.c)
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
