/*
 * XREFs of FindTimer @ 0x14001FEF4
 * Callers:
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x140053AF0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x140054760 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127B74 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x14014C894 (zzzInternalDestroyCaret.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     TrackMouseEvent @ 0x1401CFE54 (TrackMouseEvent.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401D034C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1401EC124 (xxxCancelMouseMoveTracking.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxSystemTimerProc @ 0x14024E4E0 (xxxSystemTimerProc.c)
 *     EditionKillAccessibilityTimer @ 0x14024ED90 (EditionKillAccessibilityTimer.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x140260F40 (-TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HandleAsyncResizeComplete @ 0x140266C4C (HandleAsyncResizeComplete.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x140287E9C (_lambda_49ba710cdad7805a04ef9893981131b8_--operator().c)
 *     HideAutorunCursor @ 0x14029A510 (HideAutorunCursor.c)
 *     DecrementCompositedCount @ 0x1402A43C4 (DecrementCompositedCount.c)
 *     NtUserKillSystemTimer @ 0x1402B7B00 (NtUserKillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402C4E50 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402CB460 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402D8F04 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402EF400 (-TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1402EF590 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402FCB84 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FCD34 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  _QWORD *v7; // rdi
  unsigned int v8; // ebp
  _QWORD **v12; // rax
  _QWORD *i; // rsi
  int v14; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  _QWORD **v18; // [rsp+50h] [rbp+8h]

  v5 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v12 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 16 * ((((_BYTE)a2 + BYTE1(a1)) & 0x3F) + 3853LL));
  v18 = v12;
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v7 = i - 15;
    if ( *(i - 2) == a1 && v7[14] == a2 )
    {
      v14 = *((_DWORD *)v7 + 12);
      if ( ((a3 ^ *((_BYTE *)v7 + 48)) & 6) == 0 && (v14 & 0x1000) == 0 )
      {
        if ( (v14 & 0x40) != 0 )
          goto LABEL_12;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        v16 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v16 == *(_QWORD *)(v7[3] + 456LL) || !a1 && ((*((_BYTE *)v7 + 48) ^ a3) & 4) == 0 )
        {
LABEL_12:
          if ( a4 )
          {
            FreeTimer((struct tagTIMER *)(i - 15));
            v7 = 0LL;
          }
          v8 = 1;
          break;
        }
      }
      v12 = v18;
    }
  }
  if ( a5 )
  {
    if ( v8 == 1 )
      v5 = v7;
    *a5 = v5;
  }
  return v8;
}
