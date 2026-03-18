/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00ABB94
 * Callers:
 *     _SetCaretBlinkTime @ 0x1C0097B10 (_SetCaretBlinkTime.c)
 *     CaretBlinkProc @ 0x1C00AB6D0 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 *     zzzInternalHideCaret @ 0x1C00ABB10 (zzzInternalHideCaret.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 37) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 37) = 0LL;
  }
}
