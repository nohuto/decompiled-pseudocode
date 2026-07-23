/*
 * XREFs of ExRaiseAccessViolation @ 0x1406B6180
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x14040E2E0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     NtAlpcQueryInformation @ 0x140475C40 (NtAlpcQueryInformation.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     KeUserModeCallback @ 0x1404F9110 (KeUserModeCallback.c)
 *     NtQueryObject @ 0x14051CF90 (NtQueryObject.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
