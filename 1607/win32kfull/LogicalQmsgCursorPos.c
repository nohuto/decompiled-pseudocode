/*
 * XREFs of LogicalQmsgCursorPos @ 0x1C005C314
 * Callers:
 *     _PostThreadMessageEx @ 0x1C0057D1C (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxDoPaint @ 0x1C005B83C (xxxDoPaint.c)
 *     xxxSystemTimerProc @ 0x1C0096EA0 (xxxSystemTimerProc.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     StoreMessage @ 0x1C01227DC (StoreMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01D9000 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

struct tagPOINT __fastcall LogicalQmsgCursorPos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a1 + 352);
    return LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  }
  if ( !a2 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, 0LL, a3);
    return LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  }
  v5 = *(_QWORD *)(a2 + 88);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 16);
  else
    v6 = *(_QWORD *)(a2 + 64);
  return LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(*(_QWORD *)(v6 + 376) + 280LL));
}
