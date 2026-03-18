/*
 * XREFs of NtUserSetWindowRgn @ 0x1401792A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowRgn @ 0x140179368 (xxxSetWindowRgn.c)
 */

__int64 __fastcall NtUserSetWindowRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rsi
  int v11; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v11 = *(_WORD *)(v8 + 42) & 0x2FFF;
    if ( v11 != 669 && v11 != 671 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      v9 = xxxSetWindowRgn(v10, a2, a3);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
