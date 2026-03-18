/*
 * XREFs of _SetCaretBlinkTime @ 0x1402038A0
 * Callers:
 *     NtUserSetCaretBlinkTime @ 0x140203860 (NtUserSetCaretBlinkTime.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127A3C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127B74 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19904);
  *(_DWORD *)(v4 + 4984) = a1;
  v5 = PtiCurrent(v4);
  v6 = *((_QWORD *)v5 + 58);
  if ( *(_QWORD *)(v6 + 392) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v6 + 344), *((struct tagQ **)v5 + 58));
    CreateCaretTimer(*(struct tagWND **)(v6 + 344), (struct tagQ *)v6);
  }
  return 1LL;
}
