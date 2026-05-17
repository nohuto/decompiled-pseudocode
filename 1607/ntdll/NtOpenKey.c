/*
 * XREFs of NtOpenKey @ 0x1800A6660
 * Callers:
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075CC (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x1800093F0 (RtlpLookupCurDirSetting.c)
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 *     RtlpTestHookInitialize @ 0x18002AE10 (RtlpTestHookInitialize.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056FDC (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x1800579F4 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     ResCOpenRegistryKey @ 0x180059EEC (ResCOpenRegistryKey.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180070764 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180070B60 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlOpenCurrentUser @ 0x1800718A0 (RtlOpenCurrentUser.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A10 (RtlpLoadUserUIByPolicy.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A760 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007F110 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007F1D8 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F260 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     RtlpNtOpenKey @ 0x1800828C0 (RtlpNtOpenKey.c)
 *     RtlAreLongPathsEnabled @ 0x180082FF0 (RtlAreLongPathsEnabled.c)
 *     RXactpOpenTargetKey @ 0x1800838F4 (RXactpOpenTargetKey.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180089C38 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB34 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D63C8 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800D95EC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D969C (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA2C0 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB1A0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800DC9EC (RtlOpenModernAppOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800EF23C (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlOsDeploymentState @ 0x1800F2FC0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F3100 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800F70F4 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x180102D44 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKey()
{
  __int64 result; // rax

  result = 18LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
