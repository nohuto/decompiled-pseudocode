/*
 * XREFs of IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC
 * Callers:
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0076840 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     _GetWindowTrackInfoAsync @ 0x1C007D610 (_GetWindowTrackInfoAsync.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02022EC (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 */

__int64 __fastcall IsWindowSubjectToShellWindowBehavior(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edx

  if ( (a2 & *(_DWORD *)(*(_QWORD *)(a1 + 24) + 320LL)) == 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 304);
  v2 = 1;
  if ( (unsigned int)(v4 - 8) > 3 && v4 != 1 )
    return 0;
  if ( (*(_BYTE *)(a1 + 54) & 1) == 0 || !(unsigned int)IsTrayWindow(a1) )
    return 0;
  return v2;
}
