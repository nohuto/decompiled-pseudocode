/*
 * XREFs of RtlGetSuiteMask @ 0x18002CDC0
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180029A4C (RtlpActivateLowFragmentationHeap.c)
 *     RtlQueryResourcePolicy @ 0x180029F60 (RtlQueryResourcePolicy.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002AED8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x18002B7F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18002EE50 (RtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x18005D72C (RtlInitializeHeapManager.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18005DA38 (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpEnableParallelLoading @ 0x180072C64 (LdrpEnableParallelLoading.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089FD8 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F7470 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD80 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

__int64 RtlGetSuiteMask()
{
  __int64 result; // rax
  _BYTE v1[20]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v2; // [rsp+44h] [rbp-24h]

  if ( byte_1801534C4 )
    return (unsigned int)dword_1801534E4;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    NtQueryInformationJobObject(0LL, 39LL, v1, 32LL, 0LL);
    result = v2;
  }
  else
  {
    result = MEMORY[0x7FFE02D0];
  }
  dword_1801534E4 = result;
  byte_1801534C4 = 1;
  return result;
}
