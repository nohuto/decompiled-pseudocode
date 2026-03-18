/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C0044CD8
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0041798 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
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
  qword_1C0027038 = 0LL;
  qword_1C0027040 = 0LL;
  ProviderId = v3;
  v4 = EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0027010, &RegHandle);
  if ( !v4 )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  return v4;
}
