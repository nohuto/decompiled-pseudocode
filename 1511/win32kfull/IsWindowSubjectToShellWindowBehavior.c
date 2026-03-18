/*
 * XREFs of IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4
 * Callers:
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDCC (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0075870 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     _GetWindowTrackInfoAsync @ 0x1C01025C0 (_GetWindowTrackInfoAsync.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C020268C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C020B4D0 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 */

__int64 __fastcall IsWindowSubjectToShellWindowBehavior(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v6; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), a2, a3, a1) )
    return 0;
  v6 = *(_DWORD *)(v3 + 304);
  v4 = 1;
  if ( (v6 < 8 || v6 > 11) && v6 != 1 )
    return 0;
  if ( (*(_BYTE *)(v3 + 54) & 1) == 0 || !(unsigned int)IsTrayWindow(v3) )
    return 0;
  return v4;
}
