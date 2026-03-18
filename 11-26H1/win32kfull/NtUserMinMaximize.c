/*
 * XREFs of NtUserMinMaximize @ 0x1402B8740
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  int v16; // r8d
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v11 = *(_WORD *)(v8 + 42) & 0x2FFF;
    if ( v11 != 669 && v11 != 671 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      LOBYTE(v9) = a3 != 0;
      v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 66792);
      v15 = v9 | 0x10;
      v16 = v14 & 0x10000;
      if ( a2 != 3 )
        v15 = v9;
      xxxMinMaximize(v10, a2, v15 | (unsigned int)v16);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return 0LL;
}
