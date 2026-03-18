/*
 * XREFs of SetVisible @ 0x1C007A120
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     xxxShowOwnedWindows @ 0x1C00C94C4 (xxxShowOwnedWindows.c)
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107888 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011435C (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     DecVisWindows @ 0x1C007A068 (DecVisWindows.c)
 *     IncCompositedVisWindows @ 0x1C007A2E8 (IncCompositedVisWindows.c)
 *     IncVisWindows @ 0x1C007A2F4 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     ClrFTrueVis @ 0x1C007D45C (ClrFTrueVis.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     _IsWindowVisible @ 0x1C0103758 (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E7AB8 (DecrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(__int64 a1, char a2)
{
  unsigned int v2; // edi
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
    {
      SetOrClrWF(1LL, a1, 3856LL, 1LL);
      SetOrClrWF((a2 & 0x10) == 0, a1, 2312LL, 1LL);
      IncVisWindows(a1);
      IncCompositedVisWindows(a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(a1 + 50) & 8) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)a1);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen(a1);
      if ( (unsigned int)IsTrayWindow(a1) )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x11u, *(_QWORD *)a1);
      return 1;
    }
  }
  else
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis();
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
    {
      if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
        v6 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v6 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x16u, *(_QWORD *)a1);
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
  }
  return v2;
}
