/*
 * XREFs of NtUserSetMessageExtraInfo @ 0x1402399E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetMessageExtraInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v3 = *((_QWORD *)PtiCurrent(v2) + 58);
  v4 = *(_QWORD *)(v3 + 448);
  *(_QWORD *)(v3 + 448) = a1;
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
