/*
 * XREFs of NtUserSetShellWindowEx @ 0x1402BDEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x14027C828 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct tagWND *v6; // rsi
  int v7; // edx
  __int64 v8; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  const struct tagUIPI_INFO *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  _BYTE v20[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-28h] BYREF

  v23[0] = 0x2000;
  v23[1] = -1;
  v23[2] = 0;
  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    v7 = *(_WORD *)(v4 + 42) & 0x2FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_13;
      v11 = PsGetCurrentProcessWin32Process(v10);
      if ( v11 )
        v11 &= -(__int64)(*(_QWORD *)v11 != 0LL);
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(v11 + 864),
              (const struct tagUIPI_INFO *)v23,
              v12) )
        goto LABEL_13;
      v14 = PsGetCurrentProcessWin32Process(v13);
      if ( v14 )
      {
        v15 = -(__int64)(*(_QWORD *)v14 != 0LL);
        v14 &= v15;
      }
      v16 = *((_QWORD *)v6 + 2);
      if ( *(_QWORD *)(v16 + 456) == v14 )
      {
        UserSessionState = W32GetUserSessionState(v16, v15);
        v20[0] = 0;
        v21 = 0LL;
        ++*(_DWORD *)(UserSessionState + 70592);
        AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v20, v18);
        v5 = (unsigned __int8)RegisterShell(v6);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
        zzzEndDeferWinEventNotify();
      }
      else
      {
LABEL_13:
        UserSetLastError(5);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
