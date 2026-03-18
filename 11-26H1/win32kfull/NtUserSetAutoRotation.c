/*
 * XREFs of NtUserSetAutoRotation @ 0x1402BBAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserSetAutoRotation(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(UserSessionState + 66064) + 48LL))(
         *(_QWORD *)(UserSessionState + 66064),
         a1);
  if ( v5 < 0 )
  {
    UserSetLastStatus(v5, 1);
    v7 = 0LL;
  }
  else
  {
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
