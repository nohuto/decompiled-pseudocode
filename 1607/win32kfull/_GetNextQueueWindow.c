/*
 * XREFs of _GetNextQueueWindow @ 0x1C01F866C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000D420 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     GetLastTopMostWindow @ 0x1C00A8B9C (GetLastTopMostWindow.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C01282BC (IsWindowUnderActiveLockScreen.c)
 *     GetWindowWorker @ 0x1C0245B20 (GetWindowWorker.c)
 */

__int64 __fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // esi
  __int64 LastTopMostWindow; // rax
  struct tagWND *v7; // r15
  __int64 TopLevelWindow; // rax
  __int64 WindowWorker; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx

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
            v12 = *(_QWORD *)(v11 + 96);
            if ( (*(_WORD *)(v12 + 66) & 0x3FFF) != 0x29D )
            {
              for ( i = *(_QWORD *)(*(_QWORD *)(v12 + 88) + 96LL); i; i = *(_QWORD *)(i + 72) )
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
        if ( (struct tagWND *)WindowWorker != v7
          && *(char *)(WindowWorker + 48) >= 0
          && (*(_BYTE *)(WindowWorker + 51) & 8) == 0
          && !(unsigned int)IsWindowUnderActiveLockScreen(WindowWorker)
          && (*(_BYTE *)(WindowWorker + 55) & 0x10) != 0
          && !(unsigned int)GetWindowCloakState(WindowWorker) )
        {
          v14 = *(_QWORD *)(WindowWorker + 240);
          if ( !v14
            || (*(_BYTE *)(v14 + 55) & 8) == 0
            && (!a3 || (*(_BYTE *)(WindowWorker + 48) & 8) == 0 && (*(_BYTE *)(WindowWorker + 44) & 0x20) == 0) )
          {
            v15 = *(_QWORD *)(WindowWorker + 104);
            v16 = WindowWorker;
            while ( v15 )
            {
              v16 = v15;
              v15 = *(_QWORD *)(v15 + 104);
            }
            if ( WindowWorker == *(_QWORD *)(v16 + 240) )
              return WindowWorker;
          }
        }
      }
    }
  }
  return 0LL;
}
