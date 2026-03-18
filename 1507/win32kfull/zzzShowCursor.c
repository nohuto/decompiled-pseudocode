/*
 * XREFs of zzzShowCursor @ 0x1C0100BA0
 * Callers:
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(int a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rbx
  unsigned int v3; // ebx
  bool v5; // zf

  v1 = (_DWORD *)gdwDeferWinEvent;
  v2 = *(_QWORD *)(gptiCurrent + 392LL);
  ++gdwDeferWinEvent;
  if ( a1 )
  {
    ++*(_DWORD *)(gptiCurrent + 680LL);
    ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 328LL);
    if ( v2 != gpqCursor )
      goto LABEL_3;
    v5 = *(_DWORD *)(v2 + 328) == 0;
  }
  else
  {
    --*(_DWORD *)(gptiCurrent + 680LL);
    --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 328LL);
    if ( v2 != gpqCursor )
      goto LABEL_3;
    v5 = *(_DWORD *)(v2 + 328) == -1;
  }
  if ( v5 )
  {
    zzzUpdateCursorImage();
    v1 = (_DWORD *)gdwDeferWinEvent;
  }
LABEL_3:
  v3 = *(_DWORD *)(v2 + 328);
  v5 = (*v1)-- == 1;
  if ( v5 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return v3;
}
