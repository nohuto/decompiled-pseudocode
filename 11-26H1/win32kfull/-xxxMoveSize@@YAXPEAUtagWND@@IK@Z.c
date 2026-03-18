/*
 * XREFs of ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C6F74 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxCallMsgFilter @ 0x14002004C (xxxCallMsgFilter.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140059968 (IsAdaptiveQueueDetachExempted.c)
 *     xxxTranslateMessage @ 0x14005BDE8 (xxxTranslateMessage.c)
 *     xxxWaitMessageEx @ 0x14005C04C (xxxWaitMessageEx.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14005DB04 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005E9E0 (-zzzShowCursor@@YAH_N@Z.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x14005EAA8 (DwmAsyncNotifyIsInMoveSizeChange.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14005EB74 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x14005EDA0 (-EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x14005EE6C (-StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14008C09C (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14009A2FC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     bSetDevDragWidth @ 0x1400CDE6C (bSetDevDragWidth.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14019DC18 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1401A0704 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1401A07E8 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1401D6848 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x14020BCAC (SlowAppThreadInShellFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x14025084C (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x140261A34 (-SnapFurtherFromEdge@WindowArrangement@@YA_NXZ.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140261F74 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14026A3E8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x140292C38 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140296F88 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1402C4114 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402C4D20 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4EA8 (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C7A78 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     GetDpiServerInfoForCurrentProcess @ 0x14030253C (GetDpiServerInfoForCurrentProcess.c)
 */

