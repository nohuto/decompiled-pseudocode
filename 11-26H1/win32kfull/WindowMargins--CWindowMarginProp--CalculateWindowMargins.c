/*
 * XREFs of WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1401620BC (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x14004E5D8 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1400A8060 (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x1400A8520 (WPP_RECORDER_AND_TRACE_SF_sqddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x14020B038 (-IsWDAGContainer@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     WindowMargins::CWindowMarginProp::GetOverrideMargins @ 0x14029006C (WindowMargins--CWindowMarginProp--GetOverrideMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1402DAE14 (WPP_RECORDER_AND_TRACE_SF_ddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1402DB0C8 (WPP_RECORDER_AND_TRACE_SF_qsdddd.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

_QWORD *__fastcall WindowMargins::CWindowMarginProp::CalculateWindowMargins(
        __int64 a1,
        _QWORD *a2,
        const struct tagWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  const struct tagWND *v6; // r15
  char v8; // r12
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r13d
  char v14; // bl
  __int64 v15; // rax
  __int64 v17; // rdx
  struct tagRECT *v18; // rax
  INT v19; // r8d
  struct tagRECT v20; // xmm0
  __int64 v21; // rax
  int v22; // ecx
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  const struct tagWND *v27; // r11
  _DWORD *v28; // rax
  INT v29; // r15d
  INT v30; // r12d
  int v31; // r10d
  struct MOVESIZEDATA **v32; // rdx
  char v33; // al
  char v34; // r9
  __int16 WindowBordersWithDpiAwareness; // ax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r14d
  int v39; // r14d
  char v40; // bl
  __int16 v41; // cx
  int v42; // r15d
  int v43; // eax
  int v44; // r12d
  int v45; // eax
  int v46; // r13d
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct tagTHREADINFO *v52; // rax
  const struct tagWND *v53; // rdx
  __int64 v54; // rcx
  char v55; // al
  unsigned int *v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rax
  const char *v59; // rdx
  int v60; // r8d
  const char *v61; // rbx
  int v62; // edx
  int v63; // r8d
  __int64 v64; // r9
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v66; // r9
  LONG left; // edx
  INT right; // r8d
  unsigned __int64 v69; // r13
  unsigned __int64 bottom; // rax
  __int64 v71; // rax
  char v72; // r15
  char v73; // r14
  bool v74; // al
  char v75; // bl
  __int16 v76; // ax
  __int64 v77; // rdx
  struct MOVESIZEDATA *v78; // rdx
  char v79; // bl
  __int16 v80; // ax
  INT v81; // ebx
  char v82; // si
  char v83; // bl
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  __int64 UserSessionState; // rax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  char v96; // al
  __int64 v97; // rbx
  const char *v98; // rax
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  struct MOVESIZEDATA *v102; // rcx
  char v103; // al
  __int64 v104; // rbx
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  __int64 v108; // r9
  const char *v109; // rax
  __int64 v110; // rax
  int v111; // r8d
  int v112; // edx
  __int64 v113; // rax
  int v114; // r8d
  int v115; // edx
  __int64 v116; // rax
  int v117; // r8d
  int v118; // edx
  __int64 *v119; // [rsp+28h] [rbp-A1h]
  int v120; // [rsp+30h] [rbp-99h]
  int v121; // [rsp+38h] [rbp-91h]
  __int16 v122; // [rsp+38h] [rbp-91h]
  int v123; // [rsp+40h] [rbp-89h]
  char v124; // [rsp+88h] [rbp-41h]
  char v125; // [rsp+88h] [rbp-41h]
  char v126; // [rsp+88h] [rbp-41h]
  bool v127; // [rsp+88h] [rbp-41h]
  char v128; // [rsp+88h] [rbp-41h]
  char v129; // [rsp+88h] [rbp-41h]
  char v130; // [rsp+88h] [rbp-41h]
  char v131; // [rsp+89h] [rbp-40h]
  char v132; // [rsp+89h] [rbp-40h]
  char v133; // [rsp+89h] [rbp-40h]
  char v134; // [rsp+89h] [rbp-40h]
  __int16 v135; // [rsp+98h] [rbp-31h]
  bool v136; // [rsp+98h] [rbp-31h]
  char v137; // [rsp+98h] [rbp-31h]
  unsigned __int16 ScaledLogPixels; // [rsp+98h] [rbp-31h]
  bool v139; // [rsp+98h] [rbp-31h]
  __int64 v140; // [rsp+A8h] [rbp-21h] BYREF
  INT a; // [rsp+B0h] [rbp-19h]
  struct tagRECT Buf2; // [rsp+B8h] [rbp-11h] BYREF
  __m128i Buf1; // [rsp+C8h] [rbp-1h] BYREF
  __m128i v144; // [rsp+D8h] [rbp+Fh] BYREF

  v6 = a3;
  v119 = &v140;
  v8 = 0;
  v140 = 0LL;
  if ( !(unsigned __int8)WindowMargins::CWindowMarginProp::GetOverrideMargins(a1, a3, a4, a5) )
  {
    v10 = 1;
    if ( a5 == 1 && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 1) != 0 && (unsigned int)IsWDAGContainer() )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x14u)
        || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v72 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
        v13 = 0;
      }
      else
      {
        v13 = 0;
        if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v73 = 1;
          goto LABEL_120;
        }
      }
      v73 = 0;
LABEL_120:
      if ( v72 || v73 )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v88) = v73;
        LOBYTE(v89) = v72;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v89,
          v88,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          21,
          12,
          (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids);
      }
      v6 = a3;
      goto LABEL_15;
    }
    v13 = 0;
    if ( IsWindowNCRenderingEnabled(v6) )
    {
      if ( (*(_DWORD *)(W32GetUserSessionState(v12, v11) + 21076) & 1) == 0 )
      {
LABEL_15:
        v18 = CalculateContentRect((struct tagRECT *)&Buf1, v6, 0LL);
        v19 = 96;
        v20 = *v18;
        v21 = *((_QWORD *)v6 + 5);
        Buf2 = v20;
        v22 = *(_DWORD *)(v21 + 288) & 0xF;
        if ( v22 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v21 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v6);
        }
        else if ( !v22
               && (v71 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 488LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v71 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 456LL) + 272LL);
        }
        LODWORD(v140) = EngMulDiv(1, a4, v19);
        if ( a5 == 1 && (v24 = *((_QWORD *)v6 + 5), (*(_BYTE *)(v24 + 31) & 1) != 0) )
        {
          ValidateHmonitor(*(_QWORD *)(v24 + 256));
          WindowCompositedDpiContext = GetWindowCompositedDpiContext(v6);
          GetMonitorRectForDpi(&v144, v66, (WindowCompositedDpiContext >> 8) & 0x1FF);
          v26 = *(_QWORD *)&Buf2.left;
          left = v144.m128i_i32[0];
          v25 = *(_QWORD *)&Buf2.right;
          right = v144.m128i_i32[2];
          if ( Buf2.left > v144.m128i_i32[0] )
            left = Buf2.left;
          Buf1 = 0LL;
          if ( Buf2.right < v144.m128i_i32[2] )
            right = Buf2.right;
          v137 = left;
          Buf1.m128i_i32[0] = left;
          a = right;
          Buf1.m128i_i32[2] = right;
          if ( left < right )
          {
            v69 = HIDWORD(v144.m128i_i64[0]);
            if ( Buf2.top > v144.m128i_i32[1] )
              LODWORD(v69) = Buf2.top;
            bottom = HIDWORD(v144.m128i_i64[1]);
            Buf1.m128i_i32[1] = v69;
            if ( Buf2.bottom < v144.m128i_i32[3] )
              bottom = (unsigned int)Buf2.bottom;
            v144.m128i_i64[0] = bottom;
            Buf1.m128i_i32[3] = bottom;
            if ( (int)v69 < (int)bottom )
            {
              if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
              {
                v25 = *(_QWORD *)&Buf2.right;
              }
              else
              {
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x14u)
                  || (LOBYTE(v77) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                {
                  LOBYTE(v77) = 0;
                }
                v132 = v77;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  v8 = 1;
                }
                if ( (_BYTE)v77 || v8 )
                {
                  v90 = W32GetUserSessionState(WPP_GLOBAL_Control, v77);
                  LOBYTE(v91) = v8;
                  LOBYTE(v92) = v132;
                  WPP_RECORDER_AND_TRACE_SF_dddddddd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v92,
                    v91,
                    *(_QWORD *)(v90 + 69152),
                    5,
                    21,
                    15,
                    (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                    v137,
                    v69,
                    a,
                    v144.m128i_i8[0],
                    v26,
                    Buf2.top,
                    Buf2.right,
                    Buf2.bottom);
                }
                v26 = Buf1.m128i_i64[0];
                v25 = _mm_srli_si128(Buf1, 8).m128i_u64[0];
              }
            }
          }
          v27 = a3;
          LOWORD(v140) = 0;
          v13 = HIDWORD(v26) - *(_DWORD *)(*((_QWORD *)a3 + 5) + 92LL);
        }
        else
        {
          v25 = *(_QWORD *)&Buf2.right;
          LODWORD(v26) = Buf2.left;
          v27 = a3;
        }
        v28 = (_DWORD *)*((_QWORD *)v27 + 5);
        v29 = v26 - v28[22];
        v30 = v28[24] - v25;
        v31 = v28[25] - HIDWORD(v25);
        a = v31;
        v32 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
        {
          v33 = 0;
          v34 = 0;
        }
        else
        {
          v34 = 1;
          v33 = 0;
        }
        v124 = v34;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v33 = 1;
        }
        v131 = v33;
        if ( v34 || v33 )
        {
          v93 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v94) = v131;
          LOBYTE(v95) = v124;
          WPP_RECORDER_AND_TRACE_SF_ddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v95,
            v94,
            *(_QWORD *)(v93 + 69152),
            (_DWORD)v119,
            v120,
            v121,
            v123,
            v29,
            v13,
            v30,
            a,
            WindowDpiLastNotify);
          v31 = a;
          v32 = &WPP_GLOBAL_Control;
          v27 = a3;
        }
        if ( !a5 )
        {
          v133 = *(_BYTE *)(*((_QWORD *)v27 + 5) + 31LL);
          if ( (v133 & 0x21) != 0 )
          {
            if ( *(_BYTE *)(a1 + 24) )
            {
              v29 = *(_DWORD *)(a1 + 28);
              v30 = *(_DWORD *)(a1 + 32);
              WindowDpiLastNotify = *(_DWORD *)(a1 + 40);
              a = *(_DWORD *)(a1 + 36);
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
                || (LOBYTE(v32) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
              {
                LOBYTE(v32) = 0;
              }
              v134 = (char)v32;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v96 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
              {
                v96 = 0;
              }
              v129 = v96;
              if ( (_BYTE)v32 || v96 )
              {
                v97 = *(_QWORD *)v27;
                v98 = "Maximized";
                if ( (*(_BYTE *)(*((_QWORD *)v27 + 5) + 31LL) & 1) == 0 )
                  v98 = "Minimized";
                v144.m128i_i64[0] = (__int64)v98;
                v99 = W32GetUserSessionState("Minimized", v32);
                LOBYTE(v100) = v129;
                LOBYTE(v101) = v134;
                WPP_RECORDER_AND_TRACE_SF_qsdddd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v101,
                  v100,
                  *(_QWORD *)(v99 + 69152),
                  (_DWORD)v119,
                  v120,
                  v121,
                  v123,
                  v97,
                  v144.m128i_i64[0],
                  v29,
                  v30,
                  a,
                  WindowDpiLastNotify);
              }
            }
            else
            {
              v102 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
                || (v103 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
              {
                v103 = 0;
              }
              v130 = v103;
              v139 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v103 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v104 = *(_QWORD *)v27;
                LOBYTE(v102) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                v105 = W32GetUserSessionState(v102, &WPP_GLOBAL_Control);
                LOBYTE(v106) = v139;
                LOBYTE(v107) = v130;
                v108 = *(_QWORD *)(v105 + 69152);
                v109 = "Maximized";
                if ( (v133 & 1) == 0 )
                  v109 = "Minimized";
                WPP_RECORDER_AND_TRACE_SF_qs(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v107,
                  v106,
                  v108,
                  2,
                  21,
                  18,
                  (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                  v104,
                  (__int64)v109);
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 28) = v29;
            *(_DWORD *)(a1 + 32) = v30;
            *(_DWORD *)(a1 + 36) = v31;
            *(_DWORD *)(a1 + 40) = WindowDpiLastNotify;
            *(_BYTE *)(a1 + 24) = 1;
          }
        }
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a3, (__int64)v32, 1, a4);
        v135 = WindowBordersWithDpiAwareness;
        if ( WindowDpiLastNotify == a4 )
        {
          v38 = WindowBordersWithDpiAwareness;
        }
        else
        {
          v78 = WPP_GLOBAL_Control;
          LOBYTE(v37) = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0
                     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
          v128 = v37;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v79 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v79 = 0;
          }
          if ( (_BYTE)v37 || v79 )
          {
            v110 = W32GetUserSessionState(v37, WPP_GLOBAL_Control);
            LOBYTE(v111) = v79;
            LOBYTE(v112) = v128;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v112,
              v111,
              *(_QWORD *)(v110 + 69152),
              5,
              21,
              19,
              (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
              WindowDpiLastNotify,
              a4);
          }
          v80 = GetWindowBordersWithDpiAwareness(a3, (__int64)v78, 1, WindowDpiLastNotify);
          v38 = v135;
          v81 = v80;
          v29 = EngMulDiv(v29, v135, v80);
          v30 = EngMulDiv(v30, v135, v81);
          a = EngMulDiv(a, v135, v81);
        }
        v39 = v38 - (__int16)v140;
        if ( v39 <= 0 )
          v39 = 0;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
          || (LOBYTE(v36) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v36) = 0;
        }
        v125 = v36;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v40 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v40 = 0;
        }
        if ( (_BYTE)v36 || v40 )
        {
          v113 = W32GetUserSessionState(WPP_GLOBAL_Control, v36);
          LOBYTE(v114) = v40;
          LOBYTE(v115) = v125;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v115,
            v114,
            *(_QWORD *)(v113 + 69152),
            5,
            21,
            20,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            v135,
            v39);
        }
        v41 = v140;
        v42 = v29 - (__int16)v140;
        v43 = v42;
        if ( v42 <= 0 )
          v43 = 0;
        if ( v39 < v43 )
        {
          LOWORD(v42) = v39;
          LOWORD(v140) = v39;
        }
        else if ( v42 <= 0 )
        {
          LOWORD(v42) = 0;
          LOWORD(v140) = 0;
        }
        else
        {
          LOWORD(v140) = v42;
        }
        v44 = v30 - v41;
        v45 = v44;
        if ( v44 <= 0 )
          v45 = 0;
        if ( v39 < v45 )
        {
          LOWORD(v44) = v39;
          WORD1(v140) = v39;
        }
        else if ( v44 <= 0 )
        {
          LOWORD(v44) = 0;
          WORD1(v140) = 0;
        }
        else
        {
          WORD1(v140) = v44;
        }
        v46 = v13 - v41;
        v47 = v46;
        if ( v46 <= 0 )
          v47 = 0;
        if ( v39 >= v47 )
        {
          if ( v46 > 0 )
          {
            WORD2(v140) = v46;
          }
          else
          {
            LOWORD(v46) = 0;
            WORD2(v140) = 0;
          }
        }
        else
        {
          LOWORD(v46) = v39;
          WORD2(v140) = v39;
        }
        v48 = (unsigned int)(a - v41);
        v49 = v48;
        if ( (int)v48 <= 0 )
          v49 = 0;
        if ( v39 >= v49 )
        {
          if ( (int)v48 <= 0 )
          {
            LOWORD(v39) = 0;
            HIWORD(v140) = 0;
          }
          else
          {
            LOWORD(v39) = v48;
            HIWORD(v140) = v48;
          }
        }
        else
        {
          HIWORD(v140) = v39;
        }
        if ( a5 == 1 && PtiCurrent(v48) && *((_QWORD *)PtiCurrent(v50) + 61) )
        {
          v52 = PtiCurrent(v51);
          v53 = a3;
          if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)v52 + 61) + 8LL) + 64LL) & 1) != 0 )
          {
            v54 = *((_QWORD *)a3 + 5);
            if ( (*(_DWORD *)(v54 + 288) & 0x4000000F) == 0x40000000 )
            {
              ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v54 + 284));
              v74 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
              v127 = v74;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v75 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
              {
                v75 = 0;
              }
              if ( v74 || v75 )
              {
                v116 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
                LOBYTE(v117) = v75;
                LOBYTE(v118) = v127;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v118,
                  v117,
                  *(_QWORD *)(v116 + 69152),
                  5,
                  21,
                  21,
                  (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                  ScaledLogPixels);
              }
              LOWORD(v140) = EngMulDiv((__int16)v42, ScaledLogPixels, 96);
              LOBYTE(v42) = v140;
              WORD2(v140) = EngMulDiv((__int16)v46, ScaledLogPixels, 96);
              LOBYTE(v46) = BYTE4(v140);
              WORD1(v140) = EngMulDiv((__int16)v44, ScaledLogPixels, 96);
              LOBYTE(v44) = BYTE2(v140);
              v76 = EngMulDiv((__int16)v39, ScaledLogPixels, 96);
              v53 = a3;
              LOBYTE(v39) = v76;
              HIWORD(v140) = v76;
            }
          }
        }
        else
        {
          v53 = a3;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
          || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v55 = 0;
        }
        v56 = &WPP_RECORDER_INITIALIZED;
        v126 = v55;
        v136 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v57 = *(_QWORD *)v53;
          LOBYTE(v56) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v58 = W32GetUserSessionState(v56, v53);
          v59 = "Win32k";
          LOBYTE(v60) = v136;
          v61 = "Dwm";
          if ( a5 != 1 )
            v61 = "Win32k";
          LOBYTE(v59) = v126;
          WPP_RECORDER_AND_TRACE_SF_sqddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            (_DWORD)v59,
            v60,
            *(_QWORD *)(v58 + 69152),
            (_DWORD)v119,
            v120,
            v121,
            v123,
            (__int64)v61,
            v57,
            a4,
            v42,
            v46,
            v44,
            v39);
        }
        v15 = v140;
        goto LABEL_13;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v10 = 0;
      }
      if ( !v14 && !v10 )
      {
LABEL_12:
        v15 = 0LL;
LABEL_13:
        *a2 = v15;
        return a2;
      }
      v64 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v17) + 69152);
      v122 = 14;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v10 = 0;
      }
      if ( !v14 && !v10 )
        goto LABEL_12;
      v64 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
      v122 = 13;
    }
    LOBYTE(v63) = v10;
    LOBYTE(v62) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v63,
      v64,
      5,
      21,
      v122,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids);
    goto LABEL_12;
  }
  v82 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || (v83 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v83 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v82 = 0;
  if ( v83 || v82 )
  {
    v84 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v85) = v82;
    LOBYTE(v86) = v83;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v86,
      v85,
      *(_QWORD *)(v84 + 69152),
      5,
      21,
      11,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids);
  }
  *a2 = v140;
  return a2;
}
