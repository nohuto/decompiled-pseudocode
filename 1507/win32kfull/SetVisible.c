/*
 * XREFs of SetVisible @ 0x1C0081FA0
 * Callers:
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00FB378 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0130A74 (xxxCleanupMotherDesktopWindow.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     zzzActiveCursorTracking @ 0x1C01E2930 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     ClrFTrueVis @ 0x1C008101C (ClrFTrueVis.c)
 *     DecVisWindows @ 0x1C0081EF0 (DecVisWindows.c)
 *     IncCompositedVisWindows @ 0x1C008217C (IncCompositedVisWindows.c)
 *     IncVisWindows @ 0x1C0082188 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C008227C (ComposeWindowIfNeeded.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     _IsWindowVisible @ 0x1C00FA288 (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E7648 (DecrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(__int64 a1, char a2)
{
  unsigned int v2; // edi
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx

  v2 = 0;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
    return 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis(a1);
    if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
      return v2;
    if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
      v6 = 0;
    SetOrClrWF(0, (_DWORD *)a1, 0xF10u, 1);
    if ( (a2 & 0x10) != 0 )
    {
      SetOrClrWF(1, (_DWORD *)a1, 0x908u, 1);
    }
    else
    {
      SetOrClrWF(0, (_DWORD *)a1, 0x908u, 1);
      if ( v6 )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 22, *(_QWORD *)a1);
    }
    if ( (*(_BYTE *)(a1 + 51) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows(a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *(_DWORD *)(a1 + 288);
      if ( (v7 & 0x8000) != 0 )
      {
        v8 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 288) = v7 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36uLL, v8, 0LL);
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
  {
    SetOrClrWF(1, (_DWORD *)a1, 0xF10u, 1);
    SetOrClrWF((a2 & 0x10) == 0, (_DWORD *)a1, 0x908u, 1);
    IncVisWindows(a1);
    IncCompositedVisWindows(a1);
    if ( (a2 & 4) == 0 && (*(_BYTE *)(a1 + 50) & 8) == 0 )
      ComposeWindowIfNeeded(a1, 0LL);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen(a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 17, *(_QWORD *)a1);
    return 1;
  }
  return v2;
}