void __fastcall xxxMoveSize(struct tagWND *a1, unsigned int a2, unsigned int a3)
{
  struct MOVESIZEDATA *v5; // r14
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rbx
  struct tagWND *v10; // rbx
  struct MOVESIZEDATA *MoveSizeData; // rax
  struct MOVESIZEDATA *v12; // r13
  unsigned int *v13; // rdx
  struct MOVESIZEDATA *v14; // rcx
  bool v15; // di
  char v16; // bl
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  char v22; // r12
  const char *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // r14
  struct MOVESIZEDATA *v32; // r12
  __int64 v33; // rdx
  char v34; // di
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rdx
  char v47; // di
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  char v53; // si
  __int64 v54; // rdx
  char v55; // si
  char v56; // bl
  char v57; // di
  __int64 v58; // rdx
  WindowArrangement *v59; // rcx
  bool v60; // si
  struct MOVESIZEDATA *v61; // rcx
  bool v62; // di
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  char v66; // si
  void *v67; // rax
  int v68; // edi
  unsigned int WindowState; // eax
  const char *StateString; // rax
  char v71; // bl
  __int64 v72; // rdx
  char v73; // di
  int *v74; // rdx
  char v75; // r14
  char v76; // si
  __int64 v77; // rdx
  unsigned int v78; // edx
  char v79; // di
  char v80; // bl
  int v81; // r14d
  int v82; // esi
  unsigned __int16 v83; // r12
  bool v84; // di
  char v85; // bl
  tagQ *v86; // rcx
  bool v87; // al
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 UserSessionState; // rax
  int v91; // edx
  int v92; // r8d
  __int64 v93; // rbx
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  __int64 v97; // rbx
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  struct tagWND *v101; // rax
  int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  int v109; // ebx
  __int64 v110; // rdx
  __int64 v111; // rcx
  struct tagWND *v112; // rdx
  __int64 v113; // rbx
  __int64 v114; // rax
  int v115; // r8d
  int v116; // edx
  __int64 v117; // rax
  int v118; // r8d
  int v119; // edx
  __int64 v120; // r9
  const char *v121; // rax
  __int64 v122; // rax
  int v123; // r8d
  int v124; // edx
  bool v125; // di
  __int64 v126; // rax
  int v127; // r8d
  int v128; // edx
  int v129; // ebx
  int v130; // edi
  __int64 v131; // rax
  int v132; // r8d
  int v133; // edx
  __int64 v134; // rax
  int v135; // r8d
  int v136; // edx
  __int64 v137; // rax
  int v138; // r8d
  int v139; // edx
  char v140; // bl
  bool v141; // di
  __int64 v142; // rax
  int v143; // r8d
  int v144; // edx
  char v145; // bl
  bool v146; // di
  __int64 v147; // rax
  int v148; // r8d
  int v149; // edx
  _DWORD *v150; // rax
  int v151; // r14d
  int v152; // edi
  int v153; // esi
  int v154; // ebx
  __int64 v155; // rax
  int v156; // r8d
  int v157; // edx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  int v164; // ebx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // rcx
  struct MOVESIZEDATA *v173; // [rsp+28h] [rbp-89h]
  __int16 v174; // [rsp+38h] [rbp-79h]
  char v175; // [rsp+60h] [rbp-51h]
  char v176; // [rsp+70h] [rbp-41h]
  unsigned int v177; // [rsp+88h] [rbp-29h]
  int v178; // [rsp+8Ch] [rbp-25h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-21h] BYREF
  struct tagTHREADINFO *v180; // [rsp+A0h] [rbp-11h]
  unsigned int v181[4]; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v182[2]; // [rsp+B8h] [rbp+7h]
  __int128 v183; // [rsp+C8h] [rbp+17h]
  struct MOVESIZEDATA *v184; // [rsp+118h] [rbp+67h] BYREF
  int v185; // [rsp+120h] [rbp+6Fh]
  int v186; // [rsp+130h] [rbp+7Fh] BYREF

  v185 = a2;
  v184 = a1;
  *(_OWORD *)v181 = 0LL;
  v5 = a1;
  *(_OWORD *)v182 = 0LL;
  v183 = 0LL;
  v6 = PtiCurrent((__int64)a1);
  v7 = *((_QWORD *)v5 + 2);
  v8 = (__int64)v6;
  v180 = v6;
  v178 = 0;
  v9 = *((_QWORD *)v6 + 58);
  v186 = 0;
  if ( *(_QWORD *)(v7 + 464) != v9 || *((_QWORD *)v6 + 88) )
    return;
  v10 = *(struct tagWND **)(v9 + 120);
  if ( v10 )
  {
    if ( (*(_WORD *)(*((_QWORD *)v10 + 5) + 42LL) & 0x2FFF) == 0x2A2
      || (v101 = (struct tagWND *)*((_QWORD *)v10 + 13), (v10 = v101) != 0LL)
      && (*(_WORD *)(*((_QWORD *)v101 + 5) + 42LL) & 0x2FFF) == 0x2A2 )
    {
      Win32HM_LockIntoThread<0>(v8, (__int64)v10, BugCheckParameter3);
      xxxSendMessage(v10, 0x14Fu);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  MoveSizeData = MOVESIZEDATA::CreateMoveSizeData(v5);
  v12 = MoveSizeData;
  if ( !MoveSizeData )
    return;
  *((_DWORD *)MoveSizeData + 50) &= 0xFFFFC7FF;
  *(_QWORD *)((char *)MoveSizeData + 260) = *(_QWORD *)(v8 + 800);
  AdjustProcessPriorityForDrag(MoveSizeData);
  xxxInitializeMoveSizeData(v5, v12, a2, a3);
  if ( (*((_DWORD *)v12 + 50) & 2) != 0 )
  {
    v177 = 1;
    v14 = WPP_GLOBAL_Control;
    v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v16 = 0;
    }
    if ( !v15 && !v16 )
      goto LABEL_12;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    v174 = 98;
LABEL_134:
    LOBYTE(v92) = v16;
    LOBYTE(v91) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v91,
      v92,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      1,
      v174,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    goto LABEL_12;
  }
  v102 = *(_DWORD *)(*(_QWORD *)(v8 + 464) + 436LL);
  if ( (v102 & 0x800000) != 0 )
  {
    v177 = 4;
    v14 = WPP_GLOBAL_Control;
    v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v174 = 99;
      goto LABEL_134;
    }
  }
  else if ( (v102 & 0x1000000) != 0 )
  {
    v177 = 8;
    v14 = WPP_GLOBAL_Control;
    v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v174 = 100;
      goto LABEL_134;
    }
  }
  else
  {
    v177 = 2;
    v14 = WPP_GLOBAL_Control;
    v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      v174 = 101;
      goto LABEL_134;
    }
  }
