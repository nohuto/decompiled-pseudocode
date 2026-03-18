/*
 * XREFs of NtUserBuildPropList @ 0x140156500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _BuildPropList @ 0x1401565B8 (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v12 = PtiCurrent(v8);
    Win32HM_LockIntoThread<0>((__int64)v12, v9, BugCheckParameter3);
    if ( a2 )
      v10 = BuildPropList(v9, a3, a2, a4);
    else
      v10 = -1073741816;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    v10 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
