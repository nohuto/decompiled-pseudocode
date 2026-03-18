/*
 * XREFs of _DwmLockScreenUpdates @ 0x14024F1D0
 * Callers:
 *     NtUserDwmLockScreenUpdates @ 0x14024F190 (NtUserDwmLockScreenUpdates.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     IsCurrentDesktopComposed @ 0x1401B8B20 (IsCurrentDesktopComposed.c)
 */

__int64 __fastcall DwmLockScreenUpdates(__int64 a1, __int64 a2)
{
  int v2; // edi
  HANDLE v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct tagWND *v18; // rbx
  struct tagTHREADINFO *v19; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63536);
  if ( PsGetCurrentProcessId() == v3 )
  {
    v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 70556);
    *(_DWORD *)(W32GetUserSessionState(v8, v7) + 70556) = v2;
    if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176)
      && v6
      && !*(_DWORD *)(W32GetUserSessionState(v12, v11) + 70556)
      && !(unsigned int)IsCurrentDesktopComposed(v14, v13) )
    {
      v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19176);
      v18 = *(struct tagWND **)(*(_QWORD *)(v17 + 8) + 24LL);
      v19 = PtiCurrent(v17);
      Win32HM_LockIntoThread<1>((__int64)v19, (__int64)v18, (__int64 *)BugCheckParameter3);
      xxxRedrawWindow(v18, 0LL, 0LL, 133);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
