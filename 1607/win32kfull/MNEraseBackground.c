/*
 * XREFs of MNEraseBackground @ 0x1C0237348
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     GreSetBrushOrg @ 0x1C00B276C (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x1C0152E44 (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, LONG a3, LONG a4, int a5, int a6)
{
  LONG v8; // esi
  int v10; // r14d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  _DWORD *v41; // rsi
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // ecx
  _DWORD *v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ecx
  _DWORD *v95; // rsi
  __int64 v96; // rdx
  unsigned __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r8
  __int64 v116; // r9
  _DWORD *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rbp
  __int64 v120; // rdx
  unsigned __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  int v134; // ecx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  int v145; // ecx
  _DWORD *v146; // rsi
  __int64 v147; // rdx
  unsigned __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  int v161; // ecx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  int v172; // ecx
  _DWORD *v173; // rcx
  __int64 v174; // rdx
  unsigned __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // r8
  __int64 v187; // r9
  int v188; // ecx
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rdx
  __int64 v197; // r8
  __int64 v198; // r9
  int v199; // ecx
  _DWORD *v200; // rsi
  __int64 v201; // rdx
  unsigned __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rdx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rdx
  __int64 v213; // r8
  __int64 v214; // r9
  int v215; // ecx
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rdx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r9
  int v226; // ecx
  _DWORD *v227; // rcx
  __int64 v228; // rdi
  __int64 v230; // [rsp+68h] [rbp+10h] BYREF
  LONG v231; // [rsp+70h] [rbp+18h]

  v231 = a3;
  v8 = a3;
  v10 = 1;
  GreGetBrushOrg(a1, &v230);
  v11 = *(_DWORD *)(a2 + 40);
  if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
  {
    if ( (v11 & 8) != 0 )
    {
      LODWORD(v230) = 0;
      v12 = *(unsigned int *)(a2 + 120);
      if ( (_DWORD)v12 == -1 || (unsigned int)v12 >= *(_DWORD *)(a2 + 52) )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(a2 + 80) + 152 * v12;
      v14 = -*(_DWORD *)(v13 + 76);
      goto LABEL_152;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0 )
        goto LABEL_10;
    }
    else if ( !IsDPIDWMSysMet(v16)
           || (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
             ? (v40 = 0)
             : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v37,
                                                            v38,
                                                            v39)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v40) )
    {
LABEL_10:
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
          ? (v29 = 0)
          : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v26,
                                                         v27,
                                                         v28)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v29) )
      {
        v41 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v41 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_25:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0 )
          goto LABEL_27;
      }
      else if ( !IsDPIDWMSysMet(v43)
             || (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
               ? (v67 = 0)
               : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v64,
                                                              v65,
                                                              v66)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v67) )
      {
LABEL_27:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v47, v46, v48, v49) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
            ? (v56 = 0)
            : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v53,
                                                           v54,
                                                           v55)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v56) )
        {
          v68 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v68 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_42:
        LODWORD(v230) = -(*v41 + *v68);
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) != 0 )
            goto LABEL_44;
        }
        else if ( !IsDPIDWMSysMet(v70)
               || (W32GetCurrentThreadDpiAwarenessContext(v85, v84, v86, v87) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90) + 408)
                 ? (v94 = 0)
                 : (v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v91,
                                                                v92,
                                                                v93)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v94) )
        {
LABEL_44:
          if ( IsDPIDWMSysMet(6uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 408)
              ? (v83 = 0)
              : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v80,
                                                             v81,
                                                             v82)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v83) )
          {
            v95 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v95 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_59:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v97, v96, v98, v99) & 0xF) != 0 )
              goto LABEL_61;
          }
          else if ( !IsDPIDWMSysMet(v97)
                 || (W32GetCurrentThreadDpiAwarenessContext(v109, v108, v110, v111) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v113, v114) + 408)
                   ? (v101 = 0LL)
                   : (v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v100,
                                                                   v115,
                                                                   v116)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !(_DWORD)v101) )
          {
LABEL_61:
            if ( IsDPIDWMSysMet(0x2EuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v102, v103) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v104, v105) + 408)
                ? (v101 = 0LL)
                : (v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v100,
                                                                v106,
                                                                v107)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  (_DWORD)v101) )
            {
              v117 = (_DWORD *)(gpsi + 2840LL);
            }
            else
            {
              v117 = (_DWORD *)(gpsi + 2064LL);
            }
            goto LABEL_76;
          }
          v117 = (_DWORD *)(gpsi + 2452LL);
LABEL_76:
          v118 = *(unsigned int *)(a2 + 120);
          if ( (_DWORD)v118 == -1 || (unsigned int)v118 >= *(_DWORD *)(a2 + 52) )
            v119 = 0LL;
          else
            v119 = *(_QWORD *)(a2 + 80) + 152 * v118;
          v14 = -(*v95 + *v117 + *(_DWORD *)(GetDPIMetrics(v101, v100) + 68) + *(_DWORD *)(v119 + 76));
          goto LABEL_151;
        }
        v95 = (_DWORD *)(gpsi + 2292LL);
        goto LABEL_59;
      }
      v68 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_42;
    }
    v41 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_25;
  }
  if ( (v11 & 8) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v121, v120, v122, v123) & 0xF) != 0 )
        goto LABEL_84;
    }
    else if ( !IsDPIDWMSysMet(v121)
           || (W32GetCurrentThreadDpiAwarenessContext(v136, v135, v137, v138) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v139, v140, v141) + 408)
             ? (v145 = 0)
             : (v145 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v142,
                                                             v143,
                                                             v144)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v145) )
    {
LABEL_84:
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v125, v124, v126, v127) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130) + 408)
          ? (v134 = 0)
          : (v134 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v131,
                                                          v132,
                                                          v133)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v134) )
      {
        v146 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v146 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_99:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v148, v147, v149, v150) & 0xF) != 0 )
          goto LABEL_101;
      }
      else if ( !IsDPIDWMSysMet(v148)
             || (W32GetCurrentThreadDpiAwarenessContext(v163, v162, v164, v165) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v166, v167, v168) + 408)
               ? (v172 = 0)
               : (v172 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v169,
                                                               v170,
                                                               v171)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v172) )
      {
LABEL_101:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v152, v151, v153, v154) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155, v156, v157) + 408)
            ? (v161 = 0)
            : (v161 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v158,
                                                            v159,
                                                            v160)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v161) )
        {
          v173 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v173 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_116:
        LODWORD(v230) = *v146 + *v173;
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v175, v174, v176, v177) & 0xF) != 0 )
            goto LABEL_118;
        }
        else if ( !IsDPIDWMSysMet(v175)
               || (W32GetCurrentThreadDpiAwarenessContext(v190, v189, v191, v192) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v193, v194, v195) + 408)
                 ? (v199 = 0)
                 : (v199 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v196,
                                                                 v197,
                                                                 v198)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v199) )
        {
LABEL_118:
          if ( IsDPIDWMSysMet(6uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v179, v178, v180, v181) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v182, v183, v184) + 408)
              ? (v188 = 0)
              : (v188 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v185,
                                                              v186,
                                                              v187)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v188) )
          {
            v200 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v200 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_133:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v202, v201, v203, v204) & 0xF) != 0 )
              goto LABEL_135;
          }
          else if ( !IsDPIDWMSysMet(v202)
                 || (W32GetCurrentThreadDpiAwarenessContext(v217, v216, v218, v219) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v220, v221, v222) + 408)
                   ? (v226 = 0)
                   : (v226 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v223,
                                                                   v224,
                                                                   v225)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v226) )
          {
LABEL_135:
            if ( IsDPIDWMSysMet(0x2EuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v206, v205, v207, v208) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v209, v210, v211) + 408)
                ? (v215 = 0)
                : (v215 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v212,
                                                                v213,
                                                                v214)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v215) )
            {
              v227 = (_DWORD *)(gpsi + 2840LL);
            }
            else
            {
              v227 = (_DWORD *)(gpsi + 2064LL);
            }
            goto LABEL_150;
          }
          v227 = (_DWORD *)(gpsi + 2452LL);
LABEL_150:
          v14 = *v200 + *v227;
LABEL_151:
          v8 = v231;
LABEL_152:
          HIDWORD(v230) = v14;
          GreSetBrushOrg(a1, v230, v14, &v230);
          goto LABEL_154;
        }
        v200 = (_DWORD *)(gpsi + 2292LL);
        goto LABEL_133;
      }
      v173 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_116;
    }
    v146 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_99;
  }
  v10 = 0;
LABEL_154:
  v228 = GreSelectBrush(a1, *(_QWORD *)(a2 + 112));
  NtGdiPatBlt(a1, v8, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v230, SHIDWORD(v230), 0LL);
  return GreSelectBrush(a1, v228);
}
