/*
 * XREFs of PostEventMessageEx @ 0x1C00E79A8
 * Callers:
 *     NtUserShowWindowAsync @ 0x1C0007B60 (NtUserShowWindowAsync.c)
 *     NtUserSendEventMessage @ 0x1C0008E30 (NtUserSendEventMessage.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00398D8 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0046CF8 (xxxApplyGlobalInputSettings.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     _GetWindowTrackInfoAsync @ 0x1C007D610 (_GetWindowTrackInfoAsync.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00ECC2C (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     NtUserDisableThreadIme @ 0x1C00FBE80 (NtUserDisableThreadIme.c)
 *     xxxSwitchToThisWindow @ 0x1C0100900 (xxxSwitchToThisWindow.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0100C80 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 *     QueueShutdownData @ 0x1C01D168C (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ECED0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED130 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED4A0 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C01ED5D0 (-MKButtonSelect@@YAHG@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED910 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EDCD0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C01EDEAC (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDF60 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE130 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE210 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE330 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01EE990 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EEB00 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EF070 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF1CC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01EF264 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01EF348 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C0206820 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     BeginSetWindowArrangement @ 0x1C020AE80 (BeginSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C0220F10 (NtUserSetWindowShowState.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     AllocQEntry @ 0x1C0067C50 (AllocQEntry.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     LogicalQmsgCursorPos @ 0x1C008E59C (LogicalQmsgCursorPos.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00E7AF4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C00E7B3C (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall PostEventMessageEx(
        __int64 a1,
        __int64 a2,
        DWORD a3,
        LARGE_INTEGER *a4,
        DWORD a5,
        LARGE_INTEGER a6,
        LARGE_INTEGER a7,
        DWORD *a8)
{
  LARGE_INTEGER *v13; // rbp
  LONGLONG v14; // rax
  __int64 v15; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 448) & 1) != 0 )
      return 0LL;
    vAdjustDelegatePriority((struct tagTHREADINFO *)a1);
    if ( (*(_DWORD *)(a1 + 1080) & 0x20) != 0 && !(unsigned int)ProcessSuspendedEventMessage(a1, a3, a4) )
      return 0LL;
  }
  v13 = (LARGE_INTEGER *)AllocQEntry(a2);
  if ( !v13 )
    return 0LL;
  v14 = LogicalQmsgCursorPos((__int64)a4, a2);
  StoreQMessage(v13, a4, a5, a6, a7, 0, 0, a3, 0LL, 0, a8, v14, 0LL, 0LL);
  v13[12].QuadPart = a1;
  if ( a3 == 20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a7.QuadPart + 24));
    ++*(_BYTE *)(a7.QuadPart + 51);
  }
  if ( a1 )
  {
    v15 = a1;
  }
  else
  {
    SetWakeBit(*(_QWORD *)(a2 + 48), 0x2040u);
    v15 = *(_QWORD *)(a2 + 56);
  }
  SetWakeBit(v15, 0x2040u);
  return 1LL;
}
