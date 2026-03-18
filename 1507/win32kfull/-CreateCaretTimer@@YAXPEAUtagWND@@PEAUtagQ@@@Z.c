/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0079E70
 * Callers:
 *     _SetCaretBlinkTime @ 0x1C003A590 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x1C0078090 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C0079DA8 (zzzInternalShowCaret.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v2; // r8d

  if ( !*((_QWORD *)a2 + 36) )
  {
    v2 = *(_DWORD *)(gpsi + 4000LL);
    if ( v2 != -1 && ((*(_DWORD *)(gpsi + 2220LL) & 4) != 0 || !gProtocolType) )
      *((_QWORD *)a2 + 36) = SetSystemTimer((_DWORD)a1, 0xFFFF, v2, (unsigned int)CaretBlinkProc, 0);
  }
}
