/*
 * XREFs of NtUserSetGestureConfig @ 0x1401E47F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SetGestureConfigSettings @ 0x1401E4CF4 (SetGestureConfigSettings.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int v16; // ebx
  bool v17; // zf
  int v19; // ecx
  _BYTE v20[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-20h] BYREF

  v5 = a3;
  v7 = EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v8;
  if ( !v8 )
  {
    v16 = 0;
    goto LABEL_13;
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v7, v8);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  if ( !a4 || a5 != 12 || (unsigned int)(v5 - 1) > 0xFF )
  {
    v16 = 0;
    UserSetLastError(87);
    v17 = v20[0] == 0;
LABEL_10:
    if ( !v17 )
      --*(_DWORD *)(v21 + 28);
    goto LABEL_12;
  }
  v11 = *((_QWORD *)v10 + 5);
  if ( *(char *)(v11 + 20) >= 0
    && *(char *)(v11 + 19) >= 0
    && *(_QWORD *)(v7 + 456) == *(_QWORD *)(*((_QWORD *)v10 + 2) + 456LL) )
  {
    v14 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)(12 * v5), 1667724117LL);
    if ( v14 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12);
      ProbeForRead(a4, 12 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
      memmove(v14, (const void *)a4, (unsigned int)(12 * v5));
      v16 = SetGestureConfigSettings(v10);
      Win32FreePool(v14);
      v17 = v20[0] == 0;
      goto LABEL_10;
    }
    v19 = 8;
  }
  else
  {
    v19 = 1400;
  }
  v16 = 0;
  UserSetLastError(v19);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
LABEL_12:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_13:
  UserSessionSwitchLeaveCrit(v9);
  return v16;
}
