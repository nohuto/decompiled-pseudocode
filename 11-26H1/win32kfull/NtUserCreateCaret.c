/*
 * XREFs of NtUserCreateCaret @ 0x14014BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxCreateCaret @ 0x14014C980 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int Caret; // edi
  __int64 v12; // rsi
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  Caret = 0;
  v12 = v9;
  if ( v9 )
  {
    Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
    Caret = xxxCreateCaret(v12, a2, a3, a4);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v10);
  return Caret;
}
