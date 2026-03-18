/*
 * XREFs of NtUserEnableMouseInPointerForWindow @ 0x14021ACA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall NtUserEnableMouseInPointerForWindow(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v15; // ecx
  __int64 CurrentProcessWin32Process; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwndStrict(a1);
  v7 = 0LL;
  v8 = v5;
  if ( !v5 )
    goto LABEL_9;
  Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
  if ( (a2 != 0) != a2 )
    goto LABEL_10;
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (*(_BYTE *)(CurrentProcessWin32Process + 808) & 0x30) == 0x10 )
    {
LABEL_10:
      v15 = 87;
LABEL_11:
      UserSetLastError(v15);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      goto LABEL_9;
    }
  }
  if ( *(_QWORD *)(v8 + 16) != v4
    || (v10 = *(_DWORD *)(v8 + 384), (v10 & 8) != 0) && a2 != ((*(_DWORD *)(v8 + 380) >> 3) & 1) )
  {
    v15 = 5;
    goto LABEL_11;
  }
  v11 = *(_DWORD *)(v8 + 380);
  v12 = v11 | 8;
  v13 = v11 & 0xFFFFFFF7;
  if ( !a2 )
    v12 = v13;
  *(_DWORD *)(v8 + 380) = v12;
  *(_DWORD *)(v8 + 384) = v10 | 8;
  *(_QWORD *)(v4 + 1360) |= 0x4000000uLL;
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  v7 = 1LL;
LABEL_9:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
