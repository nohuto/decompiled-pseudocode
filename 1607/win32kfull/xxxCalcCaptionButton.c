/*
 * XREFs of xxxCalcCaptionButton @ 0x1C022F294
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C00B791C (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMNCanClose @ 0x1C00AEA0C (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, __int16 *a3, _DWORD *a4, _WORD *a5, int a6)
{
  bool v7; // zf
  __int16 *v8; // r14
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  _DWORD *v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // ecx
  int *v66; // rcx
  int v67; // edx
  int WindowBordersForDpi; // esi
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
  _DWORD *v95; // rcx
  __int64 v96; // rdx
  unsigned __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // ecx
  _DWORD *v122; // rcx
  int v123; // edx
  int v124; // r12d
  int v125; // eax
  int v126; // ebp
  int v127; // eax
  __int64 v128; // r11
  __int64 v129; // rsi
  int v130; // esi
  int v131; // eax
  __int64 v132; // r11
  __int64 v133; // r14
  int v134; // ecx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v136; // r11
  __int64 v137; // rsi
  int v138; // eax
  __int64 v139; // r11
  __int64 v140; // r14
  __int16 v141; // ax
  __int64 v142; // rdx
  unsigned __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  int v156; // ecx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  int v167; // ecx
  _DWORD *v168; // rcx
  _WORD *v169; // rax
  int v170; // eax
  int v171; // ecx
  __int64 v172; // rdx
  unsigned __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  _DWORD *v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  int v198; // ecx
  int v199; // edi
  __int64 v200; // rdx
  unsigned __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rdx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rdx
  __int64 v212; // r8
  __int64 v213; // r9
  int v214; // ecx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rdx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rdx
  __int64 v223; // r8
  __int64 v224; // r9
  int *v226; // rbx
  __int64 v227; // rdx
  unsigned __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rdx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rdx
  __int64 v239; // r8
  __int64 v240; // r9
  int v241; // ecx
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  __int64 v246; // rdx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rdx
  __int64 v250; // r8
  __int64 v251; // r9
  int v252; // ecx
  int *v253; // rdx
  int v254; // ecx
  int v255; // eax
  int v256; // edx
  int v257; // r8d
  int v259; // [rsp+70h] [rbp+8h]

  v7 = (*(_DWORD *)(a1 + 288) & 0x10000000) == 0;
  v8 = a3;
  *a3 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
      && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 244LL) & 1) != 0 )
    {
      v10 = 96;
    }
    else
    {
      v10 = *(unsigned __int16 *)(gpsi + 8678LL);
    }
  }
  else
  {
    v10 = *(unsigned __int16 *)(a1 + 356);
  }
  if ( (*(_BYTE *)(a1 + 55) & 0x20) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) != 0 )
        goto LABEL_11;
    }
    else if ( !IsDPIDWMSysMet(v13)
           || (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 408)
             ? (v37 = 0)
             : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v34,
                                                            v35,
                                                            v36)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v37) )
    {
LABEL_11:
      if ( IsDPIDWMSysMet(7uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 408)
          ? (v26 = 0)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v23,
                                                         v24,
                                                         v25)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v26) )
      {
        v38 = (_DWORD *)(gpsi + 2684LL);
      }
      else
      {
        v38 = (_DWORD *)(gpsi + 1908LL);
      }
LABEL_26:
      v39 = -*v38;
      if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42, v43) & 0xF) != 0 )
          goto LABEL_28;
      }
      else if ( !IsDPIDWMSysMet(v41)
             || (W32GetCurrentThreadDpiAwarenessContext(v56, v55, v57, v58) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 408)
               ? (v65 = 0)
               : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v62,
                                                              v63,
                                                              v64)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v65) )
      {
LABEL_28:
        if ( IsDPIDWMSysMet(8uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 408)
            ? (v54 = 0)
            : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v51,
                                                           v52,
                                                           v53)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v54) )
        {
          v66 = (int *)(gpsi + 2688LL);
        }
        else
        {
          v66 = (int *)(gpsi + 1912LL);
        }
        goto LABEL_43;
      }
      v66 = (int *)(gpsi + 2300LL);
LABEL_43:
      v67 = *v66;
      goto LABEL_79;
    }
    v38 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_26;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(unsigned int *)(a1 + 52),
                          *(unsigned int *)(a1 + 48),
                          (__int64)a3,
                          (__int64)a4,
                          v10);
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) != 0 )
      goto LABEL_46;
LABEL_56:
    v95 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_61;
  }
  if ( IsDPIDWMSysMet(v70)
    && (W32GetCurrentThreadDpiAwarenessContext(v85, v84, v86, v87) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v92, v93) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_56;
  }
LABEL_46:
  if ( IsDPIDWMSysMet(5uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 408)
      ? (v83 = 0)
      : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v80, v81, v82)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v83) )
  {
    v95 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v95 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_61:
  v39 = -(*v95 * WindowBordersForDpi);
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v97, v96, v98, v99) & 0xF) != 0 )
      goto LABEL_63;
  }
  else if ( !IsDPIDWMSysMet(v97)
         || (W32GetCurrentThreadDpiAwarenessContext(v112, v111, v113, v114) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v115, v116, v117) + 408)
           ? (v121 = 0)
           : (v121 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v118,
                                                           v119,
                                                           v120)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v121) )
  {
LABEL_63:
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v102, v103) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
        ? (v110 = 0)
        : (v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v107,
                                                        v108,
                                                        v109)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v110) )
    {
      v122 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v122 = (_DWORD *)(gpsi + 1904LL);
    }
    goto LABEL_78;
  }
  v122 = (_DWORD *)(gpsi + 2292LL);
LABEL_78:
  v67 = WindowBordersForDpi * *v122;
LABEL_79:
  v123 = -v67;
  *a4 = *(_DWORD *)(a1 + 112) - v39;
  a4[2] = v39 + *(_DWORD *)(a1 + 120);
  a4[1] = *(_DWORD *)(a1 + 116) - v123;
  a4[3] = v123 + *(_DWORD *)(a1 + 124);
  v259 = -*(_DWORD *)(a1 + 116);
  v124 = -*(_DWORD *)(a1 + 112);
  v125 = *(unsigned __int16 *)(gpsi + 8678LL);
  if ( *(char *)(a1 + 48) >= 0 )
  {
    if ( v10 == v125 )
    {
      v126 = *(_DWORD *)(gpsi + 2000LL);
    }
    else if ( v10 == 96 )
    {
      v126 = *(_DWORD *)(gpsi + 2388LL);
    }
    else
    {
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v10);
      if ( DpiDepSysMetCachePlateauSlot == -1 )
      {
        v126 = ScaleSystemMetricForDPIWithoutCache(30, v10);
      }
      else
      {
        v137 = 112LL * DpiDepSysMetCachePlateauSlot;
        v126 = *(_DWORD *)(v137 + v136 + 3092);
        if ( v126 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v10);
          v126 = *(_DWORD *)(v137 + gpsi + 3092);
          if ( v126 == -1 )
            v126 = 0;
        }
      }
    }
    if ( v10 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v130 = *(_DWORD *)(gpsi + 2004LL);
      goto LABEL_120;
    }
    if ( v10 == 96 )
    {
      v130 = *(_DWORD *)(gpsi + 2392LL);
      goto LABEL_120;
    }
    v138 = GetDpiDepSysMetCachePlateauSlot(v10);
    if ( v138 != -1 )
    {
      v140 = 112LL * v138;
      v130 = *(_DWORD *)(v140 + v139 + 3096);
      if ( v130 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v10);
        v130 = *(_DWORD *)(v140 + gpsi + 3096);
LABEL_97:
        if ( v130 == -1 )
          v130 = 0;
      }
LABEL_99:
      v8 = a3;
      goto LABEL_120;
    }
    v134 = 31;
  }
  else
  {
    if ( v10 == v125 )
    {
      v126 = *(_DWORD *)(gpsi + 2088LL);
    }
    else if ( v10 == 96 )
    {
      v126 = *(_DWORD *)(gpsi + 2476LL);
    }
    else
    {
      v127 = GetDpiDepSysMetCachePlateauSlot(v10);
      if ( v127 == -1 )
      {
        v126 = ScaleSystemMetricForDPIWithoutCache(52, v10);
      }
      else
      {
        v129 = 112LL * v127;
        v126 = *(_DWORD *)(v129 + v128 + 3128);
        if ( v126 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v10);
          v126 = *(_DWORD *)(v129 + gpsi + 3128);
          if ( v126 == -1 )
            v126 = 0;
        }
      }
    }
    if ( v10 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v130 = *(_DWORD *)(gpsi + 2092LL);
      goto LABEL_120;
    }
    if ( v10 == 96 )
    {
      v130 = *(_DWORD *)(gpsi + 2480LL);
      goto LABEL_120;
    }
    v131 = GetDpiDepSysMetCachePlateauSlot(v10);
    if ( v131 != -1 )
    {
      v133 = 112LL * v131;
      v130 = *(_DWORD *)(v133 + v132 + 3132);
      if ( v130 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v10);
        v130 = *(_DWORD *)(v133 + gpsi + 3132);
        goto LABEL_97;
      }
      goto LABEL_99;
    }
    v134 = 53;
  }
  v130 = ScaleSystemMetricForDPIWithoutCache(v134, v10);
LABEL_120:
  if ( a2 != 5 )
  {
    if ( a2 != 2 )
    {
      if ( a2 != 3 )
      {
        if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
        {
          a4[2] -= v126;
          *a5 = 11;
          *v8 = -3712;
        }
        goto LABEL_155;
      }
      if ( (*(_BYTE *)(a1 + 54) & 1) == 0 && !a6 )
        goto LABEL_155;
      a4[2] -= v126;
      v169 = a5;
      if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
      {
        *a5 = 14;
        v141 = -4048;
        goto LABEL_152;
      }
LABEL_145:
      *v169 = 8;
      *v8 = -3808;
      goto LABEL_156;
    }
    if ( (*(_BYTE *)(a1 + 54) & 2) == 0 && !a6 )
      goto LABEL_155;
    a4[2] += -2 * v126;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v143, v142, v144, v145) & 0xF) != 0 )
        goto LABEL_129;
    }
    else if ( !IsDPIDWMSysMet(v143)
           || (W32GetCurrentThreadDpiAwarenessContext(v158, v157, v159, v160) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v161, v162, v163) + 408)
             ? (v167 = 0)
             : (v167 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v164,
                                                             v165,
                                                             v166)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v167) )
    {
LABEL_129:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v147, v146, v148, v149) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v150, v151, v152) + 408)
          ? (v156 = 0)
          : (v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v153,
                                                          v154,
                                                          v155)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v156) )
      {
        v168 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v168 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_144:
      v124 += *v168;
      v169 = a5;
      if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
      {
        *a5 = 4;
        v141 = -4064;
        goto LABEL_152;
      }
      goto LABEL_145;
    }
    v168 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_144;
  }
  if ( (unsigned int)xxxMNCanClose(a1) || a6 )
  {
    *a5 = *(char *)(a1 + 48) < 0 ? 0x29 : 0;
    v141 = -4000;
LABEL_152:
    *v8 = v141;
  }
LABEL_155:
  if ( !*v8 )
  {
    LOWORD(v199) = v259;
    return (unsigned __int16)v124 | ((unsigned __int16)v199 << 16);
  }
LABEL_156:
  v170 = a4[2] - v126;
  v171 = v130 + a4[1];
  *a4 = v170;
  a4[3] = v171;
  LOWORD(v124) = v170 + v124;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v173, v172, v174, v175) & 0xF) != 0 )
      goto LABEL_166;
LABEL_165:
    v187 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_174;
  }
  if ( IsDPIDWMSysMet(v173)
    && (W32GetCurrentThreadDpiAwarenessContext(v177, v176, v178, v179) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v180, v181, v182) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v183, v184, v185) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_165;
  }
LABEL_166:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v189, v188, v190, v191) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v192, v193, v194) + 408)
      ? (v198 = 0)
      : (v198 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v195,
                                                      v196,
                                                      v197)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v198) )
  {
    v187 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v187 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_174:
  v199 = *v187 + a4[1] + v259;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v201, v200, v202, v203) & 0xF) != 0 )
      goto LABEL_176;
LABEL_186:
    v226 = (int *)(gpsi + 2292LL);
    goto LABEL_191;
  }
  if ( IsDPIDWMSysMet(v201)
    && (W32GetCurrentThreadDpiAwarenessContext(v216, v215, v217, v218) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v219, v220, v221) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v222, v223, v224) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_186;
  }
LABEL_176:
  if ( IsDPIDWMSysMet(6uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v205, v204, v206, v207) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v208, v209, v210) + 408)
      ? (v214 = 0)
      : (v214 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v211,
                                                      v212,
                                                      v213)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v214) )
  {
    v226 = (int *)(gpsi + 2680LL);
  }
  else
  {
    v226 = (int *)(gpsi + 1904LL);
  }
LABEL_191:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v228, v227, v229, v230) & 0xF) != 0 )
      goto LABEL_193;
  }
  else if ( !IsDPIDWMSysMet(v228)
         || (W32GetCurrentThreadDpiAwarenessContext(v243, v242, v244, v245) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v246, v247, v248) + 408)
           ? (v252 = 0)
           : (v252 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v249,
                                                           v250,
                                                           v251)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v252) )
  {
LABEL_193:
    if ( IsDPIDWMSysMet(5uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v232, v231, v233, v234) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v235, v236, v237) + 408)
        ? (v241 = 0)
        : (v241 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v238,
                                                        v239,
                                                        v240)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v241) )
    {
      v253 = (int *)(gpsi + 2676LL);
    }
    else
    {
      v253 = (int *)(gpsi + 1900LL);
    }
    goto LABEL_208;
  }
  v253 = (int *)(gpsi + 2288LL);
LABEL_208:
  v254 = *v226;
  v255 = *v253;
  a4[2] += *v253;
  *a4 -= v255;
  a4[1] -= v254;
  a4[3] += v254;
  if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
  {
    v256 = *(_DWORD *)(a1 + 112) + *(_DWORD *)(a1 + 120) - *a4;
    v257 = a4[2] - *a4;
    a4[2] = v256;
    *a4 = v256 - v257;
  }
  return (unsigned __int16)v124 | ((unsigned __int16)v199 << 16);
}
