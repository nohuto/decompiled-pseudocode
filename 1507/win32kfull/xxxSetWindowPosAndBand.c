/*
 * XREFs of xxxSetWindowPosAndBand @ 0x1C00850A0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     NtUserSetWindowPos @ 0x1C0084E30 (NtUserSetWindowPos.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxShowScrollBar @ 0x1C00EB8B0 (xxxShowScrollBar.c)
 *     xxxMoveWindow @ 0x1C00ED36C (xxxMoveWindow.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     xxxSwitchToThisWindow @ 0x1C0100900 (xxxSwitchToThisWindow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetMenu @ 0x1C01185F4 (xxxSetMenu.c)
 *     xxxDrawMenuBar @ 0x1C011D940 (xxxDrawMenuBar.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0120C4C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0122250 (xxxRedrawFrameAndHook.c)
 *     xxxRedrawFrame @ 0x1C01244B0 (xxxRedrawFrame.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 *     xxxMetricsRecalc @ 0x1C01D61DC (xxxMetricsRecalc.c)
 *     xxxResizeImmersiveBackground @ 0x1C01EFD20 (xxxResizeImmersiveBackground.c)
 *     xxxSwitchWndProc @ 0x1C0201FD0 (xxxSwitchWndProc.c)
 *     xxxSetInternalWindowPos @ 0x1C020425C (xxxSetInternalWindowPos.c)
 *     xxxActivateEnabledPopup @ 0x1C0231300 (xxxActivateEnabledPopup.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     _DeferWindowPos @ 0x1C00851D8 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 *     IsWindowGhosted @ 0x1C0088AC8 (IsWindowGhosted.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxHandleHealthyWindow @ 0x1C0117524 (xxxHandleHealthyWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3114 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 */

__int64 __fastcall xxxSetWindowPosAndBand(
        struct tagWND *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  int v12; // r13d
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
  v12 = a2;
  if ( (a7 & 0x80u) != 0 && *((_QWORD *)a1 + 2) == gptiCurrent && (unsigned int)IsWindowGhosted(a1) )
    xxxHandleHealthyWindow();
  LOBYTE(a2) = *((_BYTE *)a1 + 45);
  v14 = 1;
  if ( ((unsigned __int8)~(_BYTE)a2 & ((v8 & 0xC0) != 0)) != 0 )
  {
    v8 |= 3u;
    if ( (v8 & 0x40) != 0 && (*((_BYTE *)a1 + 55) & 0x10) != 0 )
      v9 = 1;
  }
  v15 = a6;
  v16 = a5;
  if ( (a2 & 4) == 0
    && *(_DWORD *)(gpDispInfo + 80LL) > 1u
    && (v8 & 2) == 0
    && (*((_BYTE *)a1 + 55) & 0x50) == 0
    && (*((_BYTE *)a1 + 54) & 0xC0) == 0xC0 )
  {
    v20 = *((_QWORD *)a1 + 13);
    if ( v20 )
    {
      if ( (*(_BYTE *)(v20 + 55) & 0x10) != 0 && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v20 + 112)) )
      {
        FixBogusSWP(a1, &v21, &v22, v16, v15, v8);
        v10 = v22;
        v14 = 1;
        v11 = v21;
      }
    }
  }
  v17 = InternalBeginDeferWindowPos(v14, a2);
  if ( !v17 )
    return 0LL;
  v18 = (struct tagSMWP *)DeferWindowPos(v17, (_DWORD)a1, v12, v11, v10, v16, v15, v8, a8);
  if ( !v18 || !(unsigned int)xxxEndDeferWindowPosEx(v18, v8 & 0x4000) )
    return 0LL;
  if ( v9 )
    xxxRedrawWindow(a1);
  return 1LL;
}
