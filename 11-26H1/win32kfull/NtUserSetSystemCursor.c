/*
 * XREFs of NtUserSetSystemCursor @ 0x140152F00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140152F8C (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

_BOOL8 __fastcall NtUserSetSystemCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _BOOL8 v6; // rbx
  struct tagCURSOR *v7; // rdi
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandleWithDescriptor(a1, 3u);
  v6 = 0LL;
  v7 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v9 = PtiCurrent(v5);
    Win32HM_LockIntoThread<1>((__int64)v9, (__int64)v7, (__int64 *)BugCheckParameter3);
    v6 = zzzSetSystemCursor(v7, a2);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
