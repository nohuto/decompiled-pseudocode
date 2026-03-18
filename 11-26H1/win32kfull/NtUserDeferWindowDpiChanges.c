/*
 * XREFs of NtUserDeferWindowDpiChanges @ 0x1402465B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140046530 (_SetDeferredDpiStateForWindowAndChildren.c)
 */

__int64 __fastcall NtUserDeferWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edi
  __int64 *v6; // rsi
  int v8; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0;
  v6 = (__int64 *)v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    v8 = *(_WORD *)(v4 + 42) & 0x2FFF;
    if ( v8 != 669 && v8 != 671 )
    {
      Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
      if ( (*(_DWORD *)(v6[5] + 288) & 0xF) == 2 )
        v5 = SetDeferredDpiStateForWindowAndChildren(v6, 1LL, 1);
      else
        UserSetLastError(87);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
