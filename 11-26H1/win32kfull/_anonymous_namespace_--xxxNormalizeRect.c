/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 * Callees:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1401620BC (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x140162230 (_anonymous_namespace_--FitRectToWorkArea.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x1401631E0 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402DAF4C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402EE140 (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 */

__m128i *__fastcall anonymous_namespace_::xxxNormalizeRect(
        __m128i *a1,
        struct tagWND *a2,
        __m128i *a3,
        __m128i *a4,
        __int32 *a5,
        unsigned __int16 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rdi
  __m128i *v9; // rsi
  struct tagWND *v10; // r14
  char v11; // r12
  char v12; // al
  char v13; // r13
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 Prop; // rbx
  __m128i v21; // xmm0
  __m128i v22; // xmm6
  __int64 v23; // rdx
  unsigned __int16 v24; // cx
  __int32 v25; // r13d
  int v26; // r15d
  int v27; // ebx
  bool v28; // zf
  int v29; // esi
  char v30; // r14
  int v31; // r14d
  char v32; // si
  char v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int16 v37; // cx
  unsigned __int16 v38; // r9
  char v39; // r15
  char v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rdx
  char v45; // di
  char v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int v50; // ebx
  INT v51; // edi
  INT v52; // r13d
  INT v53; // eax
  char v54; // di
  char v55; // bl
  __int64 v56; // rax
  int v57; // r15d
  __m128i v58; // xmm6
  int WindowBordersWithDpiAwareness; // eax
  char v60; // r15
  char v61; // di
  char v62; // si
  __int32 v63; // ebx
  char v64; // r14
  bool v65; // r13
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __m128i *result; // rax
  __int64 WindowMargins; // rax
  int v71; // r15d
  int v72; // ebx
  __int32 v73; // edi
  int v74; // esi
  int v75; // r14d
  int v76; // r9d
  __int32 v77; // r8d
  int v78; // edx
  int v79; // r11d
  __int64 v80; // r8
  int v81; // r13d
  char v82; // al
  char v83; // r15
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  unsigned __int64 v87; // rdx
  char v88; // al
  char v89; // si
  __int64 v90; // rax
  int v91; // edx
  int v92; // r8d
  char v93; // al
  char v94; // r13
  __int64 v95; // rax
  int v96; // edx
  int v97; // r8d
  char v98; // r13
  char v99; // r14
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  char v103; // r13
  char v104; // r15
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  struct tagWND *v108; // r15
  __int64 v109; // rax
  __int32 v110; // edi
  __int32 v111; // r10d
  int v112; // ebx
  int v113; // r8d
  int v114; // r11d
  int v115; // esi
  int v116; // edx
  int v117; // r9d
  __int32 *v118; // r14
  bool v119; // di
  char v120; // bl
  __int64 v121; // rax
  int v122; // r8d
  int v123; // edx
  int v124; // [rsp+28h] [rbp-E0h]
  char v125; // [rsp+88h] [rbp-80h]
  unsigned __int16 v126; // [rsp+88h] [rbp-80h]
  char v127; // [rsp+88h] [rbp-80h]
  char v128; // [rsp+88h] [rbp-80h]
  char v129; // [rsp+88h] [rbp-80h]
  __int16 WindowDpiLastNotify; // [rsp+8Ch] [rbp-7Ch]
  INT v131; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v132; // [rsp+8Ch] [rbp-7Ch]
  int v133; // [rsp+90h] [rbp-78h]
  int v134; // [rsp+90h] [rbp-78h]
  __m128i v135; // [rsp+98h] [rbp-70h] BYREF
  __int64 v136; // [rsp+A8h] [rbp-60h]
  struct tagWND *v137; // [rsp+B8h] [rbp-50h]
  __m128i v138; // [rsp+C8h] [rbp-40h] BYREF
  __int32 *v139; // [rsp+D8h] [rbp-30h]
  __m128i *v140; // [rsp+E0h] [rbp-28h]
  bool v141[16]; // [rsp+E8h] [rbp-20h] BYREF
  __m128i *v142; // [rsp+F8h] [rbp-10h]
  __m128i *v143; // [rsp+100h] [rbp-8h]

  v8 = a7;
  v9 = a3;
  v10 = a2;
  v139 = a5;
  v142 = a4;
  v140 = a3;
  v137 = a2;
  v143 = a1;
  v136 = a7;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v12 = 0;
  }
  v125 = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v137);
    LOBYTE(v15) = v125;
    LOBYTE(v16) = v13;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69152));
    v8 = v136;
    v9 = v140;
    v10 = v137;
  }
  *(__m128i *)v141 = *CalculateLogicalMonitorRect(
                        (__m128i *)v141,
                        (__m128i *)(v8 + 8),
                        *(_WORD *)(v8 + 40),
                        (*(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL) >> 8) & 0x1FF,
                        *(_WORD *)(v8 + 64));
  WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v10);
  v19 = W32GetUserSessionState(v18, v17);
  Prop = GetProp((__int64)v10, *(unsigned __int16 *)(v19 + 41374), 1u);
  if ( Prop && HasValidCheckpointPosition(v10) )
    v21 = *(__m128i *)(Prop + 20);
  else
    v21 = *(__m128i *)(*((_QWORD *)v10 + 5) + 88LL);
  v22 = *v9;
  v23 = *((_QWORD *)v10 + 5);
  v24 = *(_WORD *)(v8 + 40);
  v135 = v21;
  v25 = v21.m128i_i32[2] - v21.m128i_i32[0];
  v26 = _mm_cvtsi128_si32(v22);
  v27 = v21.m128i_i32[3] - v21.m128i_i32[1];
  v28 = (*(_BYTE *)(v23 + 30) & 4) == 0;
  v133 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  v126 = v24;
  v138 = v22;
  LODWORD(v136) = v26;
  if ( v28 )
  {
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v30 = v29 - v26;
    if ( v29 - v26 == v25 && _mm_srli_si128(v22, 8).m128i_i32[1] - v22.m128i_i32[1] == v27 )
    {
      v31 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v32 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v33 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v33 = 0;
      }
      if ( v32 || v33 )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 69152),
          5,
          4,
          14,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v30,
          v138.m128i_i8[12] - v133,
          v25,
          v27);
      }
      v29 = v26 + v25;
      v31 = v27 + v133;
      v138.m128i_i32[3] = v27 + v133;
      v138.m128i_i32[2] = v26 + v25;
      v22.m128i_i64[0] = v138.m128i_i64[0];
      v23 = *((_QWORD *)v137 + 5);
    }
    v37 = WindowDpiLastNotify;
    v126 = WindowDpiLastNotify;
  }
  else
  {
    v37 = WindowDpiLastNotify;
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
  }
  v38 = a6;
  if ( (*(_DWORD *)(v23 + 288) & 0xF) != 2 )
    goto LABEL_70;
  if ( v37 != a6 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v39 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v40 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v40 = 0;
    }
    if ( v39 || v40 )
    {
      v41 = W32GetUserSessionState(WPP_GLOBAL_Control, 2LL);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 69152),
        5,
        4,
        15,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        WindowDpiLastNotify,
        a6);
    }
    v26 = v136;
    v135.m128i_i64[0] = v22.m128i_i64[0];
    v135.m128i_i32[2] = v136 + v25;
    v135.m128i_i32[3] = v27 + v22.m128i_i32[1];
    if ( (unsigned int)xxxAppAdjustDpiCandidateRect(v137, a6, &v135, &v135) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v45 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v46 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v46 = 0;
      }
      if ( v45 || v46 )
      {
        v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v45;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v48,
          *(_QWORD *)(v47 + 69152),
          5,
          4,
          16,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v29 - v26,
          v31 - v133,
          v135.m128i_i8[8] - v135.m128i_i8[0],
          v135.m128i_i8[12] - v135.m128i_i8[4]);
      }
      v29 = v26 + v135.m128i_i32[2] - v135.m128i_i32[0];
      v50 = v133;
      v31 = v133 + v135.m128i_i32[3] - v135.m128i_i32[1];
      v38 = a6;
      goto LABEL_71;
    }
    v38 = a6;
  }
  if ( v126 == v38 )
  {
LABEL_70:
    v50 = v133;
    goto LABEL_71;
  }
  v51 = v38;
  v52 = EngMulDiv(v29 - v26, v38, v126);
  v53 = EngMulDiv(v31 - v133, v51, v126);
  v131 = v53;
  v54 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v55 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v55 = 0;
  }
  if ( v54 || v55 )
  {
    v56 = W32GetUserSessionState(0LL, WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v55,
      *(_QWORD *)(v56 + 69152),
      5u,
      4u,
      0x11u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    v53 = v131;
  }
  v50 = v133;
  v29 = v26 + v52;
  v38 = a6;
  v31 = v53 + v133;
LABEL_71:
  v57 = *(_DWORD *)&v141[12];
  if ( v140->m128i_i32[0] <= *(int *)v141
    && v140->m128i_i32[1] <= *(int *)&v141[4]
    && v140->m128i_i32[2] >= *(int *)&v141[8]
    && v140->m128i_i32[3] >= *(int *)&v141[12] )
  {
    v135 = *v142;
    v58 = v135;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(v137, *(unsigned int *)&v141[4], 0, 0);
    v60 = WindowBordersWithDpiAwareness;
    v61 = WindowBordersWithDpiAwareness + v135.m128i_i8[8];
    v62 = v135.m128i_i8[4] - WindowBordersWithDpiAwareness;
    v135.m128i_i32[2] += WindowBordersWithDpiAwareness;
    v135.m128i_i32[1] -= WindowBordersWithDpiAwareness;
    v63 = _mm_cvtsi128_si32(v58) - WindowBordersWithDpiAwareness;
    v64 = WindowBordersWithDpiAwareness + v135.m128i_i8[12];
    v135.m128i_i32[0] = v63;
    v135.m128i_i32[3] += WindowBordersWithDpiAwareness;
    v65 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v11 = 0;
    }
    if ( v65 || v11 )
    {
      v66 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v67) = v11;
      LOBYTE(v68) = v65;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 69152),
        v124,
        4,
        18,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v60,
        v63,
        v62,
        v61,
        v64,
        v61 - v63,
        v64 - v62);
    }
    result = v143;
    *v143 = v135;
    return result;
  }
  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(v137, v38);
  v71 = v57 - *(_DWORD *)&v141[4];
  v72 = SWORD2(WindowMargins) + v50;
  v73 = v136 + (__int16)WindowMargins;
  v74 = v29 - SWORD1(WindowMargins);
  v75 = v31 - SHIWORD(WindowMargins);
  v76 = *(_DWORD *)&v141[8] - *(_DWORD *)v141;
  v138.m128i_i64[0] = __PAIR64__(v72, v73);
  v138.m128i_i64[1] = __PAIR64__(v75, v74);
  v77 = v142->m128i_i32[1];
  v78 = v142->m128i_i32[2] - v142->m128i_i32[0];
  v79 = v142->m128i_i32[3] - v77;
  v80 = (unsigned int)(v77 - *(_DWORD *)&v141[4]);
  v81 = v142->m128i_i32[0] - *(_DWORD *)v141;
  v132 = v80;
  if ( v78 != *(_DWORD *)&v141[8] - *(_DWORD *)v141 || v79 != v71 )
  {
    LODWORD(v136) = (v73 - *(_DWORD *)v141) * (v78 - v76);
    v81 += ((int)v136 + v76 / 2) / v76;
    v80 = (unsigned int)(((v72 - *(_DWORD *)&v141[4]) * (v79 - v71) + v71 / 2) / v71 + v80);
    v132 = v80;
  }
  if ( v81 || (_DWORD)v80 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v82 = 0;
    }
    v127 = v82;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v83 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v83 = 0;
    }
    if ( v82 || v83 )
    {
      v84 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v85) = v83;
      LOBYTE(v86) = v127;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v86,
        v85,
        *(_QWORD *)(v84 + 69152),
        5,
        4,
        19,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v81,
        v132);
      v80 = v132;
    }
    v73 += v81;
    v74 += v81;
    v75 += v80;
    v138.m128i_i32[0] = v73;
    v72 += v80;
    *(__int64 *)((char *)v138.m128i_i64 + 4) = __PAIR64__(v74, v72);
    v138.m128i_i32[3] = v75;
  }
  if ( (a8 & 1) != 0 )
  {
    LOBYTE(v80) = (*(_BYTE *)(*((_QWORD *)v137 + 5) + 30LL) & 4) != 0;
    anonymous_namespace_::FitRectToWorkArea(&v138, v139, v80);
    v75 = v138.m128i_i32[3];
    v74 = v138.m128i_i32[2];
    v72 = v138.m128i_i32[1];
    v73 = v138.m128i_i32[0];
  }
  if ( (*(_BYTE *)(*((_QWORD *)v137 + 5) + 30LL) & 4) == 0 )
    goto LABEL_158;
  LODWORD(v140) = a8 & 2;
  v87 = (unsigned int)(v74 - v73);
  LODWORD(v136) = v74 - v73;
  v134 = v75 - v72;
  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 8) == 0 )
      goto LABEL_132;
