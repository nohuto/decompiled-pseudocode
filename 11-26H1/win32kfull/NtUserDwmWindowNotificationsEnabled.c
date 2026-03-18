/*
 * XREFs of NtUserDwmWindowNotificationsEnabled @ 0x1402B1900
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402CF6E0 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 */

__int64 __fastcall NtUserDwmWindowNotificationsEnabled(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  v5 = 0LL;
  if ( !(unsigned int)IsCurrentProcessDwm(v2)
    || (v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19176),
        v6 != *(_QWORD *)(W32GetUserSessionState(v8, v7) + 62832)) )
  {
    v10 = 5;
    goto LABEL_7;
  }
  v9 = OnDwmWindowNotificationClientRegistered(a1);
  if ( v9 < 0 )
  {
    v10 = v9;
LABEL_7:
    UserSetLastError(v10);
    goto LABEL_8;
  }
  v5 = 1LL;
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v5;
}
