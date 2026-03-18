/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1402B0FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     IsImmersiveBandOrShellManaged @ 0x14015DA48 (IsImmersiveBandOrShellManaged.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14015E3EC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwndStrict(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v6)
      && IsTopLevelWindow(v6)
      && !(unsigned int)IsWindowBeingDestroyed(v6)
      && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(v2 + 456))
       || *(_QWORD *)(v2 + 456) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 456LL))
      && !(unsigned int)xxxEnableWindowWorker((struct tagWND *)v6, 0LL) )
    {
      *(_DWORD *)(v6 + 380) |= 0x100u;
      v5 = 1LL;
    }
    else
    {
      UserSetLastError(5);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
