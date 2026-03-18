/*
 * XREFs of GetDpiDependentMetric @ 0x140032058
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x140009C5C (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowNCMetrics @ 0x140031DA0 (GetWindowNCMetrics.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x140031FC8 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     SetTiledRect @ 0x1400320E0 (SetTiledRect.c)
 *     GetWindowNCMetricsForDpi @ 0x1400322BC (GetWindowNCMetricsForDpi.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetCaptionHeight @ 0x140032E38 (GetCaptionHeight.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x14004E344 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     FindNCHit @ 0x14008AB60 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     xxxCreateWindowSmIcon @ 0x140093E5C (xxxCreateWindowSmIcon.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     xxxCalcCaptionButton @ 0x14014AFF8 (xxxCalcCaptionButton.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxCreateClassSmIcon @ 0x1401528C0 (xxxCreateClassSmIcon.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x14019156C (CalcSBStuff2.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1401BF5C8 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     _SystemParametersInfoForDpi @ 0x1401D0720 (_SystemParametersInfoForDpi.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x1401F1534 (-UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x140201244 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     MNPositionSysMenu @ 0x14023E29C (MNPositionSysMenu.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 *     DrawSize @ 0x140258578 (DrawSize.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x1402C3D40 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402C5058 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402F0420 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F36E4 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1401BF4C0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetDpiDependentMetric(int a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = a1 + 30LL * (int)GetDpiCacheIndex(a2);
  result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904) + 4 * v3 + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(a2);
    result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 4 * v3 + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
