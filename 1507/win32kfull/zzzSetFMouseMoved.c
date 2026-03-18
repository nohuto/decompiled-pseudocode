/*
 * XREFs of zzzSetFMouseMoved @ 0x1C00442B0
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     zzzSetWindowsHookEx @ 0x1C0049CE8 (zzzSetWindowsHookEx.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 */

__int64 __fastcall zzzSetFMouseMoved(int a1, int a2)
{
  return zzzSetFMouseMovedWorker(a1, a2, 0, 0, 0);
}
