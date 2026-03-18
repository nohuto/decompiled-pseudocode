/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1402B7A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_BOOL8 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BOOL8 v4; // rbx
  __int64 v5; // rdi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v6 = PtiCurrent(v3);
    Win32HM_LockIntoThread<0>((__int64)v6, v5, BugCheckParameter3);
    if ( PtiCurrent(v7)
      && *((_QWORD *)PtiCurrent(v8) + 61)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9) + 61) + 8LL) + 64LL) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
    {
      v4 = (*(_DWORD *)(v5 + 380) & 0x100000) != 0;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
