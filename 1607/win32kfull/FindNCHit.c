/*
 * XREFs of FindNCHit @ 0x1C0121100
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     SizeBoxHwnd @ 0x1C024571C (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int v4; // r15d
  int v5; // r13d
  unsigned __int64 v6; // rbx
  __int128 v7; // xmm6
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
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
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  _DWORD *v36; // r12
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
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
  int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // ecx
  _DWORD *v63; // r15
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // ecx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  int v89; // ecx
  _DWORD *v90; // rsi
  __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // ecx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // ecx
  _DWORD *v117; // rax
  int v118; // edx
  int v119; // r12d
  int v120; // esi
  int v121; // ecx
  int v122; // r15d
  _DWORD *v123; // r8
  __int64 v124; // r11
  int v125; // r9d
  __int64 v126; // rdx
  unsigned __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  int v140; // ecx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // r8
  __int64 v150; // r9
  int v151; // ecx
  _DWORD *v152; // rsi
  __int64 v153; // rdx
  unsigned __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  int v168; // ecx
  int *v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // r8
  __int64 v180; // r9
  int v181; // ecx
  int v182; // ecx
  int v183; // eax
  int v184; // eax
  int v185; // eax
  int v186; // eax
  __int64 v187; // r11
  __int64 v188; // rsi
  int v189; // eax
  int v190; // eax
  __int64 v191; // r11
  __int64 v192; // rsi
  int v193; // eax
  int v194; // eax
  __int64 v195; // r11
  __int64 v196; // rsi
  __int64 v197; // rdx
  __int64 v198; // r8
  __int64 v199; // r9
  int WindowBordersForDpi; // r12d
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
  _DWORD *v227; // rsi
  __int64 v228; // rdx
  unsigned __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rdx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 v239; // rdx
  __int64 v240; // r8
  __int64 v241; // r9
  int v242; // ecx
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rdx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rdx
  __int64 v251; // r8
  __int64 v252; // r9
  _DWORD *v254; // rax
  int v255; // r15d
  int v256; // edx
  int v257; // ecx
  int v258; // edx
  int v259; // ecx
  unsigned __int8 v260; // cl
  int v261; // eax
  int v262; // ebx
  int v263; // eax
  __int64 v264; // r11
  __int64 v265; // r14
  int v266; // eax
  int v267; // eax
  __int64 v268; // r11
  __int64 v269; // r14
  __int64 v270; // rcx
  int v271; // eax
  __int64 v272; // r11
  __int64 v273; // r14
  int v274; // eax
  __int64 v275; // r11
  __int64 v276; // r14
  int v277; // eax
  int v278; // r12d
  int v279; // esi
  int v280; // ebx
  int v281; // edx
  int v282; // eax
  int v283; // eax
  int v284; // eax
  __int64 v285; // r11
  __int64 v286; // rbx
  int v287; // r15d
  int v288; // edx
  int v289; // eax
  __int64 v290; // r11
  __int64 v291; // rbx
  __int64 v292; // rcx
  int v293; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v295; // r11
  __int64 v296; // rbx
  int v297; // eax
  __int64 v298; // r11
  __int64 v299; // rbx
  char v300; // cl
  int v301; // esi
  int v302; // esi
  __int64 v303; // rdx
  unsigned __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // r9
  __int64 v307; // rdx
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 v311; // rdx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rdx
  __int64 v315; // r8
  __int64 v316; // r9
  int v317; // ecx
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 v322; // rdx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 v325; // rdx
  __int64 v326; // r8
  __int64 v327; // r9
  int v328; // ecx
  int *v329; // rdi
  __int64 v330; // rdx
  unsigned __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rdx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 v341; // rdx
  __int64 v342; // r8
  __int64 v343; // r9
  int v344; // ecx
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rdx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // rdx
  __int64 v353; // r8
  __int64 v354; // r9
  int v355; // ecx
  _DWORD *v356; // rdx
  int v357; // ecx
  int v358; // eax
  int v359; // ecx
  char v360; // al
  __int64 v361; // rax
  int v362; // eax
  __int128 v363; // [rsp+38h] [rbp-39h] BYREF
  int v364; // [rsp+48h] [rbp-29h]
  unsigned __int64 v365; // [rsp+50h] [rbp-21h]
  int v366; // [rsp+58h] [rbp-19h]
  int v367; // [rsp+60h] [rbp-11h] BYREF
  int v368; // [rsp+64h] [rbp-Dh]
  int v369; // [rsp+68h] [rbp-9h]
  int v370; // [rsp+6Ch] [rbp-5h]
  __int128 v371; // [rsp+78h] [rbp+7h] BYREF

  if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
  {
    v3 = *(unsigned __int16 *)(a1 + 356);
  }
  else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
         && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 244LL) & 1) != 0 )
  {
    v3 = 96;
  }
  else
  {
    v3 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  v4 = (__int16)a2;
  LODWORD(v365) = (__int16)a2;
  v5 = SHIWORD(a2);
  HIDWORD(v365) = SHIWORD(a2);
  v6 = v365;
  v364 = (__int16)a2;
  if ( !PtInRect((_DWORD *)(a1 + 112), v365) )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 55) & 0x20) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) != 0 )
        goto LABEL_15;
    }
    else if ( !IsDPIDWMSysMet(v11)
           || (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
             ? (v35 = 0)
             : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v32,
                                                            v33,
                                                            v34)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v35) )
    {
LABEL_15:
      if ( IsDPIDWMSysMet(8uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
          ? (v24 = 0)
          : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v21,
                                                         v22,
                                                         v23)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v24) )
      {
        v36 = (_DWORD *)(gpsi + 2688LL);
      }
      else
      {
        v36 = (_DWORD *)(gpsi + 1912LL);
      }
LABEL_30:
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) != 0 )
          goto LABEL_32;
      }
      else if ( !IsDPIDWMSysMet(v38)
             || (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54, v55) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 408)
               ? (v62 = 0)
               : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v59,
                                                              v60,
                                                              v61)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v62) )
      {
LABEL_32:
        if ( IsDPIDWMSysMet(6uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v42, v41, v43, v44) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 408)
            ? (v51 = 0)
            : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v48,
                                                           v49,
                                                           v50)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v51) )
        {
          v63 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v63 = (_DWORD *)(gpsi + 1904LL);
        }
LABEL_47:
        if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v65, v64, v66, v67) & 0xF) != 0 )
            goto LABEL_49;
        }
        else if ( !IsDPIDWMSysMet(v65)
               || (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81, v82) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 408)
                 ? (v89 = 0)
                 : (v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v86,
                                                                v87,
                                                                v88)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v89) )
        {
LABEL_49:
          if ( IsDPIDWMSysMet(7uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v69, v68, v70, v71) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74) + 408)
              ? (v78 = 0)
              : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v75,
                                                             v76,
                                                             v77)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v78) )
          {
            v90 = (_DWORD *)(gpsi + 2684LL);
          }
          else
          {
            v90 = (_DWORD *)(gpsi + 1908LL);
          }
LABEL_64:
          if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94) & 0xF) != 0 )
              goto LABEL_66;
          }
          else if ( !IsDPIDWMSysMet(v92)
                 || (W32GetCurrentThreadDpiAwarenessContext(v107, v106, v108, v109) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 408)
                   ? (v116 = 0)
                   : (v116 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v113,
                                                                   v114,
                                                                   v115)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v116) )
          {
LABEL_66:
            if ( IsDPIDWMSysMet(5uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v96, v95, v97, v98) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v99, v100, v101) + 408)
                ? (v105 = 0)
                : (v105 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v102,
                                                                v103,
                                                                v104)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v105) )
            {
              v117 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v117 = (_DWORD *)(gpsi + 1900LL);
            }
            goto LABEL_81;
          }
          v117 = (_DWORD *)(gpsi + 2288LL);
LABEL_81:
          v118 = -(*v36 + *v63);
          v119 = *(_DWORD *)(a1 + 112) + *v117 + *v90;
          v120 = *(_DWORD *)(a1 + 120) - (*v117 + *v90);
          v121 = *(_DWORD *)(a1 + 124);
          v122 = *(_DWORD *)(a1 + 116) - v118;
          v367 = v119;
          v370 = v118 + v121;
          v369 = v120;
          v368 = v122;
          if ( !PtInRect(&v367, v365) )
            return 2LL;
          v125 = HIDWORD(v365);
LABEL_245:
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
            v364 = *v123 + *(_DWORD *)(a1 + 120) - v364;
          if ( v125 < v122 )
            return 2LL;
          v282 = *(unsigned __int16 *)(v124 + 8678);
          if ( *(char *)(a1 + 48) >= 0 )
          {
            if ( v3 == v282 )
            {
              v293 = *(_DWORD *)(v124 + 1896);
            }
            else if ( v3 == 96 )
            {
              v293 = *(_DWORD *)(v124 + 2284);
            }
            else
            {
              DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v3);
              if ( DpiDepSysMetCachePlateauSlot == -1 )
              {
                v293 = ScaleSystemMetricForDPIWithoutCache(4LL, v3);
              }
              else
              {
                v296 = 112LL * DpiDepSysMetCachePlateauSlot;
                v293 = *(_DWORD *)(v296 + v295 + 3052);
                if ( v293 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(v3);
                  v293 = *(_DWORD *)(v296 + gpsi + 3052);
                  if ( v293 == -1 )
                    v293 = 0;
                }
              }
            }
            v287 = v293 + v122;
            if ( v3 == *(unsigned __int16 *)(gpsi + 8678LL) )
            {
              v288 = *(_DWORD *)(gpsi + 2000LL);
              goto LABEL_289;
            }
            if ( v3 == 96 )
            {
              v288 = *(_DWORD *)(gpsi + 2388LL);
              goto LABEL_289;
            }
            v297 = GetDpiDepSysMetCachePlateauSlot(v3);
            if ( v297 != -1 )
            {
              v299 = 112LL * v297;
              v288 = *(_DWORD *)(v299 + v298 + 3092);
              if ( v288 != -1 )
                goto LABEL_289;
              EnsureDpiDepSysMetCacheForPlateau(v3);
              v288 = *(_DWORD *)(v299 + gpsi + 3092);
LABEL_266:
              if ( v288 == -1 )
                v288 = 0;
LABEL_289:
              if ( SHIDWORD(v365) >= v287 && (*(_BYTE *)(a1 + 40) & 1) != 0 )
                return 5LL;
              if ( v364 >= v119 && v364 < v120 && SHIDWORD(v365) < v287 )
              {
                v300 = *(_BYTE *)(a1 + 54);
                if ( (v300 & 8) != 0 )
                {
                  if ( v364 < v288 + v119 )
                    return (unsigned int)((unsigned int)HasCaptionIcon(a1) != 0) + 2;
                }
                else if ( (*(_BYTE *)(a1 + 45) & 2) != 0 )
                {
                  return 2LL;
                }
                v301 = v120 - v288;
                if ( v364 >= v301 )
                  return 20LL;
                if ( *(char *)(a1 + 48) >= 0 )
                {
                  if ( (v300 & 3) != 0 )
                  {
                    v302 = v301 - v288;
                    if ( v364 >= v302 )
                      return 9LL;
                    if ( v364 >= v302 - v288 )
                      return 8LL;
                  }
                  else if ( (*(_BYTE *)(a1 + 49) & 4) != 0 && v364 >= v301 - v288 )
                  {
                    return 21LL;
                  }
                }
              }
              return 2LL;
            }
            v292 = 30LL;
          }
          else
          {
            if ( v3 == v282 )
            {
              v283 = *(_DWORD *)(v124 + 2084);
            }
            else if ( v3 == 96 )
            {
              v283 = *(_DWORD *)(v124 + 2472);
            }
            else
            {
              v284 = GetDpiDepSysMetCachePlateauSlot(v3);
              if ( v284 == -1 )
              {
                v283 = ScaleSystemMetricForDPIWithoutCache(51LL, v3);
              }
              else
              {
                v286 = 112LL * v284;
                v283 = *(_DWORD *)(v286 + v285 + 3124);
                if ( v283 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(v3);
                  v283 = *(_DWORD *)(v286 + gpsi + 3124);
                  if ( v283 == -1 )
                    v283 = 0;
                }
              }
            }
            v287 = v283 + v122;
            if ( v3 == *(unsigned __int16 *)(gpsi + 8678LL) )
            {
              v288 = *(_DWORD *)(gpsi + 2088LL);
              goto LABEL_289;
            }
            if ( v3 == 96 )
            {
              v288 = *(_DWORD *)(gpsi + 2476LL);
              goto LABEL_289;
            }
            v289 = GetDpiDepSysMetCachePlateauSlot(v3);
            if ( v289 != -1 )
            {
              v291 = 112LL * v289;
              v288 = *(_DWORD *)(v291 + v290 + 3128);
              if ( v288 != -1 )
                goto LABEL_289;
              EnsureDpiDepSysMetCacheForPlateau(v3);
              v288 = *(_DWORD *)(v291 + gpsi + 3128);
              goto LABEL_266;
            }
            v292 = 52LL;
          }
          v288 = ScaleSystemMetricForDPIWithoutCache(v292, v3);
          goto LABEL_289;
        }
        v90 = (_DWORD *)(gpsi + 2296LL);
        goto LABEL_64;
      }
      v63 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_47;
    }
    v36 = (_DWORD *)(gpsi + 2300LL);
    goto LABEL_30;
  }
  v7 = *(_OWORD *)(a1 + 128);
  v371 = v7;
  if ( PtInRect(&v371, v365) )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 49) & 2) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v127, v126, v128, v129) & 0xF) != 0 )
        goto LABEL_87;
    }
    else if ( !IsDPIDWMSysMet(v127)
           || (W32GetCurrentThreadDpiAwarenessContext(v142, v141, v143, v144) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v145, v146, v147) + 408)
             ? (v151 = 0)
             : (v151 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v148,
                                                             v149,
                                                             v150)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v151) )
    {
LABEL_87:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v131, v130, v132, v133) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 408)
          ? (v140 = 0)
          : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v137,
                                                          v138,
                                                          v139)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v140) )
      {
        v152 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v152 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_102:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v154, v153, v155, v156) & 0xF) != 0 )
        {
LABEL_104:
          if ( !IsDPIDWMSysMet(0x2DuLL) || (W32GetCurrentThreadDpiAwarenessContext(v158, v157, v159, v160) & 0xF) != 1 )
            goto LABEL_116;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v161, v162, v163);
          v168 = 0;
          if ( *(_QWORD *)(ThreadWin32Thread + 408) )
            v168 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v165,
                                                         v166,
                                                         v167)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1;
          if ( v168 )
            v169 = (int *)(gpsi + 2836LL);
          else
LABEL_116:
            v169 = (int *)(gpsi + 2060LL);
          goto LABEL_117;
        }
      }
      else
      {
        if ( !IsDPIDWMSysMet(v154) || (W32GetCurrentThreadDpiAwarenessContext(v171, v170, v172, v173) & 0xF) != 0 )
          goto LABEL_104;
        v177 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v174, v175, v176);
        v181 = 0;
        if ( *(_QWORD *)(v177 + 408) )
          v181 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v178,
                                                       v179,
                                                       v180)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1;
        if ( !v181 )
          goto LABEL_104;
      }
      v169 = (int *)(gpsi + 2448LL);
LABEL_117:
      v182 = *v169;
      LODWORD(v363) = v371 - v182;
      v183 = DWORD1(v371) - *v152;
      DWORD2(v363) = DWORD2(v371) + v182;
      HIDWORD(v363) = *v152 + HIDWORD(v371);
      DWORD1(v363) = v183;
      goto LABEL_119;
    }
    v152 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_102;
  }
  v363 = v7;
LABEL_119:
  if ( (*(_BYTE *)(a1 + 40) & 2) != 0 )
  {
    v184 = *(unsigned __int16 *)(gpsi + 8678LL);
    if ( ((*(unsigned __int8 *)(a1 + 49) >> 6) & 1) != ((*(unsigned __int8 *)(a1 + 50) >> 6) & 1) )
    {
      if ( v3 == v184 )
      {
        v185 = *(_DWORD *)(gpsi + 1888LL);
      }
      else if ( v3 == 96 )
      {
        v185 = *(_DWORD *)(gpsi + 2276LL);
      }
      else
      {
        v186 = GetDpiDepSysMetCachePlateauSlot(v3);
        if ( v186 == -1 )
        {
          v185 = ScaleSystemMetricForDPIWithoutCache(2LL, v3);
        }
        else
        {
          v188 = 112LL * v186;
          v185 = *(_DWORD *)(v188 + v187 + 3044);
          if ( v185 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v3);
            v185 = *(_DWORD *)(v188 + gpsi + 3044);
            if ( v185 == -1 )
              v185 = 0;
          }
        }
      }
      LODWORD(v363) = v363 - v185;
    }
    else
    {
      if ( v3 == v184 )
      {
        v189 = *(_DWORD *)(gpsi + 1888LL);
      }
      else if ( v3 == 96 )
      {
        v189 = *(_DWORD *)(gpsi + 2276LL);
      }
      else
      {
        v190 = GetDpiDepSysMetCachePlateauSlot(v3);
        if ( v190 == -1 )
        {
          v189 = ScaleSystemMetricForDPIWithoutCache(2LL, v3);
        }
        else
        {
          v192 = 112LL * v190;
          v189 = *(_DWORD *)(v192 + v191 + 3044);
          if ( v189 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v3);
            v189 = *(_DWORD *)(v192 + gpsi + 3044);
            if ( v189 == -1 )
              v189 = 0;
          }
        }
      }
      DWORD2(v363) += v189;
    }
  }
  if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
  {
    if ( v3 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v193 = *(_DWORD *)(gpsi + 1892LL);
    }
    else if ( v3 == 96 )
    {
      v193 = *(_DWORD *)(gpsi + 2280LL);
    }
    else
    {
      v194 = GetDpiDepSysMetCachePlateauSlot(v3);
      if ( v194 == -1 )
      {
        v193 = ScaleSystemMetricForDPIWithoutCache(3LL, v3);
      }
      else
      {
        v196 = 112LL * v194;
        v193 = *(_DWORD *)(v196 + v195 + 3048);
        if ( v193 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v3);
          v193 = *(_DWORD *)(v196 + gpsi + 3048);
          if ( v193 == -1 )
            v193 = 0;
        }
      }
    }
    HIDWORD(v363) += v193;
  }
  if ( PtInRect(&v363, v365) )
  {
    if ( (*(_BYTE *)(a1 + 49) & 2) == 0 )
      goto LABEL_349;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v304, v303, v305, v306) & 0xF) != 0 )
        goto LABEL_315;
    }
    else if ( !IsDPIDWMSysMet(v304)
           || (W32GetCurrentThreadDpiAwarenessContext(v319, v318, v320, v321) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v322, v323, v324) + 408)
             ? (v328 = 0)
             : (v328 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v325,
                                                             v326,
                                                             v327)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v328) )
    {
LABEL_315:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v308, v307, v309, v310) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v311, v312, v313) + 408)
          ? (v317 = 0)
          : (v317 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v314,
                                                          v315,
                                                          v316)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v317) )
      {
        v329 = (int *)(gpsi + 2840LL);
      }
      else
      {
        v329 = (int *)(gpsi + 2064LL);
      }
LABEL_330:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v331, v330, v332, v333) & 0xF) != 0 )
          goto LABEL_332;
      }
      else if ( !IsDPIDWMSysMet(v331)
             || (W32GetCurrentThreadDpiAwarenessContext(v346, v345, v347, v348) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v349, v350, v351) + 408)
               ? (v355 = 0)
               : (v355 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v352,
                                                               v353,
                                                               v354)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v355) )
      {
LABEL_332:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v335, v334, v336, v337) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v338, v339, v340) + 408)
            ? (v344 = 0)
            : (v344 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v341,
                                                            v342,
                                                            v343)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v344) )
        {
          v356 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v356 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_347:
        v357 = *v329;
        v358 = -*v356;
        LODWORD(v363) = v363 + *v356;
        v359 = -v357;
        DWORD1(v363) -= v359;
        HIDWORD(v363) += v359;
        DWORD2(v363) += v358;
        if ( !PtInRect(&v363, v6) )
          return 18LL;
LABEL_349:
        v360 = *(_BYTE *)(a1 + 40);
        if ( (v360 & 4) == 0 || v5 < SHIDWORD(v371) )
          return 7LL;
        if ( (v360 & 2) != 0 )
        {
          v361 = SizeBoxHwnd(a1, v197, v198, v199);
          if ( v4 >= SDWORD2(v371) )
          {
            v362 = v361 != 0 ? 0xD : 0;
            return (unsigned int)(v362 + 4);
          }
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 && v4 < (int)v371 )
          {
            v362 = v361 != 0 ? 0xC : 0;
            return (unsigned int)(v362 + 4);
          }
        }
        return 6LL;
      }
      v356 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_347;
    }
    v329 = (int *)(gpsi + 2452LL);
    goto LABEL_330;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(*(unsigned int *)(a1 + 52), *(unsigned int *)(a1 + 48), v198, v199, v3);
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v202, v201, v203, v204) & 0xF) != 0 )
      goto LABEL_158;
LABEL_168:
    v227 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_173;
  }
  if ( IsDPIDWMSysMet(v202)
    && (W32GetCurrentThreadDpiAwarenessContext(v217, v216, v218, v219) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v220, v221, v222) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v223, v224, v225) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_168;
  }
LABEL_158:
  if ( IsDPIDWMSysMet(6uLL)
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
    v227 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v227 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_173:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v229, v228, v230, v231) & 0xF) != 0 )
      goto LABEL_175;
LABEL_185:
    v254 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_190;
  }
  if ( IsDPIDWMSysMet(v229)
    && (W32GetCurrentThreadDpiAwarenessContext(v244, v243, v245, v246) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v247, v248, v249) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v250, v251, v252) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_185;
  }
LABEL_175:
  if ( IsDPIDWMSysMet(5uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v233, v232, v234, v235) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v236, v237, v238) + 408)
      ? (v242 = 0)
      : (v242 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v239,
                                                      v240,
                                                      v241)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v242) )
  {
    v254 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v254 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_190:
  v255 = *(_DWORD *)(a1 + 116);
  v256 = WindowBordersForDpi * *v227;
  v257 = -(WindowBordersForDpi * *v254);
  v119 = *(_DWORD *)(a1 + 112) + WindowBordersForDpi * *v254;
  v120 = v257 + *(_DWORD *)(a1 + 120);
  v258 = -v256;
  v259 = v258 + *(_DWORD *)(a1 + 124);
  v367 = v119;
  v122 = v255 - v258;
  v370 = v259;
  v366 = v259;
  v369 = v120;
  v368 = v122;
  if ( PtInRect(&v367, v6) )
  {
    v125 = HIDWORD(v365);
    if ( SHIDWORD(v365) < SDWORD1(v363) )
    {
      if ( (*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0 )
        goto LABEL_245;
      if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
        return 5LL;
    }
    return 0LL;
  }
  v260 = *(_BYTE *)(a1 + 54);
  if ( (v260 & 4) == 0 )
    return ((unsigned __int8)~*(_BYTE *)(a1 + 48) & (unsigned __int8)(~(*(_BYTE *)(a1 + 45) >> 1) & ~(v260 >> 6)) & 1) == 0
         ? 0x12
         : 0;
  v261 = *(unsigned __int16 *)(v124 + 8678);
  if ( *(char *)(a1 + 48) >= 0 )
  {
    if ( v3 == v261 )
    {
      v262 = *(_DWORD *)(v124 + 2004);
    }
    else if ( v3 == 96 )
    {
      v262 = *(_DWORD *)(v124 + 2392);
    }
    else
    {
      v271 = GetDpiDepSysMetCachePlateauSlot(v3);
      if ( v271 == -1 )
      {
        v262 = ScaleSystemMetricForDPIWithoutCache(31LL, v3);
      }
      else
      {
        v273 = 112LL * v271;
        v262 = *(_DWORD *)(v273 + v272 + 3096);
        if ( v262 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v3);
          v262 = *(_DWORD *)(v273 + gpsi + 3096);
          if ( v262 == -1 )
            v262 = 0;
        }
      }
    }
    if ( v3 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v266 = *(_DWORD *)(gpsi + 2000LL);
      goto LABEL_234;
    }
    if ( v3 == 96 )
    {
      v266 = *(_DWORD *)(gpsi + 2388LL);
      goto LABEL_234;
    }
    v274 = GetDpiDepSysMetCachePlateauSlot(v3);
    if ( v274 != -1 )
    {
      v276 = 112LL * v274;
      v266 = *(_DWORD *)(v276 + v275 + 3092);
      if ( v266 != -1 )
        goto LABEL_234;
      EnsureDpiDepSysMetCacheForPlateau(v3);
      v266 = *(_DWORD *)(v276 + gpsi + 3092);
      goto LABEL_229;
    }
    v270 = 30LL;
LABEL_233:
    v266 = ScaleSystemMetricForDPIWithoutCache(v270, v3);
    goto LABEL_234;
  }
  if ( v3 == v261 )
  {
    v262 = *(_DWORD *)(v124 + 2092);
  }
  else if ( v3 == 96 )
  {
    v262 = *(_DWORD *)(v124 + 2480);
  }
  else
  {
    v263 = GetDpiDepSysMetCachePlateauSlot(v3);
    if ( v263 == -1 )
    {
      v262 = ScaleSystemMetricForDPIWithoutCache(53LL, v3);
    }
    else
    {
      v265 = 112LL * v263;
      v262 = *(_DWORD *)(v265 + v264 + 3132);
      if ( v262 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v3);
        v262 = *(_DWORD *)(v265 + gpsi + 3132);
        if ( v262 == -1 )
          v262 = 0;
      }
    }
  }
  if ( v3 != *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    if ( v3 == 96 )
    {
      v266 = *(_DWORD *)(gpsi + 2476LL);
      goto LABEL_234;
    }
    v267 = GetDpiDepSysMetCachePlateauSlot(v3);
    if ( v267 != -1 )
    {
      v269 = 112LL * v267;
      v266 = *(_DWORD *)(v269 + v268 + 3128);
      if ( v266 != -1 )
        goto LABEL_234;
      EnsureDpiDepSysMetCacheForPlateau(v3);
      v266 = *(_DWORD *)(v269 + gpsi + 3128);
LABEL_229:
      if ( v266 == -1 )
        v266 = 0;
      goto LABEL_234;
    }
    v270 = 52LL;
    goto LABEL_233;
  }
  v266 = *(_DWORD *)(gpsi + 2088LL);
LABEL_234:
  v277 = -v266;
  v278 = v119 - v277;
  v279 = v277 + v120;
  v280 = -v262;
  if ( SHIDWORD(v365) >= v122 - v280 )
  {
    v281 = 0;
    if ( SHIDWORD(v365) >= v280 + v366 )
      v281 = 6;
  }
  else
  {
    v281 = 3;
  }
  if ( v364 >= v278 )
  {
    if ( v364 >= v279 )
      v281 += 2;
  }
  else
  {
    ++v281;
  }
  return (unsigned int)(v281 + 9);
}
