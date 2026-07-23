/*
 * XREFs of NtQueryValueKey @ 0x1800A6700
 * Callers:
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x1800093E0 (RtlpLookupCurDirSetting.c)
 *     RtlCapabilityCheck @ 0x18000DA00 (RtlCapabilityCheck.c)
 *     RtlpTestHookInitialize @ 0x18002AE00 (RtlpTestHookInitialize.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056FCC (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 *     _ResQueryValueKey @ 0x18005AA98 (_ResQueryValueKey.c)
 *     LdrpQueryValueKey @ 0x1800716C4 (LdrpQueryValueKey.c)
 *     ReadUlongFromKey @ 0x18007A9B8 (ReadUlongFromKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F250 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     RtlpNtQueryValueKey @ 0x180081400 (RtlpNtQueryValueKey.c)
 *     RtlAreLongPathsEnabled @ 0x180082FE0 (RtlAreLongPathsEnabled.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180089C28 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlInitializeRXact @ 0x18008D170 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D880 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CF250 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D980C (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA380 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB260 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetUserLocaleName @ 0x1800EF2E8 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlOsDeploymentState @ 0x1800F2FC0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F3100 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800F64AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102AF0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