LABEL_12:
  if ( (*((_DWORD *)v12 + 50) & 0x20) != 0 )
  {
    v44 = W32GetUserSessionState(v14, v13);
    *(_DWORD *)(v44 + 66792) |= 0x10000000u;
  }
  else
  {
    v17 = W32GetUserSessionState(v14, v13);
    *(_DWORD *)(v17 + 66792) &= ~0x10000000u;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 30LL) & 4) == 0 )
  {
    v103 = W32GetUserSessionState(v19, v18);
    bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v103 + 56968) + 40LL), 2LL);
  }
  v45 = *((_DWORD *)v12 + 44);
  v46 = 2LL;
  v47 = 0;
  if ( v45 != 9 )
    v46 = 0LL;
  NotifyShell::DragSizeInfo(*((_QWORD *)v12 + 2), v46, v177);
  if ( v45 != 9 )
    xxxQueryShellForSizeCooperation(v12);
  if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18928) )
  {
    v105 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 18928);
    if ( *(_QWORD *)(v105 + 120) )
    {
      v107 = *(_QWORD *)(W32GetUserSessionState(v105, v104) + 18928);
      if ( v107 == *(_QWORD *)(v8 + 464) )
      {
        v109 = 33;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v107, v106) + 18928) + 120LL) + 16LL) != v8 )
          v109 = 49;
        v111 = *(_QWORD *)(W32GetUserSessionState(49LL, v108) + 18928);
        if ( *(_QWORD *)(*(_QWORD *)(v111 + 120) + 16LL) == v8 )
          v112 = v5;
        else
          v112 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v111, v110) + 18928) + 120LL);
        xxxWindowEvent(0x80000004, v112, 0, 2, v109);
      }
    }
  }
  xxxWindowEvent(0xAu, v5, 0, 0, 0);
  xxxWindowEvent(0x19u, v5, 0, v185, 0);
  xxxDrawDragRect(v12, 0LL, 0);
  _InterlockedOr((volatile signed __int32 *)(v8 + 520), 0x10u);
  v182[1] = (*((unsigned __int16 *)v12 + 128) << 16) | *((unsigned __int16 *)v12 + 126);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v53 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    v47 = 1;
  if ( v53 || v47 )
  {
    v93 = *(_QWORD *)v5;
    v94 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
    LOBYTE(v95) = v47;
    LOBYTE(v96) = v53;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v96,
      v95,
      *(_QWORD *)(v94 + 69152),
      5,
      1,
      102,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v93);
  }
  xxxSendMessage(v5, 0x231u);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
  {
    v54 = 0LL;
    v55 = 0;
  }
  else
  {
    v55 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    v56 = 0;
  }
  else
  {
    v56 = 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v57 = 1;
      goto LABEL_51;
    }
  }
  v57 = 0;
