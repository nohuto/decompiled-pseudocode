/*
 * XREFs of IsTrayWindow @ 0x1C0068BA0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C003F8D8 (ParkIcon.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00F94A0 (NtUserGetWindowMinimizeRect.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0122250 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     Is31TrayWindow @ 0x1C0223920 (Is31TrayWindow.c)
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
    || ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) == 0
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
