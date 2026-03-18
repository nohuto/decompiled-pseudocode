/*
 * XREFs of xxxReleaseCapture @ 0x1C00FB250
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FABEC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxMNReleaseCapture @ 0x1C010DB8C (xxxMNReleaseCapture.c)
 *     xxxIsDragging @ 0x1C01239CC (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 600LL) && (*(_DWORD *)(gptiCurrent + 448LL) & 0x10) != 0 )
  {
    bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
    v1 = *(_QWORD *)(gptiCurrent + 600LL);
    if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
      xxxDrawDragRectEx(v1, 0LL, 2LL, v1 + 8);
    *(_DWORD *)(gptiCurrent + 448LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0);
  return 1LL;
}
