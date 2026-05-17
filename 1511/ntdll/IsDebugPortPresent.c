/*
 * XREFs of IsDebugPortPresent @ 0x1800D0834
 * Callers:
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 */

__int64 IsDebugPortPresent()
{
  unsigned int v0; // ebx
  __int64 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  ProcessInformation = 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDebugPort, &ProcessInformation, 8u, 0LL) >= 0 )
    return ProcessInformation != 0;
  return v0;
}
