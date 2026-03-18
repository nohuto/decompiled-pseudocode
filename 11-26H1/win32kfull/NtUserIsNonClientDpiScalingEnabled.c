/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x140013300
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140013EAC (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_BOOL8 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BOOL8 v4; // rbx
  struct tagWND *v5; // rdi
  struct tagTHREADINFO *v6; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (struct tagWND *)v2;
  if ( v2 )
  {
    v6 = PtiCurrent();
    BugCheckParameter3[1] = (ULONG_PTR)v5;
    BugCheckParameter3[0] = *((_QWORD *)v6 + 56);
    *((_QWORD *)v6 + 56) = BugCheckParameter3;
    HMLockObject(v5);
    v4 = IsNonClientDpiScalingEnabledX(v5);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
