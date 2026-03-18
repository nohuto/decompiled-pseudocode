/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x14022E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v9 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v9 != 669 && v9 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, v8, BugCheckParameter3);
      v10 = *(_QWORD *)(v8 + 40);
      if ( a2 )
        *(_BYTE *)(v10 + 25) |= 0x80u;
      else
        *(_BYTE *)(v10 + 25) &= ~0x80u;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
