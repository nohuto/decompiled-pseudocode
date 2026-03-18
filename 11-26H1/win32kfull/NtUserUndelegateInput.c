/*
 * XREFs of NtUserUndelegateInput @ 0x14020FCA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x140094164 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL) == CurrentProcessWin32Process )
      {
        _HandleDelegatedInput(*(struct tagTHREADINFO **)(v7 + 264), a2, 0LL);
        CleanupInputDelegation(v7);
        v6 = 1LL;
        goto LABEL_8;
      }
      v10 = 5;
    }
    else
    {
      v10 = 87;
    }
    UserSetLastError(v10);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
