/*
 * XREFs of GetDpiForSystem @ 0x140032228
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x140009C5C (xxxUpdateSystemIconsFromRegistry.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GetWindowNCMetrics @ 0x140031DA0 (GetWindowNCMetrics.c)
 *     SetTiledRect @ 0x1400320E0 (SetTiledRect.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x140093E5C (xxxCreateWindowSmIcon.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     xxxCreateClassSmIcon @ 0x1401528C0 (xxxCreateClassSmIcon.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x14019156C (CalcSBStuff2.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x1401BF328 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x140201244 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?RescaleMinMetrics@@YAXPEAUtagMINIMIZEDMETRICS@@@Z @ 0x140249ADC (-RescaleMinMetrics@@YAXPEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 *     DrawSize @ 0x140258578 (DrawSize.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14028C294 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1402ACB50 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F36E4 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 GetDpiForSystem()
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v1; // rcx
  unsigned __int16 v2; // bx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v1 = 511LL;
  v2 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0
    && (!*((_QWORD *)PtiCurrent() + 61)
     || (v1 = **(_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 8LL), (*(_DWORD *)(v1 + 64) & 1) == 0))
    || !v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    return *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
  }
  return v2;
}
