/*
 * XREFs of FindTimer @ 0x1C00ECDEC
 * Callers:
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C000AE70 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B5D8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B694 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C009320C (-AccessTimeOutReset@@YAXXZ.c)
 *     SetMouseTrails @ 0x1C0094A28 (SetMouseTrails.c)
 *     xxxSystemTimerProc @ 0x1C0096EA0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00ABB94 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C00E0434 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8A90 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8BA0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8D40 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     TrackMouseEvent @ 0x1C010A7AC (TrackMouseEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C011F82C (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C0123150 (zzzInternalDestroyCaret.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     MNAnimate @ 0x1C013F880 (MNAnimate.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C014015C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C014052C (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D1030 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     HideAutorunCursor @ 0x1C01DD590 (HideAutorunCursor.c)
 *     DecrementCompositedCount @ 0x1C01DE308 (DecrementCompositedCount.c)
 *     _KillSystemTimer @ 0x1C01E0CB0 (_KillSystemTimer.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E3F00 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4420 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01E4558 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01E9B60 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0228FC8 (-ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C0231530 (UserKillTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023CEE4 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00ECEE0 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rbx
  unsigned int v12; // ebp
  _QWORD *i; // r14
  __int64 v14; // rcx

  v5 = 0LL;
  v8 = a2;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0
        && ((v14 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v14, a2) == *(_QWORD *)(v11[3] + 376LL)
         || !a1 && ((a3 ^ *((_BYTE *)v11 + 48)) & 4) == 0) )
      {
        if ( a4 )
        {
          FreeTimer((struct tagTIMER *)(i - 14));
          v11 = 0LL;
        }
        v12 = 1;
        break;
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
