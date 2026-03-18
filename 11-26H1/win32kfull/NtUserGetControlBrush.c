/*
 * XREFs of NtUserGetControlBrush @ 0x1401246D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxGetControlBrush @ 0x140124EB4 (xxxGetControlBrush.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 ControlBrush; // rdi
  __int64 v10; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  ControlBrush = 0LL;
  v10 = v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    if ( a2 && a3 - 306 <= 6 )
      ControlBrush = xxxGetControlBrush(v10, a2, a3);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return ControlBrush;
}
