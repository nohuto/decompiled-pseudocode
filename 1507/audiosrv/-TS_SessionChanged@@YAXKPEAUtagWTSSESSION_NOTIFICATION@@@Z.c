/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002CF10
 * Callers:
 *     ServiceCtrl @ 0x18002CEA0 (ServiceCtrl.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x1800410EC (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x1800A04A4 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     WPP_SF_sd @ 0x1800A0820 (WPP_SF_sd.c)
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
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v3 = "WTS_CONSOLE_DISCONNECT";
        if ( a1 != 2 )
          v3 = "WTS_REMOTE_DISCONNECT";
        WPP_SF_sd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 42, a1, (_DWORD)v3, dwSessionId);
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
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                45LL,
                &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogon(dwSessionId);
            break;
          case 6:
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                46LL,
                &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogoff(dwSessionId);
            break;
          case 11:
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                44LL,
                &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v4 = "WTS_CONSOLE_CONNECT";
    if ( a1 != 1 )
      v4 = "WTS_REMOTE_CONNECT";
    WPP_SF_sd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 43, a1, (_DWORD)v4, dwSessionId);
  }
  TsSessionIdConnect(dwSessionId);
}
