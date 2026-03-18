/*
 * XREFs of ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC
 * Callers:
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402E9F0C (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 * Callees:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x140162230 (_anonymous_namespace_--FitRectToWorkArea.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _anonymous_namespace_::IsFullscreenRect @ 0x14025EB14 (_anonymous_namespace_--IsFullscreenRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402DAF4C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402EE140 (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 */

struct tagRECT *__fastcall AdvancedWindowPos::xxxTransformRectToMonitor(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        struct tagRECT *a4,
        const struct CMonitorTopology::MonitorData *a5,
        const struct CMonitorTopology::MonitorData *a6)
{
  const struct CMonitorTopology::MonitorData *v6; // r14
  __m128i *v7; // rsi
  struct tagRECT *v8; // r13
  char v9; // r12
  char v10; // al
  __int64 v11; // rsi
  __int64 UserSessionState; // rax
  struct CHECKPOINT *IfValid; // rax
  __int16 v14; // r11
  struct tagRECT *v15; // rdx
  struct tagRECT v16; // xmm0
  INT v17; // r8d
  int v18; // ebx
  INT v19; // r9d
  INT WindowDpiLastNotify; // eax
  __m128i v21; // xmm6
  __int64 v22; // rdx
  unsigned __int16 v23; // r10
  int v24; // r15d
  bool v25; // zf
  int v26; // esi
  int v27; // r15d
  int v28; // r14d
  char v29; // r14
  char v30; // si
  __int64 v31; // rax
  unsigned __int16 v32; // di
  char v33; // r15
  char v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // al
  char v39; // r15
  LONG bottom; // ebx
  LONG right; // edi
  __int64 v42; // rax
  char v43; // di
  char v44; // bl
  __int64 v45; // rax
  struct tagRECT v46; // xmm0
  __int64 v47; // rax
  unsigned __int16 v48; // r8
  struct tagRECT v49; // xmm6
  __int64 v50; // rdx
  int WindowBordersWithDpiAwareness; // eax
  char v52; // r15
  char v53; // di
  char v54; // si
  LONG v55; // ebx
  char v56; // r14
  bool v57; // r13
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  struct tagRECT *result; // rax
  struct tagRECT v62; // xmm0
  __int32 v63; // r9d
  __int32 v64; // ebx
  int v65; // r8d
  int v66; // r15d
  __int32 v67; // r14d
  __int32 v68; // ebx
  __int32 v69; // edi
  __int32 top; // esi
  char v71; // si
  char v72; // di
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rdx
  char v77; // di
  char v78; // bl
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  __int64 v82; // rdx
  struct tagRECT v83; // xmm1
  LONG left; // esi
  char v85; // di
  char v86; // bl
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // [rsp+28h] [rbp-E0h]
  unsigned int v91; // [rsp+28h] [rbp-E0h]
  __int64 v92; // [rsp+48h] [rbp-C0h]
  __int64 v93; // [rsp+50h] [rbp-B8h]
  __int64 v94; // [rsp+58h] [rbp-B0h]
  __int64 v95; // [rsp+60h] [rbp-A8h]
  char v96; // [rsp+88h] [rbp-80h]
  unsigned __int16 v97; // [rsp+88h] [rbp-80h]
  char v98; // [rsp+8Ah] [rbp-7Eh]
  unsigned __int16 v99; // [rsp+8Ah] [rbp-7Eh]
  char v100; // [rsp+8Ah] [rbp-7Eh]
  struct tagRECT v101; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v102; // [rsp+A8h] [rbp-60h] BYREF
  int v103; // [rsp+B8h] [rbp-50h]
  int v104; // [rsp+C8h] [rbp-40h]
  INT v105; // [rsp+D8h] [rbp-30h]
  INT v106; // [rsp+DCh] [rbp-2Ch]
  struct tagRECT v107; // [rsp+E0h] [rbp-28h] BYREF
  __m128i v108; // [rsp+F8h] [rbp-10h] BYREF
  CMonitorTopology::MonitorData *v109; // [rsp+108h] [rbp+0h]
  struct tagRECT *v110; // [rsp+110h] [rbp+8h]

  v6 = a5;
  v7 = a3;
  v108.m128i_i64[0] = (__int64)a5;
  v8 = retstr;
  v109 = (CMonitorTopology::MonitorData *)a4;
  *(_QWORD *)&v107.left = a3;
  v110 = this;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(retstr) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(retstr) = 0;
  }
  v98 = (char)retstr;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v10 = 0;
  }
  v96 = v10;
  if ( (_BYTE)retstr || v10 )
  {
    v11 = *(_QWORD *)&v8->left;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, retstr);
    HIDWORD(v92) = HIDWORD(v11);
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v98,
      v96,
      *(_QWORD *)(UserSessionState + 69152),
      v90,
      4u,
      0x46u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    v7 = *(__m128i **)&v107.left;
    v6 = (const struct CMonitorTopology::MonitorData *)v108.m128i_i64[0];
  }
  IfValid = CHECKPOINT::GetIfValid((struct tagWND *)v8);
  v14 = 0;
  v15 = v8;
  if ( IfValid )
    v16 = *(struct tagRECT *)((char *)IfValid + 20);
  else
    v16 = *(struct tagRECT *)(*(_QWORD *)&v8[2].right + 88LL);
  v101 = v16;
  v17 = v16.right - v16.left;
  v18 = v16.bottom - v16.top;
  v106 = v16.right - v16.left;
  if ( !IfValid || (v19 = *((unsigned __int16 *)IfValid + 26), v105 = v19, !(_WORD)v19) )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v8);
    LOWORD(v19) = WindowDpiLastNotify;
    v105 = WindowDpiLastNotify;
  }
  v21 = *v7;
  v22 = *(_QWORD *)&v15[2].right;
  v23 = *((_WORD *)v6 + 20);
  v24 = _mm_cvtsi128_si32(*v7);
  v25 = (*(_BYTE *)(v22 + 30) & 4) == 0;
  v103 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 4));
  v99 = v23;
  v102 = (struct tagRECT)v21;
  v104 = v24;
  if ( v25 )
  {
    v26 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
    v27 = v26 - v104;
    if ( v26 - v104 == v17 && _mm_srli_si128(v21, 8).m128i_i32[1] - v21.m128i_i32[1] == v18 )
    {
      v24 = v104;
      v28 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v29 = v14;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v30 = 1, *((_WORD *)WPP_GLOBAL_Control + 36) == v14) )
      {
        v30 = v14;
      }
      if ( v29 || v30 )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LODWORD(v92) = v27;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v30,
          *(_QWORD *)(v31 + 69152),
          5u,
          4u,
          0x47u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v92,
          v102.bottom - v103,
          v106,
          v16.bottom - v16.top);
        v17 = v106;
        v14 = 0;
      }
      v24 = v104;
      v22 = *(_QWORD *)&v8[2].right;
      v28 = v18 + v103;
      LOWORD(v19) = v105;
      v26 = v17 + v104;
      v102.bottom = v18 + v103;
      v102.right = v17 + v104;
      v21.m128i_i64[0] = *(_QWORD *)&v102.left;
    }
    v99 = v19;
  }
  else
  {
    v26 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
    v28 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
  }
  v32 = *((_WORD *)v109 + 20);
  v97 = v32;
  if ( (*(_DWORD *)(v22 + 288) & 0xF) == 2 )
  {
    if ( (_WORD)v19 == v32 )
      goto LABEL_58;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v33 = v14;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v34 = 1, *((_WORD *)WPP_GLOBAL_Control + 36) == v14) )
    {
      v34 = v14;
    }
    if ( v33 || v34 )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        5,
        4,
        72,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v105,
        v97);
      v17 = v106;
    }
    v24 = v104;
    v32 = v97;
    *(_QWORD *)&v101.left = v21.m128i_i64[0];
    v101.right = v17 + v104;
    v101.bottom = v18 + v21.m128i_i32[1];
    if ( !(unsigned int)xxxAppAdjustDpiCandidateRect((struct tagWND *)v8, v97, &v101, &v101) )
    {
LABEL_58:
      if ( v99 == v32 )
        goto LABEL_72;
      v106 = EngMulDiv(v26 - v24, v32, v99);
      v105 = EngMulDiv(v28 - v103, v32, v99);
      v43 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v44 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v44 = 0;
      }
      if ( v43 || v44 )
      {
        v45 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
        LODWORD(v95) = v97;
        LODWORD(v94) = v28 - v103;
        LODWORD(v93) = v26 - v24;
        LODWORD(v92) = v99;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v44,
          *(_QWORD *)(v45 + 69152),
          5u,
          4u,
          0x4Au,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v92,
          v93,
          v94,
          v95,
          v106,
          v105);
      }
      v102.right = v24 + v106;
      v102.bottom = v103 + v105;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v38 = 0;
      }
      v100 = v38;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v39 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v39 = 0;
      }
      bottom = v101.bottom;
      right = v101.right;
      if ( v38 || v39 )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LODWORD(v95) = bottom - v101.top;
        LODWORD(v94) = right - v101.left;
        LODWORD(v93) = v28 - v103;
        LODWORD(v92) = v26 - v104;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v100,
          v39,
          *(_QWORD *)(v42 + 69152),
          5u,
          4u,
          0x49u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v92,
          v93,
          v94,
          v95);
      }
      v102.bottom = v103 + bottom - v101.top;
      v102.right = v104 + right - v101.left;
    }
    v32 = v97;
  }
