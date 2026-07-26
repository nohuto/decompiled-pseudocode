/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C00ACD8C
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
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
  qword_1C0082068 = 0LL;
  qword_1C0082070 = 0LL;
  ProviderId = v3;
  v4 = EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0082040, &RegHandle);
  if ( !v4 )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v4;
}
