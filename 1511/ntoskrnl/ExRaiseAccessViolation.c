/*
 * XREFs of ExRaiseAccessViolation @ 0x140673340
 * Callers:
 *     KeUserModeCallback @ 0x1403F17A0 (KeUserModeCallback.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140433870 (NtQuerySecurityAttributesToken.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     NtAlpcQueryInformation @ 0x14048BF30 (NtAlpcQueryInformation.c)
 *     VerifierExRaiseAccessViolation @ 0x1406C03E0 (VerifierExRaiseAccessViolation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
