/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA434
 * Callers:
 *     zzzInternalHideCaret @ 0x1C00CA3B0 (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C00CA620 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C010C670 (_SetCaretBlinkTime.c)
 * Callees:
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 36) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 36) = 0LL;
  }
}
