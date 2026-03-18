/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14002A280
 * Callers:
 *     ?Cursor_DaemonTimeRateChanged@@YAX_N@Z @ 0x1401FD760 (-Cursor_DaemonTimeRateChanged@@YAX_N@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14002AB0C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetDeepDelayableVisRITTimer @ 0x14002AE28 (SetDeepDelayableVisRITTimer.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 UserSessionState; // rax
  struct tagCURSOR *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagCURSOR *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  signed int v12; // ebp
  int v13; // ebx
  int v14; // ebx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // r9
  signed int v17; // esi
  int v18; // r10d
  int v19; // r8d
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = FixupCursorForMonitor(*(struct tagCURSOR **)(UserSessionState + 36352));
  v8 = v5;
  if ( v5 && (v7 = *((unsigned int *)v5 + 20), (v7 & 8) != 0) && *((_QWORD *)v5 + 14) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36368) )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v12 = 0;
      v13 = v11
          - 100 * *(_DWORD *)(*((_QWORD *)v8 + 14) + 4LL * *((int *)v8 + 30)) / 6u
          - *(_DWORD *)(W32GetUserSessionState(v10, v9) + 36368);
      if ( v13 >= 0 )
        v12 = v13;
    }
    else
    {
      v12 = 0;
    }
    v14 = 0;
    if ( *((_DWORD *)v8 + 30) + 1 < *((_DWORD *)v8 + 23) )
      v14 = *((_DWORD *)v8 + 30) + 1;
    *((_DWORD *)v8 + 30) = v14;
    v15 = PtiCurrent();
    Win32HM_LockIntoThread<0>(v15, v8, BugCheckParameter3);
    if ( a3 )
      zzzUpdateCursorImage();
    v16 = *((_QWORD *)v8 + 14);
    v17 = 100 * *(_DWORD *)(v16 + 4LL * v14) / 6u;
    if ( v17 <= v12 )
    {
      v18 = *((_DWORD *)v8 + 23);
      v19 = *((_DWORD *)v8 + 30);
      do
      {
        v20 = v19 + 1;
        v12 -= v17;
        v19 = 0;
        if ( v20 < v18 )
          v19 = v20;
        *((_DWORD *)v8 + 30) = v19;
        v17 = 100 * *(_DWORD *)(v16 + 4LL * v19) / 6u;
      }
      while ( v17 <= v12 );
    }
    Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
    v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v12;
    *(_DWORD *)(W32GetUserSessionState(v23, v22) + 36368) = v21;
    v26 = W32GetUserSessionState(v25, v24);
    v27 = SetDeepDelayableVisRITTimer(*(_QWORD *)(v26 + 36304), (unsigned int)(v17 - v12));
    *(_QWORD *)(W32GetUserSessionState(v29, v28) + 36304) = v27;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36368) = 0;
  }
}
