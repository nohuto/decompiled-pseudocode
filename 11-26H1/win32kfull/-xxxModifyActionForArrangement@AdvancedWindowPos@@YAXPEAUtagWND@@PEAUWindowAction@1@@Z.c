/*
 * XREFs of ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402C8F38 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402E813C (-NormalizeArrangeRect@AdvancedWindowPos@@YA-AUtagRECT@@AEBU2@00@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

void __fastcall AdvancedWindowPos::xxxModifyActionForArrangement(
        struct tagRECT *retstr,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  char v5; // bl
  char v6; // si
  char v7; // r14
  bool v8; // r15
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct CHECKPOINT *IfValid; // rax
  struct CHECKPOINT *v14; // r14
  struct tagRECT v15; // xmm0
  __int64 v16; // r9
  CMonitorTopology *v17; // rcx
  const struct CMonitorTopology::MonitorData *v18; // r13
  char v19; // r15
  struct tagRECT v20; // xmm0
  unsigned int WindowDpiLastNotify; // r13d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int32 *v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // r15
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  char v30; // bl
  int v31; // eax
  struct tagRECT v32; // xmm6
  int v33; // eax
  LONG v34; // ecx
  char v35; // r13
  int v36; // r13d
  char v37; // bl
  bool v38; // r15
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // edx
  char v43; // al
  __int64 v44; // rdx
  char v45; // r15
  char v46; // bl
  bool v47; // r14
  __int64 v48; // rax
  int v49; // edx
  int v50; // r8d
  bool v51; // cl
  bool v52; // r12
  char v53; // bl
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  int v57; // eax
  char v58; // bl
  bool v59; // r14
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  struct tagRECT *v63; // rax
  const struct tagRECT *v64; // r9
  __m128i v65; // xmm0
  char v66; // r14
  const char *StateString; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  int v73; // eax
  int v74; // eax
  int v75; // r8d
  __int32 v76; // ecx
  __int64 v77; // rdx
  __int32 v78; // eax
  int v79; // eax
  char v80; // r14
  __int64 v81; // rax
  char v82; // di
  const char *v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  __int16 v89; // [rsp+38h] [rbp-D0h]
  __int64 v90; // [rsp+48h] [rbp-C0h]
  __int64 v91; // [rsp+50h] [rbp-B8h]
  bool v92; // [rsp+78h] [rbp-90h]
  char v93; // [rsp+79h] [rbp-8Fh]
  int v94; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v95; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v96[5]; // [rsp+84h] [rbp-84h] BYREF
  struct tagRECT v97; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT Buf1; // [rsp+B8h] [rbp-50h] BYREF
  __m128i Buf2; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v101; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v102; // [rsp+E8h] [rbp-20h] BYREF

  v5 = 0;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_QWORD *)&retstr->left;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      131,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v9);
    v5 = 0;
  }
  IfValid = CHECKPOINT::GetIfValid((struct tagWND *)retstr);
  v14 = IfValid;
  if ( IfValid )
    v15 = *(struct tagRECT *)((char *)IfValid + 20);
  else
    v15 = *(struct tagRECT *)(*(_QWORD *)&retstr[2].right + 88LL);
  v16 = *(_QWORD *)&retstr[2].right;
  v17 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
  *(struct tagRECT *)&v96[1] = v15;
  Buf1 = v15;
  v18 = CMonitorTopology::MonitorDataFromRect(v17, &Buf1, 2, *(_DWORD *)(v16 + 288));
  if ( (*((_DWORD *)a2 + 1) & 0x40000) != 0 )
  {
    v19 = 1;
LABEL_16:
    v5 = 1;
    goto LABEL_17;
  }
  v19 = 0;
  if ( (*(_DWORD *)a2 & 6) == 0 && IsArranged((const struct tagWND *)retstr) && (*(_DWORD *)a2 & 0x40) != 0 )
    goto LABEL_16;
LABEL_17:
  v101 = *(struct tagRECT *)((char *)v18 + 24);
  if ( v19 )
  {
    v20 = *(struct tagRECT *)((char *)a2 + 152);
LABEL_22:
    v101 = v20;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)a2 + 1) & 0x80u) != 0 && !v5 )
  {
    v20 = *(struct tagRECT *)((char *)a2 + 60);
    goto LABEL_22;
  }
LABEL_23:
  CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
    v18,
    &v102,
    (__m128i *)&v101,
    *(_DWORD *)(*(_QWORD *)&retstr[2].right + 288LL));
  if ( !_bittest((const signed __int32 *)a2 + 1, 8u) || v5 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)retstr);
    v96[0] = WindowDpiLastNotify;
  }
  else
  {
    WindowDpiLastNotify = *((_DWORD *)a2 + 24);
    v96[0] = WindowDpiLastNotify;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v22 = MonitorFromPoint(*(_QWORD *)((char *)a2 + 100), 2LL, 0x12u);
  }
  else
  {
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      v24 = (__int32 *)((char *)a2 + 44);
      v25 = 18;
    }
    else
    {
      v24 = &v96[1];
      v25 = *(_DWORD *)(*(_QWORD *)&retstr[2].right + 288LL);
    }
    v22 = MonitorFromRect(v24, 2LL, v25);
  }
  v26 = v22;
  *(_QWORD *)&v96[1] = v22;
  v27 = PtiCurrent(v23);
  Win32HM_LockIntoThread<1>((__int64)v27, v26, (__int64 *)BugCheckParameter3);
  v29 = *(_DWORD *)a2;
  v30 = *(_BYTE *)(*(_QWORD *)&retstr[2].right + 31LL) & 0x20;
  v31 = *(_DWORD *)a2 & 0x20;
  if ( v31 )
    v92 = *((_DWORD *)a2 + 10) == 2;
  else
    v92 = v30 != 0;
  v93 = 1;
  v32 = 0LL;
  Buf1 = 0LL;
  if ( (v29 & 6) != 0 )
  {
    v28 = *((unsigned int *)a2 + 4);
    v33 = *((_DWORD *)a2 + 1);
    Buf1.left = *((_DWORD *)a2 + 3);
    Buf1.right = *((_DWORD *)a2 + 5) + Buf1.left;
    v34 = v28 + *((_DWORD *)a2 + 6);
    Buf1.top = v28;
    Buf1.bottom = v34;
    if ( (v33 & 1) != 0 )
    {
      v32 = *WindowMargins::ExtendRect(
               &v97,
               retstr,
               (const struct tagWND *)&Buf1,
               (const struct tagRECT *)WindowDpiLastNotify);
LABEL_45:
      Buf1 = v32;
      goto LABEL_49;
    }
    v32 = Buf1;
  }
  else
  {
    if ( !v31 && v30 && v14 && (*((_DWORD *)v14 + 4) & 8) != 0 )
    {
      v32 = *(struct tagRECT *)((char *)v14 + 36);
      goto LABEL_45;
    }
    if ( IsArranged((const struct tagWND *)retstr) )
    {
      v32 = *(struct tagRECT *)(*(_QWORD *)&retstr[2].right + 88LL);
      Buf1 = v32;
    }
    else
    {
      v93 = 0;
    }
  }
LABEL_49:
  LOBYTE(v28) = v92;
  v95 = 0;
  v35 = 0;
  v94 = 3;
  Buf2 = 0LL;
  if ( v30 && !v92 && v14 && *((_BYTE *)v14 + 54) )
  {
    v36 = *((_DWORD *)v14 + 14);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v37 = 0;
    }
    v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v28);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69152),
        4,
        4,
        132,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v36,
        0);
      LOBYTE(v28) = 0;
    }
    v26 = *(_QWORD *)&v96[1];
    v95 = v36;
    v35 = 1;
    *((_BYTE *)v14 + 54) = 0;
  }
  else if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    v95 = *((_DWORD *)a2 + 33);
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
    v42 = (_BYTE)v28 != 0 ? 2 : 0;
  else
    v42 = 1;
  *(struct tagRECT *)&v96[1] = v32;
  v43 = CallShell::xxxMigrateWindowHandler(
          retstr,
          v42,
          (__int64 *)&v102.left,
          (__int64 *)&v101.left,
          v96[0],
          (struct tagWND *)&v96[1],
          v26,
          &Buf2,
          &v94,
          &v95);
  v44 = 0LL;
  if ( v43 )
  {
    v45 = 0;
    if ( !v93 && !memcmp(&Buf1, &Buf2, 0x10uLL) )
    {
      v94 = 0;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v46 = 0;
      }
      v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v46 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_105;
      v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
      v89 = 133;
      goto LABEL_104;
    }
    v51 = v92;
    if ( !v92 )
    {
      v35 = 1;
      goto LABEL_106;
    }
    if ( v14
      || (v14 = CHECKPOINT::Restore(
                  (struct tagWND *)retstr,
                  (const struct tagRECT *)(*(_QWORD *)&retstr[2].right + 88LL))) != 0LL )
    {
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      {
        v45 = 1;
      }
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v53 = v95;
        v54 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
        LOBYTE(v55) = v52;
        LOBYTE(v56) = v45;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v56,
          v55,
          *(_QWORD *)(v54 + 69152),
          4,
          4,
          134,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v53);
      }
      v57 = v95;
      v45 = 0;
      *((_BYTE *)v14 + 54) = 1;
      *((_DWORD *)v14 + 14) = v57;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v58 = 0;
    }
    v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v58 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v60 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v61) = v59;
      LOBYTE(v62) = v58;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v62,
        v61,
        *(_QWORD *)(v60 + 69152),
        4,
        4,
        135,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( !v93 )
    {
      v45 = 0;
      v94 = 0;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v46 = 0;
      }
      v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v46 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_105;
      v48 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      v89 = 136;
LABEL_104:
      LOBYTE(v50) = v47;
      LOBYTE(v49) = v46;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v50,
        *(_QWORD *)(v48 + 69152),
        4,
        4,
        v89,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      goto LABEL_105;
    }
    v63 = WindowMargins::ReduceRect(
            (WindowMargins *)&v97,
            retstr,
            (const struct tagWND *)&Buf1,
            (const struct tagRECT *)v96[0]);
    v64 = (const struct tagRECT *)(*(_QWORD *)(v26 + 40) + 44LL);
    Buf1 = *v63;
    v45 = 0;
    Buf2 = *(__m128i *)AdvancedWindowPos::NormalizeArrangeRect(&v97, &Buf1, &v101, v64);
  }
LABEL_105:
  v51 = v92;
LABEL_106:
  if ( v35 )
  {
    *(_DWORD *)a2 |= 0x400u;
    *((_DWORD *)a2 + 27) |= 2u;
    v65 = Buf2;
    *((_DWORD *)a2 + 33) = v95;
    *((__m128i *)a2 + 7) = v65;
    *((_DWORD *)a2 + 32) = 3;
  }
  *(_DWORD *)a2 |= 0x20u;
  if ( v51 )
  {
    *((_DWORD *)a2 + 10) = 2;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    {
      v45 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v66 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v66 = 0;
    }
    if ( v45 || v66 )
    {
      StateString = AdvancedWindowPos::GetStateString(v94);
      v70 = W32GetUserSessionState(v69, v68);
      LOBYTE(v71) = v66;
      LOBYTE(v72) = v45;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v72,
        v71,
        *(_QWORD *)(v70 + 69152),
        5,
        4,
        137,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        (__int64)StateString);
    }
    v73 = *((_DWORD *)a2 + 1);
    if ( v94 == 3 )
    {
      v74 = v73 | 0x40;
    }
    else if ( v94 == 1 )
    {
      v74 = v73 | 0x20;
    }
    else
    {
      v74 = v73 | 0x10;
    }
    *((_DWORD *)a2 + 1) = v74;
  }
  else
  {
    *((_DWORD *)a2 + 10) = v94;
  }
  v75 = *(_DWORD *)a2;
  if ( v94 == 3 )
  {
    v76 = Buf2.m128i_i32[0];
    v77 = Buf2.m128i_u32[1];
    v78 = Buf2.m128i_i32[2];
    *((_DWORD *)a2 + 1) |= 1u;
    *((_DWORD *)a2 + 5) = v78 - v76;
    v79 = Buf2.m128i_i32[3] - v77;
    *((_DWORD *)a2 + 3) = v76;
    *((_DWORD *)a2 + 4) = v77;
    *(_DWORD *)a2 = v75 & 0xFFFFFEF9 | 6;
    *((_DWORD *)a2 + 6) = v79;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v80 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v80 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v6 = 0;
    }
    if ( v80 || v6 )
    {
      v81 = W32GetUserSessionState(WPP_GLOBAL_Control, v77);
      LODWORD(v91) = Buf2.m128i_i32[1];
      LODWORD(v90) = Buf2.m128i_i32[0];
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v80,
        v6,
        *(_QWORD *)(v81 + 69152),
        5u,
        4u,
        0x8Au,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v90,
        v91,
        Buf2.m128i_i32[2],
        Buf2.m128i_i32[3],
        Buf2.m128i_i32[2] - Buf2.m128i_i32[0],
        Buf2.m128i_i32[3] - Buf2.m128i_i32[1]);
    }
  }
  else
  {
    *(_DWORD *)a2 = v75 & 0xFFFFFFF9;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v82 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v6 = 0;
    }
    if ( v82 || v6 )
    {
      v83 = AdvancedWindowPos::GetStateString(v94);
      v86 = W32GetUserSessionState(v85, v84);
      LOBYTE(v87) = v6;
      LOBYTE(v88) = v82;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v88,
        v87,
        *(_QWORD *)(v86 + 69152),
        5,
        4,
        139,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        (__int64)v83);
    }
  }
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3);
}
