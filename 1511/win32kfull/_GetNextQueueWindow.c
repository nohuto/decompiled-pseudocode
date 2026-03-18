/*
 * XREFs of _GetNextQueueWindow @ 0x1C0201368
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000C140 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF80C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0090C38 (IsWindowUnderActiveLockScreen.c)
 *     GetLastTopMostWindow @ 0x1C00C7B04 (GetLastTopMostWindow.c)
 *     GetWindowWorker @ 0x1C02497F8 (GetWindowWorker.c)
 */

__int64 __fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // esi
  __int64 LastTopMostWindow; // rax
  struct tagWND *v7; // r15
  __int64 NonChildAncestor; // rax
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
    NonChildAncestor = GetNonChildAncestor(LastTopMostWindow);
    WindowWorker = NonChildAncestor;
    v10 = NonChildAncestor;
    if ( NonChildAncestor )
    {
      v11 = *(_QWORD *)(NonChildAncestor + 88);
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
