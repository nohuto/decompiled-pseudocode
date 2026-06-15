/*
 * XREFs of ?TsSessionIdLogon@@YAJK@Z @ 0x18001AE14
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001BCB0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x180005D34 (WPP_SF_dd.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800198F0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800199CC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdLogon(DWORD SessionId)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  struct TSSession *v4; // rbx
  __int64 v5; // rdx
  int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  __int64 v10; // [rsp+20h] [rbp-28h]
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  struct TSSession *v12; // [rsp+58h] [rbp+10h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v2 = TsSessionFromSessionId(SessionId, 1, &v13, &v12);
  v3 = v2;
  if ( v2 == 1168 )
  {
    v3 = 0;
  }
  else if ( !v2 )
  {
    v4 = v12;
    TsSessionRefreshSessionInformation(v12);
    if ( g_bIsAoAcSystem )
    {
      v5 = *(unsigned int *)v4;
      if ( (_DWORD)v5 )
      {
        if ( !*((_QWORD *)v4 + 29) )
        {
          v11[0] = TsSessionIdDisplayNotificationCallback;
          v11[1] = v5;
          v6 = PowerSettingRegisterNotificationEx(&GUID_SESSION_DISPLAY_STATUS, v5, 2LL, v11, (char *)v4 + 232);
          if ( v6 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              v7 = (unsigned __int16)v6 | 0x80070000;
              if ( v6 <= 0 )
                v7 = v6;
              LODWORD(v10) = v7;
              WPP_SF_dd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xAu,
                &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
                *(_DWORD *)v4,
                v10);
            }
            v8 = (unsigned __int16)v6 | 0x80070000;
            if ( v6 <= 0 )
              v8 = v6;
            AudPolicyLogError("TSSession::RegisterSessionDisplayNotificationCallback", 368, v8);
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
