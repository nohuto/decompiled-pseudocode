/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindow @ 0x14019F0D0 (NtUserSetForegroundWindow.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserRaiseLowerShellWindow @ 0x14024B1E0 (NtUserRaiseLowerShellWindow.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1402719BC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14027952C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14029D55C (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x14029D7A0 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1402BCBD0 (NtUserSetForegroundWindowForApplication.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C497C (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EC750 (-xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140038F00 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsImmersiveBandOrShellManaged @ 0x14015DA48 (IsImmersiveBandOrShellManaged.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1401FDBFC (WPP_RECORDER_AND_TRACE_SF_DqDDD.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqD @ 0x14023F5D8 (WPP_RECORDER_AND_TRACE_SF_DqD.c)
 *     _anonymous_namespace_::DSW_GetTopLevelCreatorWindow @ 0x140243DD0 (_anonymous_namespace_--DSW_GetTopLevelCreatorWindow.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140289CEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, __int64 a2, __int16 a3, char a4)
{
  char v4; // bp
  bool v5; // r12
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  char v11; // r15
  bool v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // r15
  struct tagWND *v19; // rax
  __int64 v20; // rdx
  struct MOVESIZEDATA *v21; // rcx
  struct tagWND *v22; // rsi
  bool v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rsi
  bool v32; // r13
  bool v33; // bl
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // r9
  const char *v44; // rax
  __int64 v45; // rdx
  char v46; // bl
  bool v47; // di
  __int64 v48; // rax
  int v49; // esi
  int v50; // r8d
  int v51; // edx
  __int64 v52; // r9
  const char *v53; // rax
  char v54; // bl
  bool v55; // di
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  unsigned int *v65; // rdx
  bool v66; // r13
  char ThreadId; // di
  __int64 v68; // rsi
  char v69; // bl
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  bool v75; // bl
  bool v76; // di
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int64 v80; // rax
  __int64 *v81; // rbx
  unsigned __int8 v82; // al
  int v83; // esi
  __int64 v84; // rdi
  unsigned __int16 *v85; // rax
  char v86; // bl
  bool v87; // di
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  char v91; // bl
  bool v92; // di
  __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  char v96; // bl
  bool v97; // di
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  __int16 v101; // r8
  char v102; // bl
  bool v103; // di
  __int64 v104; // rax
  int v105; // r8d
  int v106; // edx
  char v107; // bl
  bool v108; // di
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  unsigned int v113; // [rsp+20h] [rbp-D8h]
  int v114; // [rsp+28h] [rbp-D0h]
  int v115; // [rsp+30h] [rbp-C8h]
  int v116; // [rsp+38h] [rbp-C0h]
  char v117; // [rsp+71h] [rbp-87h]
  int v118; // [rsp+74h] [rbp-84h]
  __int64 v119; // [rsp+78h] [rbp-80h]
  __int64 v120; // [rsp+80h] [rbp-78h]
  int CanSetForegroundWindow; // [rsp+80h] [rbp-78h]
  ULONG_PTR v122[2]; // [rsp+88h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[12]; // [rsp+98h] [rbp-60h] BYREF
  bool v124; // [rsp+100h] [rbp+8h]

  v4 = 1;
  v117 = 1;
  v5 = 0;
  v7 = a1;
  v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
  v9 = *(_QWORD *)(v7 + 16);
  v122[0] = v8;
  v120 = *(_QWORD *)(v9 + 464);
  v124 = v120 == v8;
  v118 = a3 & 0x1000;
  v10 = PtiCurrent(v8);
  v119 = (__int64)v10;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(**(PETHREAD **)(v7 + 16));
    PsGetThreadId(*(PETHREAD *)v10);
    UserSessionState = W32GetUserSessionState(v14, v13);
    LOBYTE(v16) = v12;
    LOBYTE(v17) = v11;
    WPP_RECORDER_AND_TRACE_SF_DqDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(UserSessionState + 69152));
  }
  v18 = 0;
  BugCheckParameter3[0] = -1LL;
  BugCheckParameter3[1] = 0LL;
  v19 = _GhostWindowFromHungWindow((const struct tagWND *)v7);
  v22 = v19;
  if ( v19 )
  {
    Win32HM_LockIntoThread<0>((__int64)v10, (__int64)v19, BugCheckParameter3);
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
    {
      v18 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = *(_QWORD *)v7;
      v25 = *(_QWORD *)v22;
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v27) = v23;
      LOBYTE(v28) = v18;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69152),
        4,
        2,
        73,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        v25,
        v24);
      v10 = (struct tagTHREADINFO *)v119;
    }
    v7 = (__int64)v22;
    v18 = 0;
  }
  if ( v120 == v122[0] )
  {
    v29 = W32GetUserSessionState(v21, v20);
    v30 = *((_QWORD *)v10 + 58);
    v31 = *(_QWORD *)(v29 + 18928);
    v32 = v31 == v30;
    v33 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        4,
        2,
        74,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v38 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      v43 = *(_QWORD *)(v40 + 69152);
      v44 = "Synchronously";
      if ( v31 != v30 )
        v44 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        v43,
        4,
        2,
        75,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        (__int64)v44);
    }
    goto LABEL_92;
  }
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow((struct tagWND *)v7);
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v46 = 0;
    }
    v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v46 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      v49 = v118;
    }
    else
    {
      v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
      v49 = v118;
      LOBYTE(v50) = v47;
      LOBYTE(v51) = v46;
      v52 = *(_QWORD *)(v48 + 69152);
      v53 = "Remove";
      if ( v118 )
        v53 = "Preserve";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        v52,
        4,
        2,
        76,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        (__int64)v53);
    }
    if ( !v49 )
      anonymous_namespace_::RemoveForegroundActivate();
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v54 = 0;
    }
    v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v54 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
      LOBYTE(v57) = v55;
      LOBYTE(v58) = v54;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v58,
        v57,
        *(_QWORD *)(v56 + 69152),
        4,
        2,
        77,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    v59 = v119;
    if ( (a3 & 0x400) != 0 )
      v59 = 0LL;
    if ( (unsigned int)xxxSetForegroundWindow2(v7, v59, a3 & 0x7FF) )
    {
      v5 = 1;
    }
    else
    {
      v5 = 0;
      if ( *(_QWORD *)(v119 + 488) != *(_QWORD *)(W32GetUserSessionState(v61, v60) + 19176) )
      {
        v62 = *(_QWORD *)(v7 + 40);
        if ( *(char *)(v62 + 19) >= 0 && *(_DWORD *)(v62 + 236) != 15 && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
        {
          if ( (unsigned int)IAMThreadAccessGranted(v119) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2441LL);
          NonChildAncestor = GetNonChildAncestor(v7);
          TopLevelCreatorWindow = (__int64 *)anonymous_namespace_::DSW_GetTopLevelCreatorWindow(NonChildAncestor);
          PostIAMShellHookMessage(0x22u, *TopLevelCreatorWindow);
        }
      }
    }
    v32 = 0;
LABEL_92:
    if ( !v124 )
      goto LABEL_138;
    goto LABEL_101;
  }
  v117 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v18 = 1;
  }
  v65 = &WPP_RECORDER_INITIALIZED;
  v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v7 + 16));
    v68 = *(_QWORD *)v7;
    v69 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v10);
    v72 = W32GetUserSessionState(v71, v70);
    LOBYTE(v73) = v66;
    LOBYTE(v74) = v18;
    WPP_RECORDER_AND_TRACE_SF_DqD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v74,
      v73,
      *(_QWORD *)(v72 + 69152),
      v113,
      v114,
      v115,
      v116,
      v69,
      v68,
      ThreadId);
    v65 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (a4 & 1) != 0 )
  {
    v75 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v76 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v75 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v77 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v78) = v76;
      LOBYTE(v79) = v75;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v79,
        v78,
        *(_QWORD *)(v77 + 69152),
        4,
        2,
        79,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    v80 = GetNonChildAncestor(v7);
    v81 = (__int64 *)anonymous_namespace_::DSW_GetTopLevelCreatorWindow(v80);
    v82 = IsTrayWindow(v81, 1LL);
    if ( !v82 )
      v81 = (__int64 *)v7;
    v83 = (v82 ^ 1) + 2;
    if ( *(_DWORD *)(v81[5] + 236) != 15 )
    {
      if ( !(unsigned int)IsImmersiveBandOrShellManaged((__int64)v81) )
      {
        v84 = v119;
        Win32HM_LockIntoThread<0>(v119, (__int64)v81, v122);
        v85 = (unsigned __int16 *)UPDWORDPointer(8196LL);
        xxxFlashWindow(v81, v83 | (*v85 << 16) | 0xCu, 0LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v122);
        goto LABEL_90;
      }
      PostIAMShellHookMessage(0x22u, *v81);
    }
  }
  v84 = v119;
