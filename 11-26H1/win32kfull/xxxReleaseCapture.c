/*
 * XREFs of xxxReleaseCapture @ 0x14014AA5C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxIsDragging @ 0x14014A320 (xxxIsDragging.c)
 *     NtUserReleaseCapture @ 0x14014AA20 (NtUserReleaseCapture.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14026A3E8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x14025084C (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall xxxReleaseCapture(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax
  __int64 v2; // rdx
  struct tagTHREADINFO *v3; // rbx
  __int64 UserSessionState; // rax
  struct tagRECT *v6; // rdx
  struct MOVESIZEDATA *v7; // rcx

  v1 = PtiCurrent(a1);
  v3 = v1;
  if ( (*(_DWORD *)(*((_QWORD *)v1 + 58) + 436LL) & 0x100000) != 0 )
    return 0LL;
  if ( *((_QWORD *)v1 + 88) && (_InterlockedCompareExchange((volatile signed __int32 *)v1 + 130, 0, 0) & 0x10) != 0 )
  {
    UserSessionState = W32GetUserSessionState(0LL, v2);
    bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 40LL), 0LL, 0LL, 0);
    v7 = (struct MOVESIZEDATA *)*((_QWORD *)v3 + 88);
    if ( (*((_DWORD *)v7 + 50) & 0x20) == 0 )
      xxxDrawDragRect(v7, v6, 2u);
    _InterlockedAnd((volatile signed __int32 *)v3 + 130, 0xFFFF7FEF);
  }
  xxxCapture(v3, 0LL, 0);
  return 1LL;
}
