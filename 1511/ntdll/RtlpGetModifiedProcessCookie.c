/*
 * XREFs of RtlpGetModifiedProcessCookie @ 0x18004BF78
 * Callers:
 *     RtlInitializeHeapManager @ 0x18004BCAC (RtlInitializeHeapManager.c)
 *     RtlpReportHeapFailure @ 0x1800F223C (RtlpReportHeapFailure.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 */

unsigned __int64 RtlpGetModifiedProcessCookie()
{
  unsigned int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  ProcessInformation = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  else
    return (2147483629 * (unsigned __int64)ProcessInformation + 2147483587) % 0x7FFFFFFF;
}
