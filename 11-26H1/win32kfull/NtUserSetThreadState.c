/*
 * XREFs of NtUserSetThreadState @ 0x1402306E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetThreadState(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rbx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(-1073741811);
    v8 = 0LL;
  }
  else
  {
    v6 = *((_QWORD *)PtiCurrent(v4) + 58);
    v7 = a1 ^ *(_DWORD *)(v6 + 436);
    v8 = 1LL;
    *(_DWORD *)(v6 + 436) ^= a2 & v7;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v8;
}
