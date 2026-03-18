/*
 * XREFs of xxxReleaseCapture @ 0x1C00BB8C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C012B8C0 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C01404F0 (xxxMNReleaseCapture.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 592LL) && (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
    v1 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
      xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
    *(_DWORD *)(gptiCurrent + 440LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0);
  return 1LL;
}
