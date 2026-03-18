/*
 * XREFs of IsRemoteConnection @ 0x1400F99E0
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?TraceCurrentState@CursorApiRouter@@QEBAXXZ @ 0x1400F7ABC (-TraceCurrentState@CursorApiRouter@@QEBAXXZ.c)
 *     InitializeMediaChange @ 0x1400F7C20 (InitializeMediaChange.c)
 *     EditionUpdateSASModifiers @ 0x1400F9880 (EditionUpdateSASModifiers.c)
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x1400F9948 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1400F9C78 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127A3C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDesktopThread @ 0x14020A3B0 (xxxDesktopThread.c)
 *     PrepareGammaRampData @ 0x14023C4E0 (PrepareGammaRampData.c)
 *     UpdatePerUserKeyboardIndicators @ 0x14024A14C (UpdatePerUserKeyboardIndicators.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140251FAC (-xxxUserBeep@@YAHKK_N@Z.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402521D0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     InitKeyboard @ 0x14025E904 (InitKeyboard.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x140287DE4 (-IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1402C4114 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     xxxRemoteConsoleShadowStart @ 0x1402D2D90 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRemoteConnection(__int64 a1, __int64 a2)
{
  return *(_WORD *)(W32GetUserSessionState(a1, a2) + 68744) != 0;
}
