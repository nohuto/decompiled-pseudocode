/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C00CD6F8
 * Callers:
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
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
  qword_1C0046860 = 0LL;
  qword_1C0046858 = (__int64)EnableDxgkrnlTelemetryProviderCallback;
  ProviderId = v3;
  v4 = EtwRegister(&ProviderId, TlgEnableCallback, &::hProvider, &RegHandle);
  if ( !v4 )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v4;
}
