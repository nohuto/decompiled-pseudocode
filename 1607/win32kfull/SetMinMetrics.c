/*
 * XREFs of SetMinMetrics @ 0x1C008E908
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C008E328 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00BC2F0 (xxxInitWindowStation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(__int64 a1, char *a2)
{
  char *v2; // rdi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _DWORD *v48; // rbx
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  int v51; // esi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  _DWORD *v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  _DWORD *v73; // rbx
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _DWORD *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  _DWORD *v95; // rbx
  __int64 v96; // rdx
  unsigned __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  _DWORD *v108; // rcx
  __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  _DWORD *v121; // rcx
  __int64 result; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  int v136; // ecx
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  int v150; // ecx
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  int v164; // ecx
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // rdx
  __int64 v174; // r8
  int v175; // ecx
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // r9
  int v189; // ecx
  __int64 v190; // rdx
  __int64 v191; // r8
  __int64 v192; // r9
  int v194; // ecx
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rdx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v202; // rdx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rdx
  __int64 v206; // r8
  __int64 v207; // r9
  int v208; // ecx
  __int64 v209; // rdx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rdx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v216; // rdx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rdx
  __int64 v220; // r8
  __int64 v221; // r9
  int v222; // ecx
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rdx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v230; // rdx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 v233; // rdx
  __int64 v234; // r8
  __int64 v235; // r9
  int v236; // ecx
  int v237; // [rsp+30h] [rbp-30h]
  int v238; // [rsp+34h] [rbp-2Ch]
  int v239; // [rsp+38h] [rbp-28h]
  int v240; // [rsp+3Ch] [rbp-24h]
  char v241; // [rsp+40h] [rbp-20h] BYREF
  int v242; // [rsp+44h] [rbp-1Ch]
  int v243; // [rsp+48h] [rbp-18h]
  int v244; // [rsp+4Ch] [rbp-14h]
  int v245; // [rsp+50h] [rbp-10h]

  v2 = a2;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 146LL);
    v242 = v237;
    FastGetProfileIntFromID(a1, 23LL, 147LL);
    v243 = v238;
    FastGetProfileIntFromID(a1, 23LL, 148LL);
    v244 = v239;
    FastGetProfileIntFromID(a1, 23LL, 150LL);
    v2 = &v241;
    v245 = v240;
  }
  v4 = 0;
  if ( *((int *)v2 + 1) > 0 )
    v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 1) = v4;
  v6 = 0;
  if ( v5 > 0 )
    v6 = v5;
  v7 = *((_DWORD *)v2 + 3);
  *((_DWORD *)v2 + 2) = v6;
  v8 = 0;
  if ( v7 > 0 )
    v8 = v7;
  *((_DWORD *)v2 + 4) &= 0xFu;
  *((_DWORD *)v2 + 3) = v8;
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) == 0 )
    {
LABEL_53:
      v21 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_13;
    }
  }
  else if ( IsDPIDWMSysMet(v10)
         && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_53;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v130, v131, v132) + 408)
      ? (v136 = 0)
      : (v136 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v133,
                                                      v134,
                                                      v135)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v136) )
  {
    v21 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v21 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_13:
  v26 = IsDPIAbsoluteSysMet(0x39uLL);
  if ( v26 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 0 )
    {
LABEL_67:
      v35 = (_DWORD *)(gpsi + 2496LL);
      goto LABEL_17;
    }
  }
  else if ( IsDPIDWMSysMet(v23)
         && (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v137, v138, v139) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v141, v142)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_67;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v144, v145, v146) + 408)
      ? (v150 = 0)
      : (v150 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v147,
                                                      v148,
                                                      v149)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v150) )
  {
    v35 = (_DWORD *)(gpsi + 2884LL);
  }
  else
  {
    v35 = (_DWORD *)(gpsi + 2108LL);
  }
LABEL_17:
  *v35 = *((_DWORD *)v2 + 1) + 2 * *v21;
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 0 )
    {
LABEL_81:
      v48 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_21;
    }
  }
  else if ( IsDPIDWMSysMet(v37)
         && (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42, v43) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v151, v152, v153) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v154, v155, v156)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_81;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v46, v47) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v158, v159, v160) + 408)
      ? (v164 = 0)
      : (v164 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v161,
                                                      v162,
                                                      v163)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v164) )
  {
    v48 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v48 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_21:
  v51 = IsDPIAbsoluteSysMet(0x3AuLL);
  if ( v51 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v52, v53) & 0xF) == 0 )
    {
LABEL_95:
      v62 = gpsi;
      v63 = (_DWORD *)(gpsi + 2500LL);
      goto LABEL_25;
    }
  }
  else if ( IsDPIDWMSysMet(v50)
         && (W32GetCurrentThreadDpiAwarenessContext(v55, v54, v56, v57) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v165, v166, v167) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v168, v169, v61)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_95;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60, v61) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v171, v172, v61) + 408)
      ? (v175 = 0)
      : (v175 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v173,
                                                      v174,
                                                      v61)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v175) )
  {
    v62 = gpsi;
    v63 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v62 = gpsi;
    v63 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_25:
  v64 = (unsigned int)(*(_DWORD *)(v62 + 2004) + 2 * *v48);
  *v63 = v64;
  if ( v26 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v64, v62, (__int64)v63, v61) & 0xF) == 0 )
    {
LABEL_109:
      v73 = (_DWORD *)(gpsi + 2496LL);
      goto LABEL_29;
    }
  }
  else if ( IsDPIDWMSysMet(0x39uLL)
         && (W32GetCurrentThreadDpiAwarenessContext(v66, v65, v67, v68) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v176, v177, v178) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v179, v180, v181)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_109;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v183, v184, v185) + 408)
      ? (v189 = 0)
      : (v189 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v186,
                                                      v187,
                                                      v188)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v189) )
  {
    v73 = (_DWORD *)(gpsi + 2884LL);
  }
  else
  {
    v73 = (_DWORD *)(gpsi + 2108LL);
  }
LABEL_29:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) == 0 )
    {
LABEL_123:
      v86 = (_DWORD *)(gpsi + 2456LL);
      goto LABEL_33;
    }
  }
  else if ( IsDPIDWMSysMet(v75)
         && (W32GetCurrentThreadDpiAwarenessContext(v79, v78, v80, v81) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v190, v191, v192) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v84, v85)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_123;
  }
  if ( IsDPIDWMSysMet(0x2FuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84, v85) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v84, v85) + 408)
      ? (v194 = 0)
      : (v194 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v82,
                                                      v84,
                                                      v85)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v194) )
  {
    v86 = (_DWORD *)(gpsi + 2844LL);
  }
  else
  {
    v86 = (_DWORD *)(gpsi + 2068LL);
  }
LABEL_33:
  *v86 = *v73 + *((_DWORD *)v2 + 2);
  if ( v51 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v86, v82, v84, v85) & 0xF) == 0 )
    {
LABEL_137:
      v95 = (_DWORD *)(gpsi + 2500LL);
      goto LABEL_37;
    }
  }
  else if ( IsDPIDWMSysMet(0x3AuLL)
         && (W32GetCurrentThreadDpiAwarenessContext(v88, v87, v89, v90) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v195, v196, v197) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v198, v199, v200)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_137;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v202, v203, v204) + 408)
      ? (v208 = 0)
      : (v208 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v205,
                                                      v206,
                                                      v207)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v208) )
  {
    v95 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v95 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_37:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v97, v96, v98, v99) & 0xF) == 0 )
    {
LABEL_151:
      v108 = (_DWORD *)(gpsi + 2460LL);
      goto LABEL_41;
    }
  }
  else if ( IsDPIDWMSysMet(v97)
         && (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v102, v103) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v209, v210, v211) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v212, v213, v214)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_151;
  }
  if ( IsDPIDWMSysMet(0x30uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v105, v104, v106, v107) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v216, v217, v218) + 408)
      ? (v222 = 0)
      : (v222 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v219,
                                                      v220,
                                                      v221)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v222) )
  {
    v108 = (_DWORD *)(gpsi + 2848LL);
  }
  else
  {
    v108 = (_DWORD *)(gpsi + 2072LL);
  }
LABEL_41:
  *v108 = *v95 + *((_DWORD *)v2 + 3);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v110, v109, v111, v112) & 0xF) == 0 )
    {
LABEL_165:
      v121 = (_DWORD *)(gpsi + 2492LL);
      goto LABEL_45;
    }
  }
  else if ( IsDPIDWMSysMet(v110)
         && (W32GetCurrentThreadDpiAwarenessContext(v114, v113, v115, v116) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v223, v224, v225) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v226, v227, v228)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_165;
  }
  if ( IsDPIDWMSysMet(0x38uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v118, v117, v119, v120) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v230, v231, v232) + 408)
      ? (v236 = 0)
      : (v236 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v233,
                                                      v234,
                                                      v235)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v236) )
  {
    v121 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v121 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_45:
  result = *((unsigned int *)v2 + 4);
  *v121 = result;
  return result;
}
