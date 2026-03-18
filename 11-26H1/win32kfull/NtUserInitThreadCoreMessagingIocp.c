/*
 * XREFs of NtUserInitThreadCoreMessagingIocp @ 0x1402B6610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _InitThreadCoreMessagingIocp2 @ 0x14020359C (_InitThreadCoreMessagingIocp2.c)
 */

__int64 __fastcall NtUserInitThreadCoreMessagingIocp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 inited; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwndStrict(a1);
  v5 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    v13 = 0;
    inited = InitThreadCoreMessagingIocp2(v5, &v13);
    v8 = v13;
    v6 = inited;
    if ( v13 )
    {
      UserSetLastError(1247);
      v10 = PtiCurrent(v9);
      HMAssignmentUnlock((char *)v10 + 8 * v8 + 1656);
      v6 = 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    v6 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
