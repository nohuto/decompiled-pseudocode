/*
 * XREFs of xxxFreeWindow @ 0x1C0088BC8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C0009520 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DeleteHrgnClip @ 0x1C000B1D0 (DeleteHrgnClip.c)
 *     ClearDelegationCapture @ 0x1C0044230 (ClearDelegationCapture.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     GetClassPtr @ 0x1C005D620 (GetClassPtr.c)
 *     InvalidateDCE @ 0x1C005E7C8 (InvalidateDCE.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C006BDA0 (FindQMsg.c)
 *     SfnDWORD @ 0x1C006D4F0 (SfnDWORD.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C007B15C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     DeleteProperties @ 0x1C00860BC (DeleteProperties.c)
 *     DestroyWindowSmIcon @ 0x1C0086174 (DestroyWindowSmIcon.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     DwmAsyncChildDestroy @ 0x1C0088B44 (DwmAsyncChildDestroy.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C008A0F0 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C008A1A4 (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C008A1E8 (UpdatePointerRedirIsAlive.c)
 *     FreeClientOnWindowDestruction @ 0x1C008A230 (FreeClientOnWindowDestruction.c)
 *     DereferenceClass @ 0x1C008A2C0 (DereferenceClass.c)
 *     ResetWindowTransform @ 0x1C008A308 (ResetWindowTransform.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C008A328 (GreDeleteSpriteOverlapPresent.c)
 *     CleanupWindowRedirection @ 0x1C008B0D0 (CleanupWindowRedirection.c)
 *     ClearSendMessages @ 0x1C008B114 (ClearSendMessages.c)
 *     DestroyWindowsHotKeys @ 0x1C008B2A8 (DestroyWindowsHotKeys.c)
 *     DestroyWindowsTimers @ 0x1C008B330 (DestroyWindowsTimers.c)
 *     MagpFindThreadContext @ 0x1C008B374 (MagpFindThreadContext.c)
 *     xxxRemoveFullScreen @ 0x1C008B664 (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C008B8B8 (xxxRemoveShadow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     DecPaintCount @ 0x1C00EB508 (DecPaintCount.c)
 *     IPostQuitMessage @ 0x1C00F8FD4 (IPostQuitMessage.c)
 *     UnlockWndMenu @ 0x1C00FA890 (UnlockWndMenu.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     _DeregisterShellHookWindow @ 0x1C00FF250 (_DeregisterShellHookWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
 *     IsSysShadow @ 0x1C0128C54 (IsSysShadow.c)
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0149F90 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C014AD50 (CleanupIAMAccess.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     _NotifyOverlayWindow @ 0x1C01D5F70 (_NotifyOverlayWindow.c)
 *     ChangeComposableCursor @ 0x1C01E6918 (ChangeComposableCursor.c)
 *     FindSpb @ 0x1C01EA224 (FindSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01EC184 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01EFB80 (xxxDeferredDesktopRotation.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01FD1B8 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01FEA7C (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C0200E20 (RemoveSwitchWindowInfo.c)
 *     DwmAsyncMagnDestroy @ 0x1C025EFF0 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C027CE10 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int16 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  struct tagWND **v14; // rcx
  struct tagWND **v15; // rcx
  struct tagWND **v16; // rcx
  struct tagWND **v17; // rcx
  struct tagWND **v18; // rcx
  struct tagWND **v19; // rcx
  struct tagWND **v20; // rcx
  __int64 v21; // rax
  struct tagHID_PAGEONLY_REQUEST **i; // rsi
  CompositionObject *v23; // rcx
  __int16 v24; // ax
  unsigned __int16 v25; // cx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagWND **v28; // rcx
  struct tagWND **v29; // rcx
  struct tagWND **v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct tagWND **v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct tagSHADOW **v38; // rcx
  struct tagSHADOW *v39; // rbx
  __int64 Prop; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rbx
  TOKEN_TYPE v45; // eax
  void *v46; // rcx
  __int64 v47; // rax
  __int64 ThreadContext; // rax
  __int64 LensContext; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  void *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 *QMsg; // rax
  __int64 v59; // rbx
  char *v60; // rdx
  __int64 v61; // rbx
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // rbx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  EWNDOBJ *v70; // rbx
  _QWORD **v71; // rcx
  __int64 *v72; // rsi
  __int64 v73; // rbx
  int v74; // edx
  __int64 v75; // rcx
  __int64 Spb; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  void *v80; // r8
  void *v81; // r8
  __int64 v82; // rax
  struct tagWND *v83; // rdx
  char *v84; // rsi
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  void *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rbx
  _DWORD *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  void *v104; // rax
  void *v105; // rcx
  __int64 v106; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v109; // rcx
  __int64 v111; // [rsp+40h] [rbp-58h] BYREF
  __int64 v112; // [rsp+48h] [rbp-50h]
  _QWORD v113[3]; // [rsp+58h] [rbp-40h] BYREF
  struct tagSwitchWndInfo *v114; // [rsp+A8h] [rbp+10h] BYREF

  v114 = a2;
  v3 = 0;
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( a1 == *(struct tagWND **)(v5 + 160) )
    {
      HMAssignmentUnlock(v5 + 160);
      CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3));
      v6 = *((_QWORD *)a1 + 3);
      v7 = gaptiShellMiP;
      v8 = 5LL;
      do
      {
        if ( *v7 && *(_QWORD *)(*v7 + 416LL) == v6 )
          *v7 = 0LL;
        ++v7;
        --v8;
      }
      while ( v8 );
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
        DwmAsyncShellWindowChange(v13);
      }
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
      v3 = (*(unsigned __int8 *)(v5 + 260) >> 1) & 1;
    }
    if ( *(struct tagWND **)(v5 + 176) == a1 )
      HMAssignmentUnlock(v5 + 176);
    v14 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 200LL);
    if ( *v14 == a1 )
      HMAssignmentUnlock(v14);
    v15 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
    if ( *v15 == a1 )
      HMAssignmentUnlock(v15);
    v16 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
    if ( *v16 == a1 )
      HMAssignmentUnlock(v16);
    v17 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 208LL);
    if ( *v17 == a1 )
      HMAssignmentUnlock(v17);
    v18 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 312LL);
    if ( *v18 == a1 )
    {
      HMAssignmentUnlock(v18);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 320LL) = 0;
    }
    v19 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 288LL);
    if ( *v19 == a1 )
      HMAssignmentUnlock(v19);
    UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    v20 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 240LL);
    if ( *v20 == a1 )
      HMAssignmentUnlock(v20);
    if ( (*((_BYTE *)a1 + 47) & 0x40) != 0 )
      DeregisterShellHookWindow(a1);
    if ( (*((_BYTE *)a1 + 40) & 0x20) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 256LL);
      SetOrClrWF(0, a1, 0x20u, 1);
    }
  }
  if ( *((_DWORD *)a1 + 80) )
    ScrubDelegatedWindow(a1);
  v21 = *((_QWORD *)a1 + 42);
  if ( v21 )
  {
    for ( i = (struct tagHID_PAGEONLY_REQUEST **)(v21 + 8);
          *i != (struct tagHID_PAGEONLY_REQUEST *)i;
          FreeHidPageOnlyRequest(*i) )
    {
      ;
    }
    v23 = *(CompositionObject **)(*((_QWORD *)a1 + 42) + 96LL);
    if ( v23 )
    {
      CompositionObject::Release(v23);
      *(_QWORD *)(*((_QWORD *)a1 + 42) + 96LL) = 0LL;
    }
    Win32FreePool(*((_QWORD *)a1 + 42));
    *((_QWORD *)a1 + 42) = 0LL;
  }
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v3 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 0x82u, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  v24 = *((_WORD *)a1 + 33);
  v25 = v24 & 0x3FFF;
  if ( (v24 & 0x3FFFu) >= 0x29A && (v24 & 0x4000) == 0 )
  {
    if ( v25 > 0x2A0u )
    {
      if ( v25 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 448LL) & 1) == 0 )
        SfnDWORD((__int64 *)a1, 0x70u, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * v25 - 4624));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v24 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *((_WORD *)a1 + 33) |= 0x4000u;
  }
  v26 = *((_QWORD *)a1 + 13);
  *((_WORD *)a1 + 33) |= 0x8000u;
  if ( v26 )
  {
    v27 = v26 + 240;
    if ( *(struct tagWND **)(v26 + 240) == a1 )
    {
      if ( *(char *)(v26 + 43) < 0 || *(char *)(v26 + 44) < 0 )
        v26 = 0LL;
      HMAssignmentLock(v27, v26);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 704LL) )
    HMAssignmentUnlock(gptiCurrent + 704LL);
  if ( *(struct tagWND **)(gptiCurrent + 1232LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1232LL);
  v28 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
  if ( a1 == *v28 )
  {
    HMAssignmentUnlock(v28);
    if ( *(_QWORD *)(gptiCurrent + 392LL) == gpqForeground )
      xxxWindowEvent(0x80000003, (__int64 *)a1, 0, 0, 49);
  }
  v29 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 88LL);
  if ( a1 == *v29 )
    HMAssignmentUnlock(v29);
  v30 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
  if ( a1 == *v30 )
    HMAssignmentUnlock(v30);
  v31 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( a1 == *(struct tagWND **)(v31 + 96) )
    ClearDelegationCapture(v31);
  if ( a1 == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v32 = *((_QWORD *)a1 + 3);
  if ( v32 )
  {
    if ( a1 == *(struct tagWND **)(v32 + 80) )
      HMAssignmentUnlock(v32 + 80);
    v33 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 88LL);
    if ( a1 == *v33 )
      HMAssignmentUnlock(v33);
    v34 = *((_QWORD *)a1 + 3);
    if ( a1 == *(struct tagWND **)(v34 + 176) )
    {
      if ( (*(_DWORD *)(v34 + 32) & 0x200) != 0 )
      {
        v35 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v34 + 104));
        if ( v35 )
        {
          v111 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v111;
          ++*(_DWORD *)(v35 + 8);
          v112 = v35;
          xxxResetTooltip((struct tagWND *)v35);
          ThreadUnlock1(v37, v36);
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 176LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
  {
    v38 = &gpshadowFirst;
    if ( gpshadowFirst )
    {
      while ( 1 )
      {
        v39 = *v38;
        if ( *((struct tagWND **)*v38 + 1) == a1 )
          break;
        v38 = (struct tagSHADOW **)((char *)v39 + 16);
        if ( !*((_QWORD *)v39 + 2) )
          goto LABEL_95;
      }
      *v38 = (struct tagSHADOW *)*((_QWORD *)v39 + 2);
      HMAssignmentUnlock(v39);
      HMAssignmentUnlock((char *)v39 + 8);
      Win32FreePool(v39);
    }
  }
  else
  {
    xxxRemoveShadow(a1);
  }
LABEL_95:
  if ( *((_QWORD *)a1 + 21) )
  {
    DestroyWindowSmIcon(a1);
    InternalRemoveProp((__int64)a1, *(_WORD *)(gpsi + 1358LL), 1);
    Prop = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v111 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v111;
      v112 = Prop;
      ++*(_DWORD *)(Prop + 8);
      xxxDDETrackWindowDying(&v111, Prop);
      ThreadUnlock1(v42, v41);
    }
    v43 = InternalRemoveProp((__int64)a1, atomDDEImp, 1);
    v44 = v43;
    if ( v43 )
    {
      *((_WORD *)v43 + 44) = 0;
      if ( !*((_WORD *)v43 + 45) )
      {
        v45 = SeTokenType((PACCESS_TOKEN)v43[4]);
        v46 = (void *)v44[4];
        if ( v45 == TokenPrimary )
          PsDereferencePrimaryToken(v46);
        else
          PsDereferenceImpersonationToken(v46);
        Win32FreePool(v44);
      }
    }
  }
  if ( (*((_BYTE *)a1 + 290) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 18, *(_QWORD *)a1);
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x2A0 )
  {
    v114 = (struct tagSwitchWndInfo *)*((_QWORD *)a1 + 47);
    if ( v114 )
    {
      RemoveSwitchWindowInfo(&v114);
      *((_QWORD *)a1 + 47) = 0LL;
    }
  }
  if ( a1 == gspwndMouseOwner )
    HMAssignmentUnlock(&gspwndMouseOwner);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  v47 = *((_QWORD *)a1 + 3);
  if ( v47 )
  {
    if ( a1 == *(struct tagWND **)(v47 + 240) )
    {
      HMAssignmentUnlock(v47 + 240);
    }
    else
    {
      v62 = (_QWORD *)(v47 + 248);
      v63 = *(_QWORD **)(v47 + 248);
      while ( v63 != v62 )
      {
        v64 = v63;
        v63 = (_QWORD *)*v63;
        if ( a1 == (struct tagWND *)v64[2] )
        {
          v65 = *v64;
          v66 = (_QWORD *)v64[1];
          if ( *(_QWORD **)(*v64 + 8LL) != v64 || (_QWORD *)*v66 != v64 )
            __fastfail(3u);
          *v66 = v65;
          *(_QWORD *)(v65 + 8) = v66;
          HMAssignmentUnlock(v64 + 2);
          Win32FreePool(v64);
          break;
        }
      }
    }
  }
  ThreadContext = MagpFindThreadContext(*(_QWORD *)&gMagnContext, gptiCurrent);
  if ( ThreadContext )
  {
    LensContext = MagpFindLensContext(ThreadContext, a1, 2LL);
    v52 = LensContext;
    if ( LensContext )
    {
      v53 = *(_QWORD *)LensContext;
      v54 = *(_QWORD **)(LensContext + 8);
      if ( *(_QWORD *)(*(_QWORD *)LensContext + 8LL) != LensContext || *v54 != LensContext )
        __fastfail(3u);
      *v54 = v53;
      *(_QWORD *)(v53 + 8) = v54;
      if ( (*(_DWORD *)(LensContext + 16) & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *(_DWORD *)(v52 + 16) &= ~0x40u;
      }
      if ( (*(_DWORD *)(v52 + 16) & 0x20) == 0 )
      {
        v55 = (void *)ReferenceDwmApiPort(v54, v53, v50, v51);
        DwmAsyncMagnDestroy(v55);
      }
      if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v52 + 24);
      v56 = *(_QWORD *)(v52 + 232);
      if ( v56 )
        Win32FreePool(v56);
      v57 = *(_QWORD *)(v52 + 256);
      if ( v57 )
        Win32FreePool(v57);
      Win32FreePool(v52);
    }
  }
  DestroyWindowsTimers(a1);
  DestroyWindowsHotKeys(a1);
  if ( !gbInSMSCleanup )
    ClearSendMessages(a1);
  CleanupWindowRedirection(a1);
  if ( *((_QWORD *)a1 + 20) || (*((_BYTE *)a1 + 41) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(*((_QWORD *)a1 + 20));
    *((_QWORD *)a1 + 20) = 0LL;
    SetOrClrWF(0, a1, 0x110u, 1);
  }
  if ( (*((_BYTE *)a1 + 41) & 0xA) != 0 )
  {
    SetOrClrWF(0, a1, 0x108u, 1);
    SetOrClrWF(0, a1, 0x102u, 1);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 736LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (struct tagMLIST *)(gptiCurrent + 736LL), a1, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *((unsigned int *)QMsg + 8));
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
  {
    v59 = *((_QWORD *)a1 + 24);
    if ( v59 )
    {
      if ( UnlockWndMenu(a1, (char *)a1 + 192) )
        DestroyMenu(v59);
    }
  }
  v60 = (char *)a1 + 184;
  v61 = *((_QWORD *)a1 + 23);
  if ( v61 )
  {
    if ( v61 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 56LL) )
    {
      UnlockWndMenu(a1, v60);
    }
    else if ( UnlockWndMenu(a1, v60) )
    {
      DestroyMenu(v61);
    }
  }
  v67 = *((_QWORD *)a1 + 3);
  if ( v67 )
  {
    v68 = *(_QWORD *)(v67 + 48);
    if ( v68 && a1 == *(struct tagWND **)(v68 + 72) )
    {
      v69 = *(_QWORD *)(v67 + 48);
LABEL_167:
      UnlockNotifyWindow((struct tagMENU *)v69);
      goto LABEL_168;
    }
    v69 = *(_QWORD *)(v67 + 56);
    if ( v69 && a1 == *(struct tagWND **)(v69 + 72) )
      goto LABEL_167;
  }
LABEL_168:
  if ( gcountPWO )
  {
    v70 = (EWNDOBJ *)InternalRemoveProp((__int64)a1, atomWndObj, 1);
    if ( v70 )
    {
      GreLockVisRgn(*gpDispInfo);
      GreDeleteWnd(v70);
      --gcountPWO;
      GreUnlockVisRgn(*gpDispInfo);
    }
  }
  GreLockSprite(*gpDispInfo);
  GreDeleteSpriteOverlapPresent((HDEV)*gpDispInfo, *(HWND *)a1);
  GreUnlockSprite(*gpDispInfo);
  GreLockVisRgn(*gpDispInfo);
  v71 = (_QWORD **)gpDispInfo;
  v72 = (__int64 *)(gpDispInfo + 64LL);
  v73 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v73 )
  {
    while ( 1 )
    {
      v74 = *(_DWORD *)(v73 + 64);
      if ( (v74 & 0x400800) != 0 )
      {
LABEL_184:
        v72 = (__int64 *)v73;
        goto LABEL_185;
      }
      v75 = *(_QWORD *)(v73 + 16);
      if ( (struct tagWND *)v75 == a1 || *(struct tagWND **)(v73 + 24) == a1 || *(struct tagWND **)(v73 + 32) == a1 )
      {
        if ( (v74 & 2) == 0 )
        {
          if ( v73 == *(_QWORD *)(*(_QWORD *)(v75 + 152) + 24LL) || v73 != *(_QWORD *)(v75 + 296) )
          {
            if ( (v74 & 0xC0) != 0 )
              DeleteHrgnClip(v73);
LABEL_182:
            InvalidateDCE(v73);
            goto LABEL_183;
          }
          *(_QWORD *)(v75 + 296) = 0LL;
          goto LABEL_214;
        }
        if ( (v74 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v73 + 72) == gptiCurrent )
          {
            v85 = ReleaseCacheDC(*(_QWORD *)(v73 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v72, *(_QWORD *)(v73 + 8));
            v85 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v73 + 8), 2147483666LL, 0LL, 1LL) )
            goto LABEL_182;
          v85 = 2;
        }
        if ( v85 != 1 )
        {
          if ( v85 != 2 )
            goto LABEL_182;
LABEL_214:
          DestroyCacheDC(v72, *(_QWORD *)(v73 + 8));
        }
      }
LABEL_183:
      if ( v73 == *v72 )
        goto LABEL_184;
LABEL_185:
      v73 = *v72;
      if ( !*v72 )
      {
        v71 = (_QWORD **)gpDispInfo;
        break;
      }
    }
  }
  GreUnlockVisRgn(**v71);
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  if ( *((char *)a1 + 40) < 0 )
  {
    v77 = FindSpb(a1);
    FreeSpb(v77);
  }
  v78 = *((_QWORD *)a1 + 25);
  if ( v78 && (*((_BYTE *)a1 + 45) & 8) == 0 && (*((_WORD *)a1 + 33) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(v78);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  v79 = *((_QWORD *)a1 + 26);
  if ( v79 )
  {
    GreDeleteObject(v79);
    *((_QWORD *)a1 + 26) = 0LL;
  }
  v80 = (void *)*((_QWORD *)a1 + 22);
  if ( v80 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v80);
    *((_QWORD *)a1 + 22) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v81 = (void *)*((_QWORD *)a1 + 28);
  if ( v81 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v81);
    *((_QWORD *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 54) = 0;
  }
  ResetWindowTransform(a1);
  v82 = *((_QWORD *)a1 + 3);
  if ( !v82 || (v83 = *(struct tagWND **)(*(_QWORD *)(v82 + 8) + 16LL), a1 == v83) )
  {
    v84 = (char *)a1 + 88;
    HMAssignmentUnlock((char *)a1 + 88);
  }
  else
  {
    v84 = (char *)a1 + 88;
    HMAssignmentLock((char *)a1 + 88, v83);
  }
  HMAssignmentUnlock((char *)a1 + 96);
  HMAssignmentUnlock((char *)a1 + 104);
  HMAssignmentUnlock((char *)a1 + 240);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v90 = (void *)ReferenceDwmApiPort(v87, v86, v88, v89);
    DwmAsyncOwnerChange(v90, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 384LL));
  HMMarkObjectDestroy(a1);
  v91 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v91 + gSharedInfo[1] + 17) |= 2u;
  v94 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v91) + 640);
  if ( v94 )
  {
    if ( *(struct tagWND **)(v94 + 64) == a1 )
    {
      HMAssignmentUnlock(v94 + 64);
      *(_QWORD *)(v94 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v94 + 80) == a1 )
      HMAssignmentUnlock(v94 + 80);
    v93 = v94 + 72;
    if ( *(struct tagWND **)(v94 + 72) == a1 )
      HMAssignmentUnlock(v93);
  }
  if ( (*((_DWORD *)a1 + 72) & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  v95 = ThreadUnlock1(v93, v92);
  if ( v95 )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 21) )
        DeleteProperties((__int64)a1);
      v97 = safe_cast_fnid_to_PMENUWND(a1);
      v98 = v97;
      if ( v97 )
      {
        v99 = *(_DWORD **)(v97 + 384);
        if ( v99 )
        {
          if ( (*v99 & 0x20000000) != 0 )
          {
            *v99 &= ~0x40000000u;
          }
          else if ( v99 == (_DWORD *)gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
          }
          else
          {
            Win32FreePool(v99);
            *(_QWORD *)(v98 + 384) = 0LL;
          }
        }
      }
      --*(_DWORD *)(gptiCurrent + 780LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v104 = (void *)ReferenceDwmApiPort(v101, v100, v102, v103);
        DwmAsyncChildDestroy(v104, *(_QWORD *)a1);
      }
      HMAssignmentUnlock(v84);
      PushW32ThreadLock(*((_QWORD *)a1 + 3), v113, UserDereferenceObject);
      v105 = (void *)*((_QWORD *)a1 + 3);
      if ( v105 )
        ObfReferenceObject(v105);
      HMFreeObject(a1);
      LOWORD(v95) = PopAndFreeW32ThreadLock(v113);
    }
    else
    {
      v106 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 18) = 0LL;
      if ( v106 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v106 + 24) + 24LL) + 16LL) + 384LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v96);
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 894LL), CurrentProcessWin32Process, hModuleWin);
      v109 = *ClassPtr;
      *((_QWORD *)a1 + 19) = *ClassPtr;
      ++*(_DWORD *)(v109 + 80);
      SetOrClrWF(1, a1, 0x204u, 1);
      SetOrClrWF(0, a1, 0x220u, 1);
      SetOrClrWF(0, a1, 0xFC0u, 1);
      LOWORD(v95) = SetOrClrWF(1, a1, 0xF00u, 1);
      *((_QWORD *)a1 + 24) = 0LL;
    }
  }
  return v95;
}
