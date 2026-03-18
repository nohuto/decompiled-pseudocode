/*
 * XREFs of xxxSwitchDesktop @ 0x1C0041C84
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00FF360 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00FF460 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C012DEBC (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     GreDesktopSwitch @ 0x1C000A0D8 (GreDesktopSwitch.c)
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0039450 (xxxBroadcastDisplaySettingsChange.c)
 *     FreeAllSpbs @ 0x1C003E1D0 (FreeAllSpbs.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C003E350 (UserResetPointer.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C003E4CC (GreLddmProcessDesktopSwitch.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C003E588 (DrvOcclusionStateChangeNotify.c)
 *     ClearKeyboardToggleStates @ 0x1C00413F0 (ClearKeyboardToggleStates.c)
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x1C00F8FD4 (IPostQuitMessage.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     SetTimerCoalescingTolerance @ 0x1C00FF690 (SetTimerCoalescingTolerance.c)
 *     DwmSyncDesktopSwitch @ 0x1C01005C8 (DwmSyncDesktopSwitch.c)
 *     EraseBitmap @ 0x1C0100680 (EraseBitmap.c)
 *     ResetPointerDevices @ 0x1C0100DBC (ResetPointerDevices.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     xxxSetAutoRotationDocked @ 0x1C0132610 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0132624 (xxxSetAutoRotationConvertible.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  __int64 v6; // rsi
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v10; // rax
  __int64 v11; // r13
  struct tagWND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD **v16; // r15
  _QWORD *v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  void *v29; // rax
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // ebx
  char v33; // al
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r14
  BOOL v39; // esi
  __int64 v40; // rcx
  int v41; // r8d
  int WindowCloakState; // eax
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *i; // rbx
  __int64 v50; // r14
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  int ObjectType; // [rsp+20h] [rbp-99h]
  void *Handle; // [rsp+58h] [rbp-61h] BYREF
  PETHREAD Thread; // [rsp+60h] [rbp-59h]
  _QWORD v58[3]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v59[3]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v60[3]; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v61[24]; // [rsp+B0h] [rbp-9h] BYREF
  _BYTE v62[72]; // [rsp+C8h] [rbp+Fh] BYREF
  int v63; // [rsp+128h] [rbp+6Fh]

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
  PushW32ThreadLock(a2, v62, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock(Handle, v61, AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 416LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v12 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v58[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v58;
    v58[1] = v12;
    ++*((_DWORD *)v12 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0x10u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v14, v13);
  }
  v15 = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) && gpqForeground )
    {
      HMAssignmentLock(grpdeskRitInput + 80LL, *(_QWORD *)(gpqForeground + 80LL));
      xxxSetForegroundWindow2(0LL);
      v15 = grpdeskRitInput;
    }
    if ( *(_QWORD *)v15 )
    {
      v16 = (_QWORD **)(*(_QWORD *)v15 + 160LL);
      v17 = *v16;
      if ( *v16 != v16 )
      {
        do
        {
          v18 = *(v17 - 34);
          if ( (*(_DWORD *)(v18 + 332) & 1) != 0 )
            PostUpdateKeyStateEvent(*(v17 - 34));
          *(_DWORD *)(v18 + 332) &= ~0x100u;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 != v16 );
        v15 = grpdeskRitInput;
        v7 = gptiCurrent;
      }
      if ( *(_QWORD *)v15 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 260LL) & 1) != 0 )
      {
        if ( gfade[2] )
          StopFade();
        bSetDevDragRect((HDEV)*gpDispInfo);
        ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 6LL, v19, v20);
        v21 = *gpDispInfo;
        GreLockDynamicModeChange(*gpDispInfo);
        GreUnlockDynamicModeChange(v21);
        if ( *(_QWORD *)(v6 + 88) )
          EraseBitmap();
        v15 = grpdeskRitInput;
        v3 = 1;
      }
    }
  }
  LockObjectAssignment(v15, a2);
  if ( gptiDit )
    LockObjectAssignment(gptiDit + 416, a2);
  gdwRitInputDesktopId = *(_QWORD *)(grpdeskRitInput + 40LL);
  CitDesktopSwitch();
  v24 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(v24 + 260) & 1) != 0 )
    ComposeWindow(*(struct tagWND **)(v24 + 16), 5LL, v22, v23);
  FreeAllSpbs();
  v25 = zzzSetDesktop(gptiRit);
  if ( v25 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 392LL) != *(_QWORD *)(v11 + 24) )
    {
      AllocQueue(0LL);
      ++*(_DWORD *)(*(_QWORD *)(v11 + 24) + 336LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v11 + 16), *(struct tagQ **)(v11 + 24));
    }
    v63 = zzzSetDesktop(*(struct tagTHREADINFO **)(v11 + 16));
    v25 = v63;
    if ( v63 >= 0 )
    {
      v27 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 260LL);
      if ( (v27 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v27, v26);
        v29 = (void *)UserReferenceDwmApiPort(v28);
        DwmSyncDesktopSwitch(v29);
        EnterCrit(1LL);
      }
      if ( !v3 || (v30 = 1, (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 260LL) & 1) == 0) )
        v30 = 0;
      GreDesktopSwitch(*gpDispInfo, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 260LL) & 1, v30, *(_QWORD *)(a2 + 40), ObjectType);
      if ( v3 == (*(_BYTE *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 260LL) & 1) )
        UserResetPointer();
      else
        zzzEnableDwmPointerSupport(*(_DWORD *)(*(_QWORD *)(a2 + 8) + 260LL) & 1, 0);
      v31 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      v60[0] = *(_QWORD *)(v7 + 376);
      *(_QWORD *)(v7 + 376) = v60;
      v60[1] = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      GreLddmProcessDesktopSwitch();
      if ( !v3 || (v33 = 1, (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 260LL) & 1) == 0) )
        v33 = 0;
      v32 = (4 * (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 260LL) & 1)) | 1;
      v34 = ((unsigned __int8)v32 ^ (unsigned __int8)(8 * v33)) & 8 ^ v32;
      GreSuspendDirectDraw(*gpDispInfo, v34);
      xxxSetWindowPosAndBand(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 16LL), 0, 0, 67, 0);
      GreResumeDirectDraw(*gpDispInfo, v34);
      v36 = *(_QWORD *)(a2 + 80);
      if ( !v36
        || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v36 + gSharedInfo[1] + 17LL) & 1) != 0
        || (*(_BYTE *)(v36 + 290) & 0x40) != 0 && (GetWindowCloakState(*(_QWORD *)(a2 + 80)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(v36 + 16) + 384LL)
        && (GetWindowCloakState(v36) & 1) != 0 )
      {
        v37 = *(_QWORD *)(a2 + 8);
        v36 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 96LL);
        if ( v36 )
        {
          v38 = *(_QWORD *)(v37 + 168);
          do
          {
            v39 = v38 == *(_QWORD *)(*(_QWORD *)(v36 + 16) + 384LL);
            if ( !(unsigned int)IsNonImmersiveBand(v36, v35, 0LL) || v39 || (*(_BYTE *)(v36 + 290) & 0x40) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v40);
              if ( !v39 || (v43 = 1, (WindowCloakState & 1) == 0) )
                v43 = 0;
              if ( WindowCloakState || (v44 = 0, (*(_BYTE *)(v36 + 51) & 8) != 0) )
                v44 = 1;
              if ( v43 || (v41 = 0, v44) )
                v41 = 1;
            }
            if ( (*(_BYTE *)(v36 + 55) & 0x18) == 0x10 && !v41 )
              break;
            v36 = *(_QWORD *)(v36 + 72);
          }
          while ( v36 );
          v7 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(a2 + 80);
      if ( v36 )
      {
        if ( (*(_BYTE *)(v36 + 47) & 7) == 4 )
        {
          SetOrClrWF(0LL, v36, 1799LL, 1LL);
          SetOrClrWF(1LL, v36, 1793LL, 1LL);
        }
        v59[0] = *(_QWORD *)(v7 + 376);
        *(_QWORD *)(v7 + 376) = v59;
        v59[1] = v36;
        ++*(_DWORD *)(v36 + 8);
        xxxSetForegroundWindow2((struct tagWND *)v36);
        ThreadUnlock1(v48, v47);
      }
      else
      {
        xxxSetForegroundWindow2(0LL);
      }
      ThreadUnlock1(v46, v45);
      ClearKeyboardToggleStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
      {
        v50 = *(i - 34);
        v51 = *(_DWORD *)(v50 + 332);
        if ( (v51 & 0x100) == 0 )
        {
          *(_DWORD *)(v50 + 332) = v51 | 0x101;
          memset((void *)(v50 + 152), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v50);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(32, 0, 0, 0, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v52 = *(_DWORD *)(a2 + 32);
      if ( (v52 & 0x20) != 0 )
      {
        v53 = *(_QWORD *)(a2 + 8);
        if ( v53 )
        {
          if ( *(_QWORD *)(v53 + 16) )
          {
            *(_DWORD *)(a2 + 32) = v52 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      v54 = gpsi;
      if ( (*(_DWORD *)(gpsi + 2220LL) & 8) != 0 )
      {
        xxxSetAutoRotationConvertible(1LL);
        v54 = gpsi;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v54 + 2220LL) & 0x10) != 0 )
        xxxSetAutoRotationDocked(1LL);
      xxxApplyOrientationPreference();
      v25 = v63;
    }
  }
  PopAndFreeAlwaysW32ThreadLock(v61);
  PopAndFreeW32ThreadLock(v62);
  return (unsigned int)v25;
}
