/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x18002CD70
 * Callers:
 *     RtlGetNtProductType @ 0x18002CD30 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     RtlIsMultiSessionSku @ 0x180072070 (RtlIsMultiSessionSku.c)
 *     RtlGetActiveConsoleId @ 0x1800863A0 (RtlGetActiveConsoleId.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1800EEE80 (RtlGetConsoleSessionForegroundProcessId.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  ULONG result; // eax
  ULONG JobObjectInformation[8]; // [rsp+30h] [rbp-38h] BYREF

  result = dword_18014FDE8;
  if ( dword_18014FDE8 == -1 )
  {
    result = 0;
    if ( !LdrpIsSecureProcess )
    {
      NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x20u, 0LL);
      result = JobObjectInformation[0];
    }
    dword_18014FDE8 = result;
  }
  return result;
}
