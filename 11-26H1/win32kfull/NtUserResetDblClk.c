/*
 * XREFs of NtUserResetDblClk @ 0x1402BAD70
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 NtUserResetDblClk()
{
  __int64 v0; // rcx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v1 = *((_QWORD *)PtiCurrent(v0) + 58);
  *(_DWORD *)(v1 + 168) = 0;
  UserSessionSwitchLeaveCrit(v1);
  return 1LL;
}
