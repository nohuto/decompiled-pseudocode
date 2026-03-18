/*
 * XREFs of NtUserSetAppImeLevel @ 0x1402BB9C0
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD *v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 UserSessionState; // rax

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v9 = *(_DWORD **)(W32GetUserSessionState(v6, v5) + 19904);
    if ( (*v9 & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v11;
      }
      v6 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)(v6 + 456) == CurrentProcessWin32Process )
      {
        UserSessionState = W32GetUserSessionState(v6, v11);
        InternalSetProp(v8, *(unsigned __int16 *)(UserSessionState + 41384), v2, 5u);
        v7 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
