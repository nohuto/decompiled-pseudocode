/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1402B7840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // edx
  struct tagTHREADINFO *v7; // rax
  unsigned __int8 v8; // bl
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    v6 = *(_WORD *)(v3 + 42) & 0x2FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v7 = PtiCurrent(v3);
      Win32HM_LockIntoThread<0>((__int64)v7, v5, BugCheckParameter3);
      v8 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 25LL);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      v4 = v8 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
