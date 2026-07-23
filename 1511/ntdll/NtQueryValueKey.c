/*
 * XREFs of NtQueryValueKey @ 0x1800A53A0
 * Callers:
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180045B3C (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 *     _ResQueryValueKey @ 0x1800491D8 (_ResQueryValueKey.c)
 *     RtlpTestHookInitialize @ 0x180054C20 (RtlpTestHookInitialize.c)
 *     WerpGlobalFlagsForProcess @ 0x18005B83C (WerpGlobalFlagsForProcess.c)
 *     RtlCapabilityCheck @ 0x18005DE30 (RtlCapabilityCheck.c)
 *     RtlpLookupCurDirSetting @ 0x18007354C (RtlpLookupCurDirSetting.c)
 *     ReadUlongFromKey @ 0x180073BF8 (ReadUlongFromKey.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007D064 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x18007D7A0 (RtlpNtQueryValueKey.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800860C8 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlInitializeRXact @ 0x180087D30 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C7AE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800C7E70 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D1398 (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800D1EFC (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800D2F4C (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetUserLocaleName @ 0x1800E6028 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x1800E6104 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800E9D00 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800EA120 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800ED74C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EtwpQueryRegString @ 0x1800F4A44 (EtwpQueryRegString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800F821C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
