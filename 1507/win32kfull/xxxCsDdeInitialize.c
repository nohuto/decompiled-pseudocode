/*
 * XREFs of xxxCsDdeInitialize @ 0x1C00FB808
 * Callers:
 *     NtUserDdeInitialize @ 0x1C00FB720 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxChangeMonitorFlags @ 0x1C00FBA48 (xxxChangeMonitorFlags.c)
 *     xxxSetWindowLongPtr @ 0x1C00FBAB4 (xxxSetWindowLongPtr.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // eax
  char v12; // r8
  _DWORD *Window; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  struct tagWND **v17; // r14
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v28[8]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v29[3]; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v30[4]; // [rsp+B0h] [rbp-48h] BYREF

  v9 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(a1)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8),
        v11 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v12 = 1,
        !v11) )
  {
    v12 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 868LL),
             (char **)*(unsigned __int16 *)(gpsi + 868LL),
             0LL,
             0xC0000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             hModuleWin,
             0LL,
             0,
             0x30Au,
             v12,
             0LL);
  if ( !Window )
    return 16399LL;
  LOBYTE(v14) = 9;
  v15 = HMAllocObject(gptiCurrent, 0LL, v14, 64LL);
  v16 = v15;
  if ( !v15 )
  {
    xxxDestroyWindow((__int64)Window);
    return 16399LL;
  }
  v17 = (struct tagWND **)(v15 + 48);
  HMAssignmentLock(v15 + 48, Window);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  xxxSetWindowLongPtr(*v17, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  *(_QWORD *)(v16 + 56) = a5;
  *(_QWORD *)(v16 + 24) = psiiList;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 32) = *(_QWORD *)(gptiCurrent + 552LL);
  v18 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 552LL) = v16;
  v29[0] = v18;
  *(_QWORD *)(gptiCurrent + 376LL) = v29;
  v29[1] = v16;
  ++*(_DWORD *)(v16 + 8);
  v30[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v30;
  v30[1] = Window;
  ++Window[2];
  psiiList = (struct tagSVR_INSTANCE_INFO *)v16;
  xxxChangeMonitorFlags(v16, a4, v19);
  v20 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v16;
  LOBYTE(v20) = *(_BYTE *)(v20 + gSharedInfo[1] + 17);
  if ( (v20 & 1) != 0 )
  {
    HMAssignmentUnlock(v17);
    if ( ThreadUnlock1(v25, v24) )
      xxxDestroyWindow((__int64)Window);
    ThreadUnlock1(v27, v26);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v16;
  if ( *v17 )
    v9 = *(_QWORD *)*v17;
  *a2 = v9;
  ThreadUnlock1(v20, gSharedInfo[0]);
  ThreadUnlock1(v22, v21);
  *a3 = MonitorFlags;
  return 0LL;
}
