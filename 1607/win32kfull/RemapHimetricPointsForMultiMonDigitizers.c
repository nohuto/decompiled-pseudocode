/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01DC320
 * Callers:
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01DD09C (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __m128i *v4; // rdi
  __m128i v5; // xmm0
  INT v8; // edx
  INT v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
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
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  INT *v52; // rbx
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  _DWORD *v80; // rdx
  INT v81; // r13d
  __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // r12d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // ecx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  INT *v109; // rbx
  __int64 v110; // rdx
  unsigned __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  int v114; // r14d
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // ecx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  _DWORD *v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  INT v142; // r15d
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  INT *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  _DWORD *v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // r9
  int v177; // ecx
  __int64 v178; // rdx
  __int64 v179; // rcx
  INT v180; // edi
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rdx
  __int64 v192; // r8
  __int64 v193; // r9
  INT *v194; // rbx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rdx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rdx
  __int64 v203; // r8
  __int64 v204; // r9
  int v205; // ecx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // r9
  _DWORD *v217; // rdx
  INT v218; // edi
  INT v219; // ebx
  INT v220; // eax
  INT v221; // ecx
  INT v222; // eax
  INT v223; // ecx
  __int64 result; // rax
  INT v225; // [rsp+20h] [rbp-38h]
  INT v226; // [rsp+24h] [rbp-34h]
  INT b[4]; // [rsp+28h] [rbp-30h] BYREF
  __m128i v228; // [rsp+38h] [rbp-20h]
  INT v229; // [rsp+A0h] [rbp+48h]
  INT v230; // [rsp+A8h] [rbp+50h]

  v4 = (__m128i *)(a2 + 28);
  v5 = *(__m128i *)(a2 + 28);
  v8 = *(_DWORD *)(a1 + 8);
  v228 = v5;
  v230 = EngMulDiv(_mm_cvtsi128_si32(v5) - *(_DWORD *)(gpsi + 2184LL), v8, *(_DWORD *)(gpsi + 2192LL));
  v229 = EngMulDiv(v5.m128i_i32[1] - *(_DWORD *)(gpsi + 2188LL), *(_DWORD *)(a1 + 12), *(_DWORD *)(gpsi + 2196LL));
  v225 = EngMulDiv(v5.m128i_i32[2] - *(_DWORD *)(gpsi + 2184LL), *(_DWORD *)(a1 + 8), *(_DWORD *)(gpsi + 2192LL));
  v9 = EngMulDiv(v5.m128i_i32[3] - *(_DWORD *)(gpsi + 2188LL), *(_DWORD *)(a1 + 12), *(_DWORD *)(gpsi + 2196LL));
  *(_OWORD *)b = *(_OWORD *)a1;
  v226 = v9;
  VirtualizeMultiMonDigitizerSize(b);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16, v17) + 408)
      ? (v15 = 0LL)
      : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16, v17)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v15) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 408)
                               + 8LL)
                   + 244LL) & 1 )
    {
      v4 = (__m128i *)(a2 + 60);
    }
  }
  else
  {
    v4 = (__m128i *)(a2 + 44);
  }
  v228 = *v4;
  v27 = IsDPIAbsoluteSysMet(0x4EuLL);
  if ( v27 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v28, v29) & 0xF) != 0 )
      goto LABEL_15;
LABEL_25:
    v52 = (INT *)(gpsi + 2580LL);
    goto LABEL_30;
  }
  if ( IsDPIDWMSysMet(v26)
    && (W32GetCurrentThreadDpiAwarenessContext(v42, v41, v43, v44) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_25;
  }
LABEL_15:
  if ( IsDPIDWMSysMet(0x4EuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
      ? (v40 = 0)
      : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v40) )
  {
    v52 = (INT *)(gpsi + 2968LL);
  }
  else
  {
    v52 = (INT *)(gpsi + 2192LL);
  }
LABEL_30:
  v55 = IsDPIAbsoluteSysMet(0x4CuLL);
  if ( v55 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v56, v57) & 0xF) != 0 )
      goto LABEL_32;
LABEL_42:
    v80 = (_DWORD *)(gpsi + 2572LL);
    goto LABEL_47;
  }
  if ( IsDPIDWMSysMet(v54)
    && (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_42;
  }
LABEL_32:
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60, v61) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 408)
      ? (v68 = 0)
      : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v68) )
  {
    v80 = (_DWORD *)(gpsi + 2960LL);
  }
  else
  {
    v80 = (_DWORD *)(gpsi + 2184LL);
  }
LABEL_47:
  v81 = EngMulDiv(v228.m128i_i32[0] - *v80, b[2], *v52);
  v86 = IsDPIAbsoluteSysMet(0x4FuLL);
  if ( v86 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84, v85) & 0xF) != 0 )
      goto LABEL_49;
LABEL_59:
    v109 = (INT *)(gpsi + 2584LL);
    goto LABEL_64;
  }
  if ( IsDPIDWMSysMet(v83)
    && (W32GetCurrentThreadDpiAwarenessContext(v99, v98, v100, v101) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v102, v103, v104) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v105, v106, v107) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_59;
  }
LABEL_49:
  if ( IsDPIDWMSysMet(0x4FuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v88, v87, v89, v90) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v92, v93) + 408)
      ? (v97 = 0)
      : (v97 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v97) )
  {
    v109 = (INT *)(gpsi + 2972LL);
  }
  else
  {
    v109 = (INT *)(gpsi + 2196LL);
  }
