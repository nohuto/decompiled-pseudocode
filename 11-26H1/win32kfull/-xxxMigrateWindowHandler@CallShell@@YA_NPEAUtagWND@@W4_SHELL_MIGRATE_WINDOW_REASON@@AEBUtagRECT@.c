/*
 * XREFs of ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14022C618 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

char __fastcall CallShell::xxxMigrateWindowHandler(
        struct tagRECT *a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        struct tagWND *a6,
        __int64 a7,
        __m128i *a8,
        _DWORD *a9,
        int *a10)
{
  struct tagRECT v14; // xmm6
  __int64 v15; // rax
  unsigned __int16 v16; // r9
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // r15
  char v21; // di
  bool v22; // si
  const char *v23; // rbx
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // r13
  char v28; // r12
  int v29; // r14d
  int v30; // edi
  int v31; // esi
  int v32; // ebx
  __int64 v33; // rax
  char v34; // r13
  char v35; // r12
  int v36; // r14d
  int v37; // edi
  int v38; // esi
  int v39; // ebx
  __int64 v40; // rax
  char v41; // r14
  char v42; // si
  char v43; // bl
  char v44; // di
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  char v48; // r13
  char v49; // r12
  LONG top; // r14d
  LONG bottom; // edi
  LONG left; // esi
  LONG right; // ebx
  __int64 v54; // rax
  __int64 v55; // rdx
  char v56; // bl
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  int v60; // ebx
  bool v61; // bl
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  _DWORD *v65; // rcx
  char v66; // si
  bool v67; // r14
  const char *v68; // rdi
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  __m128i v73; // xmm6
  char v74; // bl
  int v75; // r12d
  int v76; // r13d
  char v77; // si
  int v78; // r14d
  int v79; // edi
  __int64 v80; // rax
  __int64 v81; // rdx
  BOOL v82; // esi
  int v83; // eax
  int v84; // eax
  int v85; // ebx
  bool v86; // di
  __int64 v87; // rax
  int v88; // edx
  int v89; // r8d
  bool v90; // bl
  __int64 v91; // rax
  int v92; // r8d
  int v93; // edx
  __int64 v94; // r9
  const char *v95; // rax
  __int16 v96; // [rsp+38h] [rbp-D0h]
  __int64 v97; // [rsp+48h] [rbp-C0h]
  char v98; // [rsp+48h] [rbp-C0h]
  __int64 v99; // [rsp+50h] [rbp-B8h]
  __int64 v100; // [rsp+58h] [rbp-B0h]
  __int64 v101; // [rsp+60h] [rbp-A8h]
  __int64 v102; // [rsp+68h] [rbp-A0h]
  __int64 v103; // [rsp+70h] [rbp-98h]
  __int128 v104; // [rsp+78h] [rbp-90h] BYREF
  __m128i Buf2; // [rsp+88h] [rbp-80h] BYREF
  __m128i *v106; // [rsp+98h] [rbp-70h]
  __int128 Buf1; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-50h] BYREF
  int v109; // [rsp+C0h] [rbp-48h]
  int v110; // [rsp+C8h] [rbp-40h]
  int v111; // [rsp+CCh] [rbp-3Ch]
  __int128 v112; // [rsp+D0h] [rbp-38h]
  unsigned __int16 v113; // [rsp+E0h] [rbp-28h]
  struct tagRECT v114; // [rsp+E4h] [rbp-24h]
  __int128 v115; // [rsp+F4h] [rbp-14h]
  __int16 v116; // [rsp+104h] [rbp-4h]
  __m128i v117; // [rsp+108h] [rbp+0h]
  int v118; // [rsp+118h] [rbp+10h]
  __m128i v119; // [rsp+128h] [rbp+20h] BYREF

  v106 = a8;
  *a9 = 3;
  *a8 = 0LL;
  Buf2.m128i_i64[0] = (__int64)a9;
  *(_QWORD *)&v104 = a10;
  v14 = *WindowMargins::ReduceRect((WindowMargins *)&Buf1, a1, a6, (const struct tagRECT *)a5);
  v15 = *(_QWORD *)&a1[2].right;
  v119 = (__m128i)v14;
  v16 = (*(_DWORD *)(v15 + 288) >> 8) & 0x1FF;
  if ( v16 )
  {
    ScaleDPIRect(&v119, &v119, a5, v16, *a3, *a4);
    v14 = (struct tagRECT)v119;
  }
  memset_0(&v108, 0, 0x68uLL);
  v17 = *(_OWORD *)a3;
  v108 = *(_QWORD *)&a1->left;
  v111 = *a10;
  v112 = v17;
  v109 = 3;
  v110 = a2;
  v18 = *(_QWORD *)(a7 + 40);
  v113 = a5;
  v114 = v14;
  v115 = *(_OWORD *)(v18 + 44);
  v116 = *(_WORD *)(v18 + 60);
  v117 = 0LL;
  v118 = 3;
  v19 = 0LL;
  v20 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v21 = 0;
  }
  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a2 )
    {
      v23 = "programmatic";
      if ( a2 != 1 )
        v23 = "restore from minimize";
    }
    else
    {
      v23 = "recalc";
    }
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v25) = v22;
    LOBYTE(v26) = v21;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      28,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v108,
      (__int64)v23);
  }
  v27 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v28 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v28 = 0;
  }
  if ( v27 || v28 )
  {
    v29 = DWORD1(v112);
    v30 = HIDWORD(v112);
    v31 = v112;
    v32 = DWORD2(v112);
    v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LODWORD(v99) = v29;
    LODWORD(v97) = v31;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v28,
      *(_QWORD *)(v33 + 69152),
      5u,
      4u,
      0x1Du,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v97,
      v99,
      v32,
      v30,
      v32 - v31,
      v30 - v29);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v34 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v35 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v35 = 0;
  }
  if ( v34 || v35 )
  {
    v36 = DWORD1(v115);
    v37 = HIDWORD(v115);
    v38 = v115;
    v39 = DWORD2(v115);
    v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LODWORD(v103) = v37 - v36;
    LODWORD(v102) = v39 - v38;
    LODWORD(v101) = v37;
    LODWORD(v100) = v39;
    LODWORD(v99) = v36;
    LODWORD(v97) = v38;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v35,
      *(_QWORD *)(v40 + 69152),
      5u,
      4u,
      0x1Eu,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v97,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v41 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v42 = 0;
  }
  if ( v41 || v42 )
  {
    v43 = v116;
    v44 = v113;
    v45 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LOBYTE(v46) = v42;
    LOBYTE(v47) = v41;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v46,
      *(_QWORD *)(v45 + 69152),
      5,
      4,
      31,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v44,
      v43);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v48 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v49 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v49 = 0;
  }
  if ( v48 || v49 )
  {
    top = v114.top;
    bottom = v114.bottom;
    left = v114.left;
    right = v114.right;
    v54 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LODWORD(v103) = bottom - top;
    LODWORD(v102) = right - left;
    LODWORD(v101) = bottom;
    LODWORD(v100) = right;
    LODWORD(v99) = top;
    LODWORD(v97) = left;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v48,
      v49,
      *(_QWORD *)(v54 + 69152),
      5u,
      4u,
      0x20u,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v97,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  if ( !(unsigned __int8)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v108, 0LL) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v56 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v20 = 0;
    }
    if ( v56 || v20 )
    {
      v57 = W32GetUserSessionState(WPP_GLOBAL_Control, v55);
      LOBYTE(v58) = v20;
      LOBYTE(v59) = v56;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v59,
        v58,
        *(_QWORD *)(v57 + 69152),
        5,
        4,
        33,
        (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids);
    }
    return 0;
  }
  v60 = v118;
  if ( v118 == 2 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < (unsigned __int8)v118 )
    {
      v20 = 0;
    }
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(WPP_GLOBAL_Control, v55);
      LOBYTE(v63) = v61;
      LOBYTE(v64) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v63,
        *(_QWORD *)(v62 + 69152),
        2,
        4,
        34,
        (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids);
    }
    return 0;
  }
  if ( v118 > 3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v20 = 0;
    }
    v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v87 = W32GetUserSessionState(WPP_GLOBAL_Control, v55);
    v98 = v60;
    v96 = 35;
  }
  else
  {
    v65 = (_DWORD *)v104;
    *(_DWORD *)Buf2.m128i_i64[0] = v118;
    *v65 = v111;
    if ( v60 != 3 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v66 = 0;
      }
      v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v66 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        if ( v60 )
        {
          v68 = "maximized";
          if ( v60 != 1 )
            v68 = "minimized";
        }
        else
        {
          v68 = "restored";
        }
        v69 = W32GetUserSessionState(WPP_GLOBAL_Control, v55);
        LOBYTE(v70) = v67;
        LOBYTE(v71) = v66;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v71,
          v70,
          *(_QWORD *)(v69 + 69152),
          4,
          4,
          36,
          (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
          (__int64)v68);
      }
      return 1;
    }
    v73 = v117;
    v104 = v115;
    Buf2 = v117;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v74 = 0;
    }
    v75 = _mm_cvtsi128_si32(v117);
    v76 = _mm_cvtsi128_si32(_mm_srli_si128(v117, 12));
    v77 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v78 = _mm_cvtsi128_si32(_mm_srli_si128(v117, 4));
    v79 = _mm_cvtsi128_si32(_mm_srli_si128(v117, 8));
    if ( v74 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v80 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LODWORD(v103) = v76 - v78;
      LODWORD(v102) = v79 - v75;
      LODWORD(v101) = v76;
      LODWORD(v100) = v79;
      LODWORD(v99) = v78;
      LODWORD(v97) = v75;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v74,
        v77,
        *(_QWORD *)(v80 + 69152),
        4u,
        4u,
        0x25u,
        (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
        v97,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
    Buf1 = 0LL;
    v82 = IsRectEmptyInl((const struct tagRECT *)&Buf2);
    if ( v82
      || (v83 = IntersectRect(&Buf1, Buf2.m128i_i32, (int *)&v104), v81 = 0LL, !v83)
      || (v84 = memcmp(&Buf1, &Buf2, 0x10uLL), v81 = 0LL, v84) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v20 = v81;
      }
      v90 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v91 = W32GetUserSessionState(WPP_GLOBAL_Control, v81);
        LOBYTE(v92) = v90;
        LOBYTE(v93) = v20;
        v94 = *(_QWORD *)(v91 + 69152);
        v95 = "rect is empty";
        if ( !v82 )
          v95 = "rect not contained by work area";
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v93,
          v92,
          v94,
          2,
          4,
          38,
          (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
          (__int64)v95);
      }
      return 0;
    }
    v85 = v75 == v104;
    if ( v78 == DWORD1(v104) )
      ++v85;
    if ( v79 == DWORD2(v104) )
      ++v85;
    if ( v76 == HIDWORD(v104) )
      ++v85;
    if ( (unsigned int)(v85 - 2) <= 1 )
    {
      *v106 = v73;
      return 1;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v20 = 0;
    }
    v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v87 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    v98 = v85;
    v96 = 39;
  }
  LOBYTE(v89) = v86;
  LOBYTE(v88) = v20;
  WPP_RECORDER_AND_TRACE_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v88,
    v89,
    *(_QWORD *)(v87 + 69152),
    2,
    4,
    v96,
    (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
    v98);
  return 0;
}
