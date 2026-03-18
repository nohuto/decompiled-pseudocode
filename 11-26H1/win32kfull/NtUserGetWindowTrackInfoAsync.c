/*
 * XREFs of NtUserGetWindowTrackInfoAsync @ 0x1402B5D30
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserGetWindowTrackInfoAsync(__int64 a1)
{
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct tagTHREADINFO **v6; // rsi
  const struct tagTHREADINFO *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (struct tagTHREADINFO **)v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>((__int64)v2, v3, BugCheckParameter3);
    v7 = v6[2];
    LOBYTE(v8) = IAMThreadAccessGranted(v2);
    if ( !v8
      || v2 == v7
      || IsThreadHung(v7, v9)
      || !ShellWindowManagement::WindowSubjectToBehavior((__int64)v6, 0x40u, 1, 1) )
    {
      UserSetLastError(5);
    }
    else
    {
      LOBYTE(v5) = (unsigned int)PostEventMessageEx(
                                   v6[2],
                                   *((struct tagQ **)v6[2] + 58),
                                   9u,
                                   (struct tagWND *)v6,
                                   0x342u,
                                   1uLL,
                                   0LL,
                                   0LL) != 0;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
