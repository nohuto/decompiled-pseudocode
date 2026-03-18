/*
 * XREFs of xxxInternalGetMessage @ 0x1C007C720
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007C660 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C010E564 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxIsDragging @ 0x1C01239CC (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C0208058 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     xxxMNDoubleClick @ 0x1C0216C3C (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02321DC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C0067748 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 408LL) + 16LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage((__int64)a1, a2, a3, a4, a5, a6);
}
