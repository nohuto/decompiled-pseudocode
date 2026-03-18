/*
 * XREFs of NtUserSetSystemTimer @ 0x1402BE060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _SetSystemTimer @ 0x1401DA8CC (_SetSystemTimer.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    if ( *(struct tagTHREADINFO **)(v6 + 16) == PtiCurrent(v7) )
      v8 = SetSystemTimer(v9, a2, a3, 0LL, 0);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
