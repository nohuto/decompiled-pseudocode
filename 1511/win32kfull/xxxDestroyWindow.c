/*
 * XREFs of xxxDestroyWindow @ 0x1C0068F30
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxRemoveShadow @ 0x1C0068D84 (xxxRemoveShadow.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0069BD0 (xxxDW_DestroyOwnedWindows.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxCreateDefaultImeWindow @ 0x1C008F8CC (xxxCreateDefaultImeWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDestroyWindow @ 0x1C00F55F0 (NtUserDestroyWindow.c)
 *     NtUserDisableThreadIme @ 0x1C01083A0 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C01089B8 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0110CA0 (xxxDestroyThreadDDEObject.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011435C (xxxCleanupMotherDesktopWindow.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxCancelCoolSwitch @ 0x1C02014FC (xxxCancelCoolSwitch.c)
 *     xxxEndMenu @ 0x1C023C80C (xxxEndMenu.c)
 * Callees:
 *     UpdateGlobalInputSinkHint @ 0x1C0006F28 (UpdateGlobalInputSinkHint.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C000C248 (DisassociateShellFrameAppThreads2.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C004C410 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     xxxCallCtfHook @ 0x1C00575D0 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C00697A0 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C0069800 (IsMotherDesktopWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0069824 (xxxDW_SendDestroyMessages.c)
 *     DWP_SetHotKey @ 0x1C0069B20 (DWP_SetHotKey.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0069BD0 (xxxDW_DestroyOwnedWindows.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxFocusSetInputContext @ 0x1C008120C (xxxFocusSetInputContext.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C008F864 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C008FB88 (zzzImeCanDestroyDefIME.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxEnableWindow @ 0x1C0090D00 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 *     zzzInternalDestroyCaret @ 0x1C00CA2FC (zzzInternalDestroyCaret.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C01113E8 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01424F8 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C014D320 (xxxHandleDestroyGhostWindow.c)
 *     QueueShutdownData @ 0x1C01D32C0 (QueueShutdownData.c)
 *     xxxFlushPalette @ 0x1C0215630 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C023C80C (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // esi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  int CanDestroyDefIME; // esi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  struct tagSwitchWndInfo *v20; // rdx
  __int64 i; // rsi
  __int64 k; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  struct tagWND *v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r10
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  unsigned __int8 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 j; // rcx
  _QWORD v54[3]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v55[3]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v56[3]; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v57[5]; // [rsp+98h] [rbp+2Fh] BYREF
  int v58; // [rsp+D0h] [rbp+67h]
  struct tagMENUSTATE *v59; // [rsp+D8h] [rbp+6Fh] BYREF
  int v60; // [rsp+E0h] [rbp+77h]

  v54[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v54;
  v54[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v2 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v3 = *((_QWORD *)&gSharedInfo + 1);
  v4 = *(_BYTE *)(v2 + v3 + 17) & 1;
  v58 = v4;
  if ( (*(_BYTE *)(v2 + v3 + 17) & 1) != 0 )
  {
    if ( *(_QWORD *)(v2 + v3 + 8) != gptiCurrent )
      HMChangeOwnerThread(a1, gptiCurrent);
    v46 = *(_DWORD *)(gptiCurrent + 440LL) | 0x10000000;
    v60 = *(_DWORD *)(gptiCurrent + 440LL) & 0x10000000;
    *(_DWORD *)(gptiCurrent + 440LL) = v46;
  }
  else
  {
    v60 = 0;
    if ( gptiCurrent != a1[2] )
    {
      UserSetLastError(5);
LABEL_127:
      ThreadUnlock1(v37, v36);
      return 0LL;
    }
  }
  v5 = *((_DWORD *)a1 + 72);
  if ( (v5 & 0x4000) != 0 )
  {
    v48 = *a1;
    *((_DWORD *)a1 + 72) = v5 & 0xFFFFBFFF;
    QueueShutdownData(v48, 0LL);
  }
  if ( !v4 && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow((struct tagWND *)a1[11], (struct tagWND *)a1) )
      xxxCallCtfHook(5, 4, *a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4LL, *a1, 0LL) )
    {
      goto LABEL_127;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage((struct tagWND *)a1, 0x90u, 0LL, 0LL);
  }
  v6 = *(_QWORD *)(a1[2] + 528LL);
  if ( v6 )
  {
    if ( a1 == *(_QWORD **)(*(_QWORD *)v6 + 8LL) )
    {
      v49 = *(_QWORD *)(a1[2] + 528LL);
      do
      {
        *(_DWORD *)(v6 + 8) &= ~4u;
        v6 = *(_QWORD *)(v6 + 48);
      }
      while ( v6 );
      if ( (*(_DWORD *)(v49 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v59,
          (struct tagMENUSTATE *)v49);
        xxxEndMenu(v50);
        if ( v59 )
          xxxUnlockMenuStateInternal(v59, 0);
      }
    }
  }
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  if ( (*((_BYTE *)a1 + 55) & 0x40) == 0 && !a1[13] && (*((_BYTE *)a1 + 42) & 0x20) != 0 )
    xxxFlushPalette(a1);
  if ( *(_WORD *)(a1[19] + 8LL) != *(_WORD *)(gpsi + 882LL) && (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
  {
    v7 = a1[13];
    if ( v7 )
    {
      v34 = *(_QWORD *)(v7 + 16);
      v35 = a1[2];
      if ( v34 != v35 )
        zzzAttachThreadInput(v35, v34, 0LL);
    }
  }
  if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 && (a1[6] & 4) == 0 && !(unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    v25 = a1[11];
    if ( v25 )
    {
      v55[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v55;
      v55[1] = v25;
      ++*(_DWORD *)(v25 + 8);
      v26 = *a1;
      v27 = (struct tagWND *)a1[11];
      v28 = (*((unsigned __int16 *)a1 + 96) << 16) | 2;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v27, 528LL, v28, v26, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v30, v29);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetOrClrWF(1LL, a1, 1152LL, 1LL);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[3] + 8LL) + 16LL) + 96LL); i; i = *(_QWORD *)(i + 72) )
    {
      if ( *(_QWORD **)(i + 104) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
    v4 = v58;
  }
  v8 = *((_BYTE *)a1 + 55);
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
      xxxShowWindowEx((struct tagWND *)a1);
    else
      xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, 151);
    if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
    {
      SetVisible(a1, 0LL);
      v51 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v51 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v51 + 8) + 16LL) )
        {
          v52 = a1[11];
          if ( v52 )
            zzzLockDisplayAreaAndInvalidateDCCache(v52, 16, 0LL);
          xxxRedrawWindow(0LL, (_DWORD *)a1 + 28, 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow((__int64)a1) && (*((_WORD *)a1 + 33) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessagesEx(2uLL, *a1, 0LL);
  }
  if ( (*((_BYTE *)a1 + 55) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1);
  }
  LOBYTE(v10) = 0x80;
  if ( !v4 )
  {
    v11 = *(_QWORD *)(gptiCurrent + 384LL);
    v9 = 3LL;
    v12 = *(_QWORD **)(v11 + 80);
    if ( a1 == v12 )
    {
      if ( (*((_BYTE *)a1 + 55) & 0x80) != 0 )
      {
        v39 = (_QWORD *)a1[13];
        if ( v39 )
        {
          v38 = 2LL;
          goto LABEL_106;
        }
      }
    }
    else if ( v12 || gpqForeground != v11 )
    {
      goto LABEL_39;
    }
    v38 = 3LL;
    v39 = a1;
LABEL_106:
    LODWORD(v59) = v38;
    if ( v39 )
    {
      if ( (_DWORD)v38 == 2
        && !(unsigned int)IsNonImmersiveBand(v39, 3LL, v38, v10)
        && (v47 & *((_BYTE *)v39 + 44)) != 0 )
      {
        for ( j = v39[13]; j; j = *(_QWORD *)(j + 104) )
        {
          if ( (*(_BYTE *)(j + 290) & 1) != 0 && (v47 & *(_BYTE *)(j + 44)) == 0 )
          {
            v39 = (_QWORD *)j;
            break;
          }
        }
      }
      v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v56;
      v56[1] = v39;
      ++*((_DWORD *)v39 + 2);
      if ( (_DWORD)v38 == 2 && (*((_BYTE *)v39 + 290) & 1) != 0 )
        xxxEnableWindow((struct tagWND *)v39, 1);
      v40 = xxxActivateWindow((struct tagWND *)v39);
      v42 = (unsigned int)v59;
      if ( (!v40 || (_DWORD)v59 == 3 && a1 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL))
        && ((_DWORD)v59 == 3 || a1 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        v43 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
        if ( (*gpsi & 4) != 0 && v43 )
        {
          v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v57;
          v57[1] = v43;
          ++*(_DWORD *)(v43 + 8);
          xxxFocusSetInputContext(v43, 0LL, 0LL);
          v43 = ThreadUnlock1(v45, v44);
        }
        if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
        {
          if ( v43 )
            xxxWindowEvent(0x80000003, (__int64 *)v43, 0, 0, 49);
          xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
          xxxWindowEvent(3u, 0LL, 0, 0, 1);
        }
        zzzInternalDestroyCaret();
      }
      ThreadUnlock1(v42, v41);
    }
    v4 = v58;
  }
LABEL_39:
  v13 = a1[13];
  v14 = v13;
  if ( v13 )
  {
    for ( k = *(_QWORD *)(v13 + 104); k; k = *(_QWORD *)(k + 104) )
      v14 = k;
    v24 = v14 + 240;
    if ( a1 == *(_QWORD **)(v14 + 240) )
    {
      if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v14
                     + *((_QWORD *)&gSharedInfo + 1)
                     + 17LL) & 1) != 0 )
        HMAssignmentUnlock(v24);
      else
        HMAssignmentLock(v24, a1[13]);
    }
  }
  if ( !v4 )
  {
    if ( *((char *)a1 + 43) >= 0 )
      xxxWindowEvent(0x8001u, a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1, v9, v13, v10);
  }
  if ( (*gpsi & 4) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
  {
    if ( *(_QWORD *)(gptiCurrent + 696LL) )
    {
      v15 = a1[19];
      if ( (*(_BYTE *)(v15 + 86) & 1) == 0 && *(_WORD *)(v15 + 8) != *(_WORD *)(gpsi + 882LL) && !v4 )
      {
        if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
        {
          if ( a1[11] && (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 696LL), a1) )
            xxxDestroyWindow(*(_QWORD *)(gptiCurrent + 696LL));
        }
        else
        {
          ++gdwDeferWinEvent;
          CanDestroyDefIME = zzzImeCanDestroyDefIME(*(struct tagWND **)(gptiCurrent + 696LL));
          --gdwDeferWinEvent;
          if ( gpPendingNotifies && !gdwDeferWinEvent )
            xxxFlushDeferredWindowEvents();
          if ( CanDestroyDefIME )
          {
            v33 = *(_QWORD *)(gptiCurrent + 696LL);
            if ( v33 )
              xxxDestroyWindow(v33);
          }
          v4 = v58;
        }
      }
    }
  }
  v17 = a1[11];
  if ( v17 && !v4 )
  {
    v18 = *(_QWORD *)(v17 + 16);
    if ( *(_QWORD **)(v18 + 1232) == a1 )
    {
      HMAssignmentUnlock(v18 + 1232);
      DisassociateShellFrameAppThreads2(v18, gptiCurrent);
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)a1) )
    {
      v31 = a1[2];
      v32 = *(_QWORD *)(a1[11] + 16LL);
      if ( v31 != v32 )
        zzzAttachThreadInput(v31, v32, 0LL);
    }
    v19 = a1[11];
    if ( v19 )
      UnlinkWindow((__int64)a1, v19);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  if ( (a1[36] & 0x100000) != 0 )
  {
    UpdateGlobalInputSinkHint(0);
    *((_DWORD *)a1 + 72) &= ~0x100000u;
  }
  xxxFreeWindow((struct tagWND *)a1, v20);
  if ( v58 )
    *(_DWORD *)(gptiCurrent + 440LL) = v60 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
  return 1LL;
}
