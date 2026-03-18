/*
 * XREFs of NtUserSendEventMessage @ 0x1401A0DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  struct tagTHREADINFO **v12; // rsi
  int v13; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = (struct tagTHREADINFO **)v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    v13 = *(_WORD *)(v10 + 42) & 0x2FFF;
    if ( v13 != 669 && v13 != 671 )
    {
      Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
      if ( (unsigned int)IAMThreadAccessGranted(v8) )
        v11 = PostEventMessageEx(v12[2], *((struct tagQ **)v12[2] + 58), 9u, (struct tagWND *)v12, a2, a3, a4, 0LL);
      else
        UserSetLastError(5);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
