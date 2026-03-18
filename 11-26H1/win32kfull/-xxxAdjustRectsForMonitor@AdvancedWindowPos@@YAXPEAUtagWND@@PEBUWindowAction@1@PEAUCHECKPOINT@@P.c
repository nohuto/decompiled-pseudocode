/*
 * XREFs of ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402E9F0C
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402C8F38 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall AdvancedWindowPos::xxxAdjustRectsForMonitor(
        struct tagRECT *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v7; // rdx
  CMonitorTopology *v8; // rcx
  const struct CMonitorTopology::MonitorData *v9; // rax
  __int64 v10; // rcx
  char v11; // r15
  bool v12; // r14
  char v13; // si
  int v14; // ebx
  int v15; // edi
  __int64 UserSessionState; // rax
  int v17; // edx
  int v18; // r8d
  LONG v19; // eax
  CMonitorTopology *v20; // rcx
  const struct CMonitorTopology::MonitorData *v21; // r9
  int v22; // ebx
  int v23; // edi
  __int64 v24; // r9
  int v25; // ebx
  int v26; // edi
  struct tagWND *v27; // rsi
  __int128 v28; // xmm7
  char v29; // di
  char v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int128 v34; // xmm6
  bool v35; // di
  char v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  struct tagRECT *v40; // r14
  unsigned int WindowDpiLastNotify; // r14d
  char v42; // di
  char v43; // bl
  __int64 v44; // rax
  int v45; // edx
  int v46; // r8d
  bool v47; // di
  char v48; // bl
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int16 v52; // si
  char v53; // di
  char v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  struct tagRECT *v58; // rdx
  bool v59; // di
  __int64 v60; // rcx
  __int16 v61; // r8
  char v62; // bl
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // ebx
  struct tagRECT *v68; // rax
  char v69; // r13
  char v70; // r12
  __int64 v71; // rax
  unsigned int v72; // r9d
  struct tagRECT *v73; // rbx
  char v74; // r13
  char v75; // r12
  __int64 v76; // rax
  int v77; // edi
  bool v78; // si
  char v79; // bl
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int64 v83; // r9
  const char *v84; // rax
  __int64 v85; // rbx
  struct tagRECT *v86; // rdi
  struct tagRECT v87; // xmm0
  struct tagRECT *v88; // rax
  struct CMonitorTopology::MonitorData *v89; // [rsp+28h] [rbp-D8h]
  bool v90; // [rsp+30h] [rbp-D0h]
  __int16 v91; // [rsp+30h] [rbp-D0h]
  __int16 v92; // [rsp+30h] [rbp-D0h]
  char v93; // [rsp+40h] [rbp-C0h]
  char v94; // [rsp+40h] [rbp-C0h]
  char v95; // [rsp+48h] [rbp-B8h]
  struct tagRECT v96; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v97; // [rsp+80h] [rbp-80h]
  const struct AdvancedWindowPos::WindowAction *v98; // [rsp+88h] [rbp-78h]
  struct tagWND *v99; // [rsp+90h] [rbp-70h]
  struct tagRECT *v100; // [rsp+98h] [rbp-68h]
  struct tagRECT *v101; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v102; // [rsp+A8h] [rbp-58h]
  struct tagRECT v103; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v104[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v105; // [rsp+C8h] [rbp-38h]
  __int128 v106; // [rsp+D8h] [rbp-28h]
  __int16 v107; // [rsp+E8h] [rbp-18h]
  unsigned int v108; // [rsp+100h] [rbp+0h]

  v101 = this;
  v100 = a5;
  v99 = a2;
  v7 = 2LL;
  v97 = a6;
  v102 = a4;
  v98 = a3;
  if ( a4 )
  {
    v8 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
    v96 = *a4;
    v9 = CMonitorTopology::MonitorDataFromRect(v8, &v96, 2, 0x12u);
    *(_QWORD *)&v96.left = v9;
    v7 = (__int64)WPP_GLOBAL_Control;
    v11 = 1;
    v12 = 0;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      v10 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v10 & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
        v12 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v13 = 0;
    }
    if ( v12 || v13 )
    {
      v14 = *((_DWORD *)v9 + 7);
      v15 = *((_DWORD *)v9 + 6);
      UserSessionState = W32GetUserSessionState(v10, WPP_GLOBAL_Control);
      v95 = v14;
      v93 = v15;
      v91 = 94;
LABEL_36:
      LOBYTE(v18) = v13;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v18,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        v91,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v93,
        v95);
    }
  }
  else if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v19 = *((_DWORD *)a2 + 25);
    v96.top = *((_DWORD *)a2 + 26);
    v96.bottom = v96.top;
    v20 = (CMonitorTopology *)*((_QWORD *)a2 + 21);
    v96.left = v19;
    v96.right = v19;
    v21 = CMonitorTopology::MonitorDataFromRect(v20, &v96, 2, 0x12u);
    *(_QWORD *)&v96.left = v21;
    v11 = 1;
    v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v13 = 0;
    }
    if ( v12 || v13 )
    {
      v22 = *((_DWORD *)v21 + 7);
      v23 = *((_DWORD *)v21 + 6);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      v95 = v22;
      v93 = v23;
      v91 = 95;
      goto LABEL_36;
    }
  }
  else
  {
    v24 = *(_QWORD *)&a6->left;
    *(_QWORD *)&v96.left = *(_QWORD *)&a6->left;
    v11 = 1;
    v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v13 = 0;
    }
    if ( v12 || v13 )
    {
      v25 = *(_DWORD *)(v24 + 28);
      v26 = *(_DWORD *)(v24 + 24);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 2LL);
      v95 = v25;
      v93 = v26;
      v91 = 96;
      goto LABEL_36;
    }
  }
  v27 = v99;
  if ( (*((_DWORD *)v99 + 1) & 0x80u) == 0 )
  {
    v40 = v97;
    v28 = *(_OWORD *)(*(_QWORD *)&v97->left + 24LL);
    v34 = *(_OWORD *)(*(_QWORD *)&v97->left + 8LL);
    v47 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v48 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v48 = 0;
    }
    if ( v47 || v48 )
    {
      v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 69152),
        5,
        4,
        99,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  else
  {
    v28 = *(_OWORD *)((char *)v99 + 60);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v29 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v30 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v30 = 0;
    }
    if ( v29 || v30 )
    {
      v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69152),
        5,
        4,
        97,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (*((_DWORD *)v27 + 1) & 0x4000) != 0 )
    {
      v34 = *(_OWORD *)((char *)v27 + 76);
      v35 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v36 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v36 = 0;
      }
      if ( v35 || v36 )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69152),
          5,
          4,
          98,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    else
    {
      v34 = v28;
    }
    v40 = v97;
  }
  if ( (*((_DWORD *)v27 + 1) & 0x100) != 0 )
  {
    WindowDpiLastNotify = *((_DWORD *)v27 + 24);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v42 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v43 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v43 = 0;
    }
    if ( v42 || v43 )
    {
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      v94 = WindowDpiLastNotify;
      v92 = 100;
LABEL_95:
      LOBYTE(v46) = v43;
      LOBYTE(v45) = v42;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v46,
        *(_QWORD *)(v44 + 69152),
        5,
        4,
        v92,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v94);
    }
  }
  else if ( (*(_DWORD *)v27 & 0x40) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)&v40->left + 40LL);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v42 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v43 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v43 = 0;
    }
    if ( v42 || v43 )
    {
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      v94 = WindowDpiLastNotify;
      v92 = 101;
      goto LABEL_95;
    }
  }
  else if ( v98 && (v52 = *((_WORD *)v98 + 26)) != 0 )
  {
    WindowDpiLastNotify = *((unsigned __int16 *)v98 + 26);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v53 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v54 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v54 = 0;
    }
    if ( v53 || v54 )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69152),
        5,
        4,
        102,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v52);
    }
  }
  else
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v101);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v60 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v60 & 8) == 0)
      || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v42 = v61;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v43 = 1, *((_WORD *)WPP_GLOBAL_Control + 36) == v61) )
    {
      v43 = v61;
    }
    if ( v42 || v43 )
    {
      v44 = W32GetUserSessionState(v60, WPP_GLOBAL_Control);
      v94 = WindowDpiLastNotify;
      v92 = 103;
      goto LABEL_95;
    }
  }
  memset_0(v104, 0, 0x48uLL);
  v105 = v34;
  v107 = WindowDpiLastNotify;
  v106 = v28;
  if ( (*((_DWORD *)v99 + 1) & 0x8000) != 0 )
  {
    v108 = *((_DWORD *)v99 + 23);
    v59 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v62 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v62 = 0;
    }
    if ( v59 || v62 )
    {
      v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v58);
      LOBYTE(v64) = v62;
      LOBYTE(v65) = v59;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v65,
        v64,
        *(_QWORD *)(v63 + 69152),
        5,
        4,
        104,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  else
  {
    v66 = *(_DWORD *)(*(_QWORD *)&v96.left + 64LL);
    if ( WindowDpiLastNotify < v66 )
      v66 = WindowDpiLastNotify;
    v108 = v66;
  }
  v67 = *(_DWORD *)(*(_QWORD *)&v101[2].right + 288LL);
  LODWORD(v98) = v67;
  if ( (v67 & 0xF) != 2 )
  {
    v68 = CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
            (CMonitorTopology::MonitorData *)v104,
            &v103,
            (__m128i *)v100,
            v67);
    v58 = v100;
    *v100 = *v68;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v69 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v69 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v70 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v70 = 0;
    }
    if ( v69 || v70 )
    {
      v71 = W32GetUserSessionState(WPP_GLOBAL_Control, v58);
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v69,
        v70,
        *(_QWORD *)(v71 + 69152),
        5u,
        4u,
        0x69u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      v67 = (unsigned int)v98;
    }
    if ( v102 )
    {
      v72 = v67;
      v73 = v102;
      *v73 = *CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
                *(CMonitorTopology::MonitorData **)&v96.left,
                &v103,
                (__m128i *)v102,
                v72);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v74 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v75 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v75 = 0;
      }
      if ( v74 || v75 )
      {
        v76 = W32GetUserSessionState(WPP_GLOBAL_Control, v58);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v74,
          v75,
          *(_QWORD *)(v76 + 69152),
          5u,
          4u,
          0x6Au,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
  v77 = *(_DWORD *)v99 & 0x80;
  v78 = v77 != 0;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v79 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v79 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( v79 || v11 )
  {
    v80 = W32GetUserSessionState(WPP_GLOBAL_Control, v58);
    LOBYTE(v81) = v11;
    LOBYTE(v82) = v79;
    v83 = *(_QWORD *)(v80 + 69152);
    v84 = "true";
    if ( !v77 )
      v84 = "false";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v82,
      v81,
      v83,
      5,
      4,
      107,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      (__int64)v84);
  }
  v85 = *(_QWORD *)&v96.left;
  v86 = v100;
  LOBYTE(v89) = v78;
  v87 = *AdvancedWindowPos::xxxTransformRectToMonitor(
           (AdvancedWindowPos *)&v103,
           v101,
           (struct tagWND *)v100,
           *(const struct tagRECT **)&v96.left,
           (const struct CMonitorTopology::MonitorData *)v104,
           v89,
           v90);
  v88 = v97;
  *v86 = v87;
  *(_QWORD *)&v88->left = v85;
}
