/*
 * XREFs of NtUserSetWindowWord @ 0x140231E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x14028E3E4 (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 */

__int64 __fastcall NtUserSetWindowWord(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int16 v9; // di
  struct tagWND *v10; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0;
  v10 = (struct tagWND *)v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    v9 = xxxSetWindowWord(v10, a2, a3);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
