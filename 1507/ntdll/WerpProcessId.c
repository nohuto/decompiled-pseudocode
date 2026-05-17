/*
 * XREFs of WerpProcessId @ 0x180045EA0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180044890 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 */

__int64 __fastcall WerpProcessId(void *a1)
{
  NTSTATUS InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
