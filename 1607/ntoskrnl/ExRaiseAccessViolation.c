/*
 * XREFs of ExRaiseAccessViolation @ 0x1406B6048
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x14040F420 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x14041B450 (PfpPfnPrioRequest.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     NtQueryKey @ 0x14043B2A0 (NtQueryKey.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     NtAlpcQueryInformation @ 0x140476D70 (NtAlpcQueryInformation.c)
 *     NtQueryObject @ 0x1404A4B90 (NtQueryObject.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     KeUserModeCallback @ 0x140515D20 (KeUserModeCallback.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
