/*
 * XREFs of NtUserRestoreWindowDpiChanges @ 0x14024AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x14024B060 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 */

__int64 __fastcall NtUserRestoreWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edi
  struct tagWND *v6; // rsi
  int v7; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    v7 = *(_WORD *)(v4 + 42) & 0x2FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      Win32HM_LockIntoThread<0>(v2, (__int64)v6, BugCheckParameter3);
      if ( (*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) & 0xF) == 2 )
        v5 = xxxRestoreWindowFromDeferredStateIfNeeded(v6);
      else
        UserSetLastError(87);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
