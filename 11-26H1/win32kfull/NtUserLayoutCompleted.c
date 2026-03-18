/*
 * XREFs of NtUserLayoutCompleted @ 0x1401F7530
 * Callers:
 *     <none>
 * Callees:
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     EtwTraceLayoutChangeStop @ 0x1401F7658 (EtwTraceLayoutChangeStop.c)
 *     GreWindowLayoutComplete @ 0x1401F77A0 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x140266C4C (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x140346A50 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 TopLevelWindow; // rax
  void *v11; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwndStrict(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    EtwTraceLayoutChangeStop(v2, a1, v6);
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 24) + 304LL) == v6 )
    {
      v11 = (void *)ReferenceDwmApiPort(v8, v7);
      DwmAsyncCancelRotationDelay(v11);
    }
    PostIAMShellHookMessage(0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v6 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v6);
      if ( TopLevelWindow )
      {
        if ( (*(_WORD *)(*(_QWORD *)(TopLevelWindow + 40) + 42LL) & 0x2FFF) != 0x29D )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    v5 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
