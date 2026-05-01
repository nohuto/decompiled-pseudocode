/*
 * XREFs of TraceLoggingRegisterEx @ 0x1800072E8
 * Callers:
 *     DllMain @ 0x18000C8A8 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v3; // xmm0
  signed int v4; // eax
  TLG_STATUS v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (GUID)*((_OWORD *)off_180024038 - 1);
  qword_180024058 = 0LL;
  qword_180024060 = 0LL;
  ProviderId = v3;
  v4 = EventRegister(&ProviderId, TlgEnableCallback, &dword_180024030, &RegHandle);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(RegHandle, 2LL, off_180024038, *(unsigned __int16 *)off_180024038);
  }
  return v5;
}
