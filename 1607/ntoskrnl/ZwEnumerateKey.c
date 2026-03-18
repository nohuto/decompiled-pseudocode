/*
 * XREFs of ZwEnumerateKey @ 0x14015A2C0
 * Callers:
 *     BiZwEnumerateKey @ 0x14012DF70 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1401401D0 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404D32CC (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C098 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F130 (RtlpUpdateDynamicTimeZones.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140560888 (_RtlpMuiRegLoadInstalled.c)
 *     _RegRtlEnumKey @ 0x140562664 (_RegRtlEnumKey.c)
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14056366C (EtwpEnableKeyProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x140564B18 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140564E0C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140565080 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140565368 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x140567998 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14056A904 (PopDetectSimulatedHeteroProcessors.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 *     CmDeleteKeyRecursive @ 0x140606DF0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140607BC4 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406353CC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635E44 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x140696138 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BE9C (WdipSemLoadLocalGroupPolicy.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x1407CD2D8 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index, *(_QWORD *)&KeyInformationClass);
}
