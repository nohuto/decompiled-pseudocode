/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00ABBD0
 * Callers:
 *     _SetCaretBlinkTime @ 0x1C0097B10 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C00ABA64 (zzzInternalShowCaret.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v2; // r8d

  if ( !*((_QWORD *)a2 + 37) )
  {
    v2 = *(_DWORD *)(gpsi + 5392LL);
    if ( v2 != -1 && ((*(_DWORD *)(gpsi + 2220LL) & 4) != 0 || !gProtocolType) )
      *((_QWORD *)a2 + 37) = SetSystemTimer((_DWORD)a1, 0xFFFF, v2, (unsigned int)CaretBlinkProc, 0);
  }
}
