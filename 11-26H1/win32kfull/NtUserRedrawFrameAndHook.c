/*
 * XREFs of NtUserRedrawFrameAndHook @ 0x1402B9620
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 */

__int64 __fastcall NtUserRedrawFrameAndHook(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct tagWND *v6; // rsi
  __int64 v7; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 55);
    if ( IsTrayWindow(v6, 1LL) )
    {
      v7 = *(_QWORD *)v6;
      xxxCallHook(6LL, *(_QWORD *)v6, 0LL, 10);
      PostShellHookMessagesEx((LastWokenThread *)6, v7);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    v5 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
