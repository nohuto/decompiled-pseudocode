/*
 * XREFs of xxxInternalGetMessage @ 0x1C00DF5A8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0142BB0 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FF6E4 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     xxxMNDoubleClick @ 0x1C020F63C (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C0104E3C (ClientGetMessageMPH.c)
 */

__int64 __fastcall xxxInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage(a1, a2, a3, a4, a5, a6);
}
