/*
 * XREFs of xxxInternalGetMessage @ 0x1C00D0420
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D037C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0139FD4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxIsDragging @ 0x1C014C940 (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020839C (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C00563CC (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage((__int64)a1, a2, a3, a4, a5, a6);
}
