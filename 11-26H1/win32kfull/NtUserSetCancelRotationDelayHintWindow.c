/*
 * XREFs of NtUserSetCancelRotationDelayHintWindow @ 0x1402BBF00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserSetCancelRotationDelayHintWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwndStrict(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    v8 = PtiCurrent(v7);
    LOBYTE(v9) = IAMThreadAccessGranted(v8);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v6 + 24) + 304LL;
      v12[1] = v6;
      v12[0] = v10;
      HMAssignmentLock(v12, 0LL);
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
