/*
 * XREFs of zzzSetFMouseMoved @ 0x1C00DC310
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     zzzSetWindowsHookEx @ 0x1C00A4854 (zzzSetWindowsHookEx.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 */

__int64 __fastcall zzzSetFMouseMoved(__int64 a1, __int64 *a2)
{
  return zzzSetFMouseMovedWorker(a1, a2, 0, 0LL, 0);
}
