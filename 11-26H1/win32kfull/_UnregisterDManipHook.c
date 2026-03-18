/*
 * XREFs of _UnregisterDManipHook @ 0x140258B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x140027130 (RemoveHmodDependency.c)
 */

__int64 __fastcall UnregisterDManipHook(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v7; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
  {
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v5;
  }
  if ( CurrentProcessWin32Process == *(_QWORD *)(UserSessionState + 64176) )
  {
    v7 = *(unsigned int *)(UserSessionState + 65256);
    *(_QWORD *)(UserSessionState + 64176) = 0LL;
    if ( (int)v7 >= 0 )
    {
      RemoveHmodDependency(v7);
      *(_DWORD *)(UserSessionState + 65256) = -1;
    }
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v7, v5) + 19904), 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
