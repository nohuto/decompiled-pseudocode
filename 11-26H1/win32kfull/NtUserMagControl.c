/*
 * XREFs of NtUserMagControl @ 0x1401EAEC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MagControl @ 0x1401EAF80 (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  ULONG v14; // eax

  v4 = 1LL;
  EnterCrit(1LL, 0LL);
  if ( a2 )
  {
    v6 = ValidateHwnd(a2);
    if ( !v6 )
    {
      v11 = -1073741811;
      goto LABEL_7;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = PtiCurrent(v5);
  UserSessionState = W32GetUserSessionState(v9, v8);
  v11 = MagControl(UserSessionState + 66032, v7, a1, v6);
  if ( v11 < 0 )
  {
LABEL_7:
    v4 = 0LL;
    v14 = RtlNtStatusToDosError(v11);
    UserSetLastError(v14);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v4;
}
