/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C007804C
 * Callers:
 *     _SetCaretBlinkTime @ 0x1C003A590 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0078090 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C00F91D0 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 36) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 36) = 0LL;
  }
}
