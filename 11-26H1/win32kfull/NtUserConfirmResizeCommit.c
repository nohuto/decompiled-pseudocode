/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1402B02F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreConfirmWindowResizeCommit @ 0x140344D00 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  HWND *v5; // rbx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  EnterSharedCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = (HWND *)v3;
  if ( v3 )
  {
    v4 = *(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v4 != 669 && (_DWORD)v4 != 671 )
    {
      v6 = PtiCurrent(v4);
      Win32HM_LockIntoThread<0>((__int64)v6, (__int64)v5, BugCheckParameter3);
      CurrentProcess = PsGetCurrentProcess(v7);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v5);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
