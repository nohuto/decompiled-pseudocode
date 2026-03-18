/*
 * XREFs of xxxCsDdeInitialize @ 0x1C012B4E8
 * Callers:
 *     NtUserDdeInitialize @ 0x1C012B400 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetWindowLongPtr @ 0x1C00A1014 (xxxSetWindowLongPtr.c)
 *     xxxChangeMonitorFlags @ 0x1C012B764 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // eax
  char v13; // r8
  _DWORD *Window; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdi
  struct tagWND **v18; // r14
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE v29[8]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v30[3]; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v31[4]; // [rsp+B0h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
    return 16399LL;
  v10 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(a1, a2)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8),
        v12 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v13 = 1,
        !v12) )
  {
    v13 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 868LL),
             *(unsigned __int16 *)(gpsi + 868LL),
             0LL,
             -1073741824,
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
             v13,
             0LL);
  if ( !Window )
    return 16399LL;
  LOBYTE(v15) = 9;
  v16 = HMAllocObject(gptiCurrent, 0LL, v15);
  v17 = v16;
  if ( !v16 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v18 = (struct tagWND **)(v16 + 48);
  HMAssignmentLock(v16 + 48, Window);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  xxxSetWindowLongPtr(*v18, 0, *(_QWORD *)v17, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  *(_QWORD *)(v17 + 56) = a5;
  *(_QWORD *)(v17 + 24) = psiiList;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 32) = *(_QWORD *)(gptiCurrent + 544LL);
  v19 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 544LL) = v17;
  v30[0] = v19;
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = v17;
  ++*(_DWORD *)(v17 + 8);
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = Window;
  ++Window[2];
  psiiList = (struct tagSVR_INSTANCE_INFO *)v17;
  xxxChangeMonitorFlags(v17, a4, v20);
  v21 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v17;
  LOBYTE(v21) = *(_BYTE *)(v21 + gSharedInfo[1] + 17);
  if ( (v21 & 1) != 0 )
  {
    HMAssignmentUnlock(v18);
    if ( ThreadUnlock1(v26, v25) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v28, v27);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v17;
  if ( *v18 )
    v10 = *(_QWORD *)*v18;
  *a2 = v10;
  ThreadUnlock1(v21, gSharedInfo[0]);
  ThreadUnlock1(v23, v22);
  *a3 = MonitorFlags;
  return 0LL;
}
