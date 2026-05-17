/*
 * XREFs of NtQueryValueKey @ 0x1800A6700
 * Callers:
 *     EtwpQueryRegString @ 0x180002B3C (EtwpQueryRegString.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075CC (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x1800093F0 (RtlpLookupCurDirSetting.c)
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 *     RtlpTestHookInitialize @ 0x18002AE10 (RtlpTestHookInitialize.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056FDC (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpQueryRegistryValues @ 0x1800579F4 (RtlpQueryRegistryValues.c)
 *     _ResQueryValueKey @ 0x18005AAA8 (_ResQueryValueKey.c)
 *     LdrpQueryValueKey @ 0x1800716D4 (LdrpQueryValueKey.c)
 *     ReadUlongFromKey @ 0x18007A9C8 (ReadUlongFromKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F260 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F330 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     RtlpNtQueryValueKey @ 0x180081410 (RtlpNtQueryValueKey.c)
 *     RtlAreLongPathsEnabled @ 0x180082FF0 (RtlAreLongPathsEnabled.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180089C38 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlInitializeRXact @ 0x18008D180 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CF250 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D974C (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA2C0 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DB1A0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetUserLocaleName @ 0x1800EF2E8 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlOsDeploymentState @ 0x1800F2FC0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800F3100 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800F64AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102BB0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryValueKey()
{
  __int64 result; // rax

  result = 23LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
