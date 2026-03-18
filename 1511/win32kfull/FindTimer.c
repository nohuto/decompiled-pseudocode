/*
 * XREFs of FindTimer @ 0x1C00F646C
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00087A0 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C0008858 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C0084F90 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     SetMouseTrails @ 0x1C0096C64 (SetMouseTrails.c)
 *     xxxSystemTimerProc @ 0x1C00C6990 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C7394 (xxxCancelMouseMoveTracking.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00C7688 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     TrackMouseEvent @ 0x1C00C7FCC (TrackMouseEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C00CA2FC (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA434 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00F5208 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0133720 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     MNAnimate @ 0x1C01393FC (MNAnimate.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C7A18 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D99D0 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E2000 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HideAutorunCursor @ 0x1C01E6E10 (HideAutorunCursor.c)
 *     DecrementCompositedCount @ 0x1C01E7AB8 (DecrementCompositedCount.c)
 *     _KillSystemTimer @ 0x1C01EA430 (_KillSystemTimer.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ED3F0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED650 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EDE30 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE060 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01EE178 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EE1F0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F0F68 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F22D8 (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F3510 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02158F8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C02394D4 (UserKillTimer.c)
 * Callees:
 *     FreeTimer @ 0x1C004AC90 (FreeTimer.c)
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
         || PsGetCurrentProcessWin32Process(v14) == *(_QWORD *)(v11[3] + 376LL)
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
