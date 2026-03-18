/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x140249670
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  void *v9; // rax

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v7;
    }
    v3 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)(v3 + 456) == CurrentProcessWin32Process )
    {
      UserSessionState = W32GetUserSessionState(v3, v7);
      v9 = (void *)InternalRemoveProp(v5, *(unsigned __int16 *)(UserSessionState + 41392), 1u);
      if ( v9 )
      {
        Win32FreePool(v9);
        v4 = 1LL;
      }
      else
      {
        UserSetLastError(87);
      }
    }
    else
    {
      v4 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
