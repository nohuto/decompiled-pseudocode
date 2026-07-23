/*
 * XREFs of ZwCreateKey @ 0x1401509C0
 * Callers:
 *     BiZwCreateKey @ 0x14011BBDC (BiZwCreateKey.c)
 *     PopOpenKey @ 0x140127654 (PopOpenKey.c)
 *     sub_140215DBC @ 0x140215DBC (sub_140215DBC.c)
 *     BapdRegisterSiData @ 0x1403A67F8 (BapdRegisterSiData.c)
 *     BapdpWriteEventDataToRegistry @ 0x1403A6E44 (BapdpWriteEventDataToRegistry.c)
 *     IopCreateRegistryKeyEx @ 0x1403B9D0C (IopCreateRegistryKeyEx.c)
 *     PspReadUserQuotaLimits @ 0x1403BD444 (PspReadUserQuotaLimits.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     _RegRtlCreateKeyTransacted @ 0x140444F38 (_RegRtlCreateKeyTransacted.c)
 *     sub_1404885A8 @ 0x1404885A8 (sub_1404885A8.c)
 *     IopOpenRegistryKey @ 0x14049446C (IopOpenRegistryKey.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404BF0E0 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
 *     PopInitializePowerPolicySimulate @ 0x14050C9F8 (PopInitializePowerPolicySimulate.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     CmSetAcpiHwProfile @ 0x14051CDBC (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x14051E0D8 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x14051F678 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     ArbBuildAssignmentOrdering @ 0x14052C010 (ArbBuildAssignmentOrdering.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140547FEC (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140548134 (CmpUpdateReorganizeRegistryValues.c)
 *     CMFRegisterEventTime @ 0x140549218 (CMFRegisterEventTime.c)
 *     CmInitializeProcessor @ 0x1405E474C (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x1405E7844 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x1405ED040 (CmpDoReDoCreateKey.c)
 *     KsepRegistryCreateKey @ 0x14061EC34 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x140631D64 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x140658B98 (SmcCacheManagerStart.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406693DC (ExUpdateOsPfnInRegistry.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ExpUpdateComPlusPackage @ 0x14066BDD0 (ExpUpdateComPlusPackage.c)
 *     WheapWriteTriageDump @ 0x140678AC8 (WheapWriteTriageDump.c)
 *     VfZwCreateKey @ 0x1406D1C9C (VfZwCreateKey.c)
 *     LogFwpRegisterWorker @ 0x1406DBBA8 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     SepSecureBootSetRegistryKey @ 0x140768EFC (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterBitlockerStatus @ 0x140768F84 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x1407690BC (BapdpRegisterResumeInformation.c)
 *     PfpParametersInitialize @ 0x14076A4D8 (PfpParametersInitialize.c)
 *     sub_14076D710 @ 0x14076D710 (sub_14076D710.c)
 *     PiLastGoodCopyKeyContents @ 0x14076EC0C (PiLastGoodCopyKeyContents.c)
 *     ArbInitializeOsInaccessibleRange @ 0x14077036C (ArbInitializeOsInaccessibleRange.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140781A50 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x140781CE4 (InitSafeBoot.c)
 *     CmpInitializeSystemBiosInformation @ 0x140782144 (CmpInitializeSystemBiosInformation.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1407861C4 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x140786314 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x140786504 (BapdpRegisterWmdResult.c)
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
