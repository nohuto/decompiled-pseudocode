/*
 * XREFs of PostEventMessageEx @ 0x1C000D614
 * Callers:
 *     NtUserShowWindowAsync @ 0x1C00090B0 (NtUserShowWindowAsync.c)
 *     NtUserSendEventMessage @ 0x1C000B840 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C000C140 (xxxSwitchToThisWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00812CC (xxxApplyGlobalInputSettings.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 *     xxxMouseActivate @ 0x1C00E95C4 (xxxMouseActivate.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00EF814 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     _ScheduleDispatchNotification @ 0x1C00F2E70 (_ScheduleDispatchNotification.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F37DC (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     _GetWindowTrackInfoAsync @ 0x1C01025C0 (_GetWindowTrackInfoAsync.c)
 *     NtUserDisableThreadIme @ 0x1C01083A0 (NtUserDisableThreadIme.c)
 *     NtUserRegisterBSDRWindow @ 0x1C01122F0 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     QueueShutdownData @ 0x1C01D32C0 (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ED3F0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED650 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED9C0 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C01EDAF0 (-MKButtonSelect@@YAHG@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EDE30 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EE1F0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01EE3CC (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE480 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE650 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE730 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE850 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01EEEB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EF020 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EF590 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF6EC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01EF784 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01EF868 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C0206C40 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     BeginSetWindowArrangement @ 0x1C020B3C4 (BeginSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C0224100 (xxxSetWindowShowState.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000D760 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C000D7A8 (ProcessSuspendedEventMessage.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C0053D48 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C0057810 (AllocQEntry.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
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
    if ( (*(_DWORD *)(a1 + 1072) & 0x20) != 0 && !(unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7) )
      return 0LL;
  }
  v13 = AllocQEntry(a2);
  if ( !v13 )
    return 0LL;
  v14 = LogicalQmsgCursorPos(a4, a2);
  StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v14, 0LL, 0LL);
  *(_QWORD *)(v13 + 96) = a1;
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
    SetWakeBit(*(_QWORD *)(a2 + 48), 8256LL);
    v15 = *(_QWORD *)(a2 + 56);
  }
  SetWakeBit(v15, 8256LL);
  return 1LL;
}
