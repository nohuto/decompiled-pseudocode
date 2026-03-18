/*
 * XREFs of ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8 (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     GetCaptionHeight @ 0x140032E38 (GetCaptionHeight.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140089BA0 (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14016344C (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F08 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F4C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1401CB2E8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     GetScreenRectForWindow @ 0x14020E1E0 (GetScreenRectForWindow.c)
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x14025196C (-AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1402596DC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402C7118 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402C83D8 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1402C8758 (WPP_RECORDER_AND_TRACE_SF_ss.c)
 *     ?ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ @ 0x1402F013C (-ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, unsigned int a3, int a4)
{
  char v6; // r13
  struct MOVESIZEDATA *v8; // rcx
  char v9; // di
  bool v10; // si
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  struct tagRECT *v19; // r14
  char v20; // r13
  int v21; // r14d
  int v22; // edi
  int v23; // esi
  int v24; // ebx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // si
  char v29; // r13
  char v30; // di
  unsigned int WindowState; // eax
  __int64 StateString; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 DesktopWindow; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  _DWORD **v42; // rcx
  __int64 DispInfo; // rax
  char *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct tagRECT v47; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rsi
  struct tagRECT v52; // xmm0
  unsigned __int64 v53; // rbx
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rdx
  unsigned int *v57; // rdx
  struct MOVESIZEDATA *v58; // rcx
  int v59; // eax
  int v60; // r8d
  char v61; // di
  bool v62; // si
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  char v66; // di
  bool v67; // si
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  struct MOVESIZEDATA *v71; // rcx
  char v72; // r14
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  int v80; // eax
  const struct tagWND *v81; // rdx
  char v82; // r14
  int v83; // edi
  int v84; // esi
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  __int128 v88; // xmm0
  const struct tagWND *v89; // rdx
  WindowArrangement *v90; // rcx
  char v91; // r14
  _BYTE *v92; // rcx
  bool v93; // al
  int v94; // ecx
  WindowArrangement *v95; // rcx
  _BYTE *v96; // rcx
  bool v97; // al
  __int64 v98; // rdx
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rax
  __int64 Prop; // rdi
  int v103; // ecx
  unsigned int v104; // eax
  __int128 v105; // xmm0
  int v106; // r13d
  __int64 v107; // rdx
  int v108; // ecx
  unsigned int v109; // eax
  __int64 v110; // rdx
  char v111; // di
  bool v112; // si
  __int64 v113; // rax
  int v114; // r8d
  int v115; // edx
  int v116; // eax
  struct MOVESIZEDATA *v117; // rcx
  bool v118; // si
  int v119; // edi
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  __int64 v123; // rax
  unsigned int v124; // esi
  unsigned int v125; // edi
  bool v126; // r14
  char v127; // si
  const char *v128; // r13
  __int64 v129; // rax
  int v130; // r8d
  int v131; // edx
  __int64 v132; // r9
  const char *v133; // rax
  unsigned int v134; // eax
  __int64 v135; // rdx
  int v136; // eax
  char v137; // r14
  char v138; // si
  int v139; // edi
  __int64 v140; // rax
  int v141; // r8d
  int v142; // edx
  __int64 v143; // r9
  const char *v144; // rax
  int v145; // eax
  int v146; // eax
  char v147; // r12
  char v148; // r14
  int v149; // edi
  int v150; // esi
  __int64 v151; // rax
  int v152; // r8d
  int v153; // edx
  __int64 v154; // [rsp+20h] [rbp-99h]
  __int64 v155; // [rsp+28h] [rbp-91h]
  int v156; // [rsp+30h] [rbp-89h]
  int v157; // [rsp+38h] [rbp-81h]
  bool v158; // [rsp+70h] [rbp-49h]
  unsigned int v159; // [rsp+74h] [rbp-45h]
  unsigned __int64 v160; // [rsp+78h] [rbp-41h]
  __int128 v162; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT v163; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v164; // [rsp+B0h] [rbp-9h] BYREF

  v159 = a3;
  v6 = a3;
  v164 = 0LL;
  v162 = 0LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v13) = v10;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      1,
      81,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v11,
      v6,
      a4,
      SBYTE2(a4));
  }
  v15 = PtiCurrent((__int64)v8);
  if ( *((_QWORD *)v15 + 58) == *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928)
    || (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
  {
    v18 = 16;
  }
  else
  {
    v18 = 0;
  }
  v19 = (struct tagRECT *)((char *)a2 + 120);
  *((_DWORD *)a2 + 50) = v18 | *((_DWORD *)a2 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v20 = 0;
  }
  v158 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v21 = *((_DWORD *)a2 + 31);
    v22 = *((_DWORD *)a2 + 33);
    v23 = *((_DWORD *)a2 + 30);
    v24 = *((_DWORD *)a2 + 32);
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v26) = v158;
    LOBYTE(v27) = v20;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 69152),
      4,
      1,
      82,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v23,
      v21,
      v24,
      v22,
      v24 - v23,
      v22 - v21);
    v19 = (struct tagRECT *)((char *)a2 + 120);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
  {
    v29 = 0;
    v28 = 0;
  }
  else
  {
    v28 = 1;
    v29 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v30 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v30 = 0;
  }
  if ( v28 || v30 )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    v35 = W32GetUserSessionState(v34, v33);
    LOBYTE(v36) = v30;
    LOBYTE(v37) = v28;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 69152),
      5,
      1,
      83,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      StateString);
  }
  *((_DWORD *)a2 + 70) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v39 == DesktopWindow )
  {
    LOBYTE(v40) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL);
    if ( (v40 & 8) != 0
      || (v40 & 0x80u) != 0LL
      || (v42 = *(_DWORD ***)(W32GetUserSessionState(v40, v39) + 56968), **v42 > 1u) )
    {
      v44 = (char *)a2 + 88;
      *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)GetScreenRectForWindow(&v163, a1);
      v47 = *(struct tagRECT *)GetPhysicalScreenRect(&v163);
    }
    else
    {
      DispInfo = GetDispInfo(v42, v41);
      v44 = (char *)a2 + 88;
      *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)GetMonitorWorkRectForWindow(&v163, *(_QWORD *)(DispInfo + 96), a1);
      v47 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v46, v45) + 96) + 40LL) + 44LL);
    }
    v164 = v47;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v39 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v49 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v49 )
      {
        v163 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v49, &v163) )
          IntersectRect((char *)a2 + 88, (char *)a2 + 88, &v163);
      }
    }
    v44 = (char *)a2 + 88;
    v164 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v164, &v164, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL, v154, v155);
  }
  v50 = *((_QWORD *)a1 + 13);
  HIDWORD(v160) = SHIWORD(a4);
  LODWORD(v160) = (__int16)a4;
  v51 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 168LL);
  if ( v51 )
  {
    v52 = *v19;
    v53 = v160;
    *(_QWORD *)&v162 = v160;
    v163 = v52;
    TransformRectBetweenCoordinateSpaces(&v163, &v163, v50, a1);
    TransformPointBetweenCoordinateSpaces(&v162, &v162, *((_QWORD *)a1 + 13), a1);
    v54 = GreRectInRegion(v51, &v163);
    v55 = DWORD1(v162);
    v56 = (unsigned int)v162;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a2 + 50) & 0xFFFFFFBF | (v54 != 0 ? 0 : 0x40);
    v58 = (struct MOVESIZEDATA *)(*((_DWORD *)a2 + 50) & 0xFFFEFFFF | ((unsigned int)GrePtInRegion(v51, v56, v55) != 0
                                                                     ? 0
                                                                     : 0x10000));
  }
  else
  {
    v53 = v160;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a2 + 50) & 0xFFFFFFBF | ((unsigned int)IntersectRect(&v162, v19, v44) != 0
                                                              ? 0
                                                              : 0x40);
    v59 = PtInRect(v44, v160);
    v58 = (struct MOVESIZEDATA *)(v60 & 0xFFFEFFFF | (v59 == 0 ? 0x10000 : 0));
  }
  *((_DWORD *)a2 + 50) = (_DWORD)v58;
  if ( ((unsigned __int8)v58 & 0x40) != 0 )
  {
    v58 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v61 = 0;
    }
    v57 = &WPP_RECORDER_INITIALIZED;
    v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v63 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v64) = v62;
      LOBYTE(v65) = v61;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v65,
        v64,
        *(_QWORD *)(v63 + 69152),
        3,
        1,
        84,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x10000) != 0 )
  {
    v58 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v66 = 0;
    }
    v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v66 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v57);
      LOBYTE(v69) = v67;
      LOBYTE(v70) = v66;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v70,
        v69,
        *(_QWORD *)(v68 + 69152),
        3,
        1,
        85,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x8000) != 0 )
  {
    v71 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    {
      v29 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v72 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v72 = 0;
    }
    if ( v29 || v72 )
    {
      v73 = W32GetUserSessionState(WPP_GLOBAL_Control, v57);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v29;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(v73 + 69152),
        5,
        1,
        86,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v164.left,
        v164.top,
        v164.right,
        v164.bottom,
        LOBYTE(v164.right) - LOBYTE(v164.left),
        LOBYTE(v164.bottom) - LOBYTE(v164.top));
    }
    v76 = W32GetUserSessionState(v71, v57);
    v163 = v164;
    CCursorClip::SetClip(*(CCursorClip **)(v76 + 36272), &v163);
    v29 = 0;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v77 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19904);
    v78 = *(_DWORD *)(v77 + 2124);
    *((_DWORD *)a2 + 28) = v78;
    *((_DWORD *)a2 + 26) = v78;
    v80 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v77, v79) + 19904) + 2128LL);
    *((_DWORD *)a2 + 29) = v80;
    *((_DWORD *)a2 + 27) = v80;
  }
  else
  {
    xxxGetMinMaxTrackInfo(a2, (int)v57);
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    {
      v29 = 1;
    }
    v81 = (const struct tagWND *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v82 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v82 = 0;
    }
    if ( v29 || v82 )
    {
      v83 = *((_DWORD *)a2 + 27);
      v84 = *((_DWORD *)a2 + 26);
      v85 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v86) = v82;
      LOBYTE(v87) = v29;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v87,
        v86,
        *(_QWORD *)(v85 + 69152),
        5,
        1,
        87,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v84,
        v83);
    }
  }
  v88 = *(_OWORD *)((char *)a2 + 120);
  *((_DWORD *)a2 + 50) &= 0xFF77FF7C;
  *((_DWORD *)a2 + 62) = 4;
  *(_OWORD *)((char *)a2 + 24) = v88;
  *(_OWORD *)((char *)a2 + 40) = v88;
  *(_OWORD *)((char *)a2 + 56) = v88;
  *(_OWORD *)((char *)a2 + 72) = v88;
  v91 = 0;
  if ( !WindowArrangement::SizeWithSnapAllowed(a1, v81)
    || (*((_DWORD *)a2 + 50) & 0x8000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v90)
    || (v92 = (_BYTE *)*((_QWORD *)a1 + 5), (v92[30] & 4) == 0)
    || (v92[24] & 0x40) != 0
    || (v92[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v93 = IsGhostWindowClass(a1), v94 = 256, v93) )
  {
    v94 = 0;
  }
  *((_DWORD *)a2 + 50) = v94 | *((_DWORD *)a2 + 50) & 0xFFFFFEFF;
  if ( !WindowArrangement::MoveWithArrangementAllowed(a1, v89)
    || (*((_DWORD *)a2 + 50) & 0x8000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v95)
    || (v96 = (_BYTE *)*((_QWORD *)a1 + 5), (v96[30] & 4) == 0)
    || (v96[24] & 0x40) != 0
    || (v96[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v97 = IsGhostWindowClass(a1), v98 = 1LL, v97) )
  {
    v98 = 0LL;
  }
  v99 = ((_DWORD)v98 << 9) | *((_DWORD *)a2 + 50) & 0xFFFFFDFF;
  *((_DWORD *)a2 + 50) = v99;
  if ( (!(_DWORD)v98 || (v99 & 0x100) == 0)
    && (IsArranged(a1)
     || WindowArrangement::IsSupported(a1, (const struct tagWND *)v98)
     && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
  {
    v100 = *((_DWORD *)a2 + 50);
    if ( (v100 & 0x200) == 0 )
    {
      v100 |= 0x40200u;
      *((_DWORD *)a2 + 50) = v100;
    }
    if ( (v100 & 0x100) == 0 )
      *((_DWORD *)a2 + 50) = v100 | 0x20100;
  }
  v101 = W32GetUserSessionState(v99, v98);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v101 + 41374), 1u);
  if ( IsArranged(a1) || (v103 = 0, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
    v103 = 1024;
  v104 = v103 | *((_DWORD *)a2 + 50) & 0xFFFFFBFF;
  *((_DWORD *)a2 + 50) = v104;
  if ( Prop && (v104 & 0x400) != 0 )
    v105 = *(_OWORD *)(Prop + 20);
  else
    v105 = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)a2 + 152) = v105;
  if ( (v104 & 0x300) == 0 )
  {
    v106 = v159;
    *((_QWORD *)a2 + 30) = MonitorFromPoint(v53, 2LL, 0LL);
    goto LABEL_147;
  }
  v106 = v159;
  if ( (v104 & 0x400) == 0 || (v108 = 128, v159 != 9) )
    v108 = 0;
  v109 = v108 | v104 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 50) = v109;
  if ( !Prop )
  {
    if ( (v109 & 0x400) != 0 )
    {
      LODWORD(v162) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5877LL);
    }
    if ( !CHECKPOINT::Restore(*((struct tagWND **)a2 + 2), (const struct tagRECT *)((char *)a2 + 120)) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v111 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v111 = 0;
      }
      v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v111 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v113 = W32GetUserSessionState(WPP_GLOBAL_Control, v110);
        LOBYTE(v114) = v112;
        LOBYTE(v115) = v111;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v115,
          v114,
          *(_QWORD *)(v113 + 69152),
          2,
          1,
          88,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
    }
  }
  LODWORD(v154) = (_DWORD)a2 + 248;
  HitTargetAndMonitorFromPoint(v159, v53, (*((_DWORD *)a2 + 50) >> 11) & 7, (char *)a2 + 240);
  if ( (unsigned int)Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsArranged(a1) )
    {
      v116 = *((_DWORD *)a2 + 50);
      *((_DWORD *)a2 + 62) = 0;
      if ( (v116 & 0x3800) == 0 && v159 == 9 )
        goto LABEL_146;
    }
  }
  else if ( IsArranged(a1) )
  {
    v116 = *((_DWORD *)a2 + 50);
    if ( (v116 & 0x3800) == 0 && v159 == 9 )
    {
      *((_DWORD *)a2 + 62) = 0;
LABEL_146:
      *((_DWORD *)a2 + 50) = v116 & 0xFFFFC7FF | 0x2000;
    }
  }
LABEL_147:
  v117 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
  {
    v91 = 1;
  }
  v118 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v91 || v118 )
  {
    v119 = *((_DWORD *)a2 + 62);
    v120 = W32GetUserSessionState(WPP_GLOBAL_Control, v107);
    LOBYTE(v121) = v118;
    LOBYTE(v122) = v91;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v122,
      v121,
      *(_QWORD *)(v120 + 69152),
      5,
      1,
      89,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v119);
  }
  *((_DWORD *)a2 + 50) &= ~0x8000000u;
  if ( v106 )
  {
    if ( v106 != 10 )
      goto LABEL_170;
    v106 = 9;
    v159 = 9;
  }
  v123 = W32GetUserSessionState(v117, v107);
  zzzSetCursor(*(struct tagCURSOR **)(v123 + 26880));
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    *((_DWORD *)a2 + 50) |= 1u;
  *((_DWORD *)a2 + 50) |= 2u;
  *((_DWORD *)a2 + 47) = (__int16)a4;
  *((_DWORD *)a2 + 48) = SHIWORD(a4);
  v124 = (*((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8)) / 2;
  LODWORD(v160) = v124;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || v106 != 9 )
    HIDWORD(v160) = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
  else
    HIDWORD(v160) = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
  v53 = v160;
  zzzInternalSetCursorPos(v124, HIDWORD(v160), 1, 0);
  xxxMS_FlushWigglies();
  v117 = (struct MOVESIZEDATA *)*((unsigned int *)a2 + 50);
  if ( ((unsigned __int16)v117 & 0x100) == 0 )
    *((_DWORD *)a2 + 62) = 4;
  LODWORD(v117) = (unsigned int)v117 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 50) = (_DWORD)v117;
LABEL_170:
  v125 = *((_DWORD *)a2 + 50) & 0xFFFFFFDF | ((*(_DWORD *)(W32GetUserSessionState(v117, v107) + 66792) & 0x100000) != 0
                                            ? 0x20
                                            : 0);
  *((_DWORD *)a2 + 50) = v125;
  v126 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v127 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v127 = 0;
  }
  v128 = "yes";
  if ( v126 || v127 )
  {
    v129 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v130) = v127;
    LOBYTE(v131) = v126;
    v132 = *(_QWORD *)(v129 + 69152);
    v133 = "yes";
    if ( (v125 & 0x20) == 0 )
      v133 = "no";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v131,
      v130,
      v132,
      5,
      1,
      90,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      (__int64)v133);
  }
  *((_QWORD *)a2 + 28) = *((_QWORD *)a2 + 30);
  *((_DWORD *)a2 + 58) = *((_DWORD *)a2 + 62);
  *((_QWORD *)a2 + 27) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v135 = *((_DWORD *)a2 + 50) & 0xDFFFFFFF | (IsArranged(a1) << 29);
  v134 = v135;
  LODWORD(v135) = v135 & 0xEFFFFFFF;
  v136 = (v135 ^ (v134 >> 1) & 0x10000000) & 0xFFDFBFFF;
  *((_DWORD *)a2 + 50) = v136;
  if ( (v136 & 2) != 0 )
  {
    *((_DWORD *)a2 + 50) = v136 & 0xFFFFFCFF;
    if ( IsArranged(a1) )
      *((_DWORD *)a2 + 50) |= 0x60300u;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v137 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v137 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v138 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v138 = 0;
  }
  if ( v137 || v138 )
  {
    v139 = *((_DWORD *)a2 + 50);
    v140 = W32GetUserSessionState(WPP_GLOBAL_Control, v135);
    LOBYTE(v141) = v138;
    LOBYTE(v142) = v137;
    v143 = *(_QWORD *)(v140 + 69152);
    v144 = "yes";
    if ( (v139 & 0x200) == 0 )
      v144 = "no";
    if ( (v139 & 0x100) == 0 )
      v128 = "no";
    WPP_RECORDER_AND_TRACE_SF_ss(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v142,
      v141,
      v143,
      v154,
      v155,
      v156,
      v157,
      (__int64)v128,
      (__int64)v144);
  }
  *((_DWORD *)a2 + 45) = dword_140369B70[v159];
  *((_DWORD *)a2 + 46) = dword_140369B40[v159];
  v145 = dword_140369BE0[v159];
  if ( v145 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v145 + 30) - v160;
  v146 = dword_140369BB0[v159];
  if ( v146 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v146 + 30) - HIDWORD(v160);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v147 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v147 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v148 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v148 = 0;
  }
  if ( v147 || v148 )
  {
    v149 = *((_DWORD *)a2 + 43);
    v150 = *((_DWORD *)a2 + 42);
    v151 = W32GetUserSessionState(WPP_GLOBAL_Control, v135);
    LOBYTE(v152) = v148;
    LOBYTE(v153) = v147;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v153,
      v152,
      *(_QWORD *)(v151 + 69152),
      5,
      1,
      92,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v150,
      v149);
  }
  *(_QWORD *)((char *)a2 + 252) = v53;
  *((_DWORD *)a2 + 44) = v159;
  *(_OWORD *)((char *)a2 + 356) = 0LL;
  *((_DWORD *)a2 + 88) = 0;
  *((_QWORD *)a2 + 47) = 0LL;
  *((_WORD *)a2 + 186) = 0;
  *((_BYTE *)a2 + 392) = 0;
  *((_DWORD *)a2 + 100) = 0;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    *((_DWORD *)a2 + 74) |= 0xFu;
    *((_QWORD *)a2 + 36) = a2;
    MoveSizeReadAndClearMouseMoveBoundHitFlags();
    MoveSizeHaptic::ResetStateForNewRound((struct MOVESIZEDATA *)((char *)a2 + 288));
  }
}
