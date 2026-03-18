/*
 * XREFs of xxxReleaseCapture @ 0x1C0091ED0
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C01395FC (xxxMNReleaseCapture.c)
 *     xxxIsDragging @ 0x1C014C940 (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 592LL) && (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    bSetDevDragRect((HDEV)*gpDispInfo);
    v1 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
      xxxDrawDragRectEx(v1, 0LL, 2LL, v1 + 8);
    *(_DWORD *)(gptiCurrent + 440LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0);
  return 1LL;
}
