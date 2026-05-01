/*
 * XREFs of TraceLoggingRegisterEx @ 0x18002A778
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
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

  v3 = (GUID)*((_OWORD *)off_180071068 - 1);
  qword_180071088 = 0LL;
  qword_180071090 = 0LL;
  ProviderId = v3;
  v4 = EventRegister(&ProviderId, TlgEnableCallback, &dword_180071060, &RegHandle);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(RegHandle, 2LL, off_180071068, *(unsigned __int16 *)off_180071068);
  }
  return v5;
}
