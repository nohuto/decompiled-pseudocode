/*
 * XREFs of xxxSetWindowPosAndBand @ 0x1C00A652C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000D420 (xxxSwitchToThisWindow.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     NtUserSetWindowPos @ 0x1C00A62F0 (NtUserSetWindowPos.c)
 *     xxxMoveWindow @ 0x1C00A7894 (xxxMoveWindow.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxSetShellWindow @ 0x1C00ED41C (xxxSetShellWindow.c)
 *     xxxShowScrollBar @ 0x1C0111EC0 (xxxShowScrollBar.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetMenu @ 0x1C014BA60 (xxxSetMenu.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014FAB0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0150DF0 (xxxRedrawFrameAndHook.c)
 *     xxxDrawMenuBar @ 0x1C0152710 (xxxDrawMenuBar.c)
 *     xxxRedrawFrame @ 0x1C0152C00 (xxxRedrawFrame.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01DD334 (xxxEnableNonClientDpiScaling.c)
 *     xxxSwitchWndProc @ 0x1C01F9680 (xxxSwitchWndProc.c)
 *     xxxSetInternalWindowPos @ 0x1C01FB91C (xxxSetInternalWindowPos.c)
 *     xxxActivateEnabledPopup @ 0x1C022A578 (xxxActivateEnabledPopup.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     IsWindowGhosted @ 0x1C00A738C (IsWindowGhosted.c)
 *     xxxHandleHealthyWindow @ 0x1C0148038 (xxxHandleHealthyWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3F44 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
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
  __int64 v19; // r8
  __int64 v21; // rcx
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  int v23; // [rsp+A8h] [rbp+20h] BYREF

  v23 = a4;
  v22 = a3;
  v8 = a7;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  if ( (a7 & 0x80u) != 0 && *((_QWORD *)a1 + 2) == gptiCurrent && (unsigned int)IsWindowGhosted(a1) )
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
    v21 = *((_QWORD *)a1 + 13);
    if ( v21 )
    {
      if ( (*(_BYTE *)(v21 + 55) & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v21 + 112)) )
      {
        FixBogusSWP(a1, &v22, &v23, v16, v15, v8);
        v10 = v23;
        v14 = 1;
        v11 = v22;
      }
    }
  }
  v17 = InternalBeginDeferWindowPos(v14);
  if ( !v17 )
    return 0LL;
  v18 = (struct tagSMWP *)DeferWindowPos(v17, (_DWORD)a1, a2, v11, v10, v16, v15, v8, a8);
  if ( !v18 || !(unsigned int)xxxEndDeferWindowPosEx(v18, v8 & 0x4000, v19) )
    return 0LL;
  if ( v9 )
    xxxRedrawWindow(a1, 0LL, 0LL, 1157);
  return 1LL;
}
