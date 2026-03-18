/*
 * XREFs of xxxDoSyncPaint @ 0x140046CFC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140046E40 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 */

void __fastcall xxxDoSyncPaint(struct tagWND *a1, unsigned int a2)
{
  struct tagWND *v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rax

  v4 = a1;
  while ( 1 )
  {
    v4 = (struct tagWND *)*((_QWORD *)v4 + 13);
    if ( !v4 )
      break;
    v5 = *((_QWORD *)v4 + 5);
    if ( (*(_BYTE *)(v5 + 31) & 2) != 0 )
      break;
    if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
      return;
  }
  v6 = PtiCurrent((__int64)a1);
  DoQueuedSyncPaint(a1, a2, v6);
  xxxInternalDoSyncPaint(a1, a2);
}