LABEL_120:
    v74 = v139[2];
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v93 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v93 = 0;
    }
    v87 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    v129 = v93;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v94 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v94 = 0;
    }
    if ( v93 || v94 )
    {
      v95 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v96) = v129;
      LOBYTE(v97) = v94;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v96,
        v97,
        *(_QWORD *)(v95 + 69152),
        5,
        4,
        21,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( !(_DWORD)v140 )
      v73 = v74 - v136;
    goto LABEL_132;
  }
  v73 = *v139;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v88 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v88 = 0;
  }
  v128 = v88;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v89 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v89 = 0;
  }
  if ( v88 || v89 )
  {
    v90 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
    LOBYTE(v91) = v128;
    LOBYTE(v92) = v89;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v91,
      v92,
      *(_QWORD *)(v90 + 69152),
      5,
      4,
      20,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    v87 = (unsigned int)v136;
  }
  if ( (a8 & 8) != 0 )
    goto LABEL_120;
  v74 = v87 + v73;
LABEL_132:
  if ( (a8 & 4) != 0 )
  {
    v72 = v139[1];
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
      v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
      LOBYTE(v101) = v99;
      LOBYTE(v102) = v98;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v102,
        v101,
        *(_QWORD *)(v100 + 69152),
        5,
        4,
        22,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (a8 & 0x10) == 0 )
    {
      v75 = v72 + v134;
      goto LABEL_158;
    }
