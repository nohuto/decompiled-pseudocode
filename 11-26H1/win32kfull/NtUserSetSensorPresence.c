/*
 * XREFs of NtUserSetSensorPresence @ 0x14025DC90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserSetSensorPresence(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)DispBrokerGetCurrentMode() != 3 )
  {
    v10 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
    if ( PsGetCurrentProcess(v11) == v10 )
      goto LABEL_3;
LABEL_6:
    UserSetLastError(5);
    goto LABEL_4;
  }
  if ( !(unsigned int)UserUnsafeIsCurrentProcessDwm(v3, v2, v4) )
    goto LABEL_6;
LABEL_3:
  UserSessionState = W32GetUserSessionState(v6, v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(UserSessionState + 66064) + 40LL))(
    *(_QWORD *)(UserSessionState + 66064),
    a1);
LABEL_4:
  UserSessionSwitchLeaveCrit(v8);
  return 1LL;
}