LABEL_64:
  v114 = IsDPIAbsoluteSysMet(0x4DuLL);
  if ( v114 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v111, v110, v112, v113) & 0xF) != 0 )
      goto LABEL_66;
LABEL_76:
    v137 = (_DWORD *)(gpsi + 2576LL);
    goto LABEL_81;
  }
  if ( IsDPIDWMSysMet(v111)
    && (W32GetCurrentThreadDpiAwarenessContext(v127, v126, v128, v129) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v130, v131, v132) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v133, v134, v135) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_76;
  }
LABEL_66:
  if ( IsDPIDWMSysMet(0x4DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v116, v115, v117, v118) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v119, v120, v121) + 408)
      ? (v125 = 0)
      : (v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v122,
                                                      v123,
                                                      v124)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v125) )
  {
    v137 = (_DWORD *)(gpsi + 2964LL);
  }
  else
  {
    v137 = (_DWORD *)(gpsi + 2188LL);
  }
LABEL_81:
  v142 = EngMulDiv(v228.m128i_i32[1] - *v137, b[3], *v109);
  if ( v27 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v139, v138, v140, v141) & 0xF) != 0 )
      goto LABEL_83;
LABEL_93:
    v154 = (INT *)(gpsi + 2580LL);
    goto LABEL_98;
  }
  if ( IsDPIDWMSysMet(0x4EuLL) && (W32GetCurrentThreadDpiAwarenessContext(v148, v147, v149, v150) & 0xF) == 0 )
  {
    v144 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v151, v152, v153) + 408)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v143, v145, v146)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1;
    if ( (_DWORD)v144 )
      goto LABEL_93;
  }
LABEL_83:
  if ( IsDPIDWMSysMet(0x4EuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v144, v143, v145, v146) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v143, v145, v146) + 408)
      ? (v144 = 0LL)
      : (v144 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v143,
                                                      v145,
                                                      v146)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        (_DWORD)v144) )
  {
    v154 = (INT *)(gpsi + 2968LL);
  }
  else
  {
    v154 = (INT *)(gpsi + 2192LL);
  }
LABEL_98:
  if ( v55 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v144, v143, v145, v146) & 0xF) != 0 )
      goto LABEL_108;
LABEL_107:
    v166 = (_DWORD *)(gpsi + 2572LL);
    goto LABEL_116;
  }
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v156, v155, v157, v158) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v162, v163, v164) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_107;
  }
LABEL_108:
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v168, v167, v169, v170) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v171, v172, v173) + 408)
      ? (v177 = 0)
      : (v177 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v174,
                                                      v175,
                                                      v176)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v177) )
  {
    v166 = (_DWORD *)(gpsi + 2960LL);
  }
  else
  {
    v166 = (_DWORD *)(gpsi + 2184LL);
  }
LABEL_116:
  v180 = EngMulDiv(v228.m128i_i32[2] - *v166, b[2], *v154);
  if ( v86 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v179, v178, v181, v182) & 0xF) != 0 )
      goto LABEL_118;
LABEL_128:
    v194 = (INT *)(gpsi + 2584LL);
    goto LABEL_133;
  }
  if ( IsDPIDWMSysMet(0x4FuLL) && (W32GetCurrentThreadDpiAwarenessContext(v188, v187, v189, v190) & 0xF) == 0 )
  {
    v184 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v191, v192, v193) + 408)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v183, v185, v186)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1;
    if ( (_DWORD)v184 )
      goto LABEL_128;
  }
LABEL_118:
  if ( IsDPIDWMSysMet(0x4FuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v184, v183, v185, v186) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v183, v185, v186) + 408)
      ? (v184 = 0LL)
      : (v184 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v183,
                                                      v185,
                                                      v186)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        (_DWORD)v184) )
  {
    v194 = (INT *)(gpsi + 2972LL);
  }
  else
  {
    v194 = (INT *)(gpsi + 2196LL);
  }
LABEL_133:
  if ( v114 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v184, v183, v185, v186) & 0xF) != 0 )
      goto LABEL_135;
LABEL_145:
    v217 = (_DWORD *)(gpsi + 2576LL);
    goto LABEL_150;
  }
  if ( IsDPIDWMSysMet(0x4DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v207, v206, v208, v209) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v210, v211, v212) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v213, v214, v215) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_145;
  }
LABEL_135:
  if ( IsDPIDWMSysMet(0x4DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v196, v195, v197, v198) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v199, v200, v201) + 408)
      ? (v205 = 0)
      : (v205 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v202,
                                                      v203,
                                                      v204)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v205) )
  {
    v217 = (_DWORD *)(gpsi + 2964LL);
  }
  else
  {
    v217 = (_DWORD *)(gpsi + 2188LL);
  }
LABEL_150:
  v218 = v180 - v81;
  v219 = EngMulDiv(v228.m128i_i32[3] - *v217, b[3], *v194) - v142;
  v220 = EngMulDiv(*a3 - v230, v218, v225 - v230);
  v221 = a3[1] - v229;
  *a3 = v81 + v220;
  a3[1] = v142 + EngMulDiv(v221, v219, v226 - v229);
  v222 = EngMulDiv(*a4 - v230, v218, v225 - v230);
  v223 = a4[1] - v229;
  *a4 = v81 + v222;
  result = (unsigned int)(v142 + EngMulDiv(v223, v219, v226 - v229));
  a4[1] = result;
  return result;
}
