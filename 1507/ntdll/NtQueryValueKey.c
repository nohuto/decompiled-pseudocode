/*
 * XREFs of NtQueryValueKey @ 0x180093A70
 * Callers:
 *     EtwpGetCpuSpeedFromRegistry @ 0x18000CAAC (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     _ResQueryValueKey @ 0x18000F500 (_ResQueryValueKey.c)
 *     RtlGetNtProductType @ 0x180042900 (RtlGetNtProductType.c)
 *     ReadUlongFromKey @ 0x180045BA8 (ReadUlongFromKey.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     LdrpQueryValueKey @ 0x1800499D4 (LdrpQueryValueKey.c)
 *     RtlCapabilityCheck @ 0x18004A7A0 (RtlCapabilityCheck.c)
 *     RtlpLookupCurDirSetting @ 0x180068300 (RtlpLookupCurDirSetting.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x180070CB0 (RtlpTestHookInitialize.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x180071620 (RtlpNtQueryValueKey.c)
 *     RtlInitializeRXact @ 0x18007F4C0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800BADC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800BB150 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800C895C (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800C941C (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800CA470 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetUserLocaleName @ 0x1800E08D4 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x1800E09B0 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800E5150 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800E5570 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800E947C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800EA410 (RtlpHpApplySegmentHeapConfigurations.c)
 *     EtwpQueryRegString @ 0x1800F5048 (EtwpQueryRegString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F8844 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  __asm { syscall; Low latency system call }
  return result;
}
