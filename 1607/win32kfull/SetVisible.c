/*
 * XREFs of SetVisible @ 0x1C00A0D80
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxShowOwnedWindows @ 0x1C00B29B0 (xxxShowOwnedWindows.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0126500 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012C494 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01D9000 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     DecVisWindows @ 0x1C009EA10 (DecVisWindows.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     IncCompositedVisWindows @ 0x1C00A20D8 (IncCompositedVisWindows.c)
 *     IncVisWindows @ 0x1C00A20E4 (IncVisWindows.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     ClrFTrueVis @ 0x1C0118F3C (ClrFTrueVis.c)
 *     _IsWindowVisible @ 0x1C012641C (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01DE308 (DecrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(_QWORD *a1, char a2)
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
      ClrFTrueVis();
    if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
      return v2;
    if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
      v6 = 0;
    SetOrClrWF(0, a1, 0xF10u, 1);
    if ( (a2 & 0x10) != 0 )
    {
      SetOrClrWF(1, a1, 0x908u, 1);
    }
    else
    {
      SetOrClrWF(0, a1, 0x908u, 1);
      if ( v6 )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 22LL, *a1);
    }
    if ( (*((_BYTE *)a1 + 51) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows((__int64)a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *((_DWORD *)a1 + 72);
      if ( (v7 & 0x8000) != 0 )
      {
        v8 = *a1;
        *((_DWORD *)a1 + 72) = v7 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36u, v8, 0LL);
      }
    }
    return 1;
  }
  if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
  {
    SetOrClrWF(1, a1, 0xF10u, 1);
    SetOrClrWF((a2 & 0x10) == 0, a1, 0x908u, 1);
    IncVisWindows(a1);
    IncCompositedVisWindows(a1);
    if ( (a2 & 4) == 0 && (*((_BYTE *)a1 + 50) & 8) == 0 )
      ComposeWindowIfNeeded((struct tagWND *)a1);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen((__int64)a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 17LL, *a1);
    return 1;
  }
  return v2;
}
