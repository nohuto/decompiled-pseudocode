/*
 * XREFs of zzzInternalHideCaret @ 0x14012B0B4
 * Callers:
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     NtUserHideCaret @ 0x140127770 (NtUserHideCaret.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     zzzInternalDestroyCaret @ 0x14014C894 (zzzInternalDestroyCaret.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127B74 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140129354 (-UT_InvertCaret@@YAXXZ.c)
 */

void __fastcall zzzInternalHideCaret(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v2 = *((_QWORD *)PtiCurrent(a1) + 58);
  if ( (*(_DWORD *)(v2 + 352) & 1) != 0 )
    UT_InvertCaret(v1);
  *(_DWORD *)(v2 + 352) &= ~1u;
  if ( ++*(_DWORD *)(v2 + 356) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v2 + 344), (struct tagQ *)v2);
    UserSessionState = W32GetUserSessionState(v4, v3);
    xxxWindowEvent(0x8003u, *(struct tagWND **)(v2 + 344), -8, 0, *(_DWORD *)(UserSessionState + 70592) != 0 ? 2 : 0);
  }
}
