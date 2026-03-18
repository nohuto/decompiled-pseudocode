/*
 * XREFs of GetAppCompatFlags2 @ 0x14004E590
 * Callers:
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x14004E5D8 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400C7CD0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400FEA0C (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14014DE9C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     GetWindowFrameMetricForDpi @ 0x1401BF59C (GetWindowFrameMetricForDpi.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     GetResizeBorderWidthForDpi @ 0x14020AF94 (GetResizeBorderWidthForDpi.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserHideCursorNoCapture @ 0x14024C100 (NtUserHideCursorNoCapture.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1402CDDE4 (xxxDDETrackWindowDying.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAppCompatFlags2(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  unsigned int v3; // edx
  __int64 v4; // r8

  v1 = (unsigned __int16)a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v3 = 0;
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  if ( v1 >= *(_DWORD *)(v4 + 664) )
    return *(unsigned int *)(v4 + 680);
  return v3;
}
