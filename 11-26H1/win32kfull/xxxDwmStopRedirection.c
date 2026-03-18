/*
 * XREFs of xxxDwmStopRedirection @ 0x1402CFD60
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1402B1860 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetProcessWindowStation @ 0x1401BC230 (_GetProcessWindowStation.c)
 *     GreDwmUseDeviceBitmaps @ 0x1401C3580 (GreDwmUseDeviceBitmaps.c)
 *     DwmNotifyChildrenAddRemove @ 0x1401D360C (DwmNotifyChildrenAddRemove.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     DwmAsyncDesktopFree @ 0x140248B44 (DwmAsyncDesktopFree.c)
 *     ChangeComposableCursor @ 0x14024CDC4 (ChangeComposableCursor.c)
 *     GreDwmShutdown @ 0x140253E18 (GreDwmShutdown.c)
 *     GreDxDwmShutdown @ 0x140348AA0 (GreDxDwmShutdown.c)
 */

__int64 __fastcall xxxDwmStopRedirection(int a1)
{
  __int64 ProcessWindowStation; // rbp
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 i; // rsi
  __int64 **v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  void *v24; // rax
  HSURF v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 j; // rbx
  struct tagWND *v34; // rsi
  struct tagTHREADINFO *v35; // rax
  Gre::Base *v36; // rcx
  int v37; // eax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v40; // [rsp+58h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v4 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered()
    && (v5 = *(_DWORD *)(ProcessWindowStation + 32) & 0x204, (_DWORD)v5 == 512) )
  {
    UserSessionState = W32GetUserSessionState(v3, v5);
    ++*(_DWORD *)(UserSessionState + 70592);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)BugCheckParameter3);
    if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 43024) )
      StopFade(v10, v9);
    v11 = W32GetUserSessionState(v10, v9);
    bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v11 + 56968) + 40LL), 0LL, 0LL, 0);
    if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 36328) )
    {
      ChangeComposableCursor(0LL, v14);
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 36328) = 0;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19176) )
    {
      v19 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19176);
      for ( i = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        v19 = **(_QWORD **)(i + 8);
        if ( (*(_DWORD *)(v19 + 64) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i, a1);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 0);
          v21 = *(__int64 ***)(i + 8);
          v22 = **v21;
          v24 = (void *)ReferenceDwmApiPort(*v21, v23);
          DwmAsyncDesktopFree(v24, v22);
        }
      }
      v25 = *(HSURF *)(ProcessWindowStation + 88);
      if ( v25 )
      {
        v26 = W32GetUserSessionState(v19, v18);
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 19176) + 8LL) + 24LL), v25, 1);
      }
    }
    v27 = W32GetUserSessionState(v19, v18);
    GreDwmShutdown(*(Gre::Base **)(*(_QWORD *)(v27 + 56968) + 40LL));
    *(_DWORD *)(ProcessWindowStation + 32) &= ~0x200u;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      LOBYTE(v28) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v40, v28);
      GreDxDwmShutdown();
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v40);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19176) )
    {
      v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19176);
      for ( j = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v34 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v34 )
          {
            v35 = PtiCurrent(v32);
            Win32HM_LockIntoThread<1>((__int64)v35, (__int64)v34, (__int64 *)BugCheckParameter3);
            v37 = GreDwmUseDeviceBitmaps(v36);
            xxxRedrawWindow(v34, 0LL, 0LL, v37 != 0 ? 645 : 66181);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
