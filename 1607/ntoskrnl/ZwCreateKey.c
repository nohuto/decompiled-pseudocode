/*
 * XREFs of ZwCreateKey @ 0x14015A590
 * Callers:
 *     BiZwCreateKey @ 0x14012E604 (BiZwCreateKey.c)
 *     PopOpenKey @ 0x140132AA4 (PopOpenKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14022FCB8 (OpenOrCreateKeyWithFlags.c)
 *     BapdRegisterSiData @ 0x1403D2D20 (BapdRegisterSiData.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403D3384 (BapdpWriteEventDataToRegistry.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403F52A0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404A4ED0 (CmpQueryHiveRedirectionFileList.c)
 *     PspReadUserQuotaLimits @ 0x1404BB16C (PspReadUserQuotaLimits.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404D1CE8 (ExpPutLicenseDataIntoRegistry.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DD8A0 (_RegRtlCreateKeyTransacted.c)
 *     RtlpGetRegistryHandle @ 0x1404DDD78 (RtlpGetRegistryHandle.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     PopInitializePowerPolicySimulate @ 0x140547B88 (PopInitializePowerPolicySimulate.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     ArbBuildAssignmentOrdering @ 0x140558F8C (ArbBuildAssignmentOrdering.c)
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x14055D330 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x14055DC2C (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057CD74 (CmpUpdateReorganizeRegistryValues.c)
 *     CMFRegisterEventTime @ 0x14057E32C (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140580124 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmInitializeProcessor @ 0x14060397C (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x140607008 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x1406118C0 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140614980 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     KsepRegistryCreateKey @ 0x140653F90 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x14069A060 (SmcCacheManagerStart.c)
 *     ExpUpdateComPlusPackage @ 0x1406AC7A8 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406AEB70 (ExUpdateOsPfnInRegistry.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AEE8C (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     WheapWriteTriageDump @ 0x1406BB330 (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x140727C70 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     BapdpRegisterBitlockerStatus @ 0x1407A9930 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x1407A9A68 (BapdpRegisterResumeInformation.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x1407B90B4 (PiLastGoodCopyKeyContents.c)
 *     SepSecureBootSetRegistryKey @ 0x1407B9D80 (SepSecureBootSetRegistryKey.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1407BADF8 (ArbInitializeOsInaccessibleRange.c)
 *     SaveNodeDistanceInformation @ 0x1407BC5F4 (SaveNodeDistanceInformation.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x1407CD104 (InitSafeBoot.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407CD76C (CmpInitializeSystemBiosInformation.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1407D1E1C (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x1407D1F6C (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x1407D215C (BapdpRegisterWmdResult.c)
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
