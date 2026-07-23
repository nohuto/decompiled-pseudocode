/*
 * XREFs of ZwCreateKey @ 0x14017F390
 * Callers:
 *     BiZwCreateKey @ 0x14014FE68 (BiZwCreateKey.c)
 *     PopOpenKey @ 0x14015A780 (PopOpenKey.c)
 *     sub_140265F48 @ 0x140265F48 (sub_140265F48.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403F68B8 (BapdpWriteEventDataToRegistry.c)
 *     BapdRegisterSiData @ 0x1403F6D18 (BapdRegisterSiData.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DE7D8 (_RegRtlCreateKeyTransacted.c)
 *     IopCreateRegistryKeyEx @ 0x1404E7078 (IopCreateRegistryKeyEx.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404EC358 (CmpQueryHiveRedirectionFileList.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404FE6FC (ExpWnfGetNameStoreRegistryRoot.c)
 *     IopOpenRegistryKey @ 0x140539BE4 (IopOpenRegistryKey.c)
 *     PspReadUserQuotaLimits @ 0x140543E3C (PspReadUserQuotaLimits.c)
 *     sub_14055A6D8 @ 0x14055A6D8 (sub_14055A6D8.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x140583C84 (PopInitializePowerPolicySimulate.c)
 *     ArbBuildAssignmentOrdering @ 0x14059E96C (ArbBuildAssignmentOrdering.c)
 *     CmSetAcpiHwProfile @ 0x1405A2B5C (CmSetAcpiHwProfile.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x1405A4030 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405BF084 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405BF98C (CmpUpdateReorganizeRegistryValues.c)
 *     CMFRegisterEventTime @ 0x1405C0698 (CMFRegisterEventTime.c)
 *     CmInitializeProcessor @ 0x14065B694 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x14065ED5C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140665478 (CmpDoReDoCreateKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     KsepRegistryCreateKey @ 0x14069D9B4 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x1406B0294 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x1406DB050 (SmcCacheManagerStart.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406ECA08 (ExUpdateOsPfnInRegistry.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ExpUpdateComPlusPackage @ 0x1406EF464 (ExpUpdateComPlusPackage.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 *     VfZwCreateKey @ 0x140755864 (VfZwCreateKey.c)
 *     LogFwpRegisterWorker @ 0x14075EBF0 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     sub_1407CF6FC @ 0x1407CF6FC (sub_1407CF6FC.c)
 *     SepSecureBootSetRegistryKey @ 0x1407DD218 (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterBitlockerStatus @ 0x1407DD2A0 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x1407DD3D8 (BapdpRegisterResumeInformation.c)
 *     PfpParametersInitialize @ 0x1407DEF34 (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x1407E43B4 (PiLastGoodCopyKeyContents.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1407E629C (ArbInitializeOsInaccessibleRange.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1407F7DAC (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x1407F80B8 (InitSafeBoot.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407F8518 (CmpInitializeSystemBiosInformation.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1407FC390 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x1407FC4E0 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x1407FC6D0 (BapdpRegisterWmdResult.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
