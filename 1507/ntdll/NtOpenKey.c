/*
 * XREFs of NtOpenKey @ 0x180093A20
 * Callers:
 *     EtwpGetCpuSpeedFromRegistry @ 0x18000CAAC (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     ResCOpenRegistryKey @ 0x18000EC0C (ResCOpenRegistryKey.c)
 *     RtlGetNtProductType @ 0x180042900 (RtlGetNtProductType.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180045940 (RtlpGetDeviceFamilyInfoEnum.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180047AF0 (RtlpMuiRegLoadMachinePreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180048CF0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180048F5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800493C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlOpenCurrentUser @ 0x180049B90 (RtlOpenCurrentUser.c)
 *     RtlpLoadUserUIByPolicy @ 0x180049C70 (RtlpLoadUserUIByPolicy.c)
 *     RtlCapabilityCheck @ 0x18004A7A0 (RtlCapabilityCheck.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180053C60 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpLookupCurDirSetting @ 0x180068300 (RtlpLookupCurDirSetting.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x180070CB0 (RtlpTestHookInitialize.c)
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180071308 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtOpenKey @ 0x1800739C0 (RtlpNtOpenKey.c)
 *     RXactpOpenTargetKey @ 0x18007E484 (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800818A4 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800C5148 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800C87FC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800C88AC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800C941C (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800CA470 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800CBDFC (RtlOpenModernAppOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800D66B0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800E0828 (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x1800E09B0 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800E5150 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800E5570 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800E6110 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800E9138 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800EA0D0 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800EA410 (RtlpHpApplySegmentHeapConfigurations.c)
 *     EtwpQueryRegString @ 0x1800F5048 (EtwpQueryRegString.c)
 *     OpenOrCreateKeyWithFlags @ 0x1800F89D8 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  __asm { syscall; Low latency system call }
  return result;
}
