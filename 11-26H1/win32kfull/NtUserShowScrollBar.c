/*
 * XREFs of NtUserShowScrollBar @ 0x1401DA390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxShowScrollBar @ 0x1401DA46C (xxxShowScrollBar.c)
 */

__int64 __fastcall NtUserShowScrollBar(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  struct tagWND *v8; // rbp
  int v9; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    v9 = *(_WORD *)(v6 + 42) & 0x2FFF;
    if ( v9 != 669 && v9 != 671 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      if ( a2 > 3 || a2 == 2 )
        UserSetLastError(87);
      else
        v7 = xxxShowScrollBar(v8);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
