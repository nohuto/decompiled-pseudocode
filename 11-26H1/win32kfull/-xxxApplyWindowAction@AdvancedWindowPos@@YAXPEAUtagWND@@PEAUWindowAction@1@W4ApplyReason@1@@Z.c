/*
 * XREFs of ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4EA8 (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C623C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402C71FC (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402DBB00 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DBD50 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402EC54C (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1401605BC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     LogicalToPhysicalInPlaceRect @ 0x140209634 (LogicalToPhysicalInPlaceRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402C8ECC (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402DD16C (-BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E54FC (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 *     ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402E6D4C (-OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402E7BA0 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402E7E40 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402E82B8 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402E8874 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 *     ?ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402E8B54 (-ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E9174 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4ActionModifier@1@@Z @ 0x1402E9CB4 (-UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4Acti.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402E9F0C (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EC750 (-xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowAction(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // rbx
  const struct AdvancedWindowPos::WindowAction *v6; // r8
  char v7; // si
  struct AdvancedWindowPos::WindowAction *v8; // r8
  struct AdvancedWindowPos::WindowAction *v9; // r8
  struct tagWND *v10; // rdx
  struct AdvancedWindowPos::WindowAction *v11; // r8
  int v12; // edx
  struct AdvancedWindowPos::WindowAction *v13; // r8
  unsigned int *v14; // rdx
  int v15; // ebx
  int v16; // r14d
  int v17; // r12d
  int v18; // ecx
  char v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // di
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // di
  char v29; // bl
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  char v33; // di
  char v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // esi
  int v39; // edi
  int v40; // ebx
  unsigned int WindowState; // eax
  struct CHECKPOINT *IfValid; // rax
  unsigned int *v43; // rdx
  struct tagRECT v44; // xmm0
  __int64 v45; // rax
  char v46; // bl
  bool v47; // di
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // r14
  char v52; // si
  __int64 v53; // rax
  char v54; // r14
  char v55; // si
  __int64 v56; // rax
  bool v57; // r12
  int v58; // eax
  LONG v59; // r8d
  LONG v60; // r9d
  char v61; // al
  char v62; // r12
  LONG bottom; // esi
  LONG right; // ebx
  LONG v65; // r14d
  LONG v66; // edi
  const char *StateString; // rax
  int v68; // r10d
  __int64 v69; // r9
  int v70; // r11d
  char v71; // r14
  char v72; // si
  __int64 v73; // rax
  __int64 left; // rdx
  int top; // r8d
  char v76; // di
  char v77; // bl
  __int64 v78; // rax
  int v79; // r8d
  int v80; // edx
  int v81; // eax
  char v82; // di
  char v83; // bl
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  CMonitorTopology *v87; // rcx
  struct tagRECT *v88; // rbx
  unsigned int v89; // ecx
  char v90; // di
  char v91; // bl
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  int v95; // r8d
  const struct CMonitorTopology::MonitorData *v96; // rdi
  int v97; // eax
  CMonitorTopology *v98; // rcx
  char v99; // di
  char v100; // bl
  __int64 v101; // rax
  int v102; // r8d
  int v103; // edx
  struct tagRECT *v104; // rax
  unsigned int v105; // ebx
  __int64 v106; // rdx
  CHECKPOINT *v107; // rbx
  unsigned int *v108; // rax
  __int64 v109; // rdx
  int v110; // edi
  const struct CMonitorTopology *v111; // rbx
  __int64 **RecalcProperty; // rax
  int v113; // [rsp+28h] [rbp-D8h]
  __int16 v114; // [rsp+30h] [rbp-D0h]
  __int16 v115; // [rsp+30h] [rbp-D0h]
  int v116; // [rsp+38h] [rbp-C8h]
  __int64 v117; // [rsp+40h] [rbp-C0h]
  __int64 v118; // [rsp+48h] [rbp-B8h]
  __int64 v119; // [rsp+50h] [rbp-B0h]
  __int64 v120; // [rsp+58h] [rbp-A8h]
  __int64 v121; // [rsp+60h] [rbp-A0h]
  __int64 v122; // [rsp+68h] [rbp-98h]
  char v123; // [rsp+80h] [rbp-80h]
  unsigned int v124; // [rsp+84h] [rbp-7Ch]
  char v125; // [rsp+88h] [rbp-78h]
  char v126; // [rsp+89h] [rbp-77h]
  unsigned int v127; // [rsp+8Ch] [rbp-74h]
  bool v128; // [rsp+90h] [rbp-70h]
  unsigned int v129; // [rsp+94h] [rbp-6Ch]
  int v130; // [rsp+98h] [rbp-68h]
  int v131; // [rsp+98h] [rbp-68h]
  unsigned int v132; // [rsp+9Ch] [rbp-64h]
  CHECKPOINT *v133; // [rsp+A0h] [rbp-60h]
  _BYTE v134[24]; // [rsp+A8h] [rbp-58h] BYREF
  int v135; // [rsp+C0h] [rbp-40h]
  int v136; // [rsp+C4h] [rbp-3Ch]
  _BYTE v137[40]; // [rsp+C8h] [rbp-38h] BYREF
  struct tagRECT Buf2; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v139; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT Buf1; // [rsp+110h] [rbp+10h] BYREF

  *(_BYTE *)(a2 + 176) = 1;
  AdvancedWindowPos::LogApplyWindowActionStart((const struct tagWND *)a1, (unsigned int *)a2, a3);
  v5 = (_DWORD *)(a2 + 4);
  v7 = 0;
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && (*v5 & 0x800) != 0 )
  {
    AdvancedWindowPos::PostAsyncWindowAction((PETHREAD **)a1, (PETHREAD **)a2, v6);
    AdvancedWindowPos::LogApplyWindowActionEnd((const struct tagWND *)a1, 0);
    return;
  }
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v137, (struct tagWND *)a1);
  if ( (*v5 & 2) != 0 )
    AdvancedWindowPos::xxxSetForegroundForWindowAction((AdvancedWindowPos *)a1, (struct tagWND *)a2, v8);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_19;
  if ( (*v5 & 0x400) != 0 )
    AdvancedWindowPos::TransformWindowActionToPhysical((AdvancedWindowPos *)a1, (struct tagWND *)a2, v9);
  if ( AdvancedWindowPos::ShouldCallShellForAction((AdvancedWindowPos *)a1, (struct tagWND *)a2, v9) )
    AdvancedWindowPos::xxxModifyActionForArrangement((struct tagRECT *)a1, (struct tagWND *)a2, v11);
  if ( (*v5 & 0x2000) != 0 || (*(_DWORD *)(a1 + 384) & 0x10) == 0 )
  {
    if ( (*v5 & 0x10000) == 0
      && (*(_DWORD *)a2 & 0x200) != 0
      && !DesktopRecalc::BeginApplyWindowAction((DesktopRecalc *)a1, v10) )
    {
      v12 = 2;
      goto LABEL_247;
    }
    if ( AdvancedWindowPos::HasFullscreenState((AdvancedWindowPos *)a1, v10) )
      AdvancedWindowPos::UpdateActionForFullScreenWindow((AdvancedWindowPos *)a1, (struct tagWND *)a2, v13);
LABEL_19:
    v14 = &WPP_RECORDER_INITIALIZED;
    v15 = *(_DWORD *)a2 & 8;
    v16 = 0x1000000;
    v124 = 0x1000000;
    v17 = 0x40000;
    v127 = 0x40000;
    v18 = *(_DWORD *)a2 & 0x10;
    if ( v18 && ((*(_DWORD *)(a2 + 4) & 4) != 0 || v15) )
    {
      v17 = 786432;
      v123 = 1;
      v127 = 786432;
    }
    else
    {
      if ( !v18 )
      {
        v16 = 16777232;
        v17 = 262160;
        v124 = 16777232;
        v127 = 262160;
        if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
        {
          v7 = 1;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v19 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v19 = 0;
        }
        if ( v7 || v19 )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v7;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v22,
            v21,
            *(_QWORD *)(UserSessionState + 69152),
            5,
            4,
            153,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          v14 = &WPP_RECORDER_INITIALIZED;
        }
        v7 = 0;
      }
      v123 = 0;
    }
    if ( v15 )
    {
      PWInsertAfter(*(_QWORD *)(a2 + 32));
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      {
        v7 = 1;
      }
      v14 = &WPP_RECORDER_INITIALIZED;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v23 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v23 = 0;
      }
      if ( v7 || v23 )
      {
        v24 = *(_QWORD *)(a2 + 32);
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v26) = v23;
        LOBYTE(v27) = v7;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 69152),
          5,
          4,
          154,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v24);
        v14 = &WPP_RECORDER_INITIALIZED;
      }
      if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
      {
        v16 |= 0x200u;
        v17 |= 0x400000u;
        v124 = v16;
        v127 = v17;
        v28 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v29 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v29 = 0;
        }
        if ( v28 || v29 )
        {
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v114 = 155;
LABEL_59:
          LOBYTE(v32) = v29;
          LOBYTE(v31) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v32,
            *(_QWORD *)(v30 + 69152),
            5,
            4,
            v114,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
      }
    }
    else
    {
      v16 |= 4u;
      v17 |= 0x40u;
      v124 = v16;
      v127 = v17;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v28 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v29 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v29 = 0;
      }
      if ( v28 || v29 )
      {
        v30 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v114 = 156;
        goto LABEL_59;
      }
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 8) )
      {
        v124 = v16 | 0x40;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          v115 = 157;
LABEL_92:
          LOBYTE(v37) = v34;
          LOBYTE(v36) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v36,
            v37,
            *(_QWORD *)(v35 + 69152),
            5,
            4,
            v115,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
      }
      else
      {
        v124 = v16 | 0x80;
        v127 = v17 | 0x100000;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          v115 = 158;
          goto LABEL_92;
        }
      }
    }
    else
    {
      v127 = v17 | 1;
    }
    v38 = *(_DWORD *)a2 & 4;
    v39 = *(_DWORD *)a2 & 2;
    v40 = *(_DWORD *)a2 & 0x20;
    v136 = v38;
    v135 = v39;
    v130 = v40;
    WindowState = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v132 = WindowState;
    if ( v40 )
      v129 = *(_DWORD *)(a2 + 40);
    else
      v129 = WindowState;
    IfValid = CHECKPOINT::GetIfValid((struct tagWND *)a1);
    v133 = IfValid;
    if ( IfValid )
      v44 = *(struct tagRECT *)((char *)IfValid + 20);
    else
      v44 = *(struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL);
    v45 = *(_QWORD *)(a1 + 40);
    Buf2 = v44;
    *(struct tagRECT *)&v134[8] = v44;
    if ( (*(_DWORD *)(v45 + 288) & 0xF) != 2 )
    {
      Buf1 = v44;
      LogicalToPhysicalInPlaceRect(a1, (__int64)&Buf2);
      if ( memcmp(&Buf1, &Buf2, 0x10uLL) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v46 = 0;
        }
        v43 = &WPP_RECORDER_INITIALIZED;
        v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v48 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v49) = v47;
          LOBYTE(v50) = v46;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v50,
            v49,
            *(_QWORD *)(v48 + 69152),
            4,
            4,
            159,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          v43 = &WPP_RECORDER_INITIALIZED;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v51 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v52 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v52 = 0;
        }
        if ( v51 || v52 )
        {
          v53 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LODWORD(v117) = *(_DWORD *)&v134[8];
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v51,
            v52,
            *(_QWORD *)(v53 + 69152),
            5u,
            4u,
            0xA0u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v117,
            *(_DWORD *)&v134[12],
            *(_DWORD *)&v134[16],
            *(_DWORD *)&v134[20],
            *(_DWORD *)&v134[16] - *(_DWORD *)&v134[8],
            *(_DWORD *)&v134[20] - *(_DWORD *)&v134[12]);
          v43 = &WPP_RECORDER_INITIALIZED;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v54 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v55 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v55 = 0;
        }
        if ( v54 || v55 )
        {
          v56 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LODWORD(v122) = Buf2.bottom - Buf2.top;
          LODWORD(v121) = Buf2.right - Buf2.left;
          LODWORD(v120) = Buf2.bottom;
          LODWORD(v119) = Buf2.right;
          LODWORD(v118) = Buf2.top;
          LODWORD(v117) = Buf2.left;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v54,
            v55,
            *(_QWORD *)(v56 + 69152),
            5u,
            4u,
            0xA1u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v117,
            v118,
            v119,
            v120,
            v121,
            v122);
        }
        v40 = v130;
        v39 = v135;
        v38 = v136;
      }
    }
    v126 = 0;
    v131 = *(_DWORD *)(a2 + 4) & 0x40;
    v57 = 0;
    v139 = 0LL;
    if ( !v40 )
    {
      if ( v39 )
      {
        left = *(unsigned int *)(a2 + 12);
        top = *(_DWORD *)(a2 + 16);
        Buf2.left = *(_DWORD *)(a2 + 12);
        Buf2.top = top;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v76 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v76 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v77 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v77 = 0;
        }
        if ( v76 || v77 )
        {
          v78 = W32GetUserSessionState(WPP_GLOBAL_Control, left);
          LOBYTE(v79) = v77;
          LOBYTE(v80) = v76;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v80,
            v79,
            *(_QWORD *)(v78 + 69152),
            5,
            4,
            164,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            Buf2.left,
            Buf2.top);
          top = Buf2.top;
          left = (unsigned int)Buf2.left;
        }
        v81 = v124;
      }
      else
      {
        left = (unsigned int)_mm_cvtsi128_si32((__m128i)Buf2);
        v81 = v124 | 2;
        top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)Buf2, 4));
        v124 |= 2u;
      }
      if ( v38 )
      {
        Buf2.right = left + *(_DWORD *)(a2 + 20);
        Buf2.bottom = top + *(_DWORD *)(a2 + 24);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v82 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v83 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v83 = 0;
        }
        if ( v82 || v83 )
        {
          v84 = W32GetUserSessionState(WPP_GLOBAL_Control, left);
          LOBYTE(v85) = v83;
          LOBYTE(v86) = v82;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v86,
            v85,
            *(_QWORD *)(v84 + 69152),
            5,
            4,
            165,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            LOBYTE(Buf2.right) - LOBYTE(Buf2.left),
            LOBYTE(Buf2.bottom) - LOBYTE(Buf2.top));
        }
      }
      else
      {
        v124 = v81 | 1;
      }
LABEL_184:
      if ( v132 == 2 && !v129 && (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
        *((_DWORD *)v133 + 4) &= 0xFFFFFFF5;
      v87 = *(CMonitorTopology **)(a2 + 168);
      Buf1 = Buf2;
      *(_QWORD *)v134 = CMonitorTopology::MonitorDataFromRect(v87, &Buf1, 2, 0x12u);
      if ( v126 && (v129 != 2 || v131) )
      {
        v88 = &v139;
        if ( !v57 )
          goto LABEL_192;
      }
      else
      {
        v88 = 0LL;
      }
      v95 = *(_DWORD *)(a2 + 4);
      if ( (*(_DWORD *)a2 & 0x100) == 0 && (v95 & 0x180) == 0 && (*(_DWORD *)a2 & 0x80u) == 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2 )
        {
          v96 = 0LL;
          if ( (v95 & 0x200) != 0 )
          {
            v97 = *(_DWORD *)(a2 + 100);
            *(_DWORD *)&v134[12] = *(_DWORD *)(a2 + 104);
            *(_DWORD *)&v134[20] = *(_DWORD *)&v134[12];
            v98 = *(CMonitorTopology **)(a2 + 168);
            *(_DWORD *)&v134[8] = v97;
            *(_DWORD *)&v134[16] = v97;
            v96 = CMonitorTopology::MonitorDataFromRect(v98, (struct tagRECT *)&v134[8], 2, 0x12u);
          }
          Buf2 = *CMonitorTopology::PhysicalToLogicalDPIRect(
                    *(CMonitorTopology **)(a2 + 168),
                    &Buf1,
                    &Buf2,
                    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
                    v96);
          if ( v88 )
            *v88 = *CMonitorTopology::PhysicalToLogicalDPIRect(
                      *(CMonitorTopology **)(a2 + 168),
                      &Buf1,
                      v88,
                      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
                      v96);
        }
LABEL_195:
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
          && (*(_DWORD *)(a2 + 4) & 1) != 0 )
        {
          if ( !v126 )
          {
            if ( v57 )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (v99 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
              {
                v99 = 0;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v100 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
              {
                v100 = 0;
              }
              if ( v99 || v100 )
              {
                v101 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
                LOBYTE(v102) = v100;
                LOBYTE(v103) = v99;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v103,
                  v102,
                  *(_QWORD *)(v101 + 69152),
                  5,
                  4,
                  167,
                  (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
              }
              Buf2 = *WindowMargins::ExtendRect(
                        &Buf1,
                        (struct tagRECT *)a1,
                        (const struct tagWND *)&Buf2,
                        (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)v134 + 40LL));
            }
            goto LABEL_230;
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v90 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v90 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v91 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v91 = 0;
          }
          if ( v90 || v91 )
          {
            v92 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
            LOBYTE(v93) = v91;
            LOBYTE(v94) = v90;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v94,
              v93,
              *(_QWORD *)(v92 + 69152),
              5,
              4,
              166,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          }
          v139 = *WindowMargins::ExtendRect(
                    &Buf1,
                    (struct tagRECT *)a1,
                    (const struct tagWND *)&v139,
                    (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)v134 + 40LL));
        }
        else if ( !v126 )
        {
          goto LABEL_230;
        }
        v104 = &v139;
        if ( !v131 )
        {
LABEL_231:
          v105 = v129;
          LOBYTE(v116) = v57;
          LOBYTE(v113) = v123;
          AdvancedWindowPos::xxxUpdatePosAndStateForAction(a1, v132, v129, v124, v127, v113, v104, v116, &Buf2, a2);
          if ( v129 )
          {
            if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
              && (*(_DWORD *)(a2 + 4) & 1) != 0
              && v131 )
            {
              v139 = *WindowMargins::ExtendRect(
                        &Buf1,
                        (struct tagRECT *)a1,
                        (const struct tagWND *)&v139,
                        (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)v134 + 40LL));
            }
            v107 = v133;
            if ( !v133 )
              v107 = CHECKPOINT::Get((const struct tagWND *)a1, v106);
            if ( v57 )
              CHECKPOINT::SetNormalRect(v107, (const struct tagWND *)a1, &Buf2, *(_WORD *)(*(_QWORD *)v134 + 40LL));
            AdvancedWindowPos::UpdateCheckpointForAction((const struct tagWND *)a1, v107, &v139, *(_DWORD *)(a2 + 4));
            v105 = v129;
          }
          v108 = (unsigned int *)(a2 + 108);
          if ( (*(_DWORD *)a2 & 0x400) == 0 )
            v108 = 0LL;
          AdvancedWindowPos::SendShellNotificationsForAction(
            (const struct tagWND *)a1,
            v105,
            v132,
            v126,
            (CDwmWindowNotifyBatch *)v137,
            v108);
          if ( (*(_DWORD *)a2 & 0x200) != 0 )
          {
            v110 = *(_DWORD *)(a2 + 4);
            v111 = *(const struct CMonitorTopology **)(a2 + 168);
            RecalcProperty = (__int64 **)CRecalcProp::GetRecalcProperty((const struct tagWND *)a1, v109);
            CRecalcProp::EndApplyWindowAction(RecalcProperty, (struct tagWND *)a1, v111, (v110 & 0x10000) != 0);
            if ( (v110 & 0x10000) != 0 )
              CDwmWindowNotifyBatch::OnRecalcActionApplied(
                (CDwmWindowNotifyBatch *)v137,
                *(_DWORD *)(*(_QWORD *)(a2 + 168) + 12LL),
                1);
          }
          v12 = 3;
          goto LABEL_247;
        }
LABEL_230:
        v104 = 0LL;
        goto LABEL_231;
      }
LABEL_192:
      AdvancedWindowPos::xxxAdjustRectsForMonitor(
        (struct tagRECT *)a1,
        (struct tagWND *)a2,
        v133,
        v88,
        &Buf2,
        (struct tagRECT *)v134);
      v57 = 1;
      v127 |= 0x80u;
      v89 = v124 & 0xFFF7FFFC | 0x80000;
      if ( v131 )
        v89 = v124 | 0x80000;
      v124 = v89;
      goto LABEL_195;
    }
    v58 = *(_DWORD *)a2 & 0x40;
    if ( v58 )
      Buf2 = *(struct tagRECT *)(a2 + 44);
    v57 = v58 != 0;
    v128 = v58 != 0;
    if ( v39 && v38 )
    {
      v59 = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20);
      v43 = (unsigned int *)*(unsigned int *)(a2 + 16);
      v60 = (_DWORD)v43 + *(_DWORD *)(a2 + 24);
      if ( !v129 )
      {
        Buf2.left = *(_DWORD *)(a2 + 12);
        v57 = 1;
        Buf2.top = (int)v43;
        Buf2.right = v59;
        Buf2.bottom = v60;
LABEL_149:
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v71 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v72 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v72 = 0;
        }
        if ( v71 || v72 )
        {
          v73 = W32GetUserSessionState(WPP_GLOBAL_Control, v43);
          LODWORD(v122) = Buf2.bottom - Buf2.top;
          LODWORD(v121) = Buf2.right - Buf2.left;
          LODWORD(v120) = Buf2.bottom;
          LODWORD(v119) = Buf2.right;
          LODWORD(v118) = Buf2.top;
          LODWORD(v117) = Buf2.left;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v71,
            v72,
            *(_QWORD *)(v73 + 69152),
            5u,
            4u,
            0xA3u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v117,
            v118,
            v119,
            v120,
            v121,
            v122);
        }
        goto LABEL_184;
      }
      v139.left = *(_DWORD *)(a2 + 12);
      v139.top = (int)v43;
      v139.right = v59;
      v139.bottom = v60;
      v126 = 1;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v61 = 0;
      }
      v43 = &WPP_RECORDER_INITIALIZED;
      v125 = v61;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v62 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v62 = 0;
      }
      if ( v61 || v62 )
      {
        W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        bottom = v139.bottom;
        right = v139.right;
        v65 = v139.top;
        v66 = v139.left;
        StateString = AdvancedWindowPos::GetStateString(v129);
        LODWORD(v122) = v68;
        LODWORD(v121) = bottom;
        LODWORD(v120) = right;
        LODWORD(v119) = v65;
        LODWORD(v118) = v66;
        WPP_RECORDER_AND_TRACE_SF_sdddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v125,
          v62,
          v69,
          5u,
          4u,
          0xA2u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          StateString,
          v118,
          v119,
          v120,
          v121,
          v122,
          v70);
      }
      v57 = v128;
    }
    if ( !v57 )
      goto LABEL_184;
    goto LABEL_149;
  }
  WindowActions::xxxInterceptApplyWindowAction((WindowActions *)a1, (struct tagWND *)a2, v11);
  v12 = 1;
LABEL_247:
  AdvancedWindowPos::LogApplyWindowActionEnd((const struct tagWND *)a1, v12);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v137);
}
