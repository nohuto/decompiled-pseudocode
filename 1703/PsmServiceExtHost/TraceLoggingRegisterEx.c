/*
 * XREFs of TraceLoggingRegisterEx @ 0x18001CA7C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001CB20 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
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

  v3 = (GUID)*((_OWORD *)off_18004D038 - 1);
  qword_18004D058 = (__int64)RmpTracingControlCallback;
  qword_18004D060 = (__int64)&RmpSvcGlobals;
  ProviderId = v3;
  v4 = EventRegister(&ProviderId, TlgEnableCallback, &dword_18004D030, &RegHandle);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(RegHandle, 2LL, off_18004D038, *(unsigned __int16 *)off_18004D038);
  }
  return v5;
}