LABEL_146:
    v75 = v139[3];
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
      v105 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
      LOBYTE(v106) = v104;
      LOBYTE(v107) = v103;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v107,
        v106,
        *(_QWORD *)(v105 + 69152),
        5,
        4,
        23,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( (a8 & 4) == 0 )
      v72 = v75 - v134;
    goto LABEL_158;
  }
  if ( (a8 & 0x10) != 0 )
    goto LABEL_146;
LABEL_158:
  v108 = v137;
  v109 = WindowMargins::_anonymous_namespace_::GetWindowMargins(v137, a6);
  v110 = v73 - (__int16)v109;
  v111 = v110;
  v112 = v72 - SWORD2(v109);
  v113 = v112;
  v114 = v74 + SWORD1(v109);
  v115 = v75 + SHIWORD(v109);
  v116 = v115;
  v117 = v114;
  if ( (*(_BYTE *)(*((_QWORD *)v108 + 5) + 30LL) & 4) != 0 )
  {
    v118 = v139;
    if ( v110 <= *v139 && v112 <= v139[1] && v114 >= v139[2] && v115 >= v139[3] )
    {
      v119 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v120 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v120 = 0;
      }
      if ( v119 || v120 )
      {
        v121 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v122) = v120;
        LOBYTE(v123) = v119;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v123,
          v122,
          *(_QWORD *)(v121 + 69152),
          5,
          4,
          24,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v116 = HIDWORD(*((_QWORD *)v118 + 1)) - 1;
      v117 = *((_QWORD *)v118 + 1) - 1;
      v113 = HIDWORD(*(_QWORD *)v118) + 1;
      v111 = *(_QWORD *)v118 + 1;
    }
  }
  result = v143;
  v143->m128i_i32[0] = v111;
  result->m128i_i32[1] = v113;
  result->m128i_i32[2] = v117;
  result->m128i_i32[3] = v116;
  return result;
}
