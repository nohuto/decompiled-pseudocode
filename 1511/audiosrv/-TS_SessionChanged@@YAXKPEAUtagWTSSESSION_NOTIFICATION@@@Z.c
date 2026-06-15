/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180030040
 * Callers:
 *     ServiceCtrl @ 0x18002FFD0 (ServiceCtrl.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18003E6B0 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18009D690 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     WPP_SF_sd @ 0x18009DA0C (WPP_SF_sd.c)
 */

void __fastcall TS_SessionChanged(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // ebx
  const char *v3; // r9
  const char *v4; // r9

  dwSessionId = a2->dwSessionId;
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
LABEL_15:
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v3 = "WTS_CONSOLE_DISCONNECT";
        if ( a1 != 2 )
          v3 = "WTS_REMOTE_DISCONNECT";
        WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 42, a1, (_DWORD)v3, dwSessionId);
      }
      TsSessionIdDisconnect(dwSessionId);
      return;
    }
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        switch ( a1 )
        {
          case 5:
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                45LL,
                &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogon(dwSessionId);
            break;
          case 6:
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                46LL,
                &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogoff(dwSessionId);
            break;
          case 11:
            if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                44LL,
                &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
                dwSessionId);
            }
            TsSessionIdTerminate(dwSessionId);
            break;
        }
        return;
      }
      goto LABEL_15;
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = "WTS_CONSOLE_CONNECT";
    if ( a1 != 1 )
      v4 = "WTS_REMOTE_CONNECT";
    WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 43, a1, (_DWORD)v4, dwSessionId);
  }
  TsSessionIdConnect(dwSessionId);
}
