/*
 * XREFs of zzzSetFMouseMoved @ 0x1C008BF80
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     zzzSetWindowsHookEx @ 0x1C00823B4 (zzzSetWindowsHookEx.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 */

__int64 __fastcall zzzSetFMouseMoved(__int64 a1, __int64 *a2)
{
  return zzzSetFMouseMovedWorker(a1, a2, 0, 0LL, 0);
}
