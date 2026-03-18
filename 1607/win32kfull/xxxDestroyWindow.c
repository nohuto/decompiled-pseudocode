/*
 * XREFs of xxxDestroyWindow @ 0x1C0071700
 * Callers:
 *     xxxRemoveShadow @ 0x1C0056E60 (xxxRemoveShadow.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00FD450 (xxxDW_DestroyOwnedWindows.c)
 *     NtUserDestroyWindow @ 0x1C0113B90 (NtUserDestroyWindow.c)
 *     NtUserDisableThreadIme @ 0x1C0128490 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C012B4E8 (xxxCsDdeInitialize.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012C494 (xxxCleanupMotherDesktopWindow.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0132410 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
 *     xxxEndMenu @ 0x1C02341A4 (xxxEndMenu.c)
 * Callees:
 *     UpdateGlobalInputSinkHint @ 0x1C0009B68 (UpdateGlobalInputSinkHint.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C000D518 (DisassociateShellFrameAppThreads2.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C007147C (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072620 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     IsMotherDesktopWindow @ 0x1C0093958 (IsMotherDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C009BB44 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C009D50C (zzzImeCanDestroyDefIME.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsWindowGhosted @ 0x1C00A738C (IsWindowGhosted.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     xxxFocusSetInputContext @ 0x1C00A8920 (xxxFocusSetInputContext.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00FD450 (xxxDW_DestroyOwnedWindows.c)
 *     DWP_SetHotKey @ 0x1C010D560 (DWP_SetHotKey.c)
 *     xxxEnableWindow @ 0x1C011B380 (xxxEnableWindow.c)
 *     zzzInternalDestroyCaret @ 0x1C0123150 (zzzInternalDestroyCaret.c)
 *     xxxUnlockMenuState @ 0x1C012CFD0 (xxxUnlockMenuState.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0131034 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C0152B90 (xxxHandleDestroyGhostWindow.c)
 *     QueueShutdownData @ 0x1C015486C (QueueShutdownData.c)
 *     xxxFlushPalette @ 0x1C020E340 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C02341A4 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(_QWORD *a1)
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
  __int64 v18; // r9
  struct tagWND *v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 i; // rax
  char v24; // al
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  struct tagWND *v30; // rcx
  __int64 v31; // r8
  unsigned __int8 v32; // r9
  __int64 j; // rdx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 k; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  bool v46; // zf
  int v47; // ecx
  int CanDestroyDefIME; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  struct tagSwitchWndInfo *v54; // rdx
  __int64 v55; // r8
  _QWORD v56[3]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v57[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v58[3]; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v59[7]; // [rsp+98h] [rbp+1Fh] BYREF
  int v60; // [rsp+E0h] [rbp+67h]
  __int64 v61; // [rsp+E8h] [rbp+6Fh] BYREF
  int v62; // [rsp+F0h] [rbp+77h]
  struct tagWND *v63; // [rsp+F8h] [rbp+7Fh]

  v1 = 0;
  v62 = 0;
  v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v56;
  v56[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v3 = *(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                + *((_QWORD *)&gSharedInfo + 1)
                + 17LL);
  v4 = v3 & 1;
  v60 = v4;
  if ( gptiCurrent != a1[2] )
  {
    if ( (v3 & 1) == 0 || (v3 & 2) == 0 )
    {
      UserSetLastError(5LL);
LABEL_17:
      if ( v60 )
      {
        v9 = v62 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 440LL) = v9;
      }
      LOBYTE(v1) = ThreadUnlock1(v9, v8) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
    v4 = v60;
  }
  if ( v4 )
  {
    v5 = *(_DWORD *)(gptiCurrent + 440LL) | 0x10000000;
    v62 = *(_DWORD *)(gptiCurrent + 440LL) & 0x10000000;
    *(_DWORD *)(gptiCurrent + 440LL) = v5;
  }
  v6 = *((_DWORD *)a1 + 72);
  if ( (v6 & 0x4000) != 0 )
  {
    v7 = *a1;
    *((_DWORD *)a1 + 72) = v6 & 0xFFFFBFFF;
    QueueShutdownData(v7, 0LL);
  }
  if ( !v60 && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow((struct tagWND *)a1[11], (struct tagWND *)a1) )
      xxxCallCtfHook(5LL, 4LL, *a1);
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4LL, *a1, 0LL, 5LL) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(a1[2] + 528LL);
  if ( v11 )
  {
    if ( a1 == *(_QWORD **)(*(_QWORD *)v11 + 8LL) )
    {
      v12 = *(_QWORD *)(a1[2] + 528LL);
      do
      {
        *(_DWORD *)(v11 + 8) &= ~4u;
        v11 = *(_QWORD *)(v11 + 48);
      }
      while ( v11 );
      if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v61,
          (struct tagMENUSTATE *)v12);
        xxxEndMenu(v13);
        if ( v61 )
          xxxUnlockMenuState();
      }
    }
  }
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  if ( (*((_BYTE *)a1 + 55) & 0x40) == 0 && !a1[13] && (*((_BYTE *)a1 + 42) & 0x20) != 0 )
    xxxFlushPalette(a1);
  if ( *(_WORD *)(a1[19] + 8LL) != *(_WORD *)(gpsi + 882LL) && (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
  {
    v14 = a1[13];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      v16 = a1[2];
      if ( v15 != v16 )
        zzzAttachThreadInput(v16, v15, 0LL);
    }
  }
  if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 && (a1[6] & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v17 = a1[11];
    if ( v17 )
    {
      v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v57;
      v57[1] = v17;
      ++*(_DWORD *)(v17 + 8);
      v18 = *a1;
      v19 = (struct tagWND *)a1[11];
      v20 = (*((unsigned __int16 *)a1 + 96) << 16) | 2;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v19, 0x210u, v20, v18, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v22, v21);
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
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[3] + 8LL) + 16LL) + 96LL); ; i = *(_QWORD *)(i + 72) )
    {
      v61 = i;
      if ( !i )
        break;
      if ( *(_QWORD **)(i + 104) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
      {
        PostUnownedNotification((struct tagWND *)i);
        i = v61;
      }
    }
  }
  v24 = *((_BYTE *)a1 + 55);
  if ( (v24 & 0x10) != 0 )
  {
    if ( (v24 & 0x40) != 0 )
      xxxShowWindowEx((struct tagWND *)a1);
    else
      xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, 151);
    if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
    {
      SetVisible(a1, 0LL);
      v26 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v26 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) )
        {
          v27 = a1[11];
          if ( v27 )
            zzzLockDisplayAreaAndInvalidateDCCache(v27, 16LL);
          xxxRedrawWindow(0LL, (_DWORD *)a1 + 28, 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*((_WORD *)a1 + 33) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessagesEx(2uLL, *a1, 0LL);
  }
  if ( (*((_BYTE *)a1 + 55) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1);
  }
  LOBYTE(v25) = 0x80;
  if ( !v60 )
  {
    v28 = *(_QWORD *)(gptiCurrent + 384LL);
    v29 = *(_QWORD **)(v28 + 88);
    if ( a1 == v29 )
    {
      if ( (*((_BYTE *)a1 + 55) & 0x80) != 0 )
      {
        v30 = (struct tagWND *)a1[13];
        v63 = v30;
        if ( v30 )
        {
          v31 = 2LL;
          goto LABEL_82;
        }
      }
    }
    else if ( v29 || gpqForeground != v28 )
    {
      goto LABEL_109;
    }
    v31 = 3LL;
    v63 = (struct tagWND *)a1;
    v30 = (struct tagWND *)a1;
LABEL_82:
    LODWORD(v61) = v31;
    if ( v30 )
    {
      if ( (_DWORD)v31 == 2
        && !(unsigned int)IsNonImmersiveBand(v30, 3LL, v31, v25)
        && (v32 & *((_BYTE *)v30 + 44)) != 0 )
      {
        for ( j = *((_QWORD *)v30 + 13); j; j = *(_QWORD *)(j + 104) )
        {
          if ( (*(_BYTE *)(j + 290) & 1) != 0 && (v32 & *(_BYTE *)(j + 44)) == 0 )
          {
            v30 = (struct tagWND *)j;
            v63 = (struct tagWND *)j;
            break;
          }
        }
      }
      v58[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v58;
      v58[1] = v30;
      ++*((_DWORD *)v30 + 2);
      if ( (_DWORD)v31 == 2 && (*((_BYTE *)v30 + 290) & 1) != 0 )
      {
        xxxEnableWindow(v30, 1);
        v30 = v63;
      }
      v34 = xxxActivateWindow(v30);
      v36 = (unsigned int)v61;
      if ( (!v34 || (_DWORD)v61 == 3 && a1 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL))
        && ((_DWORD)v61 == 3 || a1 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        v37 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        v38 = v37;
        if ( (*gpsi & 4) != 0 && v37 )
        {
          v59[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v59;
          v59[1] = v37;
          ++*(_DWORD *)(v37 + 8);
          xxxFocusSetInputContext(v37, 0LL, 0LL);
          v38 = ThreadUnlock1(v40, v39);
        }
        if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
        {
          if ( v38 )
            xxxWindowEvent(-2147483645, v38, 0, 0, 49);
          xxxWindowEvent(32773, 0, -4, 0, 0);
          xxxWindowEvent(3, 0, 0, 0, 1);
        }
        zzzInternalDestroyCaret();
      }
      ThreadUnlock1(v36, v35);
    }
  }
LABEL_109:
  v41 = a1[13];
  v42 = v41;
  if ( v41 )
  {
    for ( k = *(_QWORD *)(v41 + 104); k; k = *(_QWORD *)(k + 104) )
      v42 = k;
    v44 = v42 + 240;
    if ( a1 == *(_QWORD **)(v42 + 240) )
    {
      if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v42
                     + *((_QWORD *)&gSharedInfo + 1)
                     + 17LL) & 1) != 0 )
        HMAssignmentUnlock(v44);
      else
        HMAssignmentLock(v44, a1[13]);
    }
  }
  if ( !v60 )
  {
    if ( *((char *)a1 + 43) >= 0 )
      xxxWindowEvent(32769, (_DWORD)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages((__int64)a1);
  }
  if ( (*gpsi & 4) == 0 )
    goto LABEL_138;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
    goto LABEL_138;
  if ( !*(_QWORD *)(gptiCurrent + 696LL) )
    goto LABEL_138;
  v45 = a1[19];
  if ( (*(_BYTE *)(v45 + 86) & 1) != 0 )
    goto LABEL_138;
  v46 = *(_WORD *)(v45 + 8) == *(_WORD *)(gpsi + 882LL);
  v47 = v60;
  if ( v46 || v60 )
    goto LABEL_139;
  if ( (*((_BYTE *)a1 + 55) & 0x40) == 0 )
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(struct tagWND **)(gptiCurrent + 696LL));
    LODWORD(v61) = CanDestroyDefIME;
    if ( !--gdwDeferWinEvent && gpPendingNotifies )
    {
      xxxFlushDeferredWindowEvents();
      CanDestroyDefIME = v61;
    }
    if ( !CanDestroyDefIME )
      goto LABEL_138;
    v49 = *(_QWORD *)(gptiCurrent + 696LL);
    if ( !v49 )
      goto LABEL_138;
    goto LABEL_137;
  }
  if ( !a1[11] )
    goto LABEL_139;
  if ( (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 696LL), a1) )
  {
    v49 = *(_QWORD *)(gptiCurrent + 696LL);
LABEL_137:
    xxxDestroyWindow(v49);
  }
LABEL_138:
  v47 = v60;
LABEL_139:
  v50 = a1[11];
  if ( v50 && !v47 )
  {
    v61 = *(_QWORD *)(v50 + 16);
    if ( *(_QWORD **)(v61 + 1256) == a1 )
    {
      HMAssignmentUnlock(v61 + 1256);
      DisassociateShellFrameAppThreads2(v61, gptiCurrent);
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v51 = a1[2];
      v52 = *(_QWORD *)(a1[11] + 16LL);
      if ( v51 != v52 )
        zzzAttachThreadInput(v51, v52, 0LL);
    }
    v53 = a1[11];
    if ( v53 )
      UnlinkWindow((__int64)a1, v53);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  if ( (a1[36] & 0x100000) != 0 )
  {
    UpdateGlobalInputSinkHint(0);
    *((_DWORD *)a1 + 72) &= ~0x100000u;
  }
  xxxFreeWindow((struct tagWND *)a1, v54, v55);
  if ( v60 )
    *(_DWORD *)(gptiCurrent + 440LL) = v62 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
  return 1LL;
}
