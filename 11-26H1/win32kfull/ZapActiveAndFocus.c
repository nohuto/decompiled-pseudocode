/*
 * XREFs of ZapActiveAndFocus @ 0x140293070
 * Callers:
 *     NtUserZapActiveAndFocus @ 0x14025CC10 (NtUserZapActiveAndFocus.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 */

__int64 __fastcall ZapActiveAndFocus(__int64 a1)
{
  tagQ *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi

  v1 = (tagQ *)*((_QWORD *)PtiCurrent(a1) + 58);
  tagQ::SetActiveWindow(v1, 0LL);
  v4 = tagQ::UnlockFocusWnd(v1);
  if ( v4 && v1 == *(tagQ **)(W32GetUserSessionState(v3, v2) + 18928) )
    zzzInputFocusLostWindowEvent((__int64)v4, 11LL);
  return 1LL;
}
