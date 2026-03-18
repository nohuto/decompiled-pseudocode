/*
 * XREFs of SetWindowState @ 0x140207784
 * Callers:
 *     NtUserSetWindowState @ 0x140259AE0 (NtUserSetWindowState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1402077E4 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(struct tagWND *a1, unsigned int a2)
{
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) == *((_QWORD *)PtiCurrent((__int64)a1) + 57)
    && (unsigned int)ValidateState(a2) )
  {
    SetOrClrWF(1, a1, a2, 1);
  }
  return 1LL;
}
