/*
 * XREFs of GetMonitorFlagsFromWindow @ 0x1C0058654
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     UpdateWindowSpriteDPI @ 0x1C0062C8C (UpdateWindowSpriteDPI.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     CitGetWindowInfo @ 0x1C00AED20 (CitGetWindowInfo.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C00DC5C0 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0150C20 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C3D78 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01D9000 (zzzActiveCursorTracking.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01DB850 (DCELogicalSpeedTopLevelHitTest.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0218490 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorFlagsFromWindow(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 352) & 0xF;
  if ( v1 == 2 )
    return 32LL;
  result = 64LL;
  if ( v1 == 1 )
    return 128LL;
  return result;
}
