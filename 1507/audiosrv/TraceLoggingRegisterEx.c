/*
 * XREFs of TraceLoggingRegisterEx @ 0x18004272C
 * Callers:
 *     DllMain @ 0x18006B014 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  __int128 v3; // xmm0
  int v4; // eax
  TLG_STATUS v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_OWORD *)off_1800E7508 - 1);
  qword_1800E7528 = 0LL;
  qword_1800E7530 = 0LL;
  v7 = v3;
  v4 = EtwEventRegister(&v7, TlgEnableCallback, &dword_1800E7500, &qword_1800E7520);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(qword_1800E7520, 2LL, off_1800E7508, *(unsigned __int16 *)off_1800E7508);
  }
  return v5;
}
