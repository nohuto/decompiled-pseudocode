/*
 * XREFs of NtUserInheritWindowMonitor @ 0x14021DD50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v4; // esi
  struct tagWND *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 )
  {
    v8 = *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v8 != 669 && (_DWORD)v8 != 671 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      v12 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v12 == *(_QWORD *)(*((_QWORD *)v9 + 2) + 456LL) )
      {
        if ( !a2 || (v5 = (struct tagWND *)ValidateHwnd(a2)) != 0LL )
          v4 = xxxInheritWindowMonitor(v9, v5, 1);
      }
      else
      {
        UserSetLastError(5);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
