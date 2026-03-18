/*
 * XREFs of ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229AA8 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402876C4 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140163D1C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x14022B82C (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402DB4A4 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowPos(
        AdvancedWindowPos *this,
        struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  LONG bottom; // edx
  char v5; // r12
  char v6; // bl
  int v7; // r14d
  int v8; // esi
  char v9; // r8
  AdvancedWindowPos *v10; // r13
  int v11; // r15d
  int v12; // edx
  __int64 v13; // rdx
  char v14; // di
  char v15; // bl
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // di
  char v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // si
  char v25; // di
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct MOVESIZEDATA *v30; // rcx
  char v31; // si
  bool v32; // r14
  const char *StateString; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  struct tagWND *v41; // r14
  unsigned int v42; // r8d
  char v43; // r13
  _DWORD *v44; // rax
  int v45; // r14d
  int v46; // edi
  int v47; // esi
  int v48; // ebx
  __int64 v49; // rax
  const struct tagRECT *v50; // rsi
  char v51; // di
  char v52; // bl
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  struct tagTHREADINFO *v56; // rax
  __int64 left; // rdx
  struct tagWND *v58; // rax
  char v59; // di
  char v60; // bl
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  ULONG_PTR v64; // r9
  AdvancedWindowPos *v65; // rbx
  bool v66; // r13
  _DWORD *v67; // rax
  int v68; // r15d
  int v69; // esi
  int v70; // r14d
  int v71; // edi
  int v72; // eax
  const char *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  int v79; // r15d
  char v80; // di
  struct tagMONITOR *v81; // r8
  char v82; // bl
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  char v86; // di
  char v87; // bl
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  CHECKPOINT *Prop; // rax
  struct tagMONITOR *v95; // r8
  int v96; // r15d
  int v97; // eax
  char v98; // di
  char v99; // bl
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  char v103; // di
  char v104; // bl
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  const struct tagRECT *v108; // rdx
  char v109; // di
  char v110; // bl
  LONG v111; // r14d
  LONG v112; // r13d
  __int64 v113; // rax
  struct tagMONITOR *v114; // r8
  char v115; // di
  char v116; // bl
  __int64 v117; // rax
  int v118; // r8d
  int v119; // edx
  char v120; // bl
  bool v121; // di
  __int64 v122; // rax
  int v123; // r8d
  int v124; // edx
  char v125; // di
  char v126; // bl
  const char *v127; // rax
  int v128; // r8d
  int v129; // edx
  int v130; // r9d
  __int64 *v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rbx
  char v135; // si
  char v136; // di
  __int64 v137; // rax
  int v138; // r8d
  int v139; // edx
  __int64 v140; // rdx
  __int64 v141; // [rsp+40h] [rbp-C0h]
  __int64 v142; // [rsp+48h] [rbp-B8h]
  __int64 v143; // [rsp+50h] [rbp-B0h]
  __int64 v144; // [rsp+58h] [rbp-A8h]
  __int64 v145; // [rsp+60h] [rbp-A0h]
  __int64 v146; // [rsp+68h] [rbp-98h]
  char v147; // [rsp+80h] [rbp-80h]
  char v148; // [rsp+81h] [rbp-7Fh]
  char v149; // [rsp+82h] [rbp-7Eh]
  unsigned int v150; // [rsp+84h] [rbp-7Ch]
  int v151; // [rsp+84h] [rbp-7Ch]
  char v152; // [rsp+88h] [rbp-78h]
  unsigned int WindowState; // [rsp+8Ch] [rbp-74h]
  int v154; // [rsp+90h] [rbp-70h]
  LONG right; // [rsp+A8h] [rbp-58h]
  int v158; // [rsp+ACh] [rbp-54h]
  int v159; // [rsp+B0h] [rbp-50h]
  int v160; // [rsp+B4h] [rbp-4Ch]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT v162; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v163[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v164[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v165; // [rsp+100h] [rbp+0h]
  char v166; // [rsp+104h] [rbp+4h]
  __int128 v167; // [rsp+108h] [rbp+8h]

  bottom = a2->bottom;
  v5 = 1;
  v160 = bottom & 0x10;
  v6 = bottom & 1;
  v159 = bottom & 1;
  v154 = bottom & 8;
  v7 = bottom & 2;
  v8 = bottom & 0x20;
  v9 = 0;
  v158 = v7;
  v10 = this;
  if ( (bottom & 4) != 0 || (v147 = 0, (bottom & 8) != 0) )
    v147 = 1;
  if ( (bottom & 0x40) != 0 || (v148 = 1, IsRectEmptyInl(a2 + 1)) )
    v148 = v9;
  if ( (bottom & 0x100) != 0 || (v149 = 1, IsRectEmptyInl(a2 + 1)) )
    v149 = v9;
  right = a2->right;
  if ( right == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1728LL);
  WindowState = AdvancedWindowPos::GetWindowState(v10);
  v11 = ((a2->bottom & 0x200) << 7) | 0x20;
  v12 = a2->bottom & 0x80;
  if ( !v12 )
    v11 = (a2->bottom & 0x200) << 7;
  v13 = v12 != 0 ? 1048640 : 64;
  v150 = v13;
  if ( v6 )
  {
    v11 |= 0x10u;
    v13 = (unsigned int)v13 | 0x10;
    v150 = v13;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v15 = 0;
    }
    if ( v14 || v15 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        53,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      v13 = v150;
    }
    if ( v7 )
    {
      v11 |= 0x40u;
      v13 = (unsigned int)v13 | 4;
      v150 = v13;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v19 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v20 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v20 = 0;
      }
      if ( v19 || v20 )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69152),
          5,
          4,
          54,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
  if ( v8 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v24 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v25 = 0;
    }
    if ( v24 || v25 )
    {
      v26 = *(_QWORD *)v10;
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v28) = v25;
      LOBYTE(v29) = v24;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        5,
        4,
        55,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v26);
    }
    xxxSetForegroundWindowWithOptions((__int64)v10, 31LL, 0, 0);
  }
  if ( (*((_DWORD *)v10 + 96) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptApplyWindowPos(v10, (struct tagWND *)a2, 0LL);
    return;
  }
  v30 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v31 = 0;
  }
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    StateString = AdvancedWindowPos::GetStateString(a2->right);
    v34 = *(_QWORD *)v10;
    v35 = (__int64)StateString;
    v38 = W32GetUserSessionState(v37, v36);
    LOBYTE(v39) = v32;
    LOBYTE(v40) = v31;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v40,
      v39,
      *(_QWORD *)(v38 + 69152),
      4,
      4,
      56,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v34,
      v35);
  }
  v41 = 0LL;
  BugCheckParameter3[0] = 0LL;
  if ( v147 )
  {
    if ( v148 )
      v42 = 18;
    else
      v42 = *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL);
    v41 = (struct tagWND *)MonitorFromRect(&a2[1].left, 2LL, v42);
    BugCheckParameter3[0] = (ULONG_PTR)v41;
    v30 = WPP_GLOBAL_Control;
    v43 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v152 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = (_DWORD *)*((_QWORD *)v41 + 5);
      v45 = v44[8];
      v46 = v44[10];
      v47 = v44[7];
      v48 = v44[9];
      v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LODWORD(v142) = v45;
      LODWORD(v141) = v47;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v152,
        *(_QWORD *)(v49 + 69152),
        4u,
        4u,
        0x39u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v141,
        v142,
        v48,
        v46,
        v48 - v47,
        v46 - v45);
      v41 = (struct tagWND *)BugCheckParameter3[0];
    }
    v10 = this;
  }
  v50 = 0LL;
  if ( v154 )
  {
    v50 = a2 + 1;
    v11 |= 8u;
    v30 = WPP_GLOBAL_Control;
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
      v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v51;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v55,
        v54,
        *(_QWORD *)(v53 + 69152),
        5,
        4,
        58,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  v56 = PtiCurrent((__int64)v30);
  Win32HM_LockIntoThread<1>((__int64)v56, (__int64)v41, (__int64 *)v163);
  v164[1] = v50;
  v166 = 0;
  left = (unsigned int)a2[2].left;
  v58 = 0LL;
  if ( right == 1 )
    v58 = v41;
  v164[2] = *(_QWORD *)&a2->left;
  v164[0] = v58;
  v165 = left;
  v167 = 0LL;
  if ( right == 2 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v59 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v60 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v60 = 0;
    }
    if ( v59 || v60 )
    {
      v61 = W32GetUserSessionState(WPP_GLOBAL_Control, left);
      LOBYTE(v62) = v60;
      LOBYTE(v63) = v59;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v63,
        v62,
        *(_QWORD *)(v61 + 69152),
        5,
        4,
        59,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( v158 )
      v11 |= 0x40u;
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)v10, v159 + 6, v11, (__int64)v164);
    LODWORD(v64) = 0;
  }
  else if ( right == 1 )
  {
    v79 = v11 | 2;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v80 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v80 = 0;
    }
    v81 = (struct tagMONITOR *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v82 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v82 = 0;
    }
    if ( v80 || v82 )
    {
      v83 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v84) = v82;
      LOBYTE(v85) = v80;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v85,
        v84,
        *(_QWORD *)(v83 + 69152),
        5,
        4,
        60,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      v81 = (struct tagMONITOR *)&WPP_RECORDER_INITIALIZED;
    }
    if ( v147 )
    {
      v79 |= 4u;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v86 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v87 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v87 = 0;
      }
      if ( v86 || v87 )
      {
        v88 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v89) = v87;
        LOBYTE(v90) = v86;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v90,
          v89,
          *(_QWORD *)(v88 + 69152),
          5,
          4,
          61,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      if ( !v154 )
        AdvancedWindowPos::xxxMigrateCheckpoint(v10, v41, v81);
    }
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)v10, 3u, v79, (__int64)v164);
    LODWORD(v64) = 0;
    if ( v154 )
    {
      v93 = W32GetUserSessionState(v92, v91);
      Prop = (CHECKPOINT *)GetProp((__int64)v10, *(unsigned __int16 *)(v93 + 41374), 1u);
      if ( Prop )
        CHECKPOINT::SetNormalRect(Prop, v10, v50, 0);
      AdvancedWindowPos::xxxMigrateCheckpoint(v10, v41, v95);
      LODWORD(v64) = 0;
    }
  }
  else
  {
    v96 = v11 | 0x80;
    v97 = v150 | 0x80000;
    v151 = v150 | 0x80000;
    if ( v148 )
    {
      v151 = v97 | 0x800000;
      v96 |= 0x200u;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v98 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v99 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v99 = 0;
      }
      if ( v98 || v99 )
      {
        v100 = W32GetUserSessionState(WPP_GLOBAL_Control, left);
        LOBYTE(v101) = v99;
        LOBYTE(v102) = v98;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v102,
          v101,
          *(_QWORD *)(v100 + 69152),
          5,
          4,
          62,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v97 = v151;
    }
    if ( v149 )
    {
      v151 = v97 | 0x400000;
      v96 |= 0x100u;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v103 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v103 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v104 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v104 = 0;
      }
      if ( v103 || v104 )
      {
        v105 = W32GetUserSessionState(WPP_GLOBAL_Control, left);
        LOBYTE(v106) = v104;
        LOBYTE(v107) = v103;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v107,
          v106,
          *(_QWORD *)(v105 + 69152),
          5,
          4,
          63,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    v108 = a2;
    v162 = a2[1];
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v109 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v109 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v110 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v110 = 0;
    }
    v111 = v162.bottom;
    v112 = v162.right;
    if ( v109 || v110 )
    {
      v113 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LODWORD(v146) = v162.bottom - v162.top;
      LODWORD(v145) = v162.right - v162.left;
      LODWORD(v144) = v162.bottom;
      LODWORD(v143) = v162.right;
      LODWORD(v142) = v162.top;
      LODWORD(v141) = v162.left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v109,
        v110,
        *(_QWORD *)(v113 + 69152),
        5u,
        4u,
        0x40u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      v108 = a2;
    }
    if ( WindowState )
    {
      if ( IsArranged(this) )
      {
        v96 |= 4u;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v115 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v115 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v116 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v116 = 0;
        }
        if ( v115 || v116 )
        {
          v117 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v118) = v116;
          LOBYTE(v119) = v115;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v119,
            v118,
            *(_QWORD *)(v117 + 69152),
            5,
            4,
            65,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
      }
      if ( BugCheckParameter3[0] && !v154 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v120 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v120 = 0;
        }
        v121 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v120 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v122 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v123) = v121;
          LOBYTE(v124) = v120;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v124,
            v123,
            *(_QWORD *)(v122 + 69152),
            4,
            4,
            66,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        AdvancedWindowPos::xxxMigrateCheckpoint(this, (struct tagWND *)BugCheckParameter3[0], v114);
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v125 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v125 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v126 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v126 = 0;
      }
      if ( v125 || v126 )
      {
        W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        v127 = AdvancedWindowPos::GetStateString(WindowState);
        LOBYTE(v128) = v126;
        LOBYTE(v129) = v125;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v129,
          v128,
          v130,
          5,
          4,
          67,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)v127);
      }
      anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)this, 9u, v96, (__int64)v164);
      LODWORD(v64) = 0;
      v65 = this;
      goto LABEL_98;
    }
    if ( !IsRectEmptyInl(v108 + 1) )
    {
      v132 = *v131;
      BugCheckParameter3[1] = v64;
      BugCheckParameter3[0] = -1LL;
      if ( v132 )
      {
        v133 = HMValidateHandleNoSecure(v132, 1);
        LOWORD(v64) = 0;
        v134 = v133;
        if ( v133 )
        {
          Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v133);
          LOWORD(v64) = 0;
        }
      }
      else
      {
        v134 = v64;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v135 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v135 = v64;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v136 = 1, *((_WORD *)WPP_GLOBAL_Control + 36) == (_WORD)v64) )
      {
        v136 = v64;
      }
      if ( v135 || v136 )
      {
        v137 = W32GetUserSessionState(WPP_GLOBAL_Control, v131);
        LOBYTE(v138) = v136;
        LOBYTE(v139) = v135;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v139,
          v138,
          *(_QWORD *)(v137 + 69152),
          5,
          4,
          68,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v140 = v134;
      v65 = this;
      xxxSetWindowPos(
        this,
        v140,
        (unsigned int)v162.left,
        (unsigned int)v162.top,
        v112 - v162.left,
        v111 - v162.top,
        v151);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
      LODWORD(v64) = 0;
      goto LABEL_98;
    }
  }
  v65 = this;
LABEL_98:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = v64;
  }
  v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v67 = (_DWORD *)*((_QWORD *)v65 + 5);
    v68 = v67[23];
    v69 = v67[25];
    v70 = v67[22];
    v71 = v67[24];
    v72 = AdvancedWindowPos::GetWindowState(v65);
    v73 = AdvancedWindowPos::GetStateString(v72);
    v76 = W32GetUserSessionState(v75, v74);
    LOBYTE(v77) = v66;
    LOBYTE(v78) = v5;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v78,
      v77,
      *(_QWORD *)(v76 + 69152),
      4,
      4,
      69,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (__int64)v73,
      v70,
      v68,
      v71,
      v69,
      v71 - v70,
      v69 - v68);
    LODWORD(v64) = 0;
  }
  if ( v160 != (_DWORD)v64 )
    ShellWindowPos::NotifyPosAndStateApplied(this, WindowState, &a2[1], v165);
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v163);
}
