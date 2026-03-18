/*
 * XREFs of ZwCreateKey @ 0x14015A020
 * Callers:
 *     BiZwCreateKey @ 0x14012E094 (BiZwCreateKey.c)
 *     PopOpenKey @ 0x140132534 (PopOpenKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14022FE8C (OpenOrCreateKeyWithFlags.c)
 *     BapdRegisterSiData @ 0x1403D2D20 (BapdRegisterSiData.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403D3384 (BapdpWriteEventDataToRegistry.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403F63DC (ExpWnfGetNameStoreRegistryRoot.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14049C69C (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x14049CE58 (CmpAddToHiveFileList.c)
 *     PspReadUserQuotaLimits @ 0x1404D7B68 (PspReadUserQuotaLimits.c)
 *     IopOpenRegistryKey @ 0x1404E6780 (IopOpenRegistryKey.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404EFCCC (ExpPutLicenseDataIntoRegistry.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404FA914 (_RegRtlCreateKeyTransacted.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 *     IopCreateRegistryKeyEx @ 0x1405391F8 (IopCreateRegistryKeyEx.c)
 *     PopInitializePowerPolicySimulate @ 0x140547648 (PopInitializePowerPolicySimulate.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     ArbBuildAssignmentOrdering @ 0x140558A4C (ArbBuildAssignmentOrdering.c)
 *     CmSetAcpiHwProfile @ 0x14055B9E8 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x14055CDF0 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x14055D6EC (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057C8C8 (CmpUpdateReorganizeRegistryValues.c)
 *     CMFRegisterEventTime @ 0x14057DE80 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14057FC78 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmInitializeProcessor @ 0x1406038C8 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x140606F54 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x14061180C (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1406148CC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     KsepRegistryCreateKey @ 0x140653EAC (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x140669ED4 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x140699F7C (SmcCacheManagerStart.c)
 *     ExpUpdateComPlusPackage @ 0x1406AC670 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406AEA38 (ExUpdateOsPfnInRegistry.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
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

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