LABEL_51:
  if ( v55 || v57 )
  {
    v113 = *(_QWORD *)v5;
    v114 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
    LOBYTE(v115) = v57;
    LOBYTE(v116) = v55;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v116,
      v115,
      *(_QWORD *)(v114 + 69152),
      5,
      1,
      103,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v113);
    v56 = 0;
  }
  xxxCapture((struct tagTHREADINFO *)v8, v5, 6u);
  if ( (*((_DWORD *)v12 + 50) & 0x300) == 0 || (v60 = 1, WindowArrangement::SnapFurtherFromEdge(v59)) )
    v60 = 0;
  v61 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v56 = 1;
  }
  v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v117 = W32GetUserSessionState(WPP_GLOBAL_Control, v58);
    LOBYTE(v118) = v62;
    LOBYTE(v119) = v56;
    v120 = *(_QWORD *)(v117 + 69152);
    v121 = "Enabled";
    if ( !v60 )
      v121 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v119,
      v118,
      v120,
      4,
      1,
      104,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      (__int64)v121);
  }
  v63 = W32GetUserSessionState(v61, v58);
  CCursorClip::EnableSpeedBump(*(CCursorClip **)(v63 + 36272), v60);
  zzzShowCursor(1);
  v66 = 0;
  if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
  {
    EnableDwmSwCursorMoveSize(&v186);
    v65 = *((_DWORD *)v12 + 50) & 0xFFEFFFFF | ((v186 & 1) << 20);
    *((_DWORD *)v12 + 50) = v65;
  }
  v67 = (void *)ReferenceDwmApiPort(v65, v64);
  v68 = v185;
  DwmAsyncNotifyIsInMoveSizeChange(v67, v185);
  WindowState = AdvancedWindowPos::GetWindowState(v5);
  StateString = (const char *)AdvancedWindowPos::GetStateString(WindowState);
  InputTraceLogging::MoveSize::StartLoop(v5, StateString);
  while ( (*((_DWORD *)v12 + 50) & 8) == 0 )
  {
LABEL_64:
    v71 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(struct MOVESIZEDATA **)(*(_QWORD *)(v8 + 464) + 112LL) != v5 )
            goto LABEL_87;
          LODWORD(v173) = 1;
          if ( !(unsigned int)xxxInternalGetMessage((__int64)v181, 0, 0, 0, (unsigned __int64)v173, 0) )
            break;
          if ( v181[2] - 512 <= 0xE || v181[2] - 256 <= 9 || v181[2] == 35 )
          {
            v74 = (int *)((char *)v12 + 260);
            *(_QWORD *)((char *)v12 + 260) = *(_QWORD *)(v8 + 800);
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v75 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v76 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v76 = 0;
            }
            if ( v75 || v76 )
            {
              v129 = *((_DWORD *)v12 + 66);
              v130 = *v74;
              v131 = W32GetUserSessionState(WPP_GLOBAL_Control, v74);
              LOBYTE(v132) = v76;
              LOBYTE(v133) = v75;
              WPP_RECORDER_AND_TRACE_SF_Ddd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v133,
                v132,
                *(_QWORD *)(v131 + 69152),
                5,
                1,
                105,
                (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
                v181[2],
                v130,
                v129);
            }
            v5 = v184;
            if ( !v178 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v8 + 464) + 436LL) & 0x1800000) != 0 )
              {
                v178 = 2;
                *((_DWORD *)v12 + 50) ^= ((unsigned __int16)*((_DWORD *)v12 + 50) ^ (unsigned __int16)(*((_DWORD *)v12 + 50) + 2048)) & 0x3800;
              }
              else
              {
                v178 = 1;
              }
            }
