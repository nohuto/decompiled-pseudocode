/*
 * XREFs of NtUserGetControlColor @ 0x14023AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxGetControlColor @ 0x140125958 (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 ControlColor; // rdi
  struct tagWND *v12; // r15
  __int64 v13; // rsi
  ULONG_PTR v15[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v12 = (struct tagWND *)v9;
  if ( v9 )
  {
    Win32HM_LockIntoThread<0>(v8, v9, v15);
    v13 = ValidateHwnd(a2);
    if ( v13 && a3 && a4 - 306 <= 6 )
    {
      Win32HM_LockIntoThread<0>(v8, v13, BugCheckParameter3);
      ControlColor = xxxGetControlColor(v12, v13, a3, a4);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v15);
  }
  UserSessionSwitchLeaveCrit(v10);
  return ControlColor;
}
