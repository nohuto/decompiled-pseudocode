/*
 * XREFs of _GetNextQueueWindow @ 0x1C0200FC8
 * Callers:
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     xxxSwitchToThisWindow @ 0x1C0100900 (xxxSwitchToThisWindow.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF15C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     IsWindowUnderActiveLockScreen @ 0x1C0045D40 (IsWindowUnderActiveLockScreen.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     GetWindowWorker @ 0x1C0249838 (GetWindowWorker.c)
 */

__int64 __fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // ebp
  __int64 LastTopMostWindow; // rax
  struct tagWND *v7; // r12
  __int64 TopLevelWindow; // rax
  __int64 WindowWorker; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 i; // rcx
  char v16; // di
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx

  v3 = 0;
  LastTopMostWindow = a1;
  if ( a1 || (LastTopMostWindow = GetLastTopMostWindow(0LL)) != 0 )
  {
    v7 = gspwndAltTab;
    TopLevelWindow = GetTopLevelWindow(LastTopMostWindow);
    WindowWorker = TopLevelWindow;
    v10 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v11 = *(_QWORD *)(TopLevelWindow + 88);
      if ( !v11 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        WindowWorker = *(_QWORD *)(v11 + 96);
        v10 = WindowWorker;
      }
      while ( WindowWorker )
      {
        WindowWorker = GetWindowWorker(WindowWorker, (unsigned int)(a2 != 0) + 2);
        if ( !WindowWorker )
        {
          if ( a2 )
          {
            v14 = *(_QWORD *)(v11 + 96);
            if ( (*(_WORD *)(v14 + 66) & 0x3FFF) != 0x29D )
            {
              for ( i = *(_QWORD *)(*(_QWORD *)(v14 + 88) + 96LL); i; i = *(_QWORD *)(i + 72) )
                WindowWorker = i;
            }
          }
          else
          {
            WindowWorker = *(_QWORD *)(v11 + 96);
          }
          if ( v3 )
            break;
          v3 = 1;
          if ( !WindowWorker )
            break;
        }
        if ( WindowWorker == v10 )
          break;
        if ( (struct tagWND *)WindowWorker != v7 )
        {
          v16 = *(_BYTE *)(WindowWorker + 48);
          if ( v16 >= 0
            && (*(_BYTE *)(WindowWorker + 51) & 8) == 0
            && !(unsigned int)IsWindowUnderActiveLockScreen(WindowWorker, v12, v13)
            && (*(_BYTE *)(WindowWorker + 55) & 0x10) != 0
            && !(unsigned int)GetWindowCloakState(WindowWorker) )
          {
            v17 = *(_QWORD *)(WindowWorker + 240);
            if ( !v17
              || (*(_BYTE *)(v17 + 55) & 8) == 0
              && (!a3 || (v16 & 8) == 0 && (*(_BYTE *)(WindowWorker + 44) & 0x20) == 0) )
            {
              v18 = *(_QWORD *)(WindowWorker + 104);
              v19 = WindowWorker;
              while ( v18 )
              {
                v19 = v18;
                v18 = *(_QWORD *)(v18 + 104);
              }
              if ( WindowWorker == *(_QWORD *)(v19 + 240) )
                return WindowWorker;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
