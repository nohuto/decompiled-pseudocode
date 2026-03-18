/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F1FD4
 * Callers:
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, unsigned __int64 a2)
{
  SetOrClrWF(0, a1, 0x108u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) && (*((_BYTE *)a1 + 40) & 0x40) == 0 )
  {
    SetOrClrWF(1, a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, a1, 0x101u, 1);
  }
  if ( *((char *)a1 + 46) < 0 )
  {
    SetOrClrWF(0, a1, 0x680u, 1);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage(a1, 0x85u, a2, 0LL);
}
