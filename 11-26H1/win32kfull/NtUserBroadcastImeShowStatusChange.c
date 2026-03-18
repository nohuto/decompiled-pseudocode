/*
 * XREFs of NtUserBroadcastImeShowStatusChange @ 0x1402AFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1402A16B4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserBroadcastImeShowStatusChange(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    v10 = *(_WORD *)(*((_QWORD *)v8 + 5) + 42LL) & 0x2FFF;
    if ( (_DWORD)v10 == 681 )
    {
      LOBYTE(v7) = a2 != 0;
      *(_DWORD *)(W32GetUserSessionState(v10, v9) + 14296) = v7;
      xxxNotifyImeShowStatus(v8, v11);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
