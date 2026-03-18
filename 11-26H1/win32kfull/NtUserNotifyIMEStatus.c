/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1401F27C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401F28A0 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct tagWND *v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = (struct tagWND *)v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    if ( (**(_DWORD **)(W32GetUserSessionState(v13, v12) + 19904) & 4) != 0 )
    {
      xxxNotifyIMEStatus(v10, a2, a3);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      v9 = 1LL;
    }
    else
    {
      UserSetLastError(120);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
