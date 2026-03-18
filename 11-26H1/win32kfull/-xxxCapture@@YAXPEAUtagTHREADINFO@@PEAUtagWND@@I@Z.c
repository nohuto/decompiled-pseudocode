/*
 * XREFs of ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x14014AB08 (xxxSetCapture.c)
 *     xxxMNSetCapture @ 0x14028B3D4 (xxxMNSetCapture.c)
 *     xxxCancelTrackingForThread @ 0x1402C88E0 (xxxCancelTrackingForThread.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     LockCaptureWindow @ 0x1400547AC (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x140054958 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     IsMiPEnabledForWindow @ 0x140054BA0 (IsMiPEnabledForWindow.c)
 *     IsMiPEnabledForThread @ 0x140054BF8 (IsMiPEnabledForThread.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxCancelMouseMoveTracking @ 0x1401EC124 (xxxCancelMouseMoveTracking.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxCapture(struct tagTHREADINFO *a1, struct tagWND *a2, int a3)
{
  const struct tagQ **v3; // r14
  __int64 *v5; // rdi
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  const struct tagQ *v12; // r14
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rbp
  struct tagQ *v22; // rbx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (const struct tagQ **)((char *)a1 + 464);
  v5 = (__int64 *)a2;
  v6 = 0LL;
  v7 = 2LL;
  if ( a3 == 6 )
  {
    BugCheckParameter3[1] = (ULONG_PTR)a2;
    BugCheckParameter3[0] = W32GetUserSessionState(2LL, a2) + 16256;
    HMAssignmentLock(BugCheckParameter3, 0LL);
    InputTraceLogging::Mouse::SetCapture(*v3, (struct tagWND *)v5, 1u);
    v7 = 2LL;
    v8 = 2;
  }
  else
  {
    v8 = a3;
    if ( !a3 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(2LL, a2) + 16256) )
      {
        v10 = *(_QWORD *)(W32GetUserSessionState(v9, a2) + 16256);
        if ( a1 == *(struct tagTHREADINFO **)(v10 + 16) )
        {
          UserSessionState = W32GetUserSessionState(v10, a2);
          HMAssignmentUnlock(UserSessionState + 16256);
          InputTraceLogging::Mouse::SetCapture(*v3, 0LL, 1u);
        }
      }
      v7 = 2LL;
    }
  }
  v12 = *v3;
  if ( v12 )
  {
    v13 = *((_QWORD *)a1 + 61);
    if ( (*(_DWORD *)(v13 + 48) & 0xC0) != 0 && *(_DWORD *)(v13 + 200) == 1 )
    {
      if ( (v14 = *(__int64 **)(v13 + 192), v14 == v5) && v8 != 2
        || v14 == *((__int64 **)v12 + 14) && *((_DWORD *)v12 + 39) != 2 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)BugCheckParameter3);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v13 + 48),
          *(_QWORD *)(v13 + 192),
          *(unsigned int *)(v13 + 200),
          192LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
      }
    }
    v15 = LockCaptureWindow(v12, (struct tagWND *)v5);
    *((_DWORD *)v12 + 39) = v8;
    v6 = (struct tagWND *)v15;
    if ( v5 )
    {
      if ( IsMiPEnabledForThread(v5[2]) && !IsMiPEnabledForWindow((__int64)v5) )
      {
        a2 = *(struct tagWND **)(v16 + 1512);
        if ( a2 )
        {
          v7 = *(unsigned int *)a2;
          if ( (v7 & 4) == 0 && (v7 & 2) == 0 && (v7 & 0x10) == 0 && (v7 & 1) != 0 )
          {
            if ( (v7 & 0x20) != 0 || (*((_DWORD *)a2 + 9) & 0x1F0) != 0 )
              v7 = (unsigned int)v7 | 4;
            else
              v7 = (unsigned int)v7 | 2;
            *(_DWORD *)a2 = v7;
            **(_DWORD **)(v16 + 1512) &= ~0x10u;
          }
        }
      }
    }
  }
  v17 = W32GetUserSessionState(v7, a2);
  ++*(_DWORD *)(v17 + 70592);
  v20 = 3;
  if ( v5 )
  {
    if ( !v6 )
    {
LABEL_38:
      if ( !*(_DWORD *)(W32GetUserSessionState(v19, v18) + 70592) )
        v20 = 1;
      xxxWindowEvent(8u, (struct tagWND *)v5, 0, 0, v20);
      goto LABEL_41;
    }
  }
  else
  {
    if ( !v6 )
    {
LABEL_51:
      zzzEndDeferWinEventNotify();
      return;
    }
    v21 = *((_QWORD *)v6 + 2);
    if ( _bittest64((const signed __int64 *)(v21 + 680), 0x3Cu) )
    {
      v22 = *(struct tagQ **)(v21 + 464);
      *((_DWORD *)v22 + 109) |= 0x20u;
      SetSystemInputSource((char *)v22 + 460);
      WakeSomeone(v22, (struct tagTHREADINFO *)v21, 0x200u, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v23 = W32GetUserSessionState(v19, v18);
  v24 = 3;
  if ( !*(_DWORD *)(v23 + 70592) )
    v24 = 1;
  xxxWindowEvent(9u, v6, 0, 0, v24);
  if ( v5 )
    goto LABEL_38;
LABEL_41:
  if ( !v6 || *(__int16 *)(*((_QWORD *)v6 + 5) + 42LL) < 0 )
    goto LABEL_51;
  if ( *((_QWORD *)a1 + 80) && v5 )
    *((_DWORD *)v12 + 109) |= 0x100000u;
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v6);
  zzzEndDeferWinEventNotify();
  v25 = 0LL;
  if ( v5 )
    v25 = *v5;
  xxxSendMessageCallback(v6, 0x215u, 0LL, v25, 0LL, 0LL, 0, 0, 1);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  v26 = *((_QWORD *)a1 + 58);
  if ( !v26 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 358LL);
  *(_DWORD *)(v26 + 436) &= ~0x100000u;
}
