/*
 * XREFs of NtUserSetTSFEventState @ 0x1402BE100
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetTSFEventState(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*((_QWORD *)PtiCurrent(v2) + 60) + 24LL) = a1;
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
