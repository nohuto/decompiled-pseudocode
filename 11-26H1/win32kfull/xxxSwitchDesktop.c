/*
 * XREFs of xxxSwitchDesktop @ 0x1401B29E0
 * Callers:
 *     RemoteDisableScreen @ 0x1401B25E8 (RemoteDisableScreen.c)
 *     xxxSwitchDesktopWithFade @ 0x1401B2760 (xxxSwitchDesktopWithFade.c)
 *     NtUserSwitchDesktop @ 0x14025C610 (NtUserSwitchDesktop.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x140054E7C (IPostQuitMessage.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     IsWindowUnderActiveLockScreen @ 0x14008D414 (IsWindowUnderActiveLockScreen.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x1400F7204 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DwmSyncDesktopSwitch @ 0x14014A880 (DwmSyncDesktopSwitch.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetTimerCoalescingTolerance @ 0x14019B750 (SetTimerCoalescingTolerance.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1401C0858 (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401F1F04 (zzzDesktopSwitchSideEffects.c)
 *     WPP_RECORDER_AND_TRACE_SF_SL @ 0x14021D9B8 (WPP_RECORDER_AND_TRACE_SF_SL.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140226940 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     GreDesktopSwitch @ 0x140230AF8 (GreDesktopSwitch.c)
 *     xxxRefreshDisplayOrientation @ 0x140235370 (xxxRefreshDisplayOrientation.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x140238BF0 (xxxBroadcastDisplaySettingsChange.c)
 *     DrvOcclusionStateChangeNotify @ 0x140239608 (DrvOcclusionStateChangeNotify.c)
 *     GreLddmProcessDesktopSwitch @ 0x14023E5C8 (GreLddmProcessDesktopSwitch.c)
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x14023F42C (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 *     EraseBitmap @ 0x1402416F4 (EraseBitmap.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x1402537B8 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x140278B60 (-UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_0626be66eec18444efdef0f40e13a11c_::operator() @ 0x1402A4D54 (_lambda_0626be66eec18444efdef0f40e13a11c_--operator().c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x1402A50B4 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x1402A7868 (-HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1402C2D10 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  struct MOVESIZEDATA *v10; // rcx
  char v11; // si
  char v12; // bl
  bool v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  struct MOVESIZEDATA *v20; // rcx
  char v21; // r14
  bool v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  HANDLE v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct MOVESIZEDATA *v38; // rcx
  bool v39; // bl
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  void *v44; // rbx
  __int64 v45; // rcx
  struct tagTHREADINFO *v46; // rax
  __int64 v47; // rdx
  struct tagTHREADINFO *v48; // r14
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // r12d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  struct tagEDGY_DATA *v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  struct tagDESKTOP *v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 **v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rdx
  struct tagWND **v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rdx
  int v121; // r15d
  ULONG_PTR v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 **v129; // rax
  __int64 v130; // rbx
  void *v131; // rax
  __int64 **v132; // rax
  __int64 v133; // r15
  unsigned int v134; // r14d
  _QWORD *v135; // rax
  unsigned int v136; // ebx
  __int64 v137; // rax
  __int64 v138; // rcx
  struct tagTHREADINFO *v139; // r13
  __int64 v140; // rdx
  __int64 *v141; // rax
  __int64 v142; // rcx
  int v143; // r14d
  int v144; // ebx
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  struct tagWND *i; // rbx
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  HANDLE v163; // rbx
  int v164; // eax
  __int64 v165; // rcx
  bool v166; // bl
  __int64 v167; // rax
  int v168; // r8d
  int v169; // edx
  ULONG_PTR v170; // [rsp+58h] [rbp-49h] BYREF
  __int64 v171; // [rsp+60h] [rbp-41h]
  void *Handle; // [rsp+68h] [rbp-39h] BYREF
  struct tagTHREADINFO *v173; // [rsp+70h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-29h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-19h]
  _QWORD v176[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v177; // [rsp+A0h] [rbp-1h]
  _QWORD v178[10]; // [rsp+A8h] [rbp+7h] BYREF
  int v179; // [rsp+110h] [rbp+6Fh] BYREF
  int v180; // [rsp+118h] [rbp+77h]
  unsigned int v181; // [rsp+120h] [rbp+7Fh]

  v181 = a4;
  v180 = a3;
  v5 = a1;
  v173 = PtiCurrent(a1);
  v179 = 0;
  Handle = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19176) )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !v5 )
    v5 = *(_QWORD *)(a2 + 40);
  LOBYTE(v9) = 4;
  if ( (*(_DWORD *)(v5 + 32) & 4) != 0 )
    return 3221225485LL;
  BugCheckParameter3[0] = *(_QWORD *)(v5 + 24);
  v10 = WPP_GLOBAL_Control;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
      ObQueryNameInfo(a2);
    UserSessionState = W32GetUserSessionState(v15, v14);
    LOBYTE(v17) = v13;
    LOBYTE(v18) = v12;
    WPP_RECORDER_AND_TRACE_SF_SL(*((_QWORD *)WPP_GLOBAL_Control + 3), v18, v17, *(_QWORD *)(UserSessionState + 69152));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176) )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v23 = 0LL;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 )
      {
        if ( ObQueryNameInfo(a2) )
          v26 = ObQueryNameInfo(a2) + 16;
        else
          v26 = 8LL;
        v23 = *(_QWORD *)v26;
      }
      v27 = W32GetUserSessionState(v25, v24);
      LOBYTE(v28) = v22;
      LOBYTE(v29) = v21;
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        4,
        3,
        26,
        (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
        v23);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( a2 != *(_QWORD *)(W32GetUserSessionState(v20, v19) + 62976)
    && !PsIsSystemThread(CurrentThread)
    && a2 != *(_QWORD *)(W32GetUserSessionState(v32, v31) + 62968)
    && (*(_DWORD *)(v5 + 32) & 1) != 0
    && (v180 & 2) == 0 )
  {
    v33 = *(HANDLE *)(W32GetUserSessionState(v32, v31) + 63536);
    if ( PsGetThreadProcessId(CurrentThread) != v33 )
      return 3221225506LL;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v32, v31) + 62824)
    && (!*(_QWORD *)(W32GetUserSessionState(v35, v34) + 62976)
     || a2 != *(_QWORD *)(W32GetUserSessionState(v37, v36) + 62976)) )
  {
    v38 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v11 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v36);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        *(_QWORD *)(v40 + 69152),
        4,
        8,
        27,
        (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
    }
    v43 = W32GetUserSessionState(v38, v36);
    LockObjectAssignment(v43 + 19184, a2);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v178, (void *)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  v44 = Handle;
  v46 = PtiCurrent(v45);
  v48 = v173;
  v176[0] = *((_QWORD *)v46 + 47);
  v49 = v176;
  *((_QWORD *)v46 + 47) = v176;
  v177 = (__int64)AllowDesktopDestruction;
  v176[1] = v44;
  if ( *((_QWORD *)v48 + 61) )
  {
    zzzDesktopSwitchSideEffects();
    ResetPointerDevices(1LL);
    W32GetUserSessionState(v51, v50);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v49, v47) + 19176) )
  {
    v55 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19176);
    if ( *(_QWORD *)(*(_QWORD *)(v55 + 8) + 24LL) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v55, v54) + 18928) )
      {
        v58 = *(_QWORD *)(W32GetUserSessionState(v57, v56) + 19176);
        v61 = W32GetUserSessionState(v60, v59);
        tagUNIQUE_WINDOW_HANDLE::Set(
          (tagUNIQUE_WINDOW_HANDLE *)(v58 + 88),
          *(const struct tagWND **)(*(_QWORD *)(v61 + 18928) + 128LL));
        xxxSetForegroundWindow2(0LL, v48, 32LL);
      }
    }
  }
  UpdateKeyboardStateOnDesktopSwitch(1LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v63, v62) + 19176)
    && (v65 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v65, v64) + 19176) + 8LL),
        (*(_DWORD *)(v65 + 64) & 1) != 0) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v65, v64) + 43024) )
      StopFade(v67, v66);
    v68 = W32GetUserSessionState(v67, v66);
    bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v68 + 56968) + 40LL), 0LL, 0LL, 0);
    v71 = W32GetUserSessionState(v70, v69);
    ComposeWindow(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v71 + 19176) + 8LL) + 24LL), 6);
    GreLockDynamicModeChange();
    GreUnlockDynamicModeChange();
    v65 = *(_QWORD *)(v5 + 88);
    if ( v65 )
      EraseBitmap();
    v72 = 1;
  }
  else
  {
    v72 = v179;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v65, v64) + 19176) )
  {
    v76 = *(_QWORD *)(W32GetUserSessionState(v74, v73) + 19176);
    if ( *(_QWORD *)(v76 + 248) )
    {
      v77 = W32GetUserSessionState(v76, v75);
      Edgy::FreeEdgyFrameData(*(Edgy **)(*(_QWORD *)(v77 + 19176) + 248LL), v78);
    }
  }
  if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v81 = W32GetUserSessionState(v80, v79);
    HotKey_InputDesktopSwitching(v82, *(struct tagDESKTOP **)(v81 + 19176));
  }
  if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(W32GetUserSessionState(v84, v83) + 19176) )
  {
    v87 = W32GetUserSessionState(v86, v85);
    *(_DWORD *)(*(_QWORD *)(v87 + 19176) + 48LL) |= 0x1000u;
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 == *(_QWORD *)(W32GetUserSessionState(v89, v88) + 62968) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v91, v90) + 14232) )
      {
        v94 = W32GetUserSessionState(v93, v92);
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v94 + 14232)) + 25) & 1) == 0 )
        {
          v171 = *(_QWORD *)(W32GetUserSessionState(v93, v92) + 14232);
          v170 = W32GetUserSessionState(v96, v95) + 14240;
          HMAssignmentLock(&v170, 0LL);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v93, v92) + 14264) )
      {
        v97 = W32GetUserSessionState(v89, v88);
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v97 + 14264)) + 25) & 1) == 0 )
        {
          v98 = *(_QWORD *)(W32GetUserSessionState(v89, v88) + 14264);
          v101 = W32GetUserSessionState(v100, v99);
          v171 = v98;
          v170 = v101 + 14232;
          HMAssignmentLock(&v170, 0LL);
        }
      }
    }
    else
    {
      v102 = *(_QWORD *)(W32GetUserSessionState(v91, v90) + 19176);
      if ( v102 == *(_QWORD *)(W32GetUserSessionState(v104, v103) + 62968) )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v89, v88) + 14240) )
        {
          v105 = W32GetUserSessionState(v89, v88);
          if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v105 + 14240)) + 25) & 1) == 0 )
          {
            v171 = *(_QWORD *)(W32GetUserSessionState(v89, v88) + 14240);
            v170 = W32GetUserSessionState(v107, v106) + 14232;
            HMAssignmentLock(&v170, 0LL);
            v110 = W32GetUserSessionState(v109, v108);
            HMAssignmentUnlock(v110 + 14240);
          }
        }
      }
    }
  }
  v111 = W32GetUserSessionState(v89, v88);
  LockObjectAssignment(v111 + 19176, a2);
  v114 = *(__int64 ***)(*(_QWORD *)(W32GetUserSessionState(v113, v112) + 19176) + 8LL);
  v115 = **v114;
  *(_QWORD *)(W32GetUserSessionState(*v114, v116) + 18704) = v115;
  SynchronizeContext();
  UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch();
  CitDesktopSwitch();
  v117 = *(struct tagWND ***)(a2 + 8);
  v118 = *((unsigned int *)*v117 + 16);
  if ( (v118 & 1) != 0 )
    ComposeWindow(v117[3], 5);
  v119 = W32GetUserSessionState(v117, v118);
  v121 = zzzSetDesktop(*(_QWORD *)(v119 + 18696), a2, 0LL);
  if ( v121 >= 0 )
  {
    v122 = BugCheckParameter3[0];
    v123 = *(_QWORD *)(BugCheckParameter3[0] + 24);
    if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter3[0] + 16) + 464LL) != v123 )
    {
      AllocQueue(0LL, v123);
      tagQ::zzzAttachToQueue(*(tagQ **)(v122 + 24), *(struct tagTHREADINFO **)(v122 + 16), 0LL, 0);
    }
    v121 = zzzSetDesktop(*(_QWORD *)(v122 + 16), a2, 0LL);
    if ( v121 >= 0 )
    {
      v126 = *(_QWORD *)(W32GetUserSessionState(v124, v120) + 19176);
      if ( *(_QWORD *)(*(_QWORD *)(v122 + 16) + 488LL) != v126 )
      {
        v179 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4124LL);
      }
      if ( a2 != *(_QWORD *)(W32GetUserSessionState(v126, v125) + 19176) )
      {
        v179 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4125LL);
      }
      v128 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v128 + 64) & 1) != 0 )
      {
        LOBYTE(v127) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v179, v127);
        v129 = *(__int64 ***)(a2 + 8);
        v130 = **v129;
        v131 = (void *)UserReferenceDwmApiPort(*v129);
        DwmSyncDesktopSwitch(v131, v130, v181);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v179);
      }
      if ( !gbIgnoreStressedOutStuff && a2 != *(_QWORD *)(W32GetUserSessionState(v128, v127) + 19176) )
      {
        v179 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4139LL);
      }
      v132 = *(__int64 ***)(a2 + 8);
      v133 = **v132;
      if ( !v72
        || (v134 = 1,
            (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(*v132, v127) + 19176) + 8LL) + 64LL) & 1) == 0) )
      {
        v134 = 0;
      }
      v135 = *(_QWORD **)(a2 + 8);
      v136 = *(_DWORD *)(*v135 + 64LL) & 1;
      v137 = W32GetUserSessionState(*v135, v127);
      v121 = GreDesktopSwitch(*(_QWORD *)(*(_QWORD *)(v137 + 56968) + 40LL), v136, v134, v133);
      if ( v121 >= 0 )
      {
        if ( v72 == (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v138, v120) + 19176) + 8LL) + 64LL) & 1) )
          ResetCursorPointerInternal();
        else
          zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0LL);
        v139 = v173;
        Win32HM_LockIntoThread<1>((__int64)v173, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL), (__int64 *)&v170);
        GreLddmProcessDesktopSwitch();
        v141 = *(__int64 **)(a2 + 8);
        v142 = *v141;
        v143 = 4 * (*(_DWORD *)(*v141 + 64) & 1);
        if ( !v72
          || (v144 = 9,
              v142 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v142, v140) + 19176) + 8LL),
              (*(_DWORD *)(v142 + 64) & 1) == 0) )
        {
          v144 = 1;
        }
        v145 = W32GetUserSessionState(v142, v140);
        GreSuspendDirectDraw(*(_QWORD *)(*(_QWORD *)(v145 + 56968) + 40LL), v143 | (unsigned int)v144, 0LL);
        xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0LL, 0LL, 0LL, 0, 0, 339);
        if ( !gbIgnoreStressedOutStuff && a2 != *(_QWORD *)(W32GetUserSessionState(v147, v146) + 19176) )
        {
          v179 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4205LL);
        }
        GreResumeDirectDraw(0LL);
        i = tagUNIQUE_WINDOW_HANDLE::Get((tagUNIQUE_WINDOW_HANDLE *)(a2 + 88));
        if ( !(unsigned __int8)lambda_0626be66eec18444efdef0f40e13a11c_::operator()(v149, i)
          || (unsigned int)IsWindowUnderActiveLockScreen((__int64)i, v150) )
        {
          for ( i = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
                i;
                i = (struct tagWND *)*((_QWORD *)i + 11) )
          {
            if ( (unsigned int)IsWindowUnderActiveLockScreen((__int64)i, v150) )
            {
              i = 0LL;
              break;
            }
            if ( (unsigned __int8)lambda_0626be66eec18444efdef0f40e13a11c_::operator()(v151, i) )
              break;
          }
        }
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&v170);
        tagUNIQUE_WINDOW_HANDLE::Clear((tagUNIQUE_WINDOW_HANDLE *)(a2 + 88));
        UpdateKeyboardStateOnDesktopSwitch(0LL);
        if ( i )
        {
          if ( !gbIgnoreStressedOutStuff
            && *(_QWORD *)(*((_QWORD *)i + 2) + 488LL) != *(_QWORD *)(W32GetUserSessionState(v153, v152) + 19176) )
          {
            v179 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4290LL);
          }
          Win32HM_LockIntoThread<0>((__int64)v139, (__int64)i, BugCheckParameter3);
          xxxSetForegroundWindowWithOptions((__int64)i, 31LL, 32, 0);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        }
        else
        {
          xxxSetForegroundWindow2(0LL, 0LL, 32LL);
        }
        v157 = *(_QWORD *)(W32GetUserSessionState(v155, v154) + 19120);
        if ( v157 )
          IPostQuitMessage(v157, 0);
        v158 = W32GetUserSessionState(v157, v156);
        KePulseEvent(*(PRKEVENT *)(v158 + 62960), 1, 0);
        xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
        if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
          zzzUpdateCursorImage(v160, v159);
        if ( a2 == *(_QWORD *)(W32GetUserSessionState(v160, v159) + 62968) )
        {
          v163 = *(HANDLE *)(W32GetUserSessionState(v162, v161) + 63536);
          if ( PsGetThreadProcessId(Thread) == v163 && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) & 1) != 0 )
            SetTimerCoalescingTolerance(3);
        }
        v164 = *(_DWORD *)(a2 + 48);
        if ( (v164 & 0x20) != 0 )
        {
          v165 = *(_QWORD *)(a2 + 8);
          if ( v165 )
          {
            if ( *(_QWORD *)(v165 + 24) )
            {
              *(_DWORD *)(a2 + 48) = v164 & 0xFFFFFFDF;
              xxxBroadcastDisplaySettingsChange(a2, 1LL, 0LL, 0LL);
            }
          }
        }
        DrvOcclusionStateChangeNotify();
        xxxRefreshDisplayOrientation();
      }
    }
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v11 = 0;
  }
  v166 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v167 = W32GetUserSessionState(WPP_GLOBAL_Control, v120);
    LOBYTE(v168) = v166;
    LOBYTE(v169) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v169,
      v168,
      *(_QWORD *)(v167 + 69152),
      4,
      3,
      28,
      (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
      v121);
  }
  PopAndFreeW32ThreadLock((__int64)v176);
  v177 = -1LL;
  if ( v178[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v178);
  return (unsigned int)v121;
}
