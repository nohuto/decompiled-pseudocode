/*
 * XREFs of IsTrayWindow @ 0x1C0058750
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00C95F4 (ParkIcon.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00FF0D0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0149340 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C014BF70 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215A84 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     Is31TrayWindow @ 0x1C0223A00 (Is31TrayWindow.c)
 */

__int64 __fastcall IsTrayWindow(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v6; // rax
  char v7; // al

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v1 + 8) + 184LL) )
  {
    return 0LL;
  }
  v2 = *(_QWORD *)(a1 + 88);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD *)(v1 + 8);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 16);
  if ( v2 != v4 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 50) & 4) != 0 )
    return 1LL;
  if ( *(char *)(a1 + 48) < 0 || (*(_BYTE *)(a1 + 51) & 8) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 45) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( !v6 )
      return 1LL;
    if ( (*(_BYTE *)(v6 + 45) & 2) != 0 )
      return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
    return Is31TrayWindow((struct tagWND *)a1);
  v7 = *(_BYTE *)(a1 + 54);
  if ( (v7 & 0xA) != 0 && ((v7 & 0xC0) != 0 || (*(_BYTE *)(a1 + 55) & 0x20) != 0) )
    return Is31TrayWindow((struct tagWND *)a1);
  else
    return 0LL;
}
