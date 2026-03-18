/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14012C19C
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x14012B02C (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rcx

  SetOrClrWF(0, a1, 0x108u, 1);
  if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v4) + 58) + 128LL)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
  {
    if ( !a2 )
      return;
  }
  else
  {
    SetOrClrWF(1, a1, 0x40u, 1);
    SetOrClrWF(0, a1, 0x101u, 1);
  }
  xxxSendMessage(a1, 0x85u);
}
