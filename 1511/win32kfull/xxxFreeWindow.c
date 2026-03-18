/*
 * XREFs of xxxFreeWindow @ 0x1C0066C00
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000CA60 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     InvalidateDCE @ 0x1C004C4E8 (InvalidateDCE.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C005B2D0 (FindQMsg.c)
 *     SfnDWORD @ 0x1C005CF50 (SfnDWORD.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C0068130 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C00681E4 (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0068228 (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C006826C (_FindActivationFilterWindow.c)
 *     FreeClientOnWindowDestruction @ 0x1C00682A0 (FreeClientOnWindowDestruction.c)
 *     DereferenceClass @ 0x1C0068330 (DereferenceClass.c)
 *     ResetWindowTransform @ 0x1C0068378 (ResetWindowTransform.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0068398 (GreDeleteSpriteOverlapPresent.c)
 *     CleanupWindowRedirection @ 0x1C00686E8 (CleanupWindowRedirection.c)
 *     ClearSendMessages @ 0x1C006872C (ClearSendMessages.c)
 *     DestroyWindowsHotKeys @ 0x1C00688C0 (DestroyWindowsHotKeys.c)
 *     DestroyWindowsTimers @ 0x1C0068948 (DestroyWindowsTimers.c)
 *     MagpFindThreadContext @ 0x1C006898C (MagpFindThreadContext.c)
 *     xxxRemoveFullScreen @ 0x1C0068C7C (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C0068D84 (xxxRemoveShadow.c)
 *     DwmAsyncOwnerChange @ 0x1C0068E08 (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildDestroy @ 0x1C0068EA0 (DwmAsyncChildDestroy.c)
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ClearDelegationCapture @ 0x1C008BF60 (ClearDelegationCapture.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     IPostQuitMessage @ 0x1C009F3C4 (IPostQuitMessage.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C7308 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C75B4 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     DwmAsyncShellWindowChange @ 0x1C00D21C8 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C00D4B40 (CleanupIAMAccess.c)
 *     SetShellWndManagementWindow @ 0x1C00D5B04 (SetShellWndManagementWindow.c)
 *     DeleteHrgnClip @ 0x1C00EBEC0 (DeleteHrgnClip.c)
 *     DecPaintCount @ 0x1C00F15F4 (DecPaintCount.c)
 *     DeleteProperties @ 0x1C00F2C8C (DeleteProperties.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 *     UnlockWndMenu @ 0x1C0104018 (UnlockWndMenu.c)
 *     _DeregisterShellHookWindow @ 0x1C010C170 (_DeregisterShellHookWindow.c)
 *     GetClassPtr @ 0x1C011D590 (GetClassPtr.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     _NotifyOverlayWindow @ 0x1C01D7A90 (_NotifyOverlayWindow.c)
 *     ChangeComposableCursor @ 0x1C01E6DA8 (ChangeComposableCursor.c)
 *     FindSpb @ 0x1C01EA734 (FindSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01EC6A8 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01EFB80 (xxxDeferredDesktopRotation.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01FD630 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01FEF08 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C02011C0 (RemoveSwitchWindowInfo.c)
 *     DwmAsyncMagnDestroy @ 0x1C025E7C0 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C027C3D0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2)
{
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  struct tagWND **v14; // rcx
  struct tagWND **v15; // rcx
  struct tagWND **v16; // rax
  struct tagWND **v17; // rcx
  struct tagWND **v18; // rcx
  struct tagWND **v19; // rcx
  __int64 v20; // rax
  struct tagHID_PAGEONLY_REQUEST **i; // rbx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  CompositionObject *v26; // rcx
  __int16 v27; // ax
  unsigned __int16 v28; // cx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagWND **v32; // rcx
  struct tagWND **v33; // rcx
  struct tagWND **v34; // rcx
  struct tagWND **v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagSHADOW **v41; // rcx
  struct tagSHADOW *v42; // rbx
  __int64 Prop; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbx
  TOKEN_TYPE v48; // eax
  void *v49; // rcx
  __int64 ThreadContext; // rax
  __int64 LensContext; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rsi
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 *QMsg; // rax
  struct tagMENU *v61; // rbx
  char *v62; // rdx
  struct tagMENU *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  EWNDOBJ *v66; // rbx
  _QWORD **v67; // rcx
  __int64 *v68; // rsi
  __int64 v69; // rbx
  int v70; // edx
  __int64 v71; // rcx
  __int64 Spb; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  void *v76; // r8
  void *v77; // r8
  __int64 v78; // rax
  struct tagWND *v79; // rdx
  char *v80; // rsi
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  void *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 result; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  _DWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  void *v99; // rax
  void *v100; // rcx
  __int64 v101; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v104; // rcx
  __int64 v105; // [rsp+40h] [rbp-58h] BYREF
  __int64 v106; // [rsp+48h] [rbp-50h]
  _QWORD v107[3]; // [rsp+58h] [rbp-40h] BYREF
  struct tagSwitchWndInfo *v108; // [rsp+A8h] [rbp+10h] BYREF

  v108 = a2;
  v3 = 0;
  v4 = *((_QWORD *)a1 + 3);
  if ( !v4 )
    goto LABEL_28;
  v5 = *(_QWORD *)(v4 + 8);
  if ( a1 == *(struct tagWND **)(v5 + 160) )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v4);
    HMAssignmentUnlock(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 160LL);
    v6 = *((_QWORD *)a1 + 3);
    v7 = (char *)&gaptiShellMiP;
    v8 = 5LL;
    do
    {
      if ( *(_QWORD *)v7 && *(_QWORD *)(*(_QWORD *)v7 + 408LL) == v6 )
        *(_QWORD *)v7 = 0LL;
      v7 += 8;
      --v8;
    }
    while ( v8 );
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      DwmAsyncShellWindowChange(v13);
    }
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    v3 = (*(unsigned __int8 *)(v5 + 244) >> 1) & 1;
  }
  if ( *(struct tagWND **)(v5 + 176) == a1 )
    HMAssignmentUnlock(v5 + 176);
  v14 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
  if ( *v14 == a1 )
    HMAssignmentUnlock(v14);
  v15 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
  if ( *v15 == a1 )
    HMAssignmentUnlock(v15);
  v16 = (struct tagWND **)*((_QWORD *)a1 + 3);
  v17 = v16 + 37;
  if ( v16[37] == a1 )
  {
LABEL_35:
    HMAssignmentUnlock(v17);
    goto LABEL_20;
  }
  if ( v16[40] != a1 )
  {
    v17 = v16 + 36;
    if ( a1 != v16[36] )
    {
      ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(a1);
      v23 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v24 = *ActivationFilterWindow;
        v25 = (_QWORD *)ActivationFilterWindow[1];
        if ( *(_QWORD **)(v24 + 8) != v23 || (_QWORD *)*v25 != v23 )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        HMAssignmentUnlock(v23 + 2);
        Win32FreePool(v23);
      }
      goto LABEL_20;
    }
    goto LABEL_35;
  }
  SetShellWndManagementWindow(*((_QWORD *)a1 + 3), 0LL);
LABEL_20:
  v18 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 240LL);
  if ( *v18 == a1 )
    HMAssignmentUnlock(v18);
  UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
  v19 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 224LL);
  if ( *v19 == a1 )
    HMAssignmentUnlock(v19);
  if ( (*((_BYTE *)a1 + 47) & 0x40) != 0 )
    DeregisterShellHookWindow(a1);
  if ( (*((_BYTE *)a1 + 40) & 0x20) != 0 )
  {
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 240LL);
    SetOrClrWF(0LL, a1, 32LL, 1LL);
  }
LABEL_28:
  if ( *((_DWORD *)a1 + 80) )
    ScrubDelegatedWindow(a1);
  v20 = *((_QWORD *)a1 + 42);
  if ( v20 )
  {
    for ( i = (struct tagHID_PAGEONLY_REQUEST **)(v20 + 8);
          *i != (struct tagHID_PAGEONLY_REQUEST *)i;
          FreeHidPageOnlyRequest(*i) )
    {
      ;
    }
    v26 = *(CompositionObject **)(*((_QWORD *)a1 + 42) + 96LL);
    if ( v26 )
    {
      CompositionObject::Release(v26);
      *(_QWORD *)(*((_QWORD *)a1 + 42) + 96LL) = 0LL;
    }
    Win32FreePool(*((_QWORD *)a1 + 42));
    *((_QWORD *)a1 + 42) = 0LL;
  }
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v3 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 0x82u, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  v27 = *((_WORD *)a1 + 33);
  v28 = v27 & 0x3FFF;
  v29 = 672LL;
  if ( (v27 & 0x3FFFu) >= 0x29A && (v27 & 0x4000) == 0 )
  {
    if ( v28 > 0x2A0u )
    {
      if ( v28 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
        SfnDWORD((__int64 *)a1, 0x70u, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * v28 - 4624));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v27 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *((_WORD *)a1 + 33) |= 0x4000u;
  }
  v30 = *((_QWORD *)a1 + 13);
  *((_WORD *)a1 + 33) |= 0x8000u;
  if ( v30 )
  {
    v31 = v30 + 240;
    if ( *(struct tagWND **)(v30 + 240) == a1 )
    {
      if ( *(char *)(v30 + 43) < 0 || *(char *)(v30 + 44) < 0 )
        v30 = 0LL;
      HMAssignmentLock(v31, v30);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 696LL) )
    HMAssignmentUnlock(gptiCurrent + 696LL);
  if ( *(struct tagWND **)(gptiCurrent + 1224LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1224LL);
  v32 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
  if ( a1 == *v32 )
  {
    HMAssignmentUnlock(v32);
    if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
      xxxWindowEvent(0x80000003, (__int64 *)a1, 0, 0, 49);
  }
  v33 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( a1 == *v33 )
    HMAssignmentUnlock(v33);
  v34 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( a1 == *v34 )
    HMAssignmentUnlock(v34);
  v35 = *(struct tagWND ***)(gptiCurrent + 384LL);
  if ( a1 == v35[12] )
    ClearDelegationCapture(v35, v30, v29);
  if ( a1 == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v36 = *((_QWORD *)a1 + 3);
  if ( v36 )
  {
    if ( a1 == *(struct tagWND **)(v36 + 80) )
      HMAssignmentUnlock(v36 + 80);
    v35 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 88LL);
    if ( a1 == *v35 )
      HMAssignmentUnlock(v35);
    if ( a1 == *(struct tagWND **)(*((_QWORD *)a1 + 3) + 176LL) )
    {
      xxxNotifyShellWindowBorderExitIfEntered(a1, v30, v29);
      v37 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v37 + 32) & 0x200) != 0 )
      {
        v38 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v37 + 104));
        if ( v38 )
        {
          v105 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v105;
          ++*(_DWORD *)(v38 + 8);
          v106 = v38;
          xxxResetTooltip((struct tagWND *)v38);
          ThreadUnlock1(v40, v39);
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 176LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) )
    xxxReleaseCapture(v35, v30, v29);
  if ( *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) == gatomShadow )
  {
    v41 = &gpshadowFirst;
    if ( gpshadowFirst )
    {
      while ( 1 )
      {
        v42 = *v41;
        if ( *((struct tagWND **)*v41 + 1) == a1 )
          break;
        v41 = (struct tagSHADOW **)((char *)v42 + 16);
        if ( !*((_QWORD *)v42 + 2) )
          goto LABEL_99;
      }
      *v41 = (struct tagSHADOW *)*((_QWORD *)v42 + 2);
      HMAssignmentUnlock(v42);
      HMAssignmentUnlock((char *)v42 + 8);
      Win32FreePool(v42);
    }
  }
  else
  {
    xxxRemoveShadow(a1);
  }
LABEL_99:
  if ( *((_QWORD *)a1 + 21) )
  {
    DestroyWindowSmIcon(a1, v30, v29);
    InternalRemoveProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
    Prop = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v105 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v105;
      v106 = Prop;
      ++*(_DWORD *)(Prop + 8);
      xxxDDETrackWindowDying(&v105, Prop);
      ThreadUnlock1(v45, v44);
    }
    v46 = InternalRemoveProp(a1, (unsigned __int16)atomDDEImp, 1LL);
    v47 = v46;
    if ( v46 )
    {
      *(_WORD *)(v46 + 88) = 0;
      if ( !*(_WORD *)(v46 + 90) )
      {
        v48 = SeTokenType(*(PACCESS_TOKEN *)(v46 + 32));
        v49 = *(void **)(v47 + 32);
        if ( v48 == TokenPrimary )
          PsDereferencePrimaryToken(v49);
        else
          PsDereferenceImpersonationToken(v49);
        Win32FreePool(v47);
      }
    }
  }
  if ( (*((_BYTE *)a1 + 290) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 18LL, *(_QWORD *)a1);
  if ( a1 == gspwndMouseOwner )
    HMAssignmentUnlock(&gspwndMouseOwner);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD *)&gMagnContext, gptiCurrent, v29);
  if ( ThreadContext )
  {
    LensContext = MagpFindLensContext(ThreadContext, a1, 2LL);
    v54 = LensContext;
    if ( LensContext )
    {
      v55 = *(_QWORD *)LensContext;
      v56 = *(_QWORD **)(LensContext + 8);
      if ( *(_QWORD *)(*(_QWORD *)LensContext + 8LL) != LensContext || *v56 != LensContext )
        __fastfail(3u);
      *v56 = v55;
      *(_QWORD *)(v55 + 8) = v56;
      if ( (*(_DWORD *)(LensContext + 16) & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *(_DWORD *)(v54 + 16) &= ~0x40u;
      }
      if ( (*(_DWORD *)(v54 + 16) & 0x20) == 0 )
      {
        v57 = (void *)ReferenceDwmApiPort(v56, v55, v52, v53);
        DwmAsyncMagnDestroy(v57);
      }
      if ( (unsigned __int64)(*(_QWORD *)(v54 + 24) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v54 + 24);
      v58 = *(_QWORD *)(v54 + 232);
      if ( v58 )
        Win32FreePool(v58);
      v59 = *(_QWORD *)(v54 + 256);
      if ( v59 )
        Win32FreePool(v59);
      Win32FreePool(v54);
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
    SetOrClrWF(0LL, a1, 272LL, 1LL);
  }
  if ( (*((_BYTE *)a1 + 41) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 728LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (struct tagMLIST *)(gptiCurrent + 728LL), a1, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *((unsigned int *)QMsg + 8));
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
  {
    v61 = (struct tagMENU *)*((_QWORD *)a1 + 24);
    if ( v61 )
    {
      if ( UnlockWndMenu(a1, (char *)a1 + 192) )
        DestroyMenu(v61);
    }
  }
  v62 = (char *)a1 + 184;
  v63 = (struct tagMENU *)*((_QWORD *)a1 + 23);
  if ( v63 )
  {
    if ( v63 == *(struct tagMENU **)(*((_QWORD *)a1 + 3) + 56LL) )
    {
      UnlockWndMenu(a1, v62);
    }
    else if ( UnlockWndMenu(a1, v62) )
    {
      DestroyMenu(v63);
    }
  }
  v64 = *((_QWORD *)a1 + 3);
  if ( v64 )
  {
    if ( (v65 = *(_QWORD *)(v64 + 48)) != 0 && a1 == *(struct tagWND **)(v65 + 72)
      || (v65 = *(_QWORD *)(v64 + 56)) != 0 && a1 == *(struct tagWND **)(v65 + 72) )
    {
      UnlockNotifyWindow((struct tagMENU *)v65);
    }
  }
  if ( gcountPWO )
  {
    v66 = (EWNDOBJ *)InternalRemoveProp(a1, (unsigned __int16)atomWndObj, 1LL);
    if ( v66 )
    {
      GreLockVisRgn(*gpDispInfo);
      GreDeleteWnd(v66);
      --gcountPWO;
      GreUnlockVisRgn(*gpDispInfo);
    }
  }
  GreLockSprite(*gpDispInfo);
  GreDeleteSpriteOverlapPresent((HDEV)*gpDispInfo, *(HWND *)a1);
  GreUnlockSprite(*gpDispInfo);
  GreLockVisRgn(*gpDispInfo);
  v67 = (_QWORD **)gpDispInfo;
  v68 = (__int64 *)(gpDispInfo + 64LL);
  v69 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v69 )
  {
    while ( 1 )
    {
      v70 = *(_DWORD *)(v69 + 64);
      if ( (v70 & 0x400800) != 0 )
      {
LABEL_173:
        v68 = (__int64 *)v69;
        goto LABEL_174;
      }
      v71 = *(_QWORD *)(v69 + 16);
      if ( (struct tagWND *)v71 == a1 || *(struct tagWND **)(v69 + 24) == a1 || *(struct tagWND **)(v69 + 32) == a1 )
      {
        if ( (v70 & 2) == 0 )
        {
          if ( v69 == *(_QWORD *)(*(_QWORD *)(v71 + 152) + 24LL) || v69 != *(_QWORD *)(v71 + 296) )
          {
            if ( (v70 & 0xC0) != 0 )
              DeleteHrgnClip(v69);
LABEL_171:
            InvalidateDCE(v69);
            goto LABEL_172;
          }
          *(_QWORD *)(v71 + 296) = 0LL;
          goto LABEL_203;
        }
        if ( (v70 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v69 + 72) == gptiCurrent )
          {
            v81 = ReleaseCacheDC(*(_QWORD *)(v69 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v68, *(_QWORD *)(v69 + 8));
            v81 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v69 + 8), 2147483666LL, 0LL, 1LL) )
            goto LABEL_171;
          v81 = 2;
        }
        if ( v81 != 1 )
        {
          if ( v81 != 2 )
            goto LABEL_171;
LABEL_203:
          DestroyCacheDC(v68, *(_QWORD *)(v69 + 8));
        }
      }
LABEL_172:
      if ( v69 == *v68 )
        goto LABEL_173;
LABEL_174:
      v69 = *v68;
      if ( !*v68 )
      {
        v67 = (_QWORD **)gpDispInfo;
        break;
      }
    }
  }
  GreUnlockVisRgn(**v67);
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  if ( *((char *)a1 + 40) < 0 )
  {
    v73 = FindSpb(a1);
    FreeSpb(v73);
  }
  v74 = *((_QWORD *)a1 + 25);
  if ( v74 && (*((_BYTE *)a1 + 45) & 8) == 0 && (*((_WORD *)a1 + 33) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(v74);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  v75 = *((_QWORD *)a1 + 26);
  if ( v75 )
  {
    GreDeleteObject(v75);
    *((_QWORD *)a1 + 26) = 0LL;
  }
  v76 = (void *)*((_QWORD *)a1 + 22);
  if ( v76 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v76);
    *((_QWORD *)a1 + 22) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v77 = (void *)*((_QWORD *)a1 + 28);
  if ( v77 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v77);
    *((_QWORD *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 54) = 0;
  }
  ResetWindowTransform(a1);
  v78 = *((_QWORD *)a1 + 3);
  if ( !v78 || (v79 = *(struct tagWND **)(*(_QWORD *)(v78 + 8) + 16LL), a1 == v79) )
  {
    v80 = (char *)a1 + 88;
    HMAssignmentUnlock((char *)a1 + 88);
  }
  else
  {
    v80 = (char *)a1 + 88;
    HMAssignmentLock((char *)a1 + 88, v79);
  }
  HMAssignmentUnlock((char *)a1 + 96);
  HMAssignmentUnlock((char *)a1 + 104);
  HMAssignmentUnlock((char *)a1 + 240);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v86 = (void *)ReferenceDwmApiPort(v83, v82, v84, v85);
    DwmAsyncOwnerChange(v86);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL));
  HMMarkObjectDestroy(a1);
  v87 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v87 + *((_QWORD *)&gSharedInfo + 1) + 17) |= 2u;
  v90 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v87) + 640);
  if ( v90 )
  {
    if ( *(struct tagWND **)(v90 + 64) == a1 )
    {
      HMAssignmentUnlock(v90 + 64);
      *(_QWORD *)(v90 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v90 + 80) == a1 )
      HMAssignmentUnlock(v90 + 80);
    v89 = v90 + 72;
    if ( *(struct tagWND **)(v90 + 72) == a1 )
      HMAssignmentUnlock(v89);
  }
  if ( (*((_DWORD *)a1 + 72) & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v89, v88);
  if ( result )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 21) )
        DeleteProperties(a1);
      if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x2A0 )
      {
        v108 = (struct tagSwitchWndInfo *)*((_QWORD *)a1 + 47);
        if ( v108 )
        {
          RemoveSwitchWindowInfo(&v108);
          *((_QWORD *)a1 + 47) = 0LL;
        }
      }
      v93 = safe_cast_fnid_to_PMENUWND(a1);
      if ( v93 )
      {
        v94 = *(_DWORD **)(v93 + 384);
        if ( v94 )
        {
          if ( (*v94 & 0x20000000) != 0 )
          {
            *v94 &= ~0x40000000u;
          }
          else if ( v94 == (_DWORD *)gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
          }
          else
          {
            Win32FreePool(v94);
          }
        }
      }
      --*(_DWORD *)(gptiCurrent + 772LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v99 = (void *)ReferenceDwmApiPort(v96, v95, v97, v98);
        DwmAsyncChildDestroy(v99);
      }
      HMAssignmentUnlock(v80);
      PushW32ThreadLock(*((_QWORD *)a1 + 3), v107, UserDereferenceObject);
      v100 = (void *)*((_QWORD *)a1 + 3);
      if ( v100 )
        ObfReferenceObject(v100);
      HMFreeObject(a1);
      return PopAndFreeW32ThreadLock((__int64)v107);
    }
    else
    {
      v101 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 18) = 0LL;
      if ( v101 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v101 + 24) + 24LL) + 16LL) + 376LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v92);
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 894LL), CurrentProcessWin32Process, hModuleWin);
      v104 = *ClassPtr;
      *((_QWORD *)a1 + 19) = *ClassPtr;
      ++*(_DWORD *)(v104 + 80);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      result = SetOrClrWF(1LL, a1, 3840LL, 1LL);
      *((_QWORD *)a1 + 24) = 0LL;
    }
  }
  return result;
}