LABEL_87:
            v66 = 0;
            goto LABEL_88;
          }
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v181, (unsigned int)(v68 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v181, 0);
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v73 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v73 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v71 = 1;
            }
            if ( v73 || v71 )
            {
              v122 = W32GetUserSessionState(WPP_GLOBAL_Control, v72);
              LOBYTE(v123) = v71;
              LOBYTE(v124) = v73;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v124,
                v123,
                *(_QWORD *)(v122 + 69152),
                5,
                1,
                106,
                (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
                v181[2]);
            }
            _InterlockedOr((volatile signed __int32 *)(v8 + 520), 0x8000u);
            xxxDispatchMessage((struct tagMSG *)v181);
            _InterlockedAnd((volatile signed __int32 *)(v8 + 520), 0xFFFF7FFF);
            v68 = v185;
            goto LABEL_64;
          }
        }
        if ( (*((_DWORD *)v12 + 50) & 8) != 0 )
          goto LABEL_87;
        if ( (*(_DWORD *)(v8 + 1360) & 0x40000) != 0 && !(unsigned int)IsAdaptiveQueueDetachExempted(v8) )
          break;
        if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0, 0) )
          goto LABEL_87;
      }
      v86 = *(tagQ **)(v8 + 464);
      v186 = 0;
      v87 = tagQ::AreMultipleThreadsAttached(v86);
      if ( !(unsigned int)xxxWaitMessageEx(15367LL, v87 ? 200 : 5000, (ULONG)&v186) && !v186 )
        break;
      if ( v186 )
      {
        if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(v8 + 464)) )
        {
          v89 = SlowAppThreadInShellFrame(v8, 0LL, 0LL, 1LL);
          if ( v89 )
            TryDetachShellFrame(v8, v89, v186 == 2);
        }
      }
    }
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    {
      v71 = 1;
    }
    v125 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v66 = 0;
    if ( v71 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v126 = W32GetUserSessionState(WPP_GLOBAL_Control, v88);
      LOBYTE(v127) = v125;
      LOBYTE(v128) = v71;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v128,
        v127,
        *(_QWORD *)(v126 + 69152),
        3,
        1,
        107,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
LABEL_88:
    EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(v12);
    if ( *(struct MOVESIZEDATA **)(*(_QWORD *)(v8 + 464) + 112LL) != v5 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v145 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v145 = 0;
      }
      v146 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v145 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v147 = W32GetUserSessionState(WPP_GLOBAL_Control, v77);
        LOBYTE(v148) = v146;
        LOBYTE(v149) = v145;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v149,
          v148,
          *(_QWORD *)(v147 + 69152),
          4,
          1,
          108,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      xxxMS_TrackMove(v5, 256LL, 27LL, 1LL, v12);
      break;
    }
    if ( (*((_DWORD *)v12 + 50) & 8) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v140 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v140 = 0;
      }
      v141 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v140 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v142 = W32GetUserSessionState(WPP_GLOBAL_Control, v77);
        LOBYTE(v143) = v141;
        LOBYTE(v144) = v140;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v144,
          v143,
          *(_QWORD *)(v142 + 69152),
          4,
          1,
          109,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      *((_DWORD *)v12 + 50) &= ~8u;
      break;
    }
    v78 = v181[2];
    if ( v181[2] == 35 )
    {
      xxxCallHook(2LL, 0LL, 0LL, 5);
      v78 = v181[2];
    }
    if ( (*((_DWORD *)v12 + 50) & 1) != 0 && !(unsigned int)xxxTrackInitSize(v5, v78, v182[0], v182[1], v12) )
      break;
    BugCheckParameter3[0] = 0LL;
    if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline() )
      PhysicalToLogicalDPIPoint(
        BugCheckParameter3,
        (char *)v12 + 260,
        *(unsigned int *)(*((_QWORD *)v5 + 5) + 288LL),
        (char *)v12 + 216);
    else
      BugCheckParameter3[0] = *(_QWORD *)((char *)&v183 + 4);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v79 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v79 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v80 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v80 = 0;
    }
    if ( v79 || v80 )
    {
      v134 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v135) = v80;
      LOBYTE(v136) = v79;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v136,
        v135,
        *(_QWORD *)(v134 + 69152),
        5,
        1,
        110,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        BugCheckParameter3[0],
        SBYTE4(BugCheckParameter3[0]));
    }
    v81 = *((_DWORD *)v12 + 43);
    v82 = *((_DWORD *)v12 + 42);
    v83 = v82 + LOWORD(BugCheckParameter3[0]);
    v68 = v185;
    v186 = v81 + HIDWORD(BugCheckParameter3[0]);
    if ( (*((_DWORD *)v12 + 50) & 1) != 0 )
    {
      v5 = v184;
    }
    else
    {
      v84 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v85 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v85 = 0;
      }
      if ( v84 || v85 )
      {
        v137 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v138) = v85;
        LOBYTE(v139) = v84;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v139,
          v138,
          *(_QWORD *)(v137 + 69152),
          5,
          1,
          111,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
          v82,
          v81);
      }
      v5 = v184;
      xxxMS_TrackMove(v184, v181[2], v182[0], v83 | ((unsigned __int16)v186 << 16), v12);
      v68 = v185;
    }
    v8 = (__int64)v180;
    v66 = 0;
  }
  v20 = AdvancedWindowPos::GetWindowState(v5);
  BugCheckParameter3[0] = AdvancedWindowPos::GetStateString(v20);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v21 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v21 & 1) == 0)
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v22 = 0;
  }
  LOBYTE(v186) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v150 = (_DWORD *)*((_QWORD *)v5 + 5);
    v151 = v150[23];
    v152 = v150[25];
    v153 = v150[22];
    v154 = v150[24];
    v155 = W32GetUserSessionState(v21, WPP_GLOBAL_Control);
    LOBYTE(v156) = v186;
    LOBYTE(v157) = v22;
    v176 = v154 - v153;
    v175 = v154;
    v23 = (const char *)BugCheckParameter3[0];
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v157,
      v156,
      *(_QWORD *)(v155 + 69152),
      4,
      1,
      112,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      BugCheckParameter3[0],
      v153,
      v151,
      v175,
      v152,
      v176,
      v152 - v151);
    v5 = v184;
    v66 = 0;
  }
  else
  {
    v23 = (const char *)BugCheckParameter3[0];
  }
  InputTraceLogging::MoveSize::EndLoop(v5, v23);
  v26 = W32GetUserSessionState(v25, v24);
  CCursorClip::EnableSpeedBump(*(CCursorClip **)(v26 + 36272), 0);
  if ( *(_QWORD *)(W32GetUserSessionState(v28, v27) + 18928)
    && (v159 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18928), *(_QWORD *)(v159 + 120)) )
  {
    v160 = W32GetUserSessionState(v159, v158);
    v31 = v180;
    v162 = *(_QWORD *)(v160 + 18928);
    if ( v162 == *((_QWORD *)v180 + 58) )
    {
      v163 = W32GetUserSessionState(v162, v161);
      xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v163 + 18928) + 120LL), 0, 2, 33);
    }
  }
  else
  {
    v31 = v180;
  }
  v32 = v184;
  xxxWindowEvent(0xBu, v184, 0, 0, 0);
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
  {
    v66 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v34 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v34 = 0;
  }
  if ( v66 || v34 )
  {
    v97 = *(_QWORD *)v32;
    v98 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
    LOBYTE(v99) = v34;
    LOBYTE(v100) = v66;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v100,
      v99,
      *(_QWORD *)(v98 + 69152),
      5,
      1,
      113,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v97);
  }
  xxxSendMessage(v32, 0x232u);
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*((_DWORD *)v12 + 50) & 0x1000000) == 0 )
      SendShellNotificationsOnHardExit(v12);
  }
  else if ( (*(_DWORD *)(*((_QWORD *)v12 + 2) + 384LL) & 0x10) == 0 || (*((_DWORD *)v12 + 50) & 0x1000000) == 0 )
  {
    ReportMoveSizeCompletionToShell(v12);
  }
  DisableDwmSwCursorMoveSize((*((_DWORD *)v12 + 50) >> 20) & 1);
  *((_DWORD *)v12 + 50) &= ~0x100000u;
  v37 = (void *)ReferenceDwmApiPort(v36, v35);
  DwmAsyncNotifyIsInMoveSizeChange(v37, v185);
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((struct MOVESIZEDATA *)((char *)v12 + 400), 0, v12);
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)v12 + 400), v12);
  DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((struct MOVESIZEDATA *)((char *)v12 + 400), 0LL, v12);
  *((_DWORD *)v12 + 50) &= ~0x8000u;
  AdjustProcessPriorityForDrag(v12);
  if ( (*(_BYTE *)(*((_QWORD *)v32 + 5) + 30LL) & 4) == 0 )
  {
    v164 = *(_DWORD *)(GetDpiServerInfoForCurrentProcess() + 4);
    v167 = W32GetUserSessionState(v166, v165);
    bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v167 + 56968) + 40LL), (unsigned int)(v164 + 3));
  }
  v40 = W32GetUserSessionState(v39, v38);
  bSetDevDragRect(*(HDEV *)(*(_QWORD *)(v40 + 56968) + 40LL));
  _InterlockedAnd((volatile signed __int32 *)v31 + 130, 0xFFFFFFEF);
  if ( (*((_DWORD *)v12 + 50) & 0x20) != 0 && *(_QWORD *)(W32GetUserSessionState(v42, v41) + 43096) )
  {
    v168 = W32GetUserSessionState(v42, v41);
    GreDeleteObject(*(_QWORD *)(v168 + 43096));
    *(_QWORD *)(W32GetUserSessionState(v170, v169) + 43096) = 0LL;
    *(_DWORD *)(W32GetUserSessionState(v172, v171) + 43268) = 0;
  }
  v43 = W32GetUserSessionState(v42, v41);
  *(_DWORD *)(v43 + 66792) &= ~0x10000000u;
  MOVESIZEDATA::FreeMoveSizeData(&v184);
  zzzShowCursor(0);
}