LABEL_90:
  if ( CanSetForegroundWindow == 1 )
  {
    v32 = 0;
    goto LABEL_92;
  }
  v32 = *(_QWORD *)(v84 + 464) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v86 = 0;
  }
  v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v86 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v88 = W32GetUserSessionState(WPP_GLOBAL_Control, v65);
    LOBYTE(v89) = v87;
    LOBYTE(v90) = v86;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v90,
      v89,
      *(_QWORD *)(v88 + 69152),
      4,
      2,
      80,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
LABEL_101:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v91 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v91 = 0;
  }
  v92 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v91 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v93 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v94) = v92;
    LOBYTE(v95) = v91;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v95,
      v94,
      *(_QWORD *)(v93 + 69152),
      4,
      2,
      81,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
  if ( v32 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v96 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v96 = 0;
    }
    v97 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v96 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v98 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v99) = v97;
      LOBYTE(v100) = v96;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v100,
        v99,
        *(_QWORD *)(v98 + 69152),
        4,
        2,
        82,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0) == 0x40 )
      goto LABEL_120;
    v101 = a3 & 0x100 | 0x82;
    if ( (a3 & 4) == 0 )
      v101 = a3 & 0x100 | 0x80;
    if ( !anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7, 0, v101) )
    {
LABEL_120:
      v5 = 0;
      goto LABEL_138;
    }
LABEL_129:
    v5 = 1;
    goto LABEL_138;
  }
  if ( v7 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) + 128LL) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v102 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v102 = 0;
    }
    v103 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v102 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v104 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v105) = v103;
      LOBYTE(v106) = v102;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v106,
        v105,
        *(_QWORD *)(v104 + 69152),
        4,
        2,
        83,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    goto LABEL_129;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v107 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v107 = 0;
  }
  v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v107 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v109 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v110) = v108;
    LOBYTE(v111) = v107;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v111,
      v110,
      *(_QWORD *)(v109 + 69152),
      4,
      2,
      84,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  }
  v5 = (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(v7 + 16),
                       *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 464LL),
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_138:
  if ( !v117 || !v5 )
    v4 = 0;
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return v4;
}
