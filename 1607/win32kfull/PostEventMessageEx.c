/*
 * XREFs of PostEventMessageEx @ 0x1C0059A54
 * Callers:
 *     NtUserShowWindowAsync @ 0x1C000CD30 (NtUserShowWindowAsync.c)
 *     xxxSwitchToThisWindow @ 0x1C000D420 (xxxSwitchToThisWindow.c)
 *     NtUserSendEventMessage @ 0x1C000DDC0 (NtUserSendEventMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     _ScheduleDispatchNotification @ 0x1C005CA40 (_ScheduleDispatchNotification.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0098B90 (_GetWindowTrackInfoAsync.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00A89E0 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8950 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8A90 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8BA0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8CE0 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8D40 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 *     xxxMouseActivate @ 0x1C0109300 (xxxMouseActivate.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C010E01C (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C0112C44 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0128490 (NtUserDisableThreadIme.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0129F00 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0130780 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     QueueShutdownData @ 0x1C015486C (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E3F00 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C01E4160 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01E45C4 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4680 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4850 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4930 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01E4A50 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01E5140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E52D0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E542C (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01E54C4 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01E55A8 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FDFC0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     BeginSetWindowArrangement @ 0x1C02024D4 (BeginSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C0224CB4 (xxxSetWindowShowState.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0059BA0 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C005C498 (AllocQEntry.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C0120610 (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall PostEventMessageEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 440) & 1) != 0 )
      return 0LL;
    vAdjustDelegatePriority((struct tagTHREADINFO *)a1);
    if ( (*(_DWORD *)(a1 + 1096) & 0x20) != 0 && !(unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7) )
      return 0LL;
  }
  v13 = AllocQEntry(a2);
  if ( !v13 )
    return 0LL;
  v14 = LogicalQmsgCursorPos(a4, a2);
  StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v14, 0LL, 0LL);
  *(_QWORD *)(v13 + 104) = a1;
  if ( a3 == 20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a7 + 24));
    ++*(_BYTE *)(a7 + 51);
  }
  if ( a1 )
  {
    v15 = a1;
  }
  else
  {
    SetWakeBit(*(_QWORD *)(a2 + 56), 8256LL);
    v15 = *(_QWORD *)(a2 + 64);
  }
  SetWakeBit(v15, 8256LL);
  return 1LL;
}
