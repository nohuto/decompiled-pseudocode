/*
 * XREFs of xxxAddShadow @ 0x1C0138D4C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00A7414 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0139054 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsSysShadow @ 0x1C0224E50 (IsSysShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v11; // zf
  char v12; // al
  __int64 v13; // rdx
  struct tagWND *Window; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagWND *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+98h] [rbp+17h] BYREF
  struct tagWND *v31; // [rsp+A0h] [rbp+1Fh]
  _QWORD v32[3]; // [rsp+B0h] [rbp+2Fh] BYREF

  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *((char *)a1 + 43) < 0 )
    return 0LL;
  if ( (unsigned int)IsSysShadow(a1) )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v32, (__int64)Win32FreePool, v3);
  v7 = 524448;
  if ( (*((_BYTE *)a1 + 48) & 8) != 0 )
    v7 = 524456;
  if ( !PsGetCurrentProcessWin32Process(v6, v5)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8),
        v11 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
        v12 = 1,
        v11) )
  {
    v12 = 0;
  }
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v7,
                              (wchar_t *)(unsigned __int16)gatomShadow,
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
                              v12,
                              0LL);
  if ( !Window || (*((_BYTE *)a1 + 43) & 0x80) != 0 )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, v13, v15, v16);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  if ( (*((_BYTE *)a1 + 43) & 0x80) != 0 || FindShadow(a1) || !(unsigned int)zzzApplyShadow(v17, Window) )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, v13, v15, v16);
    v30 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v30;
    v31 = Window;
    ++*((_DWORD *)Window + 2);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    xxxDestroyWindow(Window);
    ThreadUnlock1(v29, v28);
    return 0LL;
  }
  *(_QWORD *)(v4 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v4;
  HMAssignmentLock(v4, a1);
  HMAssignmentLock(v4 + 8, Window);
  if ( (unsigned int)GetWindowCloakState((__int64)a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v4 + 8), 0LL, 1u);
  PopW32ThreadLock(v32, v18, v19, v20);
  PushW32ThreadLock(v4, v32, (__int64)RemoveShadow, v21);
  v30 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v30;
  v31 = Window;
  ++*((_DWORD *)Window + 2);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  xxxInheritWindowMonitor(Window, a1, 1, 1);
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v23, v22);
  PopW32ThreadLock(v32, v24, v25, v26);
  return 1LL;
}
