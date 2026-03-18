/*
 * XREFs of xxxProcessEventMessage @ 0x14013B240
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxProcessAsyncSendMessage @ 0x140036C10 (xxxProcessAsyncSendMessage.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x140044AA0 (xxxProcessTSFEvent.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1400545E0 (PostMousePointerLeaveAndCleanup.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400FC84C (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013BF44 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14013DE70 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140154D14 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x14015D1C8 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x140178FF8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1401791D4 (xxxProcessSetWindowPosEvent.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     _PostThreadMessage @ 0x1401D31A0 (_PostThreadMessage.c)
 *     xxxCancelMouseMoveTracking @ 0x1401EC124 (xxxCancelMouseMoveTracking.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x140206EE0 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x14021DE74 (xxxClientBroadcastThemeChange.c)
 *     xxxDoDeferredPointerActivate @ 0x1402506B0 (xxxDoDeferredPointerActivate.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x14025DBE4 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     xxxClientUpdateDpi @ 0x140260FD0 (xxxClientUpdateDpi.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402C75E0 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402EC54C (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1402EF498 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct tagTHREADINFO *__fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  struct tagQMSG *v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  __int64 *v8; // rbx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  struct tagWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  struct tagWND *v18; // rax
  struct tagWND *v19; // rbx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  struct tagWND *v25; // rsi
  struct tagQ **v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // esi
  __int64 UserSessionState; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rbx
  struct tagWND *v47; // rax
  struct tagQMSG *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  __int64 v57; // rax
  MoveSizeApi *v58; // rbx
  unsigned __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rbx
  _OWORD *v62; // rcx
  __int64 v63; // rdx
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int64 v69; // rax
  struct tagWND *v70; // rbx
  int v71; // r14d
  __int64 v72; // rax
  struct tagWND *v73; // rdi
  __int64 v74; // rbx
  struct tagTHREADINFO *result; // rax
  _QWORD v76[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v77[6]; // [rsp+60h] [rbp-69h] BYREF
  ULONG_PTR BugCheckParameter3[6]; // [rsp+C0h] [rbp-9h] BYREF

  v4 = PtiCurrent(a1);
  v76[0] = *((_QWORD *)v4 + 47);
  *((_QWORD *)v4 + 47) = v76;
  v7 = *(_DWORD *)(a2 + 96);
  v8 = *(__int64 **)(a1 + 464);
  v76[2] = CleanEventMessage;
  v76[1] = a2;
  if ( v7 > 16 )
  {
    if ( v7 <= 24 )
    {
      if ( v7 == 24 )
      {
        xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        goto LABEL_120;
      }
      v41 = v7 - 17;
      if ( !v41 )
      {
        v50 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v51 = v50;
        if ( !v50 )
          goto LABEL_120;
        Win32HM_LockIntoThread<0>(a1, v50, BugCheckParameter3);
        xxxArrangeWindow(v51, *(unsigned int *)(a2 + 32));
        goto LABEL_23;
      }
      v10 = (unsigned int)(v41 - 1);
      if ( !(_DWORD)v10 )
      {
        if ( v8
          && v8[15]
          && (v8 == *(__int64 **)(W32GetUserSessionState(v10, v5) + 18928)
           || (unsigned __int8)IsKeyboardDelegationTarget(a1)) )
        {
          v10 = *(unsigned int *)(W32GetUserSessionState(v10, v49) + 66800);
          if ( (v10 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings(v10);
        }
        goto LABEL_120;
      }
      v42 = v10 - 1;
      if ( !v42 )
      {
        if ( *(_DWORD *)(a2 + 24) == 809 )
          PostThreadMessage((struct tagTHREADINFO *)a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        else
          xxxSendShutdownData(*(HWND *)(a2 + 40), *(_QWORD *)(a2 + 32));
        goto LABEL_120;
      }
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( !v44 )
        {
          v46 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
          v47 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          PostMousePointerLeaveAndCleanup(v46, v47);
          goto LABEL_120;
        }
        v10 = (unsigned int)(v44 - 1);
        if ( !(_DWORD)v10 )
        {
          CRecalcProp::s_xxxProcessRecalcSignal(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 16));
          goto LABEL_120;
        }
        if ( (_DWORD)v10 != 1 )
          goto LABEL_120;
        v45 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v37 = v45;
        if ( !v45 )
          goto LABEL_120;
        Win32HM_LockIntoThread<0>(a1, v45, BugCheckParameter3);
        v38 = *(unsigned int *)(a2 + 40);
        v39 = *(unsigned int *)(a2 + 32);
        goto LABEL_64;
      }
      xxxDoDeferredPointerActivate(a2);
LABEL_83:
      CleanEventMessage((struct tagQMSG *)a2, v48);
      goto LABEL_120;
    }
    v52 = v7 - 25;
    if ( !v52 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_120;
    }
    v53 = v52 - 1;
    if ( !v53 )
    {
      if ( *(_DWORD *)(a2 + 40) )
      {
        xxxTooltipCallback(0LL, 0LL, 0LL);
      }
      else
      {
        v71 = *(_DWORD *)(a2 + 32);
        v72 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v73 = (struct tagWND *)v72;
        if ( v72 )
        {
          v10 = *(_QWORD *)(v72 + 16);
          v74 = *(_QWORD *)(v10 + 488);
          if ( *(_QWORD *)(v74 + 192) == v72 && *(_DWORD *)(v74 + 200) == v71 )
          {
            Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(
              BugCheckParameter3,
              *(_QWORD *)(v10 + 488));
            xxxCreateTooltip((struct tagDESKTOP *)v74, v73, v71);
            if ( BugCheckParameter3[2] != -1LL )
              PopAndFreeW32ThreadLock((__int64)BugCheckParameter3);
          }
        }
      }
      goto LABEL_120;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v5);
      goto LABEL_120;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      AdvancedWindowPos::xxxProcessAsyncWindowAction(*(AdvancedWindowPos **)(a2 + 16), *(HWND *)(a2 + 40), v6);
      goto LABEL_83;
    }
    v56 = v55 - 1;
    if ( !v56 )
    {
      v69 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v70 = (struct tagWND *)v69;
      if ( !v69 )
        goto LABEL_120;
      Win32HM_LockIntoThread<0>(a1, v69, BugCheckParameter3);
      xxxDeliverRestoreFocusMessage(v70);
      goto LABEL_23;
    }
    v10 = (unsigned int)(v56 - 2);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 != 1 )
        goto LABEL_120;
      v57 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v58 = (MoveSizeApi *)v57;
      if ( !v57 )
        goto LABEL_83;
      Win32HM_LockIntoThread<0>(a1, v57, BugCheckParameter3);
      MoveSizeApi::xxxProcessEnterMoveSizeRequest(v58, *(struct tagWND **)(a2 + 32), v59);
    }
    else
    {
      v60 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v61 = v60;
      if ( !v60 )
        goto LABEL_83;
      Win32HM_LockIntoThread<0>(a1, v60, BugCheckParameter3);
      v62 = *(_OWORD **)(a2 + 40);
      v63 = *(_QWORD *)(a2 + 32);
      v64 = v62[1];
      v77[0] = *v62;
      v65 = v62[2];
      v77[1] = v64;
      v66 = v62[3];
      v77[2] = v65;
      v67 = v62[4];
      v77[3] = v66;
      v68 = v62[5];
      v77[4] = v67;
      v77[5] = v68;
      WindowActions::xxxApplyActionAsync(v61, v63, v77);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    goto LABEL_83;
  }
  if ( v7 == 16 )
  {
    v40 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    v37 = v40;
    if ( !v40 )
      goto LABEL_120;
    v10 = *(_QWORD *)(v40 + 40);
    if ( (*(_BYTE *)(v10 + 31) & 1) == 0 )
      goto LABEL_120;
    Win32HM_LockIntoThread<0>(a1, v40, BugCheckParameter3);
    v39 = 3LL;
    v38 = 19LL;
    goto LABEL_64;
  }
  if ( v7 > 8 )
  {
    v20 = v7 - 9;
    if ( !v20 )
    {
      xxxProcessAsyncSendMessage(
        *(_QWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 24),
        *(_QWORD *)(a2 + 32),
        (__int128 **)(a2 + 40));
      goto LABEL_120;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        v33 = *(_QWORD *)(a1 + 488);
        v34 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v35 = v34;
        if ( (*(_DWORD *)(v33 + 48) & 0x3C0) == 0
          || (v10 = *(_QWORD *)(a2 + 16), **(_QWORD **)(v33 + 192) != v10)
          || (v10 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v33 + 200) != (_DWORD)v10) )
        {
          if ( v34 )
          {
            Win32HM_LockIntoThread<0>(a1, v34, BugCheckParameter3);
            xxxCancelMouseMoveTracking(
              *(unsigned int *)(a2 + 24),
              v35,
              *(unsigned int *)(a2 + 32),
              *(unsigned int *)(a2 + 40));
            goto LABEL_23;
          }
        }
        goto LABEL_120;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(BugCheckParameter3);
        v32 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v32 + 24) )
          xxxProcessTSFEvent((struct tagNOTIFY *)v32, v31);
        else
          xxxProcessNotifyWinEvent(v32);
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)BugCheckParameter3);
        goto LABEL_120;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        if ( ((*(_DWORD *)(a1 + 712) | *(_DWORD *)(**(_QWORD **)(a1 + 496) + 16LL)) & 0x800) != 0 )
          xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
        PostShellHookMessagesEx((LastWokenThread *)*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
        goto LABEL_120;
      }
      v10 = (unsigned int)(v24 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          goto LABEL_120;
        v25 = (struct tagWND *)v8[15];
        if ( !v25 )
        {
          v25 = (struct tagWND *)v8[16];
          if ( !v25 )
            goto LABEL_120;
        }
        v26 = (struct tagQ **)*((_QWORD *)v25 + 2);
        if ( (struct tagQ **)a1 != v26 )
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v26,
            v26[58],
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 124));
          goto LABEL_120;
        }
        v27 = (unsigned __int64)(unsigned __int16)(*(_WORD *)(a2 + 40) - 165) << 16;
        *(_QWORD *)(a2 + 40) = v27 | (unsigned __int16)GetMouseKeyFlags(v26[58]);
        tagTHREADINFO::UpdateInputSource((tagTHREADINFO *)a1, (const struct tagINPUT_MESSAGE_SOURCE *)(a2 + 124));
        Win32HM_LockIntoThread<0>(a1, (__int64)v25, BugCheckParameter3);
        xxxSendMessage(v25, 0x319u);
        goto LABEL_23;
      }
      v28 = 5LL;
      if ( *(_DWORD *)(a2 + 24) == 5 )
      {
        v29 = *(_DWORD *)(a2 + 40);
        if ( v29 > 5 )
          v29 = 5;
        if ( !v29 )
          goto LABEL_47;
      }
      else
      {
        v29 = 1;
      }
      do
      {
        UserSessionState = W32GetUserSessionState(v28, v5);
        CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70536));
        --v29;
      }
      while ( v29 );
LABEL_47:
      xxxSoundSentry();
      goto LABEL_120;
    }
    v36 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    v37 = v36;
    if ( !v36 )
      goto LABEL_120;
    Win32HM_LockIntoThread<0>(a1, v36, BugCheckParameter3);
    if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 31LL) & 0x10) != 0 )
      goto LABEL_23;
    SetVisible(v37, 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 31LL) & 0x20) != 0 )
      goto LABEL_23;
    v38 = 1LL;
    v39 = 7LL;
LABEL_64:
    xxxMinMaximize(v37, v39, v38);
    goto LABEL_23;
  }
  if ( v7 != 8 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v10 = (unsigned int)(v13 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v14 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
                  if ( v14 )
                    PostTransformableMessage(v14, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
                }
              }
              else
              {
                xxxProcessActivationEvent((const struct tagQMSG *)a2);
              }
            }
            else
            {
              xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
            }
          }
          else
          {
            ProcessUpdateKeyStateEvent(v8, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          }
        }
        else
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
        }
        goto LABEL_120;
      }
      v15 = v8[14];
      if ( !v15 )
        goto LABEL_120;
      Win32HM_LockIntoThread<0>(a1, v15, BugCheckParameter3);
      xxxSendMessage((struct tagWND *)v8[14], 0x1Fu);
      SetWakeBit(a1, 2LL);
    }
    else
    {
      v16 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v17 = v16;
      if ( !v16 )
        goto LABEL_120;
      v10 = *(_QWORD *)(v16 + 40);
      if ( *(char *)(v10 + 20) < 0 )
        goto LABEL_120;
      Win32HM_LockIntoThread<0>(a1, v16, BugCheckParameter3);
      xxxProcessShowWindowEvent(v17, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
    }
LABEL_23:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    goto LABEL_120;
  }
  v18 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
  v19 = v18;
  if ( v18 )
  {
    if ( *(char *)(*((_QWORD *)v18 + 5) + 19LL) < 0 )
    {
      Win32HM_LockIntoThread<0>(a1, (__int64)v18, BugCheckParameter3);
      xxxFreeWindow((struct tagTHREADINFO *)a1, v19);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    }
    else
    {
      xxxDestroyWindow(v18);
    }
  }
LABEL_120:
  result = PtiCurrent(v10);
  *((_QWORD *)result + 47) = v76[0];
  return result;
}
