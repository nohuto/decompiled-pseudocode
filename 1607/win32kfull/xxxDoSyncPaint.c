/*
 * XREFs of xxxDoSyncPaint @ 0x1C00F97EC
 * Callers:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00F9850 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall xxxDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 i; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  char result; // al

  for ( i = *(_QWORD *)(a1 + 88); i && (*(_BYTE *)(i + 55) & 2) == 0; i = *(_QWORD *)(i + 88) )
  {
    if ( *(_QWORD *)(i + 160) || (*(_BYTE *)(i + 41) & 0x10) != 0 )
      goto LABEL_5;
  }
  i = 0LL;
LABEL_5:
  if ( !i )
  {
    DoQueuedSyncPaint((struct tagWND *)a1, a2, gptiCurrent);
    return xxxInternalDoSyncPaint(a1, a2, v5, v6);
  }
  return result;
}
