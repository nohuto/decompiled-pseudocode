/*
 * XREFs of TraceLoggingRegisterEx @ 0x14000197C
 * Callers:
 *     wmain @ 0x14000135C (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
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

  v3 = *((_OWORD *)off_140024028 - 1);
  qword_140024048 = 0LL;
  qword_140024050 = 0LL;
  v7 = v3;
  v4 = EtwEventRegister(&v7, TlgEnableCallback, &dword_140024020, &qword_140024040);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(qword_140024040, 2LL, off_140024028, *(unsigned __int16 *)off_140024028);
  }
  return v5;
}
