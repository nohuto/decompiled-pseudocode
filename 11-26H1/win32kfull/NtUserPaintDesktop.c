/*
 * XREFs of NtUserPaintDesktop @ 0x1402B8C90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxInternalPaintDesktop @ 0x14024A2B0 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v3 = PtiCurrent(v2);
  v4 = 0;
  v5 = *((_QWORD *)v3 + 61);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
    Win32HM_LockIntoThread<1>((__int64)v3, v6, (__int64 *)BugCheckParameter3);
    v4 = xxxInternalPaintDesktop(v6, a1, 1);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  else
  {
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
