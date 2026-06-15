/*
 * XREFs of ?TsSessionIdLogon@@YAJK@Z @ 0x18003E6B0
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180030040 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003EEF4 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 */

__int64 __fastcall TsSessionIdLogon(DWORD a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  struct TSSession *v4; // rbx
  __int64 v6; // rdx
  signed int v7; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  struct TSSession *v9; // [rsp+58h] [rbp+10h] BYREF
  void *v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v2 = TsSessionFromSessionId(a1, 1, &v10, &v9);
  v3 = v2;
  if ( v2 == 1168 )
  {
    v3 = 0;
  }
  else if ( !v2 )
  {
    v4 = v9;
    TsSessionRefreshSessionInformation(v9);
    if ( g_bIsAoAcSystem != v3 )
    {
      v6 = *(unsigned int *)v4;
      if ( (_DWORD)v6 )
      {
        if ( !*((_QWORD *)v4 + 29) )
        {
          v8[0] = TsSessionIdDisplayNotificationCallback;
          v8[1] = v6;
          v7 = PowerSettingRegisterNotificationEx(&GUID_SESSION_DISPLAY_STATUS, v6, 2LL, v8, (char *)v4 + 232);
          if ( v7 )
          {
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              if ( v7 > 0 )
                v7 = (unsigned __int16)v7 | 0x80070000;
              WPP_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                10LL,
                &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
                *(unsigned int *)v4,
                v7);
            }
          }
        }
      }
    }
    if ( !*((_DWORD *)v4 + 1) )
      TsSessionNewPrimaryConsoleAudioSession(v4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v3;
}
