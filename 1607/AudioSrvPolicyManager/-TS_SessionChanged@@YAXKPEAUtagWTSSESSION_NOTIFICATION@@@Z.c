/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     WPP_SF_sd @ 0x18001A4B4 (WPP_SF_sd.c)
 *     ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18001AD60 (-RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18001B9BC (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BAAC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C420 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001CE08 (-TsSessionIdConnect@@YAXK@Z.c)
 */

void __fastcall TS_SessionChanged(unsigned int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // ebx
  TSSession *v3; // rbx
  char *v4; // rcx
  struct TSSession *v5; // rcx
  TSSession *v6; // rbx
  void *v7; // rcx
  TSSession *v8; // rbx
  const char *v9; // r9
  const char *v10; // r9
  TSSession *v11; // [rsp+48h] [rbp+18h] BYREF
  void *v12; // [rsp+50h] [rbp+20h] BYREF

  dwSessionId = a2->dwSessionId;
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
      goto LABEL_29;
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        if ( a1 == 5 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x24u,
              &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
              dwSessionId);
          }
          v11 = 0LL;
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
          if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 1, &v12, &v11) )
          {
            v8 = v11;
            TsSessionRefreshSessionInformation(v11);
            TSSession::RegisterSessionDisplayNotificationCallback(v8);
            if ( !*((_DWORD *)v8 + 1) )
              TsSessionNewPrimaryConsoleAudioSession(v8);
          }
          goto LABEL_38;
        }
        if ( a1 == 6 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x25u,
              &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
              dwSessionId);
          }
          v11 = 0LL;
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
          if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v12, &v11) )
          {
            v6 = v11;
            v7 = (void *)*((_QWORD *)v11 + 29);
            if ( v7 )
            {
              PowerSettingUnregisterNotification(v7);
              *((_QWORD *)v6 + 29) = 0LL;
            }
            *((_DWORD *)v6 + 57) = 1;
          }
          goto LABEL_38;
        }
        if ( a1 != 11 )
          return;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x23u,
            &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
            dwSessionId);
        }
        v12 = 0LL;
        v11 = 0LL;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
        if ( (unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v12, &v11) )
          goto LABEL_38;
        v3 = v11;
        v4 = (char *)v11 + 176;
        *((_DWORD *)v11 + 12) = 1;
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v4);
        v5 = v3;
        *((_DWORD *)v3 + 56) = 1065353216;
LABEL_37:
        TsSessionUpdateAudioProtocol(v5, v12, 0xFFFF);
LABEL_38:
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
        return;
      }
LABEL_29:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v9 = "WTS_REMOTE_DISCONNECT";
        if ( a1 == 2 )
          v9 = "WTS_CONSOLE_DISCONNECT";
        WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, a1, v9, a2->dwSessionId);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
      if ( (unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v12, &v11) )
        goto LABEL_38;
      v5 = v11;
      if ( !*((_DWORD *)v11 + 1) )
        goto LABEL_38;
      goto LABEL_37;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = "WTS_REMOTE_CONNECT";
    if ( a1 == 1 )
      v10 = "WTS_CONSOLE_CONNECT";
    WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, a1, v10, a2->dwSessionId);
  }
  TsSessionIdConnect(dwSessionId);
}
