/*
 * XREFs of xxxInternalGetMessage @ 0x140057C40
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x140056850 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140057630 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140057734 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetMessage @ 0x1400579B0 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x140057AA0 (NtUserPeekMessage.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxIsDragging @ 0x14014A320 (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x140290FD4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402C7118 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1400593E0 (ClientGetMessageMPH.c)
 */

__int64 __fastcall xxxInternalGetMessage(__int64 a1, int a2, int a3, int a4, unsigned __int64 a5, int a6)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  LODWORD(v12) = a5;
  if ( *(int *)(CurrentThreadWin32Thread[60] + 28LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage(a1, v12, a6);
}
