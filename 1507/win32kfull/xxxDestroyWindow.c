/*
 * XREFs of xxxDestroyWindow @ 0x1C0088250
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     NtUserDestroyWindow @ 0x1C0087450 (NtUserDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0087DB8 (xxxDW_DestroyOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C008B8B8 (xxxRemoveShadow.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxCsDdeInitialize @ 0x1C00FB808 (xxxCsDdeInitialize.c)
 *     NtUserDisableThreadIme @ 0x1C00FBE80 (NtUserDisableThreadIme.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0100500 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0130A74 (xxxCleanupMotherDesktopWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 *     xxxEndMenu @ 0x1C023C63C (xxxEndMenu.c)
 * Callees:
 *     DisassociateShellFrameAppThreads2 @ 0x1C0009370 (DisassociateShellFrameAppThreads2.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     xxxEnableWindow @ 0x1C0045940 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     xxxFocusSetInputContext @ 0x1C0046C38 (xxxFocusSetInputContext.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C004FAC0 (ImeCanDestroyDefIMEforChild.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00527D4 (zzzImeCanDestroyDefIME.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C005E6CC (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     xxxCallCtfHook @ 0x1C0067860 (xxxCallCtfHook.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C0077F14 (zzzInternalDestroyCaret.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0087DB8 (xxxDW_DestroyOwnedWindows.c)
 *     DWP_SetHotKey @ 0x1C0087ED8 (DWP_SetHotKey.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0087F88 (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C0088AC8 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C0088B20 (IsMotherDesktopWindow.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     UpdateGlobalInputSinkHint @ 0x1C00F7258 (UpdateGlobalInputSinkHint.c)
 *     xxxUnlockMenuState @ 0x1C00FEB60 (xxxUnlockMenuState.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0100ABC (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C010B284 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0117594 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0124440 (xxxHandleDestroyGhostWindow.c)
 *     QueueShutdownData @ 0x1C01D168C (QueueShutdownData.c)
 *     xxxFlushPalette @ 0x1C0215780 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C023C63C (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 a1)
{
  unsigned int v1; // edi
  char v3; // dl
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _LARGE_STRING *v18; // r9
  struct tagWND *v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagWND *v23; // rcx
  __int64 i; // rax
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  struct tagWND *v33; // rcx
  __int64 v34; // r8
  unsigned __int8 v35; // r9
  __int64 j; // rdx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 k; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  bool v49; // zf
  int v50; // ecx
  int CanDestroyDefIME; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  _QWORD v57[3]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v58[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v59[3]; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v60[7]; // [rsp+98h] [rbp+1Fh] BYREF
  int v61; // [rsp+E0h] [rbp+67h]
  __int64 v62; // [rsp+E8h] [rbp+6Fh] BYREF
  int v63; // [rsp+F0h] [rbp+77h]
  struct tagWND *v64; // [rsp+F8h] [rbp+7Fh]

  v1 = 0;
  v63 = 0;
  v57[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v57;
  v57[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v3 = *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL);
  v4 = v3 & 1;
  v61 = v4;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    if ( (v3 & 1) == 0 || (v3 & 2) == 0 )
    {
      UserSetLastError(5);
LABEL_17:
      if ( v61 )
      {
        v9 = v63 | *(_DWORD *)(gptiCurrent + 448LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 448LL) = v9;
      }
      LOBYTE(v1) = ThreadUnlock1(v9, v8) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
    v4 = v61;
  }
  if ( v4 )
  {
    v5 = *(_DWORD *)(gptiCurrent + 448LL) | 0x10000000;
    v63 = *(_DWORD *)(gptiCurrent + 448LL) & 0x10000000;
    *(_DWORD *)(gptiCurrent + 448LL) = v5;
  }
  v6 = *(_DWORD *)(a1 + 288);
  if ( (v6 & 0x4000) != 0 )
  {
    v7 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 288) = v6 & 0xFFFFBFFF;
    QueueShutdownData(v7, 0LL);
  }
  if ( !v61 && (*(_DWORD *)(gptiCurrent + 448LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow(*(struct tagWND **)(a1 + 88), (struct tagWND *)a1) )
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *(_QWORD *)a1, 0LL, 5u) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage((struct tagWND *)a1, 0x90u, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 536LL);
  if ( v11 )
  {
    if ( a1 == *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 536LL);
      do
      {
        *(_DWORD *)(v11 + 8) &= ~4u;
        v11 = *(_QWORD *)(v11 + 48);
      }
      while ( v11 );
      if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v62,
          (struct tagMENUSTATE *)v12);
        xxxEndMenu(v13);
        if ( v62 )
          xxxUnlockMenuState(v62);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  if ( (*(_BYTE *)(a1 + 55) & 0x40) == 0 && !*(_QWORD *)(a1 + 104) && (*(_BYTE *)(a1 + 42) & 0x20) != 0 )
    xxxFlushPalette(a1);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 882LL) && (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
  {
    v14 = *(_QWORD *)(a1 + 104);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      v16 = *(_QWORD *)(a1 + 16);
      if ( v15 != v16 )
        zzzAttachThreadInput(v16, v15, 0);
    }
  }
  if ( (*(_BYTE *)(a1 + 55) & 0x40) != 0 && (*(_BYTE *)(a1 + 48) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v17 = *(_QWORD *)(a1 + 88);
    if ( v17 )
    {
      v58[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v58;
      v58[1] = v17;
      ++*(_DWORD *)(v17 + 8);
      v18 = *(struct _LARGE_STRING **)a1;
      v19 = *(struct tagWND **)(a1 + 88);
      v20 = (*(unsigned __int16 *)(a1 + 192) << 16) | 2;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v19, 0x210u, v20, v18, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v22, v21);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetOrClrWF(1, (_DWORD *)a1, 0x480u, 1);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow(v23);
  }
  else if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow(v23);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 16LL) + 96LL); ; i = *(_QWORD *)(i + 72) )
    {
      v62 = i;
      if ( !i )
        break;
      if ( *(_QWORD *)(i + 104) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
      {
        PostUnownedNotification((struct tagWND *)i);
        i = v62;
      }
    }
  }
  v25 = *(_BYTE *)(a1 + 55);
  if ( (v25 & 0x10) != 0 )
  {
    if ( (v25 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 151);
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
    {
      SetVisible(a1, 0);
      v27 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( v27 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL) )
        {
          v28 = *(_QWORD *)(a1 + 88);
          if ( v28 )
            zzzLockDisplayAreaAndInvalidateDCCache(v28, 16, 0LL);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  }
  if ( (*(_BYTE *)(a1 + 55) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1, v26);
    DWP_SetHotKey((struct tagWND *)a1, 0LL, v29, v30);
  }
  if ( !v61 )
  {
    v31 = *(_QWORD *)(gptiCurrent + 392LL);
    v32 = *(_QWORD *)(v31 + 80);
    if ( a1 == v32 )
    {
      if ( (*(_BYTE *)(a1 + 55) & 0x80) != 0 )
      {
        v33 = *(struct tagWND **)(a1 + 104);
        v64 = v33;
        if ( v33 )
        {
          v34 = 2LL;
          goto LABEL_82;
        }
      }
    }
    else if ( v32 || gpqForeground != v31 )
    {
      goto LABEL_109;
    }
    v34 = 3LL;
    v64 = (struct tagWND *)a1;
    v33 = (struct tagWND *)a1;
LABEL_82:
    LODWORD(v62) = v34;
    if ( v33 )
    {
      if ( (_DWORD)v34 == 2 && !IsNonImmersiveBand((__int64)v33) && (v35 & *((_BYTE *)v33 + 44)) != 0 )
      {
        for ( j = *((_QWORD *)v33 + 13); j; j = *(_QWORD *)(j + 104) )
        {
          if ( (*(_BYTE *)(j + 290) & 1) != 0 && (v35 & *(_BYTE *)(j + 44)) == 0 )
          {
            v33 = (struct tagWND *)j;
            v64 = (struct tagWND *)j;
            break;
          }
        }
      }
      v59[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v59;
      v59[1] = v33;
      ++*((_DWORD *)v33 + 2);
      if ( (_DWORD)v34 == 2 && (*((_BYTE *)v33 + 290) & 1) != 0 )
      {
        xxxEnableWindow(v33, 1LL, v34);
        v33 = v64;
        LODWORD(v34) = v62;
      }
      v37 = xxxActivateWindow(v33, (unsigned int)v34);
      v39 = (unsigned int)v62;
      if ( (!v37 || (_DWORD)v62 == 3 && a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL))
        && ((_DWORD)v62 == 3 || a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
        v40 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
        v41 = (__int64 *)v40;
        if ( (*gpsi & 4) != 0 && v40 )
        {
          v60[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v60;
          v60[1] = v40;
          ++*(_DWORD *)(v40 + 8);
          xxxFocusSetInputContext((__int64 *)v40, 0, 0);
          v41 = (__int64 *)ThreadUnlock1(v43, v42);
        }
        if ( *(_QWORD *)(gptiCurrent + 392LL) == gpqForeground )
        {
          if ( v41 )
            xxxWindowEvent(0x80000003, v41, 0, 0, 49);
          xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
          xxxWindowEvent(3u, 0LL, 0, 0, 1);
        }
        zzzInternalDestroyCaret();
      }
      ThreadUnlock1(v39, v38);
    }
  }
LABEL_109:
  v44 = *(_QWORD *)(a1 + 104);
  v45 = v44;
  if ( v44 )
  {
    for ( k = *(_QWORD *)(v44 + 104); k; k = *(_QWORD *)(k + 104) )
      v45 = k;
    v47 = v45 + 240;
    if ( a1 == *(_QWORD *)(v45 + 240) )
    {
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v45 + gSharedInfo[1] + 17LL) & 1) != 0 )
        HMAssignmentUnlock(v47);
      else
        HMAssignmentLock(v47, *(_QWORD *)(a1 + 104));
    }
  }
  if ( !v61 )
  {
    if ( *(char *)(a1 + 43) >= 0 )
      xxxWindowEvent(0x8001u, (__int64 *)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  if ( (*gpsi & 4) == 0 )
    goto LABEL_138;
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 )
    goto LABEL_138;
  if ( !*(_QWORD *)(gptiCurrent + 704LL) )
    goto LABEL_138;
  v48 = *(_QWORD *)(a1 + 152);
  if ( (*(_BYTE *)(v48 + 86) & 1) != 0 )
    goto LABEL_138;
  v49 = *(_WORD *)(v48 + 8) == *(_WORD *)(gpsi + 882LL);
  v50 = v61;
  if ( v49 || v61 )
    goto LABEL_139;
  if ( (*(_BYTE *)(a1 + 55) & 0x40) == 0 )
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 704LL), a1);
    LODWORD(v62) = CanDestroyDefIME;
    if ( !--gdwDeferWinEvent && gpPendingNotifies )
    {
      xxxFlushDeferredWindowEvents();
      CanDestroyDefIME = v62;
    }
    if ( !CanDestroyDefIME )
      goto LABEL_138;
    v52 = *(_QWORD *)(gptiCurrent + 704LL);
    if ( !v52 )
      goto LABEL_138;
    goto LABEL_137;
  }
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_139;
  if ( (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 704LL), a1) )
  {
    v52 = *(_QWORD *)(gptiCurrent + 704LL);
LABEL_137:
    xxxDestroyWindow(v52);
  }
LABEL_138:
  v50 = v61;
LABEL_139:
  v53 = *(_QWORD *)(a1 + 88);
  if ( v53 && !v50 )
  {
    v62 = *(_QWORD *)(v53 + 16);
    if ( *(_QWORD *)(v62 + 1240) == a1 )
    {
      HMAssignmentUnlock(v62 + 1240);
      DisassociateShellFrameAppThreads2(v62, gptiCurrent);
    }
    if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v54 = *(_QWORD *)(a1 + 16);
      v55 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
      if ( v54 != v55 )
        zzzAttachThreadInput(v54, v55, 0);
    }
    v56 = *(_QWORD *)(a1 + 88);
    if ( v56 )
      UnlinkWindow(a1, v56);
  }
  SetOrClrWF(1, (_DWORD *)a1, 0x380u, 1);
  if ( (*(_DWORD *)(a1 + 288) & 0x100000) != 0 )
  {
    UpdateGlobalInputSinkHint(0LL);
    *(_DWORD *)(a1 + 288) &= ~0x100000u;
  }
  xxxFreeWindow((struct tagWND *)a1);
  if ( v61 )
    *(_DWORD *)(gptiCurrent + 448LL) = v63 | *(_DWORD *)(gptiCurrent + 448LL) & 0xEFFFFFFF;
  return 1LL;
}
