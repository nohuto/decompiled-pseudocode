/*
 * XREFs of RtlStringCbPrintfW @ 0x14009C26C
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     WmipInsertStaticNames @ 0x1403D2DE0 (WmipInsertStaticNames.c)
 *     PopDiagTracePowerRequestCreate @ 0x140454D34 (PopDiagTracePowerRequestCreate.c)
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14046E010 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x14046F6CC (IopGetLegacyVetoListDrivers.c)
 *     PnpUnloadAttachedDriver @ 0x140493B70 (PnpUnloadAttachedDriver.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 *     PfSnOperationProcess @ 0x1404C470C (PfSnOperationProcess.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     SepReadAndPopulateCapes @ 0x1404C5E6C (SepReadAndPopulateCapes.c)
 *     EtwpExpandFileName @ 0x1404C72C8 (EtwpExpandFileName.c)
 *     EtwpCreateNtFileName @ 0x1404C9BB8 (EtwpCreateNtFileName.c)
 *     ExProcessorCounterSetCallback @ 0x1404D07B8 (ExProcessorCounterSetCallback.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 *     PfpSourceGetPrefetchSupport @ 0x1404EB13C (PfpSourceGetPrefetchSupport.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404F0FA8 (PiBuildDeviceNodeInstancePath.c)
 *     PiNormalizeDeviceText @ 0x1404F1278 (PiNormalizeDeviceText.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14050B564 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpCreatePerfKeys @ 0x14051F758 (CmpCreatePerfKeys.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140527730 (EtwpGetAutoLoggerProviderFilter.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     PpmWmiRegisterInfo @ 0x14054045C (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x140545620 (SepSetSystemPaths.c)
 *     KiSynchCounterSetCallback @ 0x14061A46C (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14061A56C (KiSynchNumaCounterSetCallback.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 *     sub_14067792C @ 0x14067792C (sub_14067792C.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14068C52C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14068E814 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140691D48 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     MiSystemPartitionObjectCreate @ 0x14075A6E8 (MiSystemPartitionObjectCreate.c)
 *     PoFxRegisterDebugger @ 0x140766334 (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x14076FAA8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x14078680C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
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
