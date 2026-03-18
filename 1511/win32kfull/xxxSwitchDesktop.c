/*
 * XREFs of xxxSwitchDesktop @ 0x1C0093754
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     RemoteDisableScreen @ 0x1C009DB54 (RemoteDisableScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x1C00E3790 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00E3890 (xxxSwitchDesktopWithFade.c)
 *     RemoteRedrawScreen @ 0x1C014E7A8 (RemoteRedrawScreen.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 *     ClearKeyboardStates @ 0x1C0096998 (ClearKeyboardStates.c)
 *     xxxApplyOrientationPreference @ 0x1C0096AC8 (xxxApplyOrientationPreference.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0096B6C (DrvOcclusionStateChangeNotify.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C0096BA8 (GreLddmProcessDesktopSwitch.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C0096E30 (UserResetPointer.c)
 *     GreDesktopSwitch @ 0x1C0097148 (GreDesktopSwitch.c)
 *     FreeAllSpbs @ 0x1C0097200 (FreeAllSpbs.c)
 *     ResetPointerDevices @ 0x1C009D940 (ResetPointerDevices.c)
 *     IPostQuitMessage @ 0x1C009F3C4 (IPostQuitMessage.c)
 *     DwmSyncDesktopSwitch @ 0x1C00C647C (DwmSyncDesktopSwitch.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00EF380 (xxxBroadcastDisplaySettingsChange.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     SetTimerCoalescingTolerance @ 0x1C010B090 (SetTimerCoalescingTolerance.c)
 *     EraseBitmap @ 0x1C01103CC (EraseBitmap.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     xxxSetAutoRotationDocked @ 0x1C014F5A0 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C014F5D4 (xxxSetAutoRotationConvertible.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  __int64 v6; // rsi
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r9
  struct tagWND *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD **v18; // r15
  _QWORD *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // rax
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // ebx
  char v32; // al
  unsigned int v33; // ebx
  __int64 i; // rbx
  BOOL v35; // esi
  __int64 v36; // rcx
  int v37; // r8d
  int WindowCloakState; // eax
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *j; // rbx
  __int64 v46; // r14
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  int ObjectType; // [rsp+20h] [rbp-99h]
  void *Handle; // [rsp+50h] [rbp-69h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-61h]
  _QWORD v57[3]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v58[3]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v59[3]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v60[3]; // [rsp+A8h] [rbp-11h] BYREF
  _QWORD v61[10]; // [rsp+C0h] [rbp+7h] BYREF
  int v62; // [rsp+128h] [rbp+6Fh]

  v3 = 0;
  Handle = 0LL;
  v6 = a1;
  v7 = gptiCurrent;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v6 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(v6 + 32) & 4) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v10 = gspdeskDisconnect;
  v11 = *(_QWORD *)(v6 + 24);
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect )
  {
    if ( !PsIsSystemThread(CurrentThread)
      && (PVOID)a2 != grpdeskLogon
      && (*(_DWORD *)(v6 + 32) & 1) != 0
      && (a3 & 2) == 0
      && PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
    {
      return 3221225506LL;
    }
    v10 = gspdeskDisconnect;
  }
  if ( gbDesktopLocked && (!v10 || (PVOID)a2 != v10) )
  {
    LockObjectAssignment(&gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, v61, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock((__int64)Handle, v60, (__int64)AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 408LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v14 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v59[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v59;
    v59[1] = v14;
    ++*((_DWORD *)v14 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 16LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v16, v15);
  }
  v17 = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) )
    {
      v12 = gpqForeground;
      if ( gpqForeground )
      {
        HMAssignmentLock(grpdeskRitInput + 80LL, *(_QWORD *)(gpqForeground + 80LL));
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0x20u, 0);
        v17 = grpdeskRitInput;
      }
    }
    if ( *(_QWORD *)v17 )
    {
      v18 = (_QWORD **)(*(_QWORD *)v17 + 160LL);
      v19 = *v18;
      if ( *v18 != v18 )
      {
        do
        {
          v20 = *(v19 - 34);
          if ( (*(_DWORD *)(v20 + 332) & 1) != 0 )
            PostUpdateKeyStateEvent(*(v19 - 34), v12, v17, v13);
          *(_DWORD *)(v20 + 332) &= ~0x100u;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 != v18 );
        v17 = grpdeskRitInput;
        v7 = gptiCurrent;
      }
      if ( *(_QWORD *)v17 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) + 244LL) & 1) != 0 )
      {
        if ( gfade[2] )
          StopFade();
        bSetDevDragRect((HDEV)*gpDispInfo);
        ComposeWindow(*(__m128i **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 6);
        v21 = *gpDispInfo;
        GreLockDynamicModeChange(*gpDispInfo);
        GreUnlockDynamicModeChange(v21);
        if ( *(_QWORD *)(v6 + 88) )
          EraseBitmap();
        v17 = grpdeskRitInput;
        v3 = 1;
      }
    }
  }
  LockObjectAssignment(v17, a2);
  if ( gptiDit )
    LockObjectAssignment(gptiDit + 408, a2);
  gdwRitInputDesktopId = *(_QWORD *)(grpdeskRitInput + 40LL);
  CitDesktopSwitch();
  v22 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(v22 + 244) & 1) != 0 )
    ComposeWindow(*(__m128i **)(v22 + 16), 5);
  FreeAllSpbs();
  v23 = zzzSetDesktop(gptiRit, a2, 0LL);
  if ( v23 >= 0 )
  {
    v24 = *(_QWORD *)(v11 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL) != v24 )
    {
      AllocQueue(0LL, v24);
      ++*(_DWORD *)(*(_QWORD *)(v11 + 24) + 336LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v11 + 16), *(struct tagQ **)(v11 + 24), 0LL, 0);
    }
    v62 = zzzSetDesktop(*(struct tagTHREADINFO **)(v11 + 16), a2, 0LL);
    v23 = v62;
    if ( v62 >= 0 )
    {
      v26 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 244LL);
      if ( (v26 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v26, v25);
        v28 = (void *)UserReferenceDwmApiPort(v27);
        DwmSyncDesktopSwitch(v28);
        EnterCrit(0LL, 1LL);
      }
      if ( !v3 || (v29 = 1, (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) == 0) )
        v29 = 0;
      GreDesktopSwitch(*gpDispInfo, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1, v29, *(_QWORD *)(a2 + 40), ObjectType);
      if ( v3 == (*(_BYTE *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) )
        UserResetPointer();
      else
        zzzEnableDwmPointerSupport(*(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1, 0LL);
      v30 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      v57[0] = *(_QWORD *)(v7 + 368);
      *(_QWORD *)(v7 + 368) = v57;
      v57[1] = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      GreLddmProcessDesktopSwitch();
      if ( !v3 || (v32 = 1, (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) == 0) )
        v32 = 0;
      v31 = (4 * (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1)) | 1;
      v33 = ((unsigned __int8)v31 ^ (unsigned __int8)(8 * v32)) & 8 ^ v31;
      GreSuspendDirectDraw(*gpDispInfo, v33);
      xxxSetWindowPosAndBand(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 16LL), 0, 0, 0, 0, 0, 323, 0);
      GreResumeDirectDraw(*gpDispInfo, v33);
      i = *(_QWORD *)(a2 + 80);
      if ( !i
        || (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)i
                     + *((_QWORD *)&gSharedInfo + 1)
                     + 17LL) & 1) != 0
        || (*(_BYTE *)(i + 290) & 0x40) != 0 && (GetWindowCloakState(*(_QWORD *)(a2 + 80)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(i + 16) + 376LL)
        && (GetWindowCloakState(i) & 1) != 0 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) + 96LL); i; i = *(_QWORD *)(i + 72) )
        {
          v35 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(i + 16) + 376LL);
          if ( !IsNonImmersiveBand(i) || v35 || (*(_BYTE *)(i + 290) & 0x40) != 0 )
          {
            WindowCloakState = GetWindowCloakState(v36);
            if ( !v35 || (v39 = 1, (WindowCloakState & 1) == 0) )
              v39 = 0;
            if ( WindowCloakState || (v40 = 0, (*(_BYTE *)(i + 51) & 8) != 0) )
              v40 = 1;
            if ( v39 || (v37 = 0, v40) )
              v37 = 1;
          }
          if ( (*(_BYTE *)(i + 55) & 0x18) == 0x10 && !v37 )
            break;
        }
      }
      HMAssignmentUnlock(a2 + 80);
      if ( i )
      {
        if ( (*(_BYTE *)(i + 47) & 7) == 4 )
        {
          SetOrClrWF(0, (_DWORD *)i, 0x707u, 1);
          SetOrClrWF(1, (_DWORD *)i, 0x701u, 1);
        }
        v58[0] = *(_QWORD *)(v7 + 368);
        *(_QWORD *)(v7 + 368) = v58;
        v58[1] = i;
        ++*(_DWORD *)(i + 8);
        xxxSetForegroundWindow2((LARGE_INTEGER *)i, v7, 0x20u, 0);
        ThreadUnlock1(v44, v43);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 0x20u, 0);
      }
      ThreadUnlock1(v42, v41);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 160LL); j != (_QWORD *)(grpdeskRitInput + 160LL); j = (_QWORD *)*j )
      {
        v46 = *(j - 34);
        v47 = *(_DWORD *)(v46 + 332);
        if ( (v47 & 0x100) == 0 )
        {
          *(_DWORD *)(v46 + 332) = v47 | 0x101;
          memset((void *)(v46 + 152), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v46, v48, v49, v50);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v51 = *(_DWORD *)(a2 + 32);
      if ( (v51 & 0x20) != 0 )
      {
        v52 = *(_QWORD *)(a2 + 8);
        if ( v52 )
        {
          if ( *(_QWORD *)(v52 + 16) )
          {
            *(_DWORD *)(a2 + 32) = v51 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      v53 = gpsi;
      if ( (*(_DWORD *)(gpsi + 2220LL) & 8) != 0 )
      {
        xxxSetAutoRotationConvertible(1LL);
        v53 = gpsi;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v53 + 2220LL) & 0x10) != 0 )
        xxxSetAutoRotationDocked(1LL);
      xxxApplyOrientationPreference();
      v23 = v62;
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v60);
  PopAndFreeW32ThreadLock((__int64)v61);
  return (unsigned int)v23;
}
