/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C0050C58
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C004C914 (StorpRegisterTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v3; // xmm0
  TLG_STATUS v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (GUID)*((_OWORD *)EventInformation - 1);
  qword_1C0044078 = 0LL;
  qword_1C0044080 = 0LL;
  ProviderId = v3;
  v4 = EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0044050, &qword_1C0044070);
  if ( !v4 )
    EtwSetInformation(qword_1C0044070, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v4;
}
