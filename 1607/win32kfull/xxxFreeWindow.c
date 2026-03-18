/*
 * XREFs of xxxFreeWindow @ 0x1C00543AC
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000DF40 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     DwmAsyncChildDestroy @ 0x1C0054140 (DwmAsyncChildDestroy.c)
 *     DwmAsyncOwnerChange @ 0x1C00541C4 (DwmAsyncOwnerChange.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C005578C (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C005583C (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0055884 (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C00558C8 (_FindActivationFilterWindow.c)
 *     FreeClientOnWindowDestruction @ 0x1C0055900 (FreeClientOnWindowDestruction.c)
 *     DereferenceClass @ 0x1C0055990 (DereferenceClass.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00559D8 (GreDeleteSpriteOverlapPresent.c)
 *     CleanupWindowRedirection @ 0x1C00567B0 (CleanupWindowRedirection.c)
 *     ClearSendMessages @ 0x1C00567F4 (ClearSendMessages.c)
 *     DestroyWindowsHotKeys @ 0x1C0056980 (DestroyWindowsHotKeys.c)
 *     DestroyWindowsTimers @ 0x1C0056A08 (DestroyWindowsTimers.c)
 *     MagpFindThreadContext @ 0x1C0056A4C (MagpFindThreadContext.c)
 *     xxxRemoveFullScreen @ 0x1C0056D5C (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C0056E60 (xxxRemoveShadow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     DecPaintCount @ 0x1C005CB80 (DecPaintCount.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     GetClassPtr @ 0x1C00720F0 (GetClassPtr.c)
 *     InvalidateDCE @ 0x1C00726E8 (InvalidateDCE.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     FindQMsg @ 0x1C00835A0 (FindQMsg.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     DestroyWindowSmIcon @ 0x1C008E0D8 (DestroyWindowSmIcon.c)
 *     DwmAsyncShellWindowChange @ 0x1C0093E64 (DwmAsyncShellWindowChange.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DeleteProperties @ 0x1C0098D10 (DeleteProperties.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     ClearDelegationCapture @ 0x1C00DC2F0 (ClearDelegationCapture.c)
 *     IPostQuitMessage @ 0x1C00ED274 (IPostQuitMessage.c)
 *     CleanupIAMAccess @ 0x1C00ED600 (CleanupIAMAccess.c)
 *     SetShellWndManagementWindow @ 0x1C00EDAD4 (SetShellWndManagementWindow.c)
 *     DeleteHrgnClip @ 0x1C010C460 (DeleteHrgnClip.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011F924 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C0121224 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     UnlockWndMenu @ 0x1C01270C8 (UnlockWndMenu.c)
 *     _DeregisterShellHookWindow @ 0x1C012D320 (_DeregisterShellHookWindow.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     _NotifyOverlayWindow @ 0x1C01CE970 (_NotifyOverlayWindow.c)
 *     ChangeComposableCursor @ 0x1C01DD530 (ChangeComposableCursor.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 *     FindSpb @ 0x1C01E12B4 (FindSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01E3234 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01E58C0 (xxxDeferredDesktopRotation.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01F4C64 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01F6558 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F84C0 (RemoveSwitchWindowInfo.c)
 *     IsSysShadow @ 0x1C0224E50 (IsSysShadow.c)
 *     DwmAsyncMagnDestroy @ 0x1C025BF40 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C027A5A0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  char *v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  struct tagWND **v11; // rcx
  struct tagWND **v12; // rcx
  struct tagWND **v13; // rax
  struct tagWND **v14; // rcx
  struct tagWND **v15; // rcx
  struct tagWND **v16; // rcx
  __int64 v17; // rax
  struct tagHID_PAGEONLY_REQUEST **i; // rbx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  CompositionObject *v25; // rcx
  __int16 v26; // ax
  unsigned __int16 v27; // cx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct tagWND **v30; // rcx
  struct tagWND **v31; // rcx
  struct tagWND **v32; // rcx
  __int64 v33; // rax
  struct tagWND **v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct tagSHADOW **v39; // rcx
  struct tagSHADOW *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 Prop; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rbx
  TOKEN_TYPE v48; // eax
  void *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 ThreadContext; // rax
  __int64 LensContext; // rax
  __int64 v54; // r8
  __int64 v55; // rsi
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  void *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 QMsg; // rax
  struct tagMENU *v62; // rbx
  struct tagMENU *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  EWNDOBJ *v67; // rbx
  _QWORD **v68; // rcx
  __int64 *v69; // rsi
  __int64 v70; // rbx
  int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 Spb; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  struct tagWND *v85; // rdx
  char *v86; // rsi
  int v87; // eax
  void *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 result; // rax
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // rbx
  _DWORD *v97; // rcx
  __int64 v98; // rdx
  void *v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 ThreadWin32Thread; // rax
  void *v105; // rcx
  __int64 v106; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v109; // rcx
  __int64 v110; // [rsp+28h] [rbp-39h]
  int v111; // [rsp+38h] [rbp-29h]
  __int64 v112; // [rsp+40h] [rbp-21h]
  _QWORD v113[3]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v114[3]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v115[4]; // [rsp+78h] [rbp+17h] BYREF
  struct tagSwitchWndInfo *v116; // [rsp+D0h] [rbp+6Fh] BYREF

  v116 = a2;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    goto LABEL_28;
  v6 = *(_QWORD *)(v5 + 8);
  if ( a1 == *(struct tagWND **)(v6 + 160) )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v5);
    HMAssignmentUnlock(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 160LL);
    v7 = *((_QWORD *)a1 + 3);
    v8 = (char *)&gaptiShellMiP;
    v9 = 5LL;
    do
    {
      if ( *(_QWORD *)v8 && *(_QWORD *)(*(_QWORD *)v8 + 408LL) == v7 )
        *(_QWORD *)v8 = 0LL;
      v8 += 8;
      --v9;
    }
    while ( v9 );
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v10 = (void *)ReferenceDwmApiPort();
      DwmAsyncShellWindowChange(v10);
    }
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    v4 = (*(unsigned __int8 *)(v6 + 244) >> 1) & 1;
  }
  if ( *(struct tagWND **)(v6 + 176) == a1 )
    HMAssignmentUnlock(v6 + 176);
  v11 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
  if ( *v11 == a1 )
    HMAssignmentUnlock(v11);
  v12 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
  if ( *v12 == a1 )
    HMAssignmentUnlock(v12);
  v13 = (struct tagWND **)*((_QWORD *)a1 + 3);
  v14 = v13 + 37;
  if ( v13[37] == a1 )
  {
LABEL_35:
    HMAssignmentUnlock(v14);
    goto LABEL_20;
  }
  if ( v13[40] != a1 )
  {
    v14 = v13 + 36;
    if ( a1 != v13[36] )
    {
      ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(a1);
      v20 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v21 = *ActivationFilterWindow;
        v22 = (_QWORD *)ActivationFilterWindow[1];
        if ( *(_QWORD **)(v21 + 8) != v20 || (_QWORD *)*v22 != v20 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        HMAssignmentUnlock(v20 + 2);
        Win32FreePool(v20, v23, v24);
      }
      goto LABEL_20;
    }
    goto LABEL_35;
  }
  SetShellWndManagementWindow(*((_QWORD *)a1 + 3), 0LL);
LABEL_20:
  v15 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 240LL);
  if ( *v15 == a1 )
    HMAssignmentUnlock(v15);
  UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
  v16 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 224LL);
  if ( *v16 == a1 )
    HMAssignmentUnlock(v16);
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
  v17 = *((_QWORD *)a1 + 42);
  if ( v17 )
  {
    for ( i = (struct tagHID_PAGEONLY_REQUEST **)(v17 + 8);
          *i != (struct tagHID_PAGEONLY_REQUEST *)i;
          FreeHidPageOnlyRequest(*i, (__int64)a2, a3) )
    {
      ;
    }
    v25 = *(CompositionObject **)(*((_QWORD *)a1 + 42) + 96LL);
    if ( v25 )
    {
      CompositionObject::Release(v25);
      *(_QWORD *)(*((_QWORD *)a1 + 42) + 96LL) = 0LL;
    }
    Win32FreePool(*((_QWORD *)a1 + 42), a2, a3);
    *((_QWORD *)a1 + 42) = 0LL;
  }
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v4 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  v26 = *((_WORD *)a1 + 33);
  v27 = v26 & 0x3FFF;
  if ( (v26 & 0x3FFFu) >= 0x29A && (v26 & 0x4000) == 0 )
  {
    if ( v27 > 0x2A0u )
    {
      if ( v27 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
      {
        v112 = 0LL;
        v111 = 1;
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * (v27 - 673) + 760));
      }
    }
    else
    {
      HIDWORD(v110) = 0;
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v26 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *((_WORD *)a1 + 33) |= 0x4000u;
  }
  v28 = *((_QWORD *)a1 + 13);
  *((_WORD *)a1 + 33) |= 0x8000u;
  if ( v28 )
  {
    v29 = v28 + 240;
    if ( *(struct tagWND **)(v28 + 240) == a1 )
    {
      if ( *(char *)(v28 + 43) < 0 || *(char *)(v28 + 44) < 0 )
        v28 = 0LL;
      HMAssignmentLock(v29, v28);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 696LL) )
    HMAssignmentUnlock(gptiCurrent + 696LL);
  if ( *(struct tagWND **)(gptiCurrent + 1248LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1248LL);
  v30 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( a1 == *v30 )
  {
    HMAssignmentUnlock(v30);
    if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
      xxxWindowEvent(-2147483645, (_DWORD)a1, 0, 0, 49);
  }
  v31 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
  if ( a1 == *v31 )
    HMAssignmentUnlock(v31);
  v32 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( a1 == *v32 )
    HMAssignmentUnlock(v32);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 104LL) )
    ClearDelegationCapture();
  if ( a1 == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v33 = *((_QWORD *)a1 + 3);
  if ( v33 )
  {
    if ( a1 == *(struct tagWND **)(v33 + 80) )
      HMAssignmentUnlock(v33 + 80);
    v34 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 88LL);
    if ( a1 == *v34 )
      HMAssignmentUnlock(v34);
    if ( a1 == *(struct tagWND **)(*((_QWORD *)a1 + 3) + 176LL) )
    {
      xxxNotifyShellWindowBorderExitIfEntered(a1);
      v35 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v35 + 32) & 0x200) != 0 )
      {
        v36 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v35 + 104));
        if ( v36 )
        {
          v114[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v114;
          ++*(_DWORD *)(v36 + 8);
          v114[1] = v36;
          xxxResetTooltip((struct tagWND *)v36);
          ThreadUnlock1(v38, v37);
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 176LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
  {
    v39 = &gpshadowFirst;
    if ( gpshadowFirst )
    {
      while ( 1 )
      {
        v40 = *v39;
        if ( *((struct tagWND **)*v39 + 1) == a1 )
          break;
        v39 = (struct tagSHADOW **)((char *)v40 + 16);
        if ( !*((_QWORD *)v40 + 2) )
          goto LABEL_99;
      }
      *v39 = (struct tagSHADOW *)*((_QWORD *)v40 + 2);
      HMAssignmentUnlock(v40);
      HMAssignmentUnlock((char *)v40 + 8);
      Win32FreePool(v40, v41, v42);
    }
  }
  else
  {
    xxxRemoveShadow(a1);
  }
LABEL_99:
  if ( *((_QWORD *)a1 + 21) )
  {
    DestroyWindowSmIcon(a1);
    InternalRemoveProp();
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v115[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v115;
      v115[1] = Prop;
      ++*(_DWORD *)(Prop + 8);
      xxxDDETrackWindowDying(v115, Prop);
      ThreadUnlock1(v45, v44);
    }
    v46 = InternalRemoveProp();
    v47 = v46;
    if ( v46 )
    {
      *((_WORD *)v46 + 44) = 0;
      if ( !*((_WORD *)v46 + 45) )
      {
        v48 = SeTokenType((PACCESS_TOKEN)v46[4]);
        v49 = (void *)v47[4];
        if ( v48 == TokenPrimary )
          PsDereferencePrimaryToken(v49);
        else
          PsDereferenceImpersonationToken(v49);
        Win32FreePool(v47, v50, v51);
      }
    }
    InternalRemoveProp();
  }
  if ( (*((_BYTE *)a1 + 290) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 18LL, *(_QWORD *)a1);
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x2A0 )
  {
    v116 = (struct tagSwitchWndInfo *)*((_QWORD *)a1 + 45);
    if ( v116 )
    {
      RemoveSwitchWindowInfo(&v116);
      *((_QWORD *)a1 + 45) = 0LL;
    }
  }
  if ( a1 == gspwndMouseOwner )
    HMAssignmentUnlock(&gspwndMouseOwner);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD *)&gMagnContext, gptiCurrent);
  if ( ThreadContext )
  {
    LensContext = MagpFindLensContext(ThreadContext, a1, 2LL);
    v55 = LensContext;
    if ( LensContext )
    {
      v56 = *(_QWORD *)LensContext;
      v57 = *(_QWORD **)(LensContext + 8);
      if ( *(_QWORD *)(*(_QWORD *)LensContext + 8LL) != LensContext || *v57 != LensContext )
        __fastfail(3u);
      *v57 = v56;
      *(_QWORD *)(v56 + 8) = v57;
      if ( (*(_DWORD *)(LensContext + 16) & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *(_DWORD *)(v55 + 16) &= ~0x40u;
      }
      if ( (*(_DWORD *)(v55 + 16) & 0x20) == 0 )
      {
        v58 = (void *)ReferenceDwmApiPort();
        DwmAsyncMagnDestroy(v58);
      }
      if ( (unsigned __int64)(*(_QWORD *)(v55 + 24) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v55 + 24);
      v59 = *(_QWORD *)(v55 + 232);
      if ( v59 )
        Win32FreePool(v59, v56, v54);
      v60 = *(_QWORD *)(v55 + 256);
      if ( v60 )
        Win32FreePool(v60, v56, v54);
      Win32FreePool(v55, v56, v54);
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
    LODWORD(v110) = 18;
    QMsg = FindQMsg(gptiCurrent, gptiCurrent + 728LL, a1, 18LL, v110, 1, v111, v112);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *(unsigned int *)(QMsg + 32));
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
  {
    v62 = (struct tagMENU *)*((_QWORD *)a1 + 24);
    if ( v62 )
    {
      if ( UnlockWndMenu(a1) )
        DestroyMenu(v62);
    }
  }
  v63 = (struct tagMENU *)*((_QWORD *)a1 + 23);
  if ( v63 )
  {
    if ( v63 == *(struct tagMENU **)(*((_QWORD *)a1 + 3) + 56LL) )
    {
      UnlockWndMenu(a1);
    }
    else if ( UnlockWndMenu(a1) )
    {
      DestroyMenu(v63);
    }
  }
  v64 = *((_QWORD *)a1 + 3);
  if ( v64 )
  {
    v65 = *(_QWORD *)(v64 + 48);
    if ( v65 && a1 == *(struct tagWND **)(v65 + 72) )
    {
      v66 = *(_QWORD *)(v64 + 48);
LABEL_161:
      UnlockNotifyWindow((struct tagMENU *)v66);
      goto LABEL_162;
    }
    v66 = *(_QWORD *)(v64 + 56);
    if ( v66 && a1 == *(struct tagWND **)(v66 + 72) )
      goto LABEL_161;
  }
LABEL_162:
  if ( gcountPWO )
  {
    v67 = (EWNDOBJ *)InternalRemoveProp();
    if ( v67 )
    {
      GreLockVisRgn(*gpDispInfo);
      GreDeleteWnd(v67);
      --gcountPWO;
      GreUnlockVisRgn(*gpDispInfo);
    }
  }
  GreLockSprite(*gpDispInfo);
  GreDeleteSpriteOverlapPresent((HDEV)*gpDispInfo, *(HWND *)a1);
  GreUnlockSprite(*gpDispInfo);
  GreLockVisRgn(*gpDispInfo);
  v68 = (_QWORD **)gpDispInfo;
  v69 = (__int64 *)(gpDispInfo + 64LL);
  v70 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v70 )
  {
    while ( 1 )
    {
      v71 = *(_DWORD *)(v70 + 64);
      if ( (v71 & 0x400800) != 0 )
      {
LABEL_178:
        v69 = (__int64 *)v70;
        goto LABEL_179;
      }
      v72 = *(_QWORD *)(v70 + 16);
      if ( (struct tagWND *)v72 == a1 || *(struct tagWND **)(v70 + 24) == a1 || *(struct tagWND **)(v70 + 32) == a1 )
      {
        if ( (v71 & 2) == 0 )
        {
          if ( v70 == *(_QWORD *)(*(_QWORD *)(v72 + 152) + 24LL) || v70 != *(_QWORD *)(v72 + 296) )
          {
            if ( (v71 & 0xC0) != 0 )
              DeleteHrgnClip(v70);
LABEL_176:
            InvalidateDCE(v70);
            goto LABEL_177;
          }
          *(_QWORD *)(v72 + 296) = 0LL;
          goto LABEL_210;
        }
        if ( (v71 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v70 + 72) == gptiCurrent )
          {
            v87 = ReleaseCacheDC(*(_QWORD *)(v70 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v69, *(_QWORD *)(v70 + 8));
            v87 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v70 + 8), 2147483666LL, 0LL, 1LL) )
            goto LABEL_176;
          v87 = 2;
        }
        if ( v87 != 1 )
        {
          if ( v87 != 2 )
            goto LABEL_176;
LABEL_210:
          DestroyCacheDC(v69, *(_QWORD *)(v70 + 8));
        }
      }
LABEL_177:
      if ( v70 == *v69 )
        goto LABEL_178;
LABEL_179:
      v70 = *v69;
      if ( !*v69 )
      {
        v68 = (_QWORD **)gpDispInfo;
        break;
      }
    }
  }
  GreUnlockVisRgn(**v68);
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb, v75, v76);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  if ( *((char *)a1 + 40) < 0 )
  {
    v77 = FindSpb(a1);
    FreeSpb(v77, v78, v79);
  }
  v80 = *((_QWORD *)a1 + 25);
  if ( v80 && (*((_BYTE *)a1 + 45) & 8) == 0 && (*((_WORD *)a1 + 33) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(v80);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  v81 = *((_QWORD *)a1 + 26);
  if ( v81 )
  {
    GreDeleteObject(v81);
    *((_QWORD *)a1 + 26) = 0LL;
  }
  if ( *((_QWORD *)a1 + 22) )
  {
    DesktopFree(*((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 22) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 72) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v82 = *((_QWORD *)a1 + 28);
  if ( v82 )
  {
    DesktopFree(*((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 28) = 0LL;
    *((_DWORD *)a1 + 54) = 0;
  }
  v83 = *((_QWORD *)a1 + 34);
  if ( v83 )
  {
    Win32FreePool(v83, v82, v73);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  v84 = *((_QWORD *)a1 + 3);
  if ( !v84 || (v85 = *(struct tagWND **)(*(_QWORD *)(v84 + 8) + 16LL), a1 == v85) )
  {
    v86 = (char *)a1 + 88;
    HMAssignmentUnlock((char *)a1 + 88);
  }
  else
  {
    v86 = (char *)a1 + 88;
    HMAssignmentLock((char *)a1 + 88, v85);
  }
  HMAssignmentUnlock((char *)a1 + 96);
  HMAssignmentUnlock((char *)a1 + 104);
  HMAssignmentUnlock((char *)a1 + 240);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v88 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v88, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL));
  HMMarkObjectDestroy(a1);
  v89 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v89 + *((_QWORD *)&gSharedInfo + 1) + 17) |= 2u;
  v92 = *(_QWORD *)(PsGetCurrentProcessWin32Process() + 632);
  if ( v92 )
  {
    if ( *(struct tagWND **)(v92 + 64) == a1 )
    {
      HMAssignmentUnlock(v92 + 64);
      *(_QWORD *)(v92 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v92 + 80) == a1 )
      HMAssignmentUnlock(v92 + 80);
    v91 = v92 + 72;
    if ( *(struct tagWND **)(v92 + 72) == a1 )
      HMAssignmentUnlock(v91);
  }
  if ( (*((_DWORD *)a1 + 72) & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v91, v90);
  if ( result )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 21) )
        DeleteProperties(a1);
      v94 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v96 = v94;
      if ( v94 )
      {
        v97 = *(_DWORD **)(v94 + 368);
        if ( v97 )
        {
          v98 = (unsigned int)*v97;
          if ( (v98 & 0x20000000) != 0 )
          {
            *v97 = v98 & 0xBFFFFFFF;
          }
          else if ( v97 == (_DWORD *)gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
          }
          else
          {
            Win32FreePool(v97, v98, v95);
            *(_QWORD *)(v96 + 368) = 0LL;
          }
        }
      }
      --*(_DWORD *)(gptiCurrent + 780LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v99 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildDestroy(v99, *(_QWORD *)a1);
      }
      HMAssignmentUnlock(v86);
      v100 = *((_QWORD *)a1 + 3);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103);
      v113[0] = *(_QWORD *)(ThreadWin32Thread + 16);
      *(_QWORD *)(ThreadWin32Thread + 16) = v113;
      v105 = (void *)*((_QWORD *)a1 + 3);
      v113[1] = v100;
      v113[2] = UserDereferenceObject;
      if ( v105 )
        ObfReferenceObject(v105);
      HMFreeObject(a1);
      return PopAndFreeW32ThreadLock(v113);
    }
    else
    {
      v106 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 18) = 0LL;
      if ( v106 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v106 + 24) + 24LL) + 16LL) + 376LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 894LL), CurrentProcessWin32Process, hModuleWin);
      v109 = *ClassPtr;
      *((_QWORD *)a1 + 19) = *ClassPtr;
      ++*(_DWORD *)(v109 + 80);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      result = SetOrClrWF(1LL, a1, 3840LL, 1LL);
      *((_QWORD *)a1 + 24) = 0LL;
    }
  }
  return result;
}
