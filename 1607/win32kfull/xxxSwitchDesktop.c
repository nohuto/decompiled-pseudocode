/*
 * XREFs of xxxSwitchDesktop @ 0x1C0095924
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     NtUserSwitchDesktop @ 0x1C0093EF0 (NtUserSwitchDesktop.c)
 *     RemoteDisableScreen @ 0x1C00EC3F0 (RemoteDisableScreen.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0106CB4 (xxxSwitchDesktopWithFade.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C009425C (EraseBitmap.c)
 *     DwmSyncDesktopSwitch @ 0x1C0094540 (DwmSyncDesktopSwitch.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     ResetPointerDevices @ 0x1C009472C (ResetPointerDevices.c)
 *     FreeAllSpbs @ 0x1C0094950 (FreeAllSpbs.c)
 *     GreDesktopSwitch @ 0x1C0094978 (GreDesktopSwitch.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C0094BF0 (UserResetPointer.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C0094E38 (GreLddmProcessDesktopSwitch.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0094EF4 (DrvOcclusionStateChangeNotify.c)
 *     ClearKeyboardStates @ 0x1C0094F30 (ClearKeyboardStates.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 *     IPostQuitMessage @ 0x1C00ED274 (IPostQuitMessage.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C010DBD0 (xxxBroadcastDisplaySettingsChange.c)
 *     SetTimerCoalescingTolerance @ 0x1C012D1C0 (SetTimerCoalescingTolerance.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r12d
  int v5; // r15d
  __int64 v8; // rsi
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v11; // rax
  __int64 v12; // r13
  struct tagWND *v13; // rcx
  __int64 v14; // r8
  _QWORD **v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rbx
  struct HLFONT__ *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // ebx
  __int64 v25; // r9
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
  __int64 v36; // r9
  __int64 i; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *j; // rbx
  __int64 v41; // r14
  int v42; // eax
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  BOOL v49; // esi
  __int64 v50; // rcx
  int v51; // r8d
  int WindowCloakState; // eax
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  int ObjectType; // [rsp+20h] [rbp-99h]
  void *Handle; // [rsp+50h] [rbp-69h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-61h]
  _QWORD v63[3]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v64[3]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v65[3]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v66[24]; // [rsp+A8h] [rbp-11h] BYREF
  _BYTE v67[80]; // [rsp+C0h] [rbp+7h] BYREF
  int v68; // [rsp+128h] [rbp+6Fh]

  v4 = 0;
  Handle = 0LL;
  v5 = a4;
  v8 = a1;
  v9 = gptiCurrent;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v8 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(v8 + 32) & 4) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v11 = gspdeskDisconnect;
  v12 = *(_QWORD *)(v8 + 24);
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect )
  {
    if ( !PsIsSystemThread(CurrentThread)
      && (PVOID)a2 != grpdeskLogon
      && (*(_BYTE *)(v8 + 32) & 1) != 0
      && (a3 & 2) == 0
      && PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
    {
      return 3221225506LL;
    }
    v11 = gspdeskDisconnect;
  }
  if ( gbDesktopLocked && (!v11 || (PVOID)a2 != v11) )
  {
    LockObjectAssignment(&gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, v67, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock(Handle, v66, AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 408LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v13 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v63[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v63;
    v63[1] = v13;
    ++*((_DWORD *)v13 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 16LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v59, v58);
  }
  v14 = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) && gpqForeground )
    {
      HMAssignmentLock(grpdeskRitInput + 80LL, *(_QWORD *)(gpqForeground + 88LL));
      xxxSetForegroundWindow2(0LL);
      v14 = grpdeskRitInput;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_97;
    v15 = (_QWORD **)(*(_QWORD *)v14 + 160LL);
    v16 = *v15;
    if ( *v15 != v15 )
    {
      do
      {
        v17 = *(v16 - 34);
        if ( (*(_DWORD *)(v17 + 340) & 1) != 0 )
          PostUpdateKeyStateEvent(*(v16 - 34));
        *(_DWORD *)(v17 + 340) &= ~0x100u;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != v15 );
      v14 = grpdeskRitInput;
      v9 = gptiCurrent;
    }
    if ( *(_QWORD *)v14 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 244LL) & 1) != 0 )
    {
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
      ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL));
      v18 = *gpDispInfo;
      GreLockDynamicModeChange(*gpDispInfo);
      GreUnlockDynamicModeChange(v18);
      v19 = *(struct HLFONT__ **)(v8 + 88);
      if ( v19 )
        EraseBitmap(v19);
      v14 = grpdeskRitInput;
      v5 = a4;
      v4 = 1;
    }
    else
    {
LABEL_97:
      v5 = a4;
    }
  }
  LockObjectAssignment(v14, a2);
  if ( gptiDit )
    LockObjectAssignment(gptiDit + 408, a2);
  gdwRitInputDesktopId = *(_QWORD *)(grpdeskRitInput + 40LL);
  CitDesktopSwitch();
  v22 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(v22 + 244) & 1) != 0 )
    ComposeWindow(*(struct tagWND **)(v22 + 16));
  FreeAllSpbs(v22, v20, v21);
  v24 = zzzSetDesktop(gptiRit, a2, 0LL, v23);
  if ( v24 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 384LL) != *(_QWORD *)(v12 + 24) )
    {
      AllocQueue(0LL);
      ++*(_DWORD *)(*(_QWORD *)(v12 + 24) + 344LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v12 + 16), *(struct tagQ **)(v12 + 24));
    }
    v68 = zzzSetDesktop(*(struct tagTHREADINFO **)(v12 + 16), a2, 0LL, v25);
    v24 = v68;
    if ( v68 >= 0 )
    {
      v27 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 244LL);
      if ( (v27 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v27, v26);
        v29 = (void *)UserReferenceDwmApiPort(v28);
        DwmSyncDesktopSwitch(v29, *(_QWORD *)(a2 + 40), v5);
        EnterCrit(0LL, 1LL);
      }
      if ( !v4 || (v30 = 1, (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) == 0) )
        v30 = 0;
      GreDesktopSwitch(*gpDispInfo, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1, v30, *(_QWORD *)(a2 + 40), ObjectType);
      if ( v4 == (*(_BYTE *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) )
        UserResetPointer();
      else
        zzzEnableDwmPointerSupport(*(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1, 0);
      v31 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      v64[0] = *(_QWORD *)(v9 + 368);
      *(_QWORD *)(v9 + 368) = v64;
      v64[1] = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v33 = 1, (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 244LL) & 1) == 0) )
        v33 = 0;
      v32 = (4 * (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 244LL) & 1)) | 1;
      v34 = ((unsigned __int8)v32 ^ (unsigned __int8)(8 * v33)) & 8 ^ v32;
      GreSuspendDirectDraw(*gpDispInfo, v34);
      xxxSetWindowPosAndBand(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 16LL), 0, 0, 67, 0);
      GreResumeDirectDraw(*gpDispInfo, v34);
      i = *(_QWORD *)(a2 + 80);
      if ( !i
        || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)i + gSharedInfo[1] + 17LL) & 1) != 0
        || (*(_BYTE *)(i + 290) & 0x40) != 0 && (GetWindowCloakState(*(_QWORD *)(a2 + 80)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(i + 16) + 376LL)
        && (GetWindowCloakState(i) & 1) != 0 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) + 96LL); i; i = *(_QWORD *)(i + 72) )
        {
          v49 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(i + 16) + 376LL);
          if ( !(unsigned int)IsNonImmersiveBand(i, v35, 0LL, v36) || v49 || (*(_BYTE *)(i + 290) & 0x40) != 0 )
          {
            WindowCloakState = GetWindowCloakState(v50);
            if ( !v49 || (v53 = 1, (WindowCloakState & 1) == 0) )
              v53 = 0;
            if ( WindowCloakState || (v54 = 0, (*(_BYTE *)(i + 51) & 8) != 0) )
              v54 = 1;
            if ( v53 || (v51 = 0, v54) )
              v51 = 1;
          }
          if ( (*(_BYTE *)(i + 55) & 0x18) == 0x10 && !v51 )
            break;
        }
      }
      HMAssignmentUnlock(a2 + 80);
      if ( i )
      {
        if ( (*(_BYTE *)(i + 47) & 7) == 4 )
        {
          SetOrClrWF(0LL, i, 1799LL, 1LL);
          SetOrClrWF(1LL, i, 1793LL, 1LL);
        }
        v65[0] = *(_QWORD *)(v9 + 368);
        *(_QWORD *)(v9 + 368) = v65;
        v65[1] = i;
        ++*(_DWORD *)(i + 8);
        xxxSetForegroundWindow2((struct tagWND *)i);
        ThreadUnlock1(v56, v55);
      }
      else
      {
        xxxSetForegroundWindow2(0LL);
      }
      ThreadUnlock1(v39, v38);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 160LL); j != (_QWORD *)(grpdeskRitInput + 160LL); j = (_QWORD *)*j )
      {
        v41 = *(j - 34);
        v42 = *(_DWORD *)(v41 + 340);
        if ( (v42 & 0x100) == 0 )
        {
          *(_DWORD *)(v41 + 340) = v42 | 0x101;
          memset((void *)(v41 + 160), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v41);
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
      v43 = *(_DWORD *)(a2 + 32);
      if ( (v43 & 0x20) != 0 )
      {
        v57 = *(_QWORD *)(a2 + 8);
        if ( v57 )
        {
          if ( *(_QWORD *)(v57 + 16) )
          {
            *(_DWORD *)(a2 + 32) = v43 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      v44 = gpsi;
      if ( (*(_DWORD *)(gpsi + 2220LL) & 8) != 0 )
      {
        xxxSetAutoRotationConvertible(1LL);
        v44 = gpsi;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v44 + 2220LL) & 0x10) != 0 )
        xxxSetAutoRotationDocked(1LL);
      xxxApplyOrientationPreference();
      v24 = v68;
    }
  }
  PopAndFreeAlwaysW32ThreadLock(v66);
  PopAndFreeW32ThreadLock((__int64)v67, v45, v46, v47);
  return (unsigned int)v24;
}
