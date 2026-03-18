/*
 * XREFs of ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023F3C8
 * Callers:
 *     xxxGetWindowText @ 0x14023F354 (xxxGetWindowText.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxDoSend(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) == *((_QWORD *)PtiCurrent((__int64)a1) + 57) )
    return xxxSendMessage(a1, 0xDu);
  else
    return xxxDefWindowProc((struct tagTHREADINFO **)a1, 0xDu, a3, a4);
}
