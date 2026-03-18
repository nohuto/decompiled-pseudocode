/*
 * XREFs of ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0
 * Callers:
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402DF660 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402E0514 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14022A6FC (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402E78AC (_anonymous_namespace_--GetArrangedOptions.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall AdvancedWindowPos::xxxRestoreToPosAndState(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __m128i *a4,
        struct tagRECT *a5,
        int a6,
        unsigned int *a7)
{
  struct tagRECT *v7; // r14
  __int64 v8; // r15
  CMonitorTopology::MonitorData *v9; // rdi
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  struct MOVESIZEDATA *v15; // rdx
  __m128i v16; // xmm1
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  char v20; // bl
  char v21; // r12
  char v22; // al
  _DWORD *v23; // rax
  int v24; // r15d
  int v25; // esi
  int v26; // r14d
  int v27; // ebx
  const char *StateString; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  __m128i *v35; // rax
  __m128i *v36; // rax
  char v37; // r8
  __m128i v38; // xmm6
  struct tagRECT *v39; // rax
  char v40; // al
  __int32 v41; // r14d
  __int32 v42; // edi
  __int32 v43; // esi
  __int32 v44; // ebx
  __int64 v45; // rax
  char v46; // di
  bool v47; // si
  const char *v48; // rbx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  char ArrangedOptions; // al
  __m128i *v53; // rax
  char v54; // r14
  struct tagRECT *v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 Prop; // rax
  __int64 v59; // rdx
  struct MOVESIZEDATA *v60; // rcx
  char v61; // al
  __int32 v62; // r14d
  __int32 v63; // edi
  __int32 v64; // esi
  __int32 v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  CHECKPOINT *v70; // rax
  bool v71; // di
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  __m128i v75; // xmm6
  __int64 v76; // rcx
  int WindowState; // esi
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v78; // r8
  char v79; // di
  const char *v80; // rax
  int v81; // r8d
  int v82; // edx
  int v83; // r9d
  unsigned int *v84; // rbx
  struct MOVESIZEDATA *v85; // rcx
  char v86; // r13
  _DWORD *v87; // rax
  int v88; // r15d
  int v89; // esi
  int v90; // r14d
  int v91; // edi
  int v92; // eax
  const char *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  int v97; // r8d
  int v98; // edx
  struct tagTHREADINFO *v99; // rax
  unsigned int *v100; // [rsp+40h] [rbp-C0h]
  __int64 v101; // [rsp+48h] [rbp-B8h]
  __int64 v102; // [rsp+50h] [rbp-B0h]
  __int64 v103; // [rsp+58h] [rbp-A8h]
  __int64 v104; // [rsp+60h] [rbp-A0h]
  __int64 v105; // [rsp+68h] [rbp-98h]
  char v106; // [rsp+80h] [rbp-80h]
  char v107; // [rsp+80h] [rbp-80h]
  bool v108; // [rsp+81h] [rbp-7Fh]
  char v109; // [rsp+81h] [rbp-7Fh]
  char v110; // [rsp+81h] [rbp-7Fh]
  char v111; // [rsp+82h] [rbp-7Eh]
  char v112; // [rsp+82h] [rbp-7Eh]
  unsigned int v113; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT *v114; // [rsp+90h] [rbp-70h]
  unsigned int *v115; // [rsp+98h] [rbp-68h]
  __int64 v116; // [rsp+A0h] [rbp-60h]
  __m128i v117; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v118; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v120; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v121; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v122; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v123; // [rsp+108h] [rbp+8h]
  int v124; // [rsp+10Ch] [rbp+Ch]
  __m128i v125; // [rsp+110h] [rbp+10h]
  unsigned int v126; // [rsp+120h] [rbp+20h]

  v7 = a5;
  v8 = a1;
  v9 = (CMonitorTopology::MonitorData *)a2;
  v117.m128i_i64[0] = a1;
  *(_QWORD *)&v120.left = a2;
  v113 = a3;
  v114 = a5;
  v115 = a7;
  CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                               (const struct CMonitorTopology::MonitorId *)(a2 + 48),
                               0);
  v12 = ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
  v116 = v12;
  v14 = PtiCurrent(v13);
  Win32HM_LockIntoThread<1>((__int64)v14, v12, (__int64 *)BugCheckParameter3);
  if ( (*(_DWORD *)(v8 + 384) & 0x10) != 0 )
  {
    v16 = *a4;
    v120 = *a5;
    v117 = v16;
    WindowActions::xxxInterceptRestoreToPosAndState(v8, v12, v9, v113, &v117, &v120, a6, a7);
    v18 = PtiCurrent(v17);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, BugCheckParameter3);
    return 1;
  }
  v20 = 0;
  v21 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v22 = 0;
  }
  v106 = v22;
  v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v23 = *(_DWORD **)(v12 + 40);
    v24 = v23[12];
    v25 = v23[14];
    v26 = v23[11];
    v27 = v23[13];
    StateString = AdvancedWindowPos::GetStateString(v113);
    UserSessionState = W32GetUserSessionState(v30, v29);
    LOBYTE(v32) = v108;
    LOBYTE(v33) = v106;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      46,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (__int64)StateString,
      v26,
      v24,
      v27,
      v25,
      v27 - v26,
      v25 - v24);
    v8 = v117.m128i_i64[0];
    v20 = 0;
    v9 = *(CMonitorTopology::MonitorData **)&v120.left;
    v12 = v116;
    v7 = v114;
  }
  v34 = v113;
  if ( !v113 )
  {
    v35 = anonymous_namespace_::xxxNormalizeRect_0(&v118, (const struct tagWND *)v8, a4, v12, (__int64)v9, 1);
    v34 = 0LL;
    *a4 = *v35;
  }
  if ( (((_DWORD)v34 - 1) & 0xFFFFFFFD) == 0 )
  {
    v36 = anonymous_namespace_::xxxNormalizeRect_0(&v118, (const struct tagWND *)v8, (__m128i *)v7, v12, (__int64)v9, 1);
    v34 = v113;
    *v7 = *(struct tagRECT *)v36;
  }
  v37 = 0;
  if ( (_DWORD)v34 == 3 )
  {
    v38 = *a4;
    v120 = 0LL;
    v39 = CMonitorTopology::MonitorData::LogicalWorkArea(v9, &v121, (const struct tagWND *)v8);
    HIDWORD(v101) = HIDWORD(v115);
    v100 = &v113;
    v118 = v38;
    v20 = 0;
    if ( !(unsigned __int8)CallShell::xxxMigrateWindowHandler(v8, 0LL, v39, (char *)v9 + 24) )
    {
      ArrangedOptions = anonymous_namespace_::GetArrangedOptions((struct tagWND *)a4, (struct tagWND *)v8, v9);
      v53 = anonymous_namespace_::xxxNormalizeRect_0(
              (__m128i *)&v121,
              (const struct tagWND *)v8,
              a4,
              v12,
              (__int64)v9,
              ArrangedOptions | 1u);
      v37 = 0;
      *a4 = *v53;
      goto LABEL_35;
    }
    v34 = v113;
    if ( v113 != 3 )
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v46 = 0;
      }
      v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v48 = "maximized";
        if ( v113 != 1 )
          v48 = "restored";
        v49 = W32GetUserSessionState(v113, WPP_GLOBAL_Control);
        LOBYTE(v50) = v47;
        LOBYTE(v51) = v46;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v51,
          v50,
          *(_QWORD *)(v49 + 69152),
          4,
          4,
          48,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)v48);
        v34 = v113;
        v20 = 0;
      }
      a6 |= 0x10u;
      v37 = 0;
      *a4 = *(__m128i *)v7;
      goto LABEL_36;
    }
    v37 = 1;
    *(struct tagRECT *)a4 = v120;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v40 = 0;
    }
    v109 = v40;
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v111 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v41 = a4->m128i_i32[1];
      v42 = a4->m128i_i32[3];
      v43 = a4->m128i_i32[0];
      v44 = a4->m128i_i32[2];
      v45 = W32GetUserSessionState(v34, v15);
      LODWORD(v105) = v42 - v41;
      LODWORD(v104) = v44 - v43;
      LODWORD(v103) = v42;
      LODWORD(v102) = v44;
      LODWORD(v101) = v41;
      LODWORD(v100) = v43;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v109,
        v111,
        *(_QWORD *)(v45 + 69152),
        4u,
        4u,
        0x2Fu,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v37 = 1;
      v20 = 0;
LABEL_35:
      v34 = v113;
    }
  }
LABEL_36:
  v107 = 1;
  v54 = 1;
  if ( (_DWORD)v34 == 3 )
  {
    if ( !v37 )
    {
      v55 = WindowMargins::ReduceRect(
              (WindowMargins *)&v121,
              (struct tagRECT *)v8,
              (const struct tagWND *)a4,
              (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v116 + 40) + 60LL));
      v56 = *(_QWORD *)(v8 + 40);
      *a4 = *(__m128i *)v55;
      LogicalToPhysicalDPIRect(a4, a4, *(unsigned int *)(v56 + 288), 0LL);
    }
    v57 = W32GetUserSessionState(v34, v15);
    Prop = GetProp(v8, *(unsigned __int16 *)(v57 + 41374), 1u);
    if ( Prop )
      *(_DWORD *)(Prop + 16) &= 0xFFFFFFF5;
    v60 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v61 = 0;
    }
    v110 = v61;
    v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = a4->m128i_i32[1];
      v63 = a4->m128i_i32[3];
      v64 = a4->m128i_i32[0];
      v65 = a4->m128i_i32[2];
      LOBYTE(v60) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v66 = W32GetUserSessionState(v60, v59);
      LODWORD(v105) = v63 - v62;
      LODWORD(v104) = v65 - v64;
      LODWORD(v103) = v63;
      LODWORD(v102) = v65;
      LODWORD(v101) = v62;
      LODWORD(v100) = v64;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v110,
        v112,
        *(_QWORD *)(v66 + 69152),
        4u,
        4u,
        0x31u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v20 = 0;
      v54 = 1;
    }
    if ( (unsigned __int8)WindowArrangement::xxxSetSnapArrangementPos(v8, a4, 2LL, *v115) )
    {
      v69 = W32GetUserSessionState(v68, v67);
      v70 = (CHECKPOINT *)GetProp(v8, *(unsigned __int16 *)(v69 + 41374), 1u);
      if ( v70 )
        CHECKPOINT::SetNormalRect(v70, (const struct tagWND *)v8, v114, 0);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
      {
        v20 = 1;
      }
      v71 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v72 = W32GetUserSessionState(WPP_GLOBAL_Control, v67);
        LOBYTE(v73) = v71;
        LOBYTE(v74) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v74,
          v73,
          *(_QWORD *)(v72 + 69152),
          2,
          7,
          50,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v54 = 0;
      v107 = 0;
    }
  }
  else
  {
    if ( (_DWORD)v34 == 1 )
      a4 = (__m128i *)v114;
    v75 = *a4;
    WindowState = AdvancedWindowPos::GetWindowState((const struct tagWND *)v8);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v76 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v76 & 8) == 0)
      || (v79 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v79 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      v20 = 1;
    if ( v79 || v20 )
    {
      W32GetUserSessionState(v76, WPP_GLOBAL_Control);
      v80 = AdvancedWindowPos::GetStateString(WindowState);
      LOBYTE(v81) = v20;
      LOBYTE(v82) = v79;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v82,
        v81,
        v83,
        5,
        4,
        51,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        (__int64)v80);
    }
    v84 = v115;
    v123 = v113;
    v124 = a6;
    v126 = *v115;
    v122 = 0LL;
    v125 = v75;
    AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)v8, (struct tagWND *)&v122, v78);
    if ( WindowState == 3 )
      NotifyShell::ArrangementCompleted((__int64 *)v8, *v84, 2);
  }
  v85 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v86 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v21 = 0;
  if ( v86 || v21 )
  {
    v87 = *(_DWORD **)(v8 + 40);
    v88 = v87[23];
    v89 = v87[25];
    v90 = v87[22];
    v91 = v87[24];
    v92 = AdvancedWindowPos::GetWindowState((const struct tagWND *)v117.m128i_i64[0]);
    v93 = AdvancedWindowPos::GetStateString(v92);
    v96 = W32GetUserSessionState(v95, v94);
    v97 = v89 - v88;
    LOBYTE(v98) = v86;
    LOBYTE(v97) = v21;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v98,
      v97,
      *(_QWORD *)(v96 + 69152),
      5,
      4,
      52,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (__int64)v93,
      v90,
      v88,
      v91,
      v89,
      v91 - v90,
      v89 - v88);
    v54 = v107;
  }
  v99 = PtiCurrent((__int64)v85);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v99, BugCheckParameter3);
  return v54;
}
