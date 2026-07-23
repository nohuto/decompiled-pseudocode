/*
 * XREFs of ZwEnumerateKey @ 0x14015A830
 * Callers:
 *     BiZwEnumerateKey @ 0x14012E4E0 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140140740 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404B6D6C (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C5D8 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F670 (RtlpUpdateDynamicTimeZones.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140560DC8 (_RtlpMuiRegLoadInstalled.c)
 *     _RegRtlEnumKey @ 0x140562BA4 (_RegRtlEnumKey.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140563BAC (EtwpEnableKeyProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x140565058 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14056534C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405658A8 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x140567ED8 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14056AE44 (PopDetectSimulatedHeteroProcessors.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
 *     CmDeleteKeyRecursive @ 0x140606EA4 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140607C78 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635EF8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x14069621C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BF80 (WdipSemLoadLocalGroupPolicy.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x1407CD2D8 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
