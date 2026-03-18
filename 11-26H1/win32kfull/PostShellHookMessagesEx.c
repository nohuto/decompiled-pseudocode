/*
 * XREFs of PostShellHookMessagesEx @ 0x1400101EC
 * Callers:
 *     EditionPostShellHookMessages @ 0x14000FBE0 (EditionPostShellHookMessages.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1401662D4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1401FDB80 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     RemoveWindowFullScreen @ 0x14024985C (RemoveWindowFullScreen.c)
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140299F80 (-RotationLockTogglePressed@CRotationMgr@@UEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ @ 0x14029A080 (-xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ.c)
 *     ?PTPEnableHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B270 (-PTPEnableHotkeyCallback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?WinlogonWinSpaceCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B5B0 (-WinlogonWinSpaceCallback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     NtUserRedrawFrameAndHook @ 0x1402B9620 (NtUserRedrawFrameAndHook.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14001E1A0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall PostShellHookMessagesEx(LastWokenThread *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rax
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v2 = (unsigned int)a1;
  if ( (_DWORD)a1 == 12 )
  {
    v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        14,
        (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids);
    }
    LastWokenThread::Clear(a1);
  }
  v4 = W32GetUserSessionState(a1, a2);
  _PostShellHookMsgWorker(*(_DWORD *)(*(_QWORD *)(v4 + 19904) + 928LL), v2, a2, 0LL);
}
