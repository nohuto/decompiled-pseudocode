/*
 * XREFs of ExRaiseAccessViolation @ 0x1406F7890
 * Callers:
 *     NtQueryObject @ 0x1404259B0 (NtQueryObject.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     KeUserModeCallback @ 0x140452450 (KeUserModeCallback.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtQuerySecurityAttributesToken @ 0x140482AD0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     NtAlpcQueryInformation @ 0x14051F860 (NtAlpcQueryInformation.c)
 *     VerifierExRaiseAccessViolation @ 0x140741BD4 (VerifierExRaiseAccessViolation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
