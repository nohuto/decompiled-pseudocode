/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C0054C74
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C0050978 (StorpRegisterTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
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
  qword_1C0048058 = 0LL;
  qword_1C0048060 = 0LL;
  ProviderId = v3;
  v4 = EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0048030, &qword_1C0048050);
  if ( !v4 )
    EtwSetInformation(qword_1C0048050, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v4;
}
