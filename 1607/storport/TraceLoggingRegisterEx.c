/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C005C2C8
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C00578F0 (StorpRegisterTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
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
  qword_1C004F038 = 0LL;
  qword_1C004F040 = 0LL;
  ProviderId = v3;
  v4 = EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C004F010, &qword_1C004F030);
  if ( !v4 )
    EtwSetInformation(qword_1C004F030, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v4;
}
