/*
 * XREFs of xxxAddShadow @ 0x1C012F41C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00F15DC (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012F714 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v7; // zf
  char v8; // al
  __int64 Window; // rdi
  struct tagWND *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+98h] [rbp+17h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+1Fh]
  _QWORD v18[3]; // [rsp+B0h] [rbp+2Fh] BYREF

  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *((char *)a1 + 43) < 0 )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v18, (__int64)Win32FreePool);
  v4 = 524448;
  if ( (*((_BYTE *)a1 + 48) & 8) != 0 )
    v4 = 524456;
  if ( !PsGetCurrentProcessWin32Process(524456LL)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5),
        v7 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
        v8 = 1,
        v7) )
  {
    v8 = 0;
  }
  Window = xxxCreateWindowEx(
             v4,
             (unsigned __int16)gatomShadow,
             (unsigned __int16)gatomShadow,
             0LL,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             hModuleWin,
             0LL,
             *((_DWORD *)a1 + 76),
             0xA00u,
             v8,
             0LL);
  if ( !Window || (*((_BYTE *)a1 + 43) & 0x80) != 0 )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)v18);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  if ( (*((_BYTE *)a1 + 43) & 0x80) != 0
    || FindShadow(a1)
    || !(unsigned int)zzzApplyShadow(v10, (struct tagWND *)Window) )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)v18);
    v16 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v16;
    v17 = Window;
    ++*(_DWORD *)(Window + 8);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    xxxDestroyWindow((_QWORD *)Window);
    ThreadUnlock1(v15, v14);
    return 0LL;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  HMAssignmentLock(v3, a1);
  HMAssignmentLock(v3 + 8, Window);
  if ( (unsigned int)GetWindowCloakState((__int64)a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  PopW32ThreadLock(v18);
  PushW32ThreadLock(v3, v18, (__int64)RemoveShadow);
  v16 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v16;
  v17 = Window;
  ++*(_DWORD *)(Window + 8);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  xxxInheritWindowMonitor((struct tagWND *)Window, (__int64)a1, 1);
  xxxSetWindowPos((struct tagWND *)Window, (int)a1, 0, 0, 0, 0, 83);
  ThreadUnlock1(v12, v11);
  PopW32ThreadLock(v18);
  return 1LL;
}
