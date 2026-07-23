/*
 * XREFs of NtOpenKey @ 0x1800A6660
 * Callers:
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x1800093E0 (RtlpLookupCurDirSetting.c)
 *     RtlCapabilityCheck @ 0x18000DA00 (RtlCapabilityCheck.c)
 *     RtlpTestHookInitialize @ 0x18002AE00 (RtlpTestHookInitialize.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056FCC (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     ResCOpenRegistryKey @ 0x180059EDC (ResCOpenRegistryKey.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180070754 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180070B50 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C4C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710B4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlOpenCurrentUser @ 0x180071890 (RtlOpenCurrentUser.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A00 (RtlpLoadUserUIByPolicy.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A750 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007F100 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007F1C8 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F250 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     RtlpNtOpenKey @ 0x1800828B0 (RtlpNtOpenKey.c)
 *     RtlAreLongPathsEnabled @ 0x180082FE0 (RtlAreLongPathsEnabled.c)
 *     RXactpOpenTargetKey @ 0x1800838E4 (RXactpOpenTargetKey.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180089C28 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB24 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D6488 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800D96AC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D975C (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA380 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB260 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800DCAAC (RtlOpenModernAppOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800EF23C (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlOsDeploymentState @ 0x1800F2FC0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F3100 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F3970 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800F70F4 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x180102C84 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
