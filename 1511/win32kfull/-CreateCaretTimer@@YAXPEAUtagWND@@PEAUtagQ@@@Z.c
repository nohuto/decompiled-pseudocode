/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA538
 * Callers:
 *     zzzInternalShowCaret @ 0x1C00CA470 (zzzInternalShowCaret.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C010C670 (_SetCaretBlinkTime.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00CA594 (_SetSystemTimer.c)
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
