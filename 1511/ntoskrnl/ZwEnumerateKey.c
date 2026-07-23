/*
 * XREFs of ZwEnumerateKey @ 0x140150C60
 * Callers:
 *     BiZwEnumerateKey @ 0x14011BB9C (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14013A934 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404AE068 (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140514214 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     CmpGetAcpiProfileInformation @ 0x14051D474 (CmpGetAcpiProfileInformation.c)
 *     PiDcInitUpdateProperties @ 0x1405247C4 (PiDcInitUpdateProperties.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 *     _RegRtlEnumKey @ 0x140531B40 (_RegRtlEnumKey.c)
 *     WdipSemLoadNextEndEvent @ 0x140532BD0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140532EC4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140533138 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x1405343A4 (NtLockProductActivationKeys.c)
 *     PopConfigureHeteroProcessors @ 0x1405376F8 (PopConfigureHeteroProcessors.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140539304 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14053BBF4 (RtlpUpdateDynamicTimeZones.c)
 *     CmDeleteKeyRecursive @ 0x1405E76E0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1405E84B0 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14065D05C (WdipSemLoadLocalGroupPolicy.c)
 *     VfZwEnumerateKey @ 0x1406D233C (VfZwEnumerateKey.c)
 *     PipInitDeviceOverrideCache @ 0x140753200 (PipInitDeviceOverrideCache.c)
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
