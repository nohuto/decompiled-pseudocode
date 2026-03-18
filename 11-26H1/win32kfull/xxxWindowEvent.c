/*
 * XREFs of xxxWindowEvent @ 0x140043360
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140041794 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     NtUserNotifyWinEvent @ 0x140043200 (NtUserNotifyWinEvent.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     zzzSetCaretPos @ 0x140129180 (zzzSetCaretPos.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x14012BC20 (zzzInternalShowCaret.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     zzzInternalDestroyCaret @ 0x14014C894 (zzzInternalDestroyCaret.c)
 *     xxxCreateCaret @ 0x14014C980 (xxxCreateCaret.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140154C9C (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14015E3EC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     xxxEnableWndSBArrows @ 0x1401EFCBC (xxxEnableWndSBArrows.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x14022DB70 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     ?zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z @ 0x14024AAE0 (-zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMNSetCapture @ 0x14028B3D4 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x140044AA0 (xxxProcessTSFEvent.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x140044B4C (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14028CB58 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, int a4, int a5)
{
  unsigned int DLT; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rbx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // edi
  tagDomLock *v14; // rcx
  int v15; // r12d
  int v16; // r14d
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdi
  int v23; // ebx
  __int64 v24; // r13
  HANDLE ThreadId; // rax
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  volatile signed __int32 *v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 i; // rcx
  __int64 v35; // rdx
  __int64 UserSessionState; // rax
  unsigned int CurrentThreadId; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rbx
  int v41; // edx
  struct tagWND *v42; // r14
  __int64 v43; // rdi
  struct tagTHREADINFO *v44; // rbx
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rax
  __int64 v48; // rcx
  ULONG_PTR *v49; // rax
  ULONG_PTR v50; // rdx
  ULONG_PTR *v51; // rcx
  ULONG_PTR v52; // rcx
  tagDomLock *v53; // rcx
  bool v54; // zf
  __int64 v55; // r12
  __int64 k; // rbx
  __int64 v57; // rdi
  HANDLE v58; // rax
  int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  char *v64; // rsi
  int v65; // r14d
  tagDomLock *v66; // rcx
  __int64 v67; // rdx
  tagDomLock *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rsi
  struct tagWND *v75; // rax
  __int64 v76; // rcx
  __int64 *v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rcx
  ULONG_PTR *v80; // rax
  struct tagWND *v81; // rax
  _QWORD *v82; // rax
  int v83; // eax
  unsigned int v84; // [rsp+28h] [rbp-D8h]
  unsigned int v85; // [rsp+40h] [rbp-C0h]
  struct tagWND *v88; // [rsp+50h] [rbp-B0h]
  unsigned int v89; // [rsp+58h] [rbp-A8h]
  __int64 v90; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 DomainLockRef; // [rsp+88h] [rbp-78h] BYREF
  char v95; // [rsp+90h] [rbp-70h] BYREF
  __int64 v96; // [rsp+98h] [rbp-68h]
  char v97; // [rsp+A0h] [rbp-60h]
  __int64 v98; // [rsp+A8h] [rbp-58h]
  char v99; // [rsp+B0h] [rbp-50h]
  __int64 j; // [rsp+B8h] [rbp-48h]
  __int64 v101; // [rsp+C0h] [rbp-40h]
  _QWORD v102[2]; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE ThreadProcessId; // [rsp+E0h] [rbp-20h]
  __int64 v104; // [rsp+E8h] [rbp-18h]
  HANDLE v105; // [rsp+F0h] [rbp-10h]
  tagDomLock *v106; // [rsp+F8h] [rbp-8h] BYREF
  char v107; // [rsp+100h] [rbp+0h] BYREF
  __int64 v108; // [rsp+108h] [rbp+8h]
  char v109; // [rsp+110h] [rbp+10h]
  __int64 v110; // [rsp+118h] [rbp+18h]
  char v111; // [rsp+120h] [rbp+20h]

  v88 = a2;
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  v95 = 1;
  v97 = 0;
  v10 = &v95;
  v96 = W32GetUserSessionState(v9, v8) + 42384;
  v12 = 0;
  v98 = 0LL;
  v13 = 0;
  v99 = 0;
  do
  {
    v14 = (tagDomLock *)*((_QWORD *)v10 - 1);
    if ( v14 )
    {
      if ( *v10 )
        tagDomLock::LockExclusive(v14);
      else
        tagDomLock::LockShared(v14);
    }
    ++v13;
    v10 += 16;
  }
  while ( !v13 );
  v99 = 1;
  if ( a1 == 2147483408 )
  {
    v15 = 1;
    goto LABEL_19;
  }
  if ( a1 - 2147483409 < 2 )
    v15 = 2;
  else
    v15 = 0;
  if ( a1 <= 0x80000002 )
  {
    if ( a1 != -2147483646 )
    {
      if ( a1 != 2147483393 )
      {
        if ( a1 == -2147483647 )
        {
LABEL_15:
          v16 = 256;
          v12 = 1;
          goto LABEL_20;
        }
        if ( a1 != 2147483392 )
        {
          if ( a1 == 0x80000000 )
            goto LABEL_15;
          goto LABEL_19;
        }
      }
      v16 = 1024;
      goto LABEL_185;
    }
LABEL_205:
    v16 = 512;
LABEL_185:
    v12 = 1;
    goto LABEL_20;
  }
  if ( a1 == -2147483645 )
    goto LABEL_205;
  if ( a1 != -2147483643 && a1 != -2147483644 )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_20;
  }
  v16 = 4096;
  v12 = 1;
LABEL_20:
  v17 = *(_QWORD *)(W32GetUserSessionState(v14, v11) + 19904);
  if ( a1 != 32779 )
  {
    if ( a1 <= 0x800A )
    {
      if ( a1 == 32778 )
      {
        v18 = 32;
        goto LABEL_22;
      }
      if ( a1 > 0x4001 )
      {
        if ( a1 == 32773 )
        {
          v18 = 4;
          goto LABEL_22;
        }
        if ( a1 <= 0x8005 )
        {
          switch ( a1 )
          {
            case 0x4002u:
            case 0x4003u:
            case 0x4004u:
            case 0x4005u:
            case 0x4006u:
            case 0x4007u:
              goto LABEL_175;
            default:
              goto LABEL_86;
          }
        }
      }
      else
      {
        if ( a1 == 16385 )
        {
LABEL_175:
          v18 = 2;
          goto LABEL_22;
        }
        if ( a1 == 4 || a1 == 5 || a1 - 6 < 2 )
        {
          v18 = 1;
          goto LABEL_22;
        }
      }
      goto LABEL_86;
    }
    if ( a1 <= 0x7FFFFF10 )
    {
      if ( a1 != 2147483408 )
      {
        if ( a1 == 32780 )
        {
          v18 = 8;
          goto LABEL_22;
        }
        if ( a1 == 32782 )
        {
          v18 = 16;
          goto LABEL_22;
        }
        goto LABEL_86;
      }
    }
    else
    {
      if ( a1 > 0x80000002 )
      {
        switch ( a1 )
        {
          case 0x80000003:
            goto LABEL_102;
          case 0x80000005:
          case 0x80000004:
            v18 = 512;
            goto LABEL_22;
          case 0x80000006:
          case 0x80000007:
            goto LABEL_102;
        }
LABEL_86:
        v18 = 0x8000;
        goto LABEL_22;
      }
      if ( a1 != -2147483646 )
      {
        if ( a1 > 0x7FFFFF30 )
        {
          if ( a1 != 0x80000000 && a1 != -2147483647 )
            goto LABEL_86;
        }
        else if ( a1 != 2147483440 && a1 != 2147483409 && a1 != 2147483410 && a1 != 2147483424 )
        {
          goto LABEL_86;
        }
      }
    }
LABEL_102:
    v18 = 256;
    goto LABEL_22;
  }
  v18 = 64;
LABEL_22:
  if ( (v18 & *(_DWORD *)(v17 + 1892)) == 0 && !v15 && !v12 )
    goto LABEL_66;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v17);
  if ( CurrentThreadWin32Thread && *CurrentThreadWin32Thread )
  {
    v21 = (__int64 *)PsGetCurrentThreadWin32Thread(v20);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    v101 = v22;
    if ( (a5 & 0x11) != 0x11 && a2 && *(char *)(*((_QWORD *)a2 + 5) + 19LL) < 0 )
    {
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
      return;
    }
    v23 = a5 | 2;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 520), 0, 0) & 0x10000001) == 0 )
      v23 = a5;
    v85 = v23;
    if ( (v23 & 1) != 0 && a2 )
    {
      v24 = *((_QWORD *)a2 + 2);
      v81 = 0LL;
      if ( (v23 & 0x10) == 0 )
        v81 = v88;
      v88 = v81;
    }
    else
    {
      v24 = v22;
    }
    ThreadId = PsGetThreadId(*(PETHREAD *)v24);
    v26 = *(struct _KTHREAD **)v24;
    v105 = ThreadId;
    v104 = *(_QWORD *)(v24 + 456);
    ThreadProcessId = PsGetThreadProcessId(v26);
    v29 = (volatile signed __int32 *)(W32GetUserSessionState(v28, v27) + 70576);
    v102[0] = v29;
    if ( (v23 & 0x20) != 0 )
    {
      LODWORD(v31) = _InterlockedIncrement(v29);
    }
    else
    {
      v30 = 0xFFFFF78000000004uLL;
      v31 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    }
    BugCheckParameter3[0] = *(_QWORD *)(v22 + 448);
    *(_QWORD *)(v22 + 448) = BugCheckParameter3;
    v89 = v31;
    BugCheckParameter3[1] = (ULONG_PTR)v88;
    if ( v88 )
      HMLockObject(v88);
    v32 = (__int64 *)PsGetCurrentThreadWin32Thread(v30);
    if ( v32 )
      v33 = *v32;
    else
      v33 = 0LL;
    v90 = *(_QWORD *)(v33 + 376);
    *(_QWORD *)(v33 + 376) = &v90;
    v92 = (__int64)Win32RawLockedW32Thread::Deref;
    v91 = v24;
    ReferenceW32Thread(v24);
    v35 = v85;
    if ( (v85 & 2) == 0 )
    {
      UserSessionState = W32GetUserSessionState(i, v85);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
        __int2c();
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      v40 = (__int64 *)(W32GetUserSessionState(v39, v38) + 70600);
      for ( i = *v40; (__int64 *)i != v40; i = *(_QWORD *)i )
      {
        v41 = *(_DWORD *)(i + 56);
        if ( (v41 & 2) != 0 && *(_DWORD *)(i + 48) == CurrentThreadId )
        {
          v54 = *(_DWORD *)(i + 24) == 0;
          *(_DWORD *)(i + 56) = v41 & 0xFFFFFFFD;
          if ( v54 )
            xxxProcessNotifyWinEvent(i);
          else
            xxxProcessTSFEvent((struct tagNOTIFY *)i);
          i = (__int64)v40;
        }
      }
      v35 = v85;
      LODWORD(v31) = v89;
    }
    if ( v12 && (i = *(unsigned int *)(*(_QWORD *)(v24 + 456) + 808LL), (i & 0x1000000) != 0) )
    {
      v84 = v16;
      v42 = v88;
      xxxDoLocalTSFWork(a1, v88, a3, a4, v35, v84, (struct tagTHREADINFO *)v24, v31);
    }
    else
    {
      v42 = v88;
    }
    if ( v15 )
    {
      v43 = *(_QWORD *)(W32GetUserSessionState(i, v35) + 36400);
      for ( j = v43; v43; j = v43 )
      {
        if ( (*(_DWORD *)(v43 + 808) & 0x1000000) != 0 )
        {
          v44 = *(struct tagTHREADINFO **)(v43 + 328);
          if ( v44 )
          {
            do
            {
              if ( (v15 & *(_DWORD *)(*((_QWORD *)v44 + 60) + 24LL)) != 0 )
                CreateAndPostTSFNotify(a1, v42, a3, a4, v44, (struct tagTHREADINFO *)v24, v89);
              v44 = (struct tagTHREADINFO *)*((_QWORD *)v44 + 87);
            }
            while ( v44 );
            v43 = j;
          }
        }
        v43 = *(_QWORD *)(v43 + 368);
      }
    }
    v45 = *(_QWORD *)(W32GetUserSessionState(i, v35) + 19904);
    if ( a1 == 32779 )
    {
      v46 = 64;
LABEL_54:
      if ( (v46 & *(_DWORD *)(v45 + 1892)) != 0 )
      {
        v55 = v101;
        for ( k = *(_QWORD *)(v102[0] + 8LL); k; k = v57 )
        {
          v45 = *(unsigned int *)(k + 40);
          v57 = *(_QWORD *)(k + 24);
          if ( (v45 & 1) == 0 && *(_DWORD *)(k + 32) <= a1 && a1 <= *(_DWORD *)(k + 36) )
          {
            v58 = *(HANDLE *)(k + 48);
            if ( (!v58 || v58 == ThreadProcessId)
              && ((v45 & 4) == 0 || v104 != *(_QWORD *)(*(_QWORD *)(k + 16) + 456LL)) )
            {
              v59 = *(_DWORD *)(k + 56);
              if ( (!v59 || v59 == (_DWORD)v105) && ((v45 & 2) == 0 || v24 != *(_QWORD *)(k + 16)) )
              {
                v45 = *(_QWORD *)(*(_QWORD *)(k + 16) + 488LL);
                if ( v45 == *(_QWORD *)(v55 + 488) || a1 == 32 || v45 == *(_QWORD *)(v24 + 488) && a1 + 2147483646 <= 1 )
                {
                  v60 = DLT_HANDLEMANAGER::getDLT();
                  v106 = (tagDomLock *)GetDomainLockRef(v60);
                  v107 = 0;
                  v63 = W32GetUserSessionState(v62, v61);
                  v109 = 0;
                  v64 = &v107;
                  v108 = v63 + 42384;
                  v110 = 0LL;
                  v65 = 0;
                  v111 = 0;
                  do
                  {
                    v66 = (tagDomLock *)*((_QWORD *)v64 - 1);
                    if ( v66 )
                    {
                      if ( *v64 )
                        tagDomLock::LockExclusive(v66);
                      else
                        tagDomLock::LockShared(v66);
                    }
                    ++v65;
                    v64 += 16;
                  }
                  while ( !v65 );
                  v111 = 1;
                  if ( (*(_BYTE *)(_HMPheFromObject(k) + 25) & 1) != 0 )
                  {
                    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&v106);
                    break;
                  }
                  if ( v111 )
                  {
                    v68 = v106;
                    if ( v106 )
                    {
                      if ( v107 )
                        tagDomLock::UnLockExclusive(v106);
                      else
                        tagDomLock::UnLockShared(v106);
                    }
                  }
                  v69 = W32GetUserSessionState(v68, v67);
                  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v69 + 42344)) != 1 )
                    __int2c();
                  v72 = W32GetUserSessionState(v71, v70);
                  v73 = v72;
                  if ( *(_DWORD *)(v72 + 70688) )
                  {
                    v74 = Win32AllocPoolZInit(72LL, 2037281621LL);
                    if ( !v74 )
                      break;
                  }
                  else
                  {
                    *(_DWORD *)(v72 + 70688) = 1;
                    v74 = v72 + 70616;
                  }
                  *(_QWORD *)(v74 + 16) = 0LL;
                  v102[0] = v74 + 16;
                  v102[1] = k;
                  HMAssignmentLock(v102, 0LL);
                  v75 = v88;
                  if ( v88 )
                    v75 = *(struct tagWND **)v88;
                  *(_QWORD *)(v74 + 32) = v75;
                  *(_DWORD *)(v74 + 40) = a3;
                  *(_DWORD *)(v74 + 44) = a4;
                  *(_DWORD *)(v74 + 28) = a1;
                  *(_DWORD *)(v74 + 48) = (unsigned int)PsGetThreadId(*(PETHREAD *)v24);
                  *(_DWORD *)(v74 + 52) = v89;
                  *(_DWORD *)(v74 + 56) = 0;
                  *(_DWORD *)(v74 + 24) = 0;
                  *(_DWORD *)(v74 + 56) = ~(unsigned __int8)(*(_DWORD *)(k + 40) >> 1) & 4;
                  *(_QWORD *)(v74 + 8) = v74;
                  *(_QWORD *)v74 = v74;
                  *(_QWORD *)(v74 + 64) = 0LL;
                  if ( (*(_DWORD *)(k + 40) & 8) != 0 && a1 + 2147483646 <= 3 )
                  {
                    v82 = (_QWORD *)PsGetCurrentThreadWin32Thread(v76);
                    if ( v82 )
                      v82 = (_QWORD *)*v82;
                    if ( *(_QWORD **)(k + 16) != v82 )
                      *(_DWORD *)(v74 + 56) |= 4u;
                  }
                  v77 = *(__int64 **)(v73 + 70608);
                  v45 = v73 + 70600;
                  if ( *v77 != v73 + 70600 )
                    __fastfail(3u);
                  *(_QWORD *)(v74 + 8) = v77;
                  *(_QWORD *)v74 = v45;
                  *v77 = v74;
                  *(_QWORD *)(v73 + 70608) = v74;
                  v83 = *(_DWORD *)(v74 + 56) | v85;
                  *(_DWORD *)(v74 + 56) = v83;
                  if ( (v83 & 4) != 0 )
                  {
                    v83 &= ~2u;
                    *(_DWORD *)(v74 + 56) = v83;
                  }
                  if ( (v83 & 2) == 0 )
                    v57 = xxxProcessNotifyWinEvent(v74);
                }
              }
            }
          }
        }
        if ( v92 != -1 )
        {
          v78 = (__int64 *)PsGetCurrentThreadWin32Thread(v45);
          if ( v78 )
            v79 = *v78;
          else
            v79 = 0LL;
          *(_QWORD *)(v79 + 376) = v90;
          v45 = v91;
          if ( v91 )
            ((void (*)(void))v92)();
          v92 = -1LL;
        }
        v80 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v45);
        if ( v80 )
          v50 = *v80;
        else
          v50 = 0LL;
        v51 = *(ULONG_PTR **)(v50 + 448);
        if ( v51 != BugCheckParameter3 )
          KeBugCheckEx(0x164u, 0x3BuLL, v50, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      else
      {
        if ( v92 != -1 )
        {
          v47 = (__int64 *)PsGetCurrentThreadWin32Thread(v45);
          if ( v47 )
            v48 = *v47;
          else
            v48 = 0LL;
          *(_QWORD *)(v48 + 376) = v90;
          v45 = v91;
          if ( v91 )
            ((void (*)(void))v92)();
          v92 = -1LL;
        }
        v49 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v45);
        if ( v49 )
          v50 = *v49;
        else
          v50 = 0LL;
        v51 = *(ULONG_PTR **)(v50 + 448);
        if ( v51 != BugCheckParameter3 )
          KeBugCheckEx(0x164u, 0x3BuLL, v50, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      *(_QWORD *)(v50 + 448) = *v51;
      v52 = v51[1];
      if ( v52 )
        HMUnlockObject(v52);
LABEL_66:
      if ( v99 )
      {
        v53 = (tagDomLock *)DomainLockRef;
        if ( DomainLockRef )
        {
          if ( v95 )
          {
LABEL_69:
            tagDomLock::UnLockExclusive(v53);
            return;
          }
LABEL_75:
          tagDomLock::UnLockShared(v53);
          return;
        }
      }
      return;
    }
    if ( a1 <= 0x800A )
    {
      if ( a1 == 32778 )
      {
        v46 = 32;
        goto LABEL_54;
      }
      if ( a1 > 0x4001 )
      {
        if ( a1 == 32773 )
        {
          v46 = 4;
          goto LABEL_54;
        }
        if ( a1 <= 0x8005 )
        {
          switch ( a1 )
          {
            case 0x4002u:
            case 0x4003u:
            case 0x4004u:
            case 0x4005u:
            case 0x4006u:
            case 0x4007u:
              goto LABEL_179;
            default:
              goto LABEL_94;
          }
        }
      }
      else
      {
        if ( a1 == 16385 )
        {
LABEL_179:
          v46 = 2;
          goto LABEL_54;
        }
        if ( a1 == 4 || a1 == 5 || a1 - 6 < 2 )
        {
          v46 = 1;
          goto LABEL_54;
        }
      }
      goto LABEL_94;
    }
    if ( a1 <= 0x7FFFFF10 )
    {
      if ( a1 != 2147483408 )
      {
        if ( a1 == 32780 )
        {
          v46 = 8;
          goto LABEL_54;
        }
        if ( a1 == 32782 )
        {
          v46 = 16;
          goto LABEL_54;
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( a1 > 0x80000002 )
      {
        switch ( a1 )
        {
          case 0x80000003:
            goto LABEL_110;
          case 0x80000005:
          case 0x80000004:
            v46 = 512;
            goto LABEL_54;
          case 0x80000006:
          case 0x80000007:
            goto LABEL_110;
        }
LABEL_94:
        v46 = 0x8000;
        goto LABEL_54;
      }
      if ( a1 != -2147483646 )
      {
        if ( a1 > 0x7FFFFF30 )
        {
          if ( a1 != 0x80000000 && a1 != -2147483647 )
            goto LABEL_94;
        }
        else if ( a1 != 2147483440 && a1 != 2147483409 && a1 != 2147483410 && a1 != 2147483424 )
        {
          goto LABEL_94;
        }
      }
    }
LABEL_110:
    v46 = 256;
    goto LABEL_54;
  }
  if ( v99 )
  {
    v53 = (tagDomLock *)DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v95 )
        goto LABEL_69;
      goto LABEL_75;
    }
  }
}
