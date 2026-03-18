/*
 * XREFs of xxxDoSyncPaint @ 0x1C00DB9D8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00DBA3C (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall xxxDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 i; // r8
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
    return xxxInternalDoSyncPaint(a1, a2);
  }
  return result;
}
