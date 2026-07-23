/*
 * XREFs of RtlGetSuiteMask @ 0x18002CDB0
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A3C (RtlpActivateLowFragmentationHeap.c)
 *     RtlQueryResourcePolicy @ 0x180029F50 (RtlQueryResourcePolicy.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002AEC8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x18002B7E0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18002EE40 (RtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x18005D71C (RtlInitializeHeapManager.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18005DA28 (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpEnableParallelLoading @ 0x180072C54 (LdrpEnableParallelLoading.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089FC8 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F7470 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

ULONG RtlGetSuiteMask(void)
{
  ULONG result; // eax
  _BYTE JobObjectInformation[20]; // [rsp+30h] [rbp-38h] BYREF
  ULONG v2; // [rsp+44h] [rbp-24h]

  if ( byte_1801534C0 )
    return dword_1801534E4;
  if ( RtlGetCurrentServiceSessionId() )
  {
    NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x20u, 0LL);
    result = v2;
  }
  else
  {
    result = MEMORY[0x7FFE02D0];
  }
  dword_1801534E4 = result;
  byte_1801534C0 = 1;
  return result;
}
