/*
 * XREFs of FindTimer @ 0x1C0079B7C
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C0006938 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00069F0 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C00775B0 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     zzzInternalDestroyCaret @ 0x1C0077F14 (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C007804C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     TrackMouseEvent @ 0x1C00797F8 (TrackMouseEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C007AECC (xxxCancelMouseMoveTracking.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C007B230 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0106670 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C012D4DC (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C01357CC (-AccessTimeOutReset@@YAXXZ.c)
 *     SetMouseTrails @ 0x1C01359E4 (SetMouseTrails.c)
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C5E58 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D8B10 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E19F0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     HideAutorunCursor @ 0x1C01E6980 (HideAutorunCursor.c)
 *     DecrementCompositedCount @ 0x1C01E7648 (DecrementCompositedCount.c)
 *     _KillSystemTimer @ 0x1C01E9C20 (_KillSystemTimer.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ECED0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED130 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED910 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDB40 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01EDC58 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EDCD0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1008 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F31E0 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215A48 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 *     UserKillTimer @ 0x1C02390C0 (UserKillTimer.c)
 * Callees:
 *     FreeTimer @ 0x1C0079C70 (FreeTimer.c)
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
         || PsGetCurrentProcessWin32Process(v14) == *(_QWORD *)(v11[3] + 384LL)
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
