/*
 * XREFs of xxxCsDdeInitialize @ 0x140083F78
 * Callers:
 *     NtUserDdeInitialize @ 0x1400844A0 (NtUserDdeInitialize.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x140085220 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxChangeMonitorFlags @ 0x14008574C (xxxChangeMonitorFlags.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // r14d
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // r13
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  int v11; // r15d
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rdx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rsi
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  struct tagWND **v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // [rsp+98h] [rbp-31h] BYREF
  struct tagWND *v36; // [rsp+A0h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-21h] BYREF
  ULONG_PTR v38[2]; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v39[10]; // [rsp+C8h] [rbp-1h] BYREF

  v6 = 0;
  v8 = PtiCurrent((__int64)a1);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v8 + 130, 0, 0) & 1) != 0 )
    return 16399LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_4;
  v26 = PsGetCurrentProcessWin32Process(v10);
  v27 = v26;
  if ( v26 )
    v27 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v26 >> 64) & v26;
  v11 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v27) )
LABEL_4:
    v11 = 0;
  v12 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v39, 0);
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19904);
  v16 = *(unsigned __int16 *)(v15 + 884);
  UserSessionState = W32GetUserSessionState(v15, v17);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 884LL),
                              v16,
                              0,
                              -1073741824,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v12,
                              (__int64)hModuleWin,
                              0LL,
                              0,
                              -2147482870,
                              v11,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39);
  if ( !Window )
    return 16399LL;
  v21 = PtiCurrent(v20);
  LOBYTE(v22) = 9;
  v23 = HMAllocObject(v21, 0LL, v22, 64LL);
  v24 = v23;
  if ( !v23 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v28 = (struct tagWND **)(v23 + 48);
  v36 = Window;
  v35 = v23 + 48;
  HMAssignmentLock(&v35, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v35);
  xxxSetWindowLongPtr(*v28, 0, *(_QWORD *)v24, 0, 0);
  if ( (_BYTE)v35 )
    --*((_DWORD *)v36 + 7);
  *(_QWORD *)(v24 + 56) = a5;
  *(_DWORD *)(v24 + 40) = 0;
  v31 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 66672);
  *(_QWORD *)(v24 + 24) = v31;
  *(_QWORD *)(W32GetUserSessionState(v31, v32) + 66672) = v24;
  *(_QWORD *)(v24 + 32) = *((_QWORD *)v8 + 82);
  *((_QWORD *)v8 + 82) = v24;
  Win32HM_LockIntoThread<0>((__int64)v8, v24, v38);
  Win32HM_LockIntoThread<0>((__int64)v8, (__int64)Window, BugCheckParameter3);
  xxxChangeMonitorFlags(v24, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v24) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v28);
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3) )
      xxxDestroyWindow(Window);
    v6 = 16399;
  }
  else
  {
    *a1 = *(_QWORD *)v24;
    if ( *v28 )
      v34 = *(_QWORD *)*v28;
    else
      v34 = 0LL;
    *a2 = v34;
    *a3 = *(_DWORD *)(W32GetUserSessionState(a2, v33) + 66680);
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v38);
  return v6;
}
