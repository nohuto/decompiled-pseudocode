/*
 * XREFs of IsCurrentSessionServiceSession @ 0x1400FC60C
 * Callers:
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14019B2E4 (-StartScreenSaver@@YAXH@Z.c)
 *     SetTimerCoalescingTolerance @ 0x14019B750 (SetTimerCoalescingTolerance.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1401A5D50 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     xxxDesktopThread @ 0x14020A3B0 (xxxDesktopThread.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     ??0CForegroundLaunch@@QEAA@XZ @ 0x14028EC80 (--0CForegroundLaunch@@QEAA@XZ.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

_BOOL8 IsCurrentSessionServiceSession()
{
  int CurrentWin32kSessionId; // ebx

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return CurrentWin32kSessionId == (unsigned int)RtlGetCurrentServiceSessionId();
}
