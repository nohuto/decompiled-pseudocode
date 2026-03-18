/*
 * XREFs of CheckFullScreen @ 0x1401D954C
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RECTFromSIZERECT @ 0x1401DA308 (RECTFromSIZERECT.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1401EF25C (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     ?AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z @ 0x1402386A4 (-AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140299C30 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x1402DEC28 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall CheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2, char a3, char a4)
{
  char result; // al
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  _DWORD **v11; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  struct tagRECT v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v20; // rax
  int DpiDependentMetric; // ebx
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  struct MOVESIZEDATA *v25; // rcx
  char v26; // al
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // r9
  const char *v31; // rax
  char v32; // al
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // al
  int v37; // ebx
  int v38; // edi
  int v39; // esi
  int v40; // r14d
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rax
  __int64 v44; // rcx
  struct MOVESIZEDATA *v45; // rdx
  bool v46; // al
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // al
  char v52; // r12
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // al
  char v57; // r12
  int v58; // edi
  int v59; // ebx
  int v60; // esi
  int v61; // r14d
  __int64 v62; // rax
  int v63; // r12d
  int v64; // eax
  __int64 v65; // rdx
  char v66; // di
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r10
  char v70; // si
  bool v71; // r14
  __int64 v72; // rbx
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  char v76; // r8
  char v77; // al
  int v78; // ebx
  int v79; // edi
  int v80; // esi
  int v81; // r14d
  __int64 v82; // rax
  char v83; // di
  __int64 v84; // rax
  char v85; // si
  bool v86; // r14
  __int64 v87; // rbx
  __int64 UserSessionState; // rax
  int v89; // r8d
  int v90; // edx
  char v91; // r8
  char v92; // al
  int v93; // ebx
  int v94; // edi
  int v95; // esi
  int v96; // r14d
  __int64 v97; // rax
  char v98; // di
  __int64 v99; // rax
  __int64 v100; // [rsp+40h] [rbp-49h]
  __int64 v101; // [rsp+48h] [rbp-41h]
  __int64 v102; // [rsp+50h] [rbp-39h]
  __int64 v103; // [rsp+58h] [rbp-31h]
  __int64 v104; // [rsp+60h] [rbp-29h]
  __int64 v105; // [rsp+68h] [rbp-21h]
  unsigned __int8 v106; // [rsp+70h] [rbp-19h]
  char v107; // [rsp+70h] [rbp-19h]
  char v108; // [rsp+70h] [rbp-19h]
  char v109; // [rsp+70h] [rbp-19h]
  bool v110; // [rsp+71h] [rbp-18h]
  char v111; // [rsp+71h] [rbp-18h]
  char v112; // [rsp+71h] [rbp-18h]
  char v113; // [rsp+71h] [rbp-18h]
  bool v114; // [rsp+71h] [rbp-18h]
  char v115; // [rsp+71h] [rbp-18h]
  char v116; // [rsp+71h] [rbp-18h]
  char v117; // [rsp+74h] [rbp-15h]
  int WindowBordersWithDpiAwareness; // [rsp+74h] [rbp-15h]
  int v119; // [rsp+74h] [rbp-15h]
  int v120; // [rsp+78h] [rbp-11h]
  struct tagRECT v121; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v122; // [rsp+90h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter3[8]; // [rsp+A0h] [rbp+17h] BYREF
  char v124; // [rsp+100h] [rbp+77h]
  bool v125; // [rsp+100h] [rbp+77h]
  char v126; // [rsp+100h] [rbp+77h]
  char v127; // [rsp+100h] [rbp+77h]
  int v128; // [rsp+100h] [rbp+77h]
  char v129; // [rsp+100h] [rbp+77h]
  char v130; // [rsp+100h] [rbp+77h]

  v121 = 0LL;
  if ( (a3 & 0x23) != 0x23 || (result = DesktopRecalc::WindowHasPendingRecalc(a1, a2)) == 0 )
  {
    v7 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
    v10 = 1;
    v11 = *(_DWORD ***)(W32GetUserSessionState(v9, v8) + 56968);
    if ( **v11 <= 1u )
      goto LABEL_9;
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
    GetScreenRectForDpi((__m128i *)&v122, (WindowCompositedDpiContext >> 8) & 0x1FF);
    if ( *(_DWORD *)a2 > v122.left
      || *((_DWORD *)a2 + 1) > v122.top
      || (result = LOBYTE(v122.right) - LOBYTE(v122.left), *((_DWORD *)a2 + 2) < v122.right - v122.left)
      || *((_DWORD *)a2 + 3) < v122.bottom - v122.top )
    {
      RECTFromSIZERECT(&v121, a2);
      v7 = MonitorFromRect(&v121.left, 1LL, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
LABEL_9:
      v13 = PtiCurrent((__int64)v11);
      Win32HM_LockIntoThread<0>((__int64)v13, v7, BugCheckParameter3);
      v122 = *(struct tagRECT *)GetMonitorWorkRectForWindow(&v122, v7, a1);
      if ( !(unsigned int)IsMaxedRect(&v122, a2) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
          SetOrClrWF(0, a1, 0x340u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v85 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v85 = 0;
          }
          v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v85 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v87 = *(_QWORD *)a1;
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v14);
            LOBYTE(v89) = v86;
            LOBYTE(v90) = v85;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v90,
              v89,
              *(_QWORD *)(UserSessionState + 69152),
              4,
              4,
              31,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v87);
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v91 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v91 = 0;
          }
          v116 = v91;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v92 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v92 = 0;
          }
          v130 = v92;
          if ( v91 || v92 )
          {
            v93 = *((_DWORD *)a2 + 3);
            v94 = *((_DWORD *)a2 + 2);
            v95 = *((_DWORD *)a2 + 1);
            v96 = *(_DWORD *)a2;
            v97 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LODWORD(v100) = v96;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v116,
              v130,
              *(_QWORD *)(v97 + 69152),
              5u,
              4u,
              0x20u,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v100,
              v95,
              v94 + v96,
              v93 + v95,
              v94,
              v93);
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v98 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v10 = 0;
          }
          if ( v98 || v10 )
          {
            v99 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LODWORD(v105) = v122.bottom - v122.top;
            LODWORD(v104) = v122.right - v122.left;
            LODWORD(v103) = v122.bottom;
            LODWORD(v102) = v122.right;
            LODWORD(v101) = v122.top;
            LODWORD(v100) = v122.left;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v98,
              v10,
              *(_QWORD *)(v99 + 69152),
              5u,
              4u,
              0x21u,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v100,
              v101,
              v102,
              v103,
              v104,
              v105);
          }
        }
        SetOrClrWF(0, a1, 0x440u, 0);
        return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
      }
      v15 = (struct tagRECT)*GetMonitorRectForWindow((__m128i *)&v121, v7, a1);
      v16 = *((_QWORD *)a1 + 5);
      v121 = v15;
      if ( (*(_BYTE *)(v16 + 31) & 1) != 0 )
        SetOrClrWF(1, a1, 0x340u, 1);
      v17 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v17 + 31) & 1) == 0 || (((*(_BYTE *)(v17 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v17 + 30)) == 0 )
      {
        if ( !(unsigned int)IsMaxedRect(&v121, a2) )
          return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
        if ( (*(_BYTE *)(v69 + 20) & 0x40) == 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v70 = 0;
          }
          v71 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v70 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v72 = *(_QWORD *)a1;
            v73 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v68);
            LOBYTE(v74) = v71;
            LOBYTE(v75) = v70;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v75,
              v74,
              *(_QWORD *)(v73 + 69152),
              4,
              4,
              28,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v72);
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v76 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v76 = 0;
          }
          v115 = v76;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v77 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v77 = 0;
          }
          v129 = v77;
          if ( v76 || v77 )
          {
            v78 = *((_DWORD *)a2 + 3);
            v79 = *((_DWORD *)a2 + 2);
            v80 = *((_DWORD *)a2 + 1);
            v81 = *(_DWORD *)a2;
            v82 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LODWORD(v100) = v81;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v115,
              v129,
              *(_QWORD *)(v82 + 69152),
              5u,
              4u,
              0x1Du,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v100,
              v80,
              v79 + v81,
              v78 + v80,
              v79,
              v78);
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v83 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v83 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            v10 = 0;
          }
          if ( v83 || v10 )
          {
            v84 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
            LODWORD(v105) = v121.bottom - v121.top;
            LODWORD(v104) = v121.right - v121.left;
            LODWORD(v103) = v121.bottom;
            LODWORD(v102) = v121.right;
            LODWORD(v101) = v121.top;
            LODWORD(v100) = v121.left;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v83,
              v10,
              *(_QWORD *)(v84 + 69152),
              5u,
              4u,
              0x1Eu,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v100,
              v101,
              v102,
              v103,
              v104,
              v105);
          }
        }
LABEL_144:
        AddWFFULLSCREEN(a1);
        return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
      }
      v18 = *(_DWORD *)(v17 + 288) & 0xF;
      if ( v18 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v17 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v17 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v18
             && (v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
      }
      DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
      v117 = DpiDependentMetric;
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( *(_DWORD *)a2 <= v121.left && *((_DWORD *)a2 + 2) + *(_DWORD *)a2 >= v121.right )
        {
          v24 = *((_DWORD *)a2 + 1);
          if ( v24 + DpiDependentMetric <= v121.top )
          {
            LOBYTE(v22) = 1;
            if ( *((_DWORD *)a2 + 3) + v24 >= v121.bottom )
            {
LABEL_34:
              v124 = v22;
              if ( (_BYTE)v22 == ((~*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0) )
              {
                v25 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                {
                  v26 = 0;
                }
                v106 = v26;
                v110 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v27 = *(_QWORD *)a1;
                  LOBYTE(v25) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  v28 = W32GetUserSessionState(v25, v22);
                  LOBYTE(v29) = v110;
                  v30 = *(_QWORD *)(v28 + 69152);
                  v31 = "Setting";
                  if ( !v124 )
                    v31 = "Clearing";
                  WPP_RECORDER_AND_TRACE_SF_sq(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v106,
                    v29,
                    v30,
                    4,
                    4,
                    20,
                    (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                    (__int64)v31,
                    v27);
                }
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (LOBYTE(v22) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  LOBYTE(v22) = 0;
                }
                v111 = v22;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v32 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                {
                  v32 = 0;
                }
                v107 = v32;
                if ( (_BYTE)v22 || v32 )
                {
                  v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
                  LOBYTE(v34) = v107;
                  LOBYTE(v35) = v111;
                  WPP_RECORDER_AND_TRACE_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v35,
                    v34,
                    *(_QWORD *)(v33 + 69152),
                    5,
                    4,
                    21,
                    (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                    v117);
                }
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (LOBYTE(v22) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  LOBYTE(v22) = 0;
                }
                v108 = v22;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v36 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                {
                  v36 = 0;
                }
                v112 = v36;
                if ( (_BYTE)v22 || v36 )
                {
                  v37 = *((_DWORD *)a2 + 3);
                  v38 = *((_DWORD *)a2 + 2);
                  v39 = *((_DWORD *)a2 + 1);
                  v40 = *(_DWORD *)a2;
                  v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
                  LODWORD(v101) = v39;
                  LODWORD(v100) = v40;
                  WPP_RECORDER_AND_TRACE_SF_dddddd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v108,
                    v112,
                    *(_QWORD *)(v41 + 69152),
                    5u,
                    4u,
                    0x16u,
                    (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                    v100,
                    v101,
                    v38 + v40,
                    v37 + v39,
                    v38,
                    v37);
                }
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                  || (LOBYTE(v22) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  LOBYTE(v22) = 0;
                }
                v109 = v22;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                {
                  v42 = 0;
                }
                v113 = v42;
                if ( (_BYTE)v22 || v42 )
                {
                  v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
                  LODWORD(v105) = v121.bottom - v121.top;
                  LODWORD(v104) = v121.right - v121.left;
                  LODWORD(v103) = v121.bottom;
                  LODWORD(v102) = v121.right;
                  LODWORD(v101) = v121.top;
                  LODWORD(v100) = v121.left;
                  WPP_RECORDER_AND_TRACE_SF_dddddd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v109,
                    v113,
                    *(_QWORD *)(v43 + 69152),
                    5u,
                    4u,
                    0x17u,
                    (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                    v100,
                    v101,
                    v102,
                    v103,
                    v104,
                    v105);
                }
                LOBYTE(v22) = v124;
              }
              if ( !(_BYTE)v22 )
              {
                SetOrClrWF(0, a1, 0x440u, 0);
                if ( a4 )
                {
                  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, 0LL, 0, 0);
                  v45 = WPP_GLOBAL_Control;
                  v46 = 0;
                  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
                  {
                    v44 = *((unsigned int *)WPP_GLOBAL_Control + 11);
                    if ( (v44 & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
                      v46 = 1;
                  }
                  v125 = v46;
                  v114 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v47 = *(_QWORD *)a1;
                    LOBYTE(v44) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    v48 = W32GetUserSessionState(v44, WPP_GLOBAL_Control);
                    LOBYTE(v49) = v114;
                    LOBYTE(v50) = v125;
                    WPP_RECORDER_AND_TRACE_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v50,
                      v49,
                      *(_QWORD *)(v48 + 69152),
                      4,
                      4,
                      24,
                      (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                      v47);
                  }
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                    || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                  {
                    v51 = 0;
                  }
                  v126 = v51;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (v52 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                  {
                    v52 = 0;
                  }
                  if ( v51 || v52 )
                  {
                    v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
                    LOBYTE(v54) = v52;
                    LOBYTE(v55) = v126;
                    WPP_RECORDER_AND_TRACE_SF_d(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v55,
                      v54,
                      *(_QWORD *)(v53 + 69152),
                      5,
                      4,
                      25,
                      (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                      WindowBordersWithDpiAwareness);
                  }
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                    || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                  {
                    v56 = 0;
                  }
                  v127 = v56;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (v57 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                  {
                    v57 = 0;
                  }
                  if ( v56 || v57 )
                  {
                    v58 = *((_DWORD *)a2 + 3);
                    v59 = *((_DWORD *)a2 + 2);
                    v60 = *((_DWORD *)a2 + 1);
                    v61 = *(_DWORD *)a2;
                    v62 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
                    LODWORD(v105) = v58;
                    LODWORD(v104) = v59;
                    LODWORD(v103) = v58 + v60;
                    LODWORD(v102) = v59 + v61;
                    LODWORD(v101) = v60;
                    LODWORD(v100) = v61;
                    WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v127,
                      v57,
                      *(_QWORD *)(v62 + 69152),
                      5u,
                      4u,
                      0x1Au,
                      (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105);
                  }
                  v63 = v122.left - WindowBordersWithDpiAwareness;
                  v64 = v122.top - WindowBordersWithDpiAwareness;
                  *(_DWORD *)a2 = v122.left - WindowBordersWithDpiAwareness;
                  v128 = v64;
                  *((_DWORD *)a2 + 1) = v64;
                  v65 = (unsigned int)(2 * WindowBordersWithDpiAwareness - v122.top);
                  v120 = 2 * WindowBordersWithDpiAwareness - v122.left + v122.right;
                  *((_DWORD *)a2 + 2) = v120;
                  v119 = v65 + v122.bottom;
                  *((_DWORD *)a2 + 3) = v65 + v122.bottom;
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                    || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                  {
                    v66 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    v10 = 0;
                  }
                  if ( v66 || v10 )
                  {
                    v67 = W32GetUserSessionState(WPP_GLOBAL_Control, v65);
                    LODWORD(v105) = v119;
                    LODWORD(v104) = v120;
                    LODWORD(v103) = v119 + v128;
                    LODWORD(v102) = v120 + v63;
                    LODWORD(v101) = v128;
                    LODWORD(v100) = v63;
                    WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v66,
                      v10,
                      *(_QWORD *)(v67 + 69152),
                      5u,
                      4u,
                      0x1Bu,
                      (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105);
                  }
                }
                return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
              }
              goto LABEL_144;
            }
          }
        }
      }
      else
      {
        v22 = *(unsigned int *)a2;
        if ( (int)v22 + DpiDependentMetric <= v121.right && (int)v22 + *((_DWORD *)a2 + 2) >= v121.right )
        {
          v23 = *((_DWORD *)a2 + 1);
          if ( v23 + DpiDependentMetric <= v121.top && *((_DWORD *)a2 + 3) + v23 >= v121.bottom )
          {
            LOBYTE(v22) = 1;
            goto LABEL_34;
          }
        }
      }
      LOBYTE(v22) = 0;
      goto LABEL_34;
    }
  }
  return result;
}
