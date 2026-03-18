/*
 * XREFs of NtUserSetClassLong @ 0x140152D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetClassLong @ 0x140152E14 (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct tagWND *v10; // rsi
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13);
    else
      v9 = xxxSetClassLong(v10);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