LABEL_72:
  v46 = (struct tagRECT)*CalculateLogicalMonitorRect(
                           (__m128i *)&v101,
                           (__m128i *)(v108.m128i_i64[0] + 8),
                           *(_WORD *)(v108.m128i_i64[0] + 40),
                           (*(_DWORD *)(*(_QWORD *)&v8[2].right + 288LL) >> 8) & 0x1FF,
                           *(_WORD *)(v108.m128i_i64[0] + 64));
  v47 = *(_QWORD *)&v8[2].right;
  v48 = *((_WORD *)v109 + 20);
  v101 = v46;
  v49 = (struct tagRECT)*CalculateLogicalMonitorRect(
                           &v108,
                           (__m128i *)((char *)v109 + 8),
                           v48,
                           (*(_DWORD *)(v47 + 288) >> 8) & 0x1FF,
                           *((_WORD *)v109 + 32));
  v108 = (__m128i)v49;
  if ( anonymous_namespace_::IsFullscreenRect(*(_DWORD **)&v107.left, &v101) )
  {
    v101 = v49;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((const struct tagWND *)v8, v50, 0, 0);
    v52 = WindowBordersWithDpiAwareness;
    v53 = WindowBordersWithDpiAwareness + LOBYTE(v101.right);
    v54 = LOBYTE(v101.top) - WindowBordersWithDpiAwareness;
    v101.right += WindowBordersWithDpiAwareness;
    v101.top -= WindowBordersWithDpiAwareness;
    v55 = _mm_cvtsi128_si32((__m128i)v49) - WindowBordersWithDpiAwareness;
    v56 = WindowBordersWithDpiAwareness + LOBYTE(v101.bottom);
    v101.left = v55;
    v101.bottom += WindowBordersWithDpiAwareness;
    v57 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v9 = 0;
    }
    if ( v57 || v9 )
    {
      v58 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v59) = v9;
      LOBYTE(v60) = v57;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v59,
        *(_QWORD *)(v58 + 69152),
        v91,
        4,
        75,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v52,
        v55,
        v54,
        v53,
        v56,
        v53 - v55,
        v56 - v54);
    }
    result = v110;
    *v110 = v101;
    return result;
  }
  v62 = *WindowMargins::ReduceRect(
           (WindowMargins *)&v107,
           v8,
           (const struct tagWND *)&v102,
           (const struct tagRECT *)v32);
  v63 = v108.m128i_i32[3] - v108.m128i_i32[1];
  v64 = v108.m128i_i32[0] - v101.left;
  v102 = v62;
  v65 = v101.bottom - v101.top;
  v66 = _mm_cvtsi128_si32((__m128i)v62);
  v67 = v108.m128i_i32[1] - v101.top;
  if ( v108.m128i_i32[2] - v108.m128i_i32[0] != v101.right - v101.left || v63 != v65 )
  {
    v64 += ((v108.m128i_i32[2] - v108.m128i_i32[0] - (v101.right - v101.left)) * (v66 - v101.left)
          + (v101.right - v101.left) / 2)
         / (v101.right - v101.left);
    v67 += ((v63 - v65) * (v102.top - v101.top) + v65 / 2) / v65;
  }
  if ( v64 || v67 )
  {
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
      v73 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v71;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(v73 + 69152),
        5,
        4,
        76,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v64,
        v67);
    }
    v66 += v64;
    v69 = v64 + v102.right;
    v68 = v67 + v102.bottom;
    v102.left = v66;
    top = v67 + v102.top;
    v102.right = v69;
    v102.top += v67;
    v102.bottom += v67;
  }
  else
  {
    v68 = v102.bottom;
    v69 = v102.right;
    top = v102.top;
  }
  CMonitorTopology::MonitorData::LogicalWorkArea(v109, &v101, (const struct tagWND *)v8);
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(_BYTE)a6 )
    {
      v107 = 0LL;
      IntersectRect(&v107, &v102.left, &v101.left);
      if ( (v107.right - v107.left) * (v107.bottom - v107.top) >= (unsigned int)((v69 - v66) * (v68 - top)) >> 1 )
        goto LABEL_117;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v77 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v78 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v78 = 0;
      }
      if ( v77 || v78 )
      {
        v79 = W32GetUserSessionState(WPP_GLOBAL_Control, v76);
        LOBYTE(v80) = v78;
        LOBYTE(v81) = v77;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v81,
          v80,
          *(_QWORD *)(v79 + 69152),
          5,
          4,
          77,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
  else if ( !(_BYTE)a6 )
  {
    goto LABEL_117;
  }
  anonymous_namespace_::FitRectToWorkArea(
    (unsigned int *)&v102,
    (unsigned int *)&v101,
    (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0);
LABEL_117:
  v83 = *WindowMargins::ExtendRect(&v107, v8, (const struct tagWND *)&v102, (const struct tagRECT *)v97);
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0 )
  {
    left = v101.left;
    if ( _mm_cvtsi128_si32((__m128i)v83) <= v101.left
      && v83.top <= v101.top
      && _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v83, 8)) >= v101.right
      && _mm_srli_si128(*(__m128i *)&v83, 8).m128i_i32[1] >= v101.bottom )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v85 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v85 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v86 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v86 = 0;
      }
      if ( v85 || v86 )
      {
        v87 = W32GetUserSessionState(WPP_GLOBAL_Control, v82);
        LOBYTE(v88) = v86;
        LOBYTE(v89) = v85;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v89,
          v88,
          *(_QWORD *)(v87 + 69152),
          5,
          4,
          78,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v102.right = v101.right - 1;
      v102.top = v101.top + 1;
      v102.bottom = v101.bottom - 1;
      v102.left = left + 1;
      v83 = v102;
    }
  }
  result = v110;
  *v110 = v83;
  return result;
}
