/*
 * XREFs of xxxSetWindowPosAndBand @ 0x1C0074F6C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000C140 (xxxSwitchToThisWindow.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     NtUserSetWindowPos @ 0x1C0074CF0 (NtUserSetWindowPos.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetShellWindow @ 0x1C00D49B4 (xxxSetShellWindow.c)
 *     xxxShowScrollBar @ 0x1C00F23F0 (xxxShowScrollBar.c)
 *     xxxMoveWindow @ 0x1C00F2A0C (xxxMoveWindow.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetMenu @ 0x1C01434F4 (xxxSetMenu.c)
 *     xxxDrawMenuBar @ 0x1C01474A0 (xxxDrawMenuBar.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014A3C8 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C014BF70 (xxxRedrawFrameAndHook.c)
 *     xxxRedrawFrame @ 0x1C014D460 (xxxRedrawFrame.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 *     xxxSwitchWndProc @ 0x1C0202370 (xxxSwitchWndProc.c)
 *     xxxSetInternalWindowPos @ 0x1C02045CC (xxxSetInternalWindowPos.c)
 *     xxxActivateEnabledPopup @ 0x1C0231730 (xxxActivateEnabledPopup.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     IsWindowGhosted @ 0x1C00697A0 (IsWindowGhosted.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C0075248 (InternalBeginDeferWindowPos.c)
 *     xxxHandleHealthyWindow @ 0x1C0142488 (xxxHandleHealthyWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C4CD4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 */

__int64 __fastcall xxxSetWindowPosAndBand(struct tagWND *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  unsigned int v14; // r8d
  int v15; // r15d
  int v16; // r12d
  __int64 v17; // rax
  struct tagSMWP *v18; // rax
  __int64 v20; // rcx
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a4;
  v21 = a3;
  v8 = a7;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  if ( (a7 & 0x80u) != 0 && *((_QWORD *)a1 + 2) == gptiCurrent && (unsigned int)IsWindowGhosted((__int64)a1) )
    xxxHandleHealthyWindow(a1);
  v14 = 1;
  if ( ((unsigned __int8)~*((_BYTE *)a1 + 45) & ((v8 & 0xC0) != 0)) != 0 )
  {
    v8 |= 3u;
    if ( (v8 & 0x40) != 0 && (*((_BYTE *)a1 + 55) & 0x10) != 0 )
      v9 = 1;
  }
  v15 = a6;
  v16 = a5;
  if ( (*((_BYTE *)a1 + 45) & 4) == 0
    && *(_DWORD *)(gpDispInfo + 80LL) > 1u
    && (v8 & 2) == 0
    && (*((_BYTE *)a1 + 55) & 0x50) == 0
    && (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0 )
  {
    v20 = *((_QWORD *)a1 + 13);
    if ( v20 )
    {
      if ( (*(_BYTE *)(v20 + 55) & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v20 + 112)) )
      {
        FixBogusSWP(a1, &v21, &v22, v16, v15, v8);
        v10 = v22;
        v14 = 1;
        v11 = v21;
      }
    }
  }
  v17 = InternalBeginDeferWindowPos(v14);
  if ( !v17 )
    return 0LL;
  v18 = (struct tagSMWP *)DeferWindowPos(v17, (_DWORD)a1, a2, v11, v10, v16, v15, v8, a8);
  if ( !v18 || !(unsigned int)xxxEndDeferWindowPosEx(v18, v8 & 0x4000) )
    return 0LL;
  if ( v9 )
    xxxRedrawWindow(a1, 0LL, 0LL, 1157);
  return 1LL;
}
