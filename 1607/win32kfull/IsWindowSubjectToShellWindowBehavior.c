/*
 * XREFs of IsWindowSubjectToShellWindowBehavior @ 0x1C009E938
 * Callers:
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C008D6F0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0098B90 (_GetWindowTrackInfoAsync.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01CF1A4 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F99A8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C02025E0 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 */

__int64 __fastcall IsWindowSubjectToShellWindowBehavior(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  int v5; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), a2) )
    return 0;
  v5 = *(_DWORD *)(v2 + 304);
  v3 = 1;
  if ( (v5 < 8 || v5 > 11) && v5 != 1 )
    return 0;
  if ( (*(_BYTE *)(v2 + 54) & 1) == 0 || !(unsigned int)IsTrayWindow(v2) )
    return 0;
  return v3;
}
