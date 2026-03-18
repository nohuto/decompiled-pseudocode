/*
 * XREFs of NtUserIsWindowBroadcastingDpiToChildren @ 0x1401D7740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserIsWindowBroadcastingDpiToChildren(__int64 a1)
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
    v6 = PtiCurrent(v3);
    Win32HM_LockIntoThread<0>((__int64)v6, (__int64)v5, BugCheckParameter3);
    v4 = IsWindowBroadcastingDpiToChildrenX(v5);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
