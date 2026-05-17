/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x18002CD80
 * Callers:
 *     RtlGetNtProductType @ 0x18002CD40 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 *     RtlIsMultiSessionSku @ 0x180072080 (RtlIsMultiSessionSku.c)
 *     RtlGetActiveConsoleId @ 0x1800863B0 (RtlGetActiveConsoleId.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1800EEE80 (RtlGetConsoleSessionForegroundProcessId.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 result; // rax
  _DWORD v1[8]; // [rsp+30h] [rbp-38h] BYREF

  result = (unsigned int)dword_18014FDEC;
  if ( dword_18014FDEC == -1 )
  {
    result = 0LL;
    if ( !LdrpIsSecureProcess )
    {
      NtQueryInformationJobObject(0LL, 39LL, v1, 32LL, 0LL);
      result = v1[0];
    }
    dword_18014FDEC = result;
  }
  return result;
}
