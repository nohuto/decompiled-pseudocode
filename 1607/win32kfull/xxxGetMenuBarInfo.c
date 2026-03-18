/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00B7F60
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00B7DC0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetWindowBordersForDpi @ 0x1C00B8368 (GetWindowBordersForDpi.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 SysMenu; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r11
  _DWORD *v27; // rax
  _DWORD *v28; // rbp
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // r11
  _DWORD *v45; // rax
  __int64 v46; // r11
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  __int64 *v50; // r8
  __int64 v51; // r8
  __int64 v53; // r12
  int WindowBordersForDpi; // r15d
  int v55; // eax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _DWORD *v68; // rax
  int v69; // ecx
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  _DWORD *v82; // rax
  _DWORD *v83; // r11
  int v84; // eax
  int v85; // eax
  __int64 *v86; // r8
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // ecx
  _DWORD *v110; // rax
  int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // ecx
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v141; // r11
  __int64 v142; // rbp
  __int64 v143; // rcx
  int v144; // eax
  __int64 v145; // r11
  __int64 v146; // rbp
  __int64 v147; // r8
  __int64 v148; // rdx
  int v149; // ecx
  int v150; // ecx
  int v151; // ecx
  bool v152; // zf
  int v153; // edx
  __int64 *v154; // rcx
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
  int v165; // ecx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  int v176; // ecx
  __int64 v177; // r11
  _DWORD *v178; // rax
  _DWORD *v179; // rbp
  int v180; // eax
  int v181; // ecx
  int v182; // eax
  __int64 v183; // r12
  __int64 v184; // rcx
  int v185; // eax
  int v186; // eax
  __int64 v187; // r12
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rdx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rdx
  __int64 v199; // r8
  __int64 v200; // r9
  int v201; // ecx
  int v202; // eax
  __int64 v203; // r12
  __int64 v204; // rcx
  int v205; // eax
  __int64 v206; // r12
  __int64 v207; // rdx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rdx
  __int64 v218; // r8
  __int64 v219; // r9
  int v221; // eax
  __int64 v222; // r11
  __int64 v223; // rbp
  __int64 v224; // rcx
  int v225; // eax
  __int64 v226; // r11
  __int64 v227; // rbp
  __int64 v228; // rsi
  __int64 v229; // rax
  __int64 v230; // r8
  __int64 v231; // rdx
  int v232; // ecx
  int v233; // ecx
  int v234; // ecx
  __int64 v235; // rax
  __int64 v236; // rdx
  _QWORD *v237; // rax
  __int64 v238; // rax
  int v239; // ecx
  __int64 *v240; // rax

  v5 = a3;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v7 = 0LL;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( (*((_DWORD *)a1 + 72) & 0x10000000) != 0 )
  {
    v8 = *((unsigned __int16 *)a1 + 178);
  }
  else if ( (*((_DWORD *)a1 + 88) & 0xF) == 0
         && (v87 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v87 + 8) + 244LL) & 1) != 0 )
  {
    v8 = 96;
  }
  else
  {
    v8 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  switch ( a2 )
  {
    case -3:
      if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
        return 0LL;
      v53 = *((_QWORD *)a1 + 24);
      if ( !v53 || a3 < 0 || (unsigned int)a3 > *(_DWORD *)(v53 + 52) )
        return 0LL;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)v53;
      if ( !*(_DWORD *)(v53 + 56) || !*(_DWORD *)(v53 + 60) )
      {
LABEL_59:
        v86 = *(__int64 **)(*((_QWORD *)a1 + 2) + 528LL);
        if ( v86 )
          v51 = *v86;
        else
          v51 = 0LL;
        if ( !v51 )
          return 1LL;
        v152 = (*(_DWORD *)v51 & 6) == 2;
LABEL_65:
        if ( !v152 || *(struct tagWND **)(v51 + 8) != a1 )
          return 1LL;
        v153 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v153;
        if ( !(_DWORD)v5 )
        {
          *(_DWORD *)(a4 + 40) = v153 | 2;
          return 1LL;
        }
        if ( *(_DWORD *)(*(_QWORD *)(v51 + 64) + 80LL) != (_DWORD)v5 - 1 )
          return 1LL;
        *(_DWORD *)(a4 + 40) = v153 | 2;
        v154 = *(__int64 **)(*(_QWORD *)(v51 + 64) + 24LL);
        if ( v154 )
          v7 = *v154;
LABEL_277:
        *(_QWORD *)(a4 + 32) = v7;
        return 1LL;
      }
      if ( a3 )
      {
        v147 = *(_QWORD *)(v53 + 80);
        v148 = 152 * v5;
        if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
        {
          v149 = *((_DWORD *)a1 + 30) - *(_DWORD *)(v148 + v147 - 80);
          *(_DWORD *)(a4 + 12) = v149;
          *(_DWORD *)(a4 + 4) = v149 - *(_DWORD *)(v148 + v147 - 72);
        }
        else
        {
          v150 = *((_DWORD *)a1 + 28) + *(_DWORD *)(v148 + v147 - 80);
          *(_DWORD *)(a4 + 4) = v150;
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(v148 + v147 - 72) + v150;
        }
        v151 = *((_DWORD *)a1 + 29) + *(_DWORD *)(v148 + v147 - 76);
        *(_DWORD *)(a4 + 8) = v151;
        *(_DWORD *)(a4 + 16) = *(_DWORD *)(v148 + v147 - 68) + v151;
        goto LABEL_59;
      }
      WindowBordersForDpi = GetWindowBordersForDpi(*((_DWORD *)a1 + 13), *((_DWORD *)a1 + 12), 0, a4, v8);
      v55 = IsDPIAbsoluteSysMet(5uLL);
      if ( (*((_BYTE *)a1 + 50) & 0x40) == 0 )
      {
        if ( v55 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) == 0 )
          {
LABEL_98:
            v68 = (_DWORD *)(gpsi + 2288LL);
LABEL_48:
            v69 = *((_DWORD *)a1 + 28) + WindowBordersForDpi * *v68;
            *(_DWORD *)(a4 + 4) = v69;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v53 + 56) + v69;
            goto LABEL_49;
          }
        }
        else if ( IsDPIDWMSysMet(v57)
               && (W32GetCurrentThreadDpiAwarenessContext(v61, v60, v62, v63) & 0xF) == 0
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v113, v114) + 408)
               && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v115,
                                                        v116,
                                                        v117)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1 )
        {
          goto LABEL_98;
        }
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v65, v64, v66, v67) & 0xF) == 1
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
          v68 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v68 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_48;
      }
      if ( v55 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0 )
          goto LABEL_75;
      }
      else if ( !IsDPIDWMSysMet(v57)
             || (W32GetCurrentThreadDpiAwarenessContext(v100, v99, v101, v102) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
               ? (v109 = 0)
               : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v106,
                                                               v107,
                                                               v108)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v109) )
      {
LABEL_75:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v89, v88, v90, v91) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 408)
            ? (v98 = 0)
            : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v95,
                                                           v96,
                                                           v97)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v98) )
        {
          v110 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v110 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_90;
      }
      v110 = (_DWORD *)(gpsi + 2288LL);
LABEL_90:
      v111 = *((_DWORD *)a1 + 30) - WindowBordersForDpi * *v110;
      *(_DWORD *)(a4 + 12) = v111;
      *(_DWORD *)(a4 + 4) = v111 - *(_DWORD *)(v53 + 56);
LABEL_49:
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v71, v70, v72, v73) & 0xF) == 0 )
        {
LABEL_112:
          v81 = gpsi;
          v82 = (_DWORD *)(gpsi + 2292LL);
          goto LABEL_53;
        }
      }
      else if ( IsDPIDWMSysMet(v71)
             && (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v129,
                                                      v130,
                                                      v131)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_112;
      }
      if ( IsDPIDWMSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v79, v78, v80, v81) & 0xF) == 1
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v133, v134, v135) + 408)
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                   (__int64)KeGetCurrentThread(),
                                                   v136,
                                                   v137,
                                                   v138)
                                               + 408)
                                   + 8LL)
                       + 244LL) & 1 )
        {
          v81 = gpsi;
          v82 = (_DWORD *)(gpsi + 2680LL);
LABEL_53:
          *(_DWORD *)(a4 + 8) = *((_DWORD *)a1 + 29) + WindowBordersForDpi * *v82;
          if ( (*((_BYTE *)a1 + 40) & 8) == 0 )
          {
LABEL_58:
            LODWORD(v5) = a3;
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + *(_DWORD *)(v53 + 60);
            goto LABEL_59;
          }
          v83 = *(_DWORD **)v81;
          v84 = *(unsigned __int16 *)(*(_QWORD *)v81 + 8678LL);
          if ( *((char *)a1 + 48) < 0 )
          {
            if ( v8 == v84 )
            {
              v85 = v83[521];
              goto LABEL_57;
            }
            if ( v8 == 96 )
            {
              v85 = v83[618];
              goto LABEL_57;
            }
            DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v8);
            if ( DpiDepSysMetCachePlateauSlot != -1 )
            {
              v142 = 112LL * DpiDepSysMetCachePlateauSlot;
              v85 = *(_DWORD *)(v141 + v142 + 3124);
              if ( v85 != -1 )
                goto LABEL_57;
              EnsureDpiDepSysMetCacheForPlateau(v8);
              v85 = *(_DWORD *)(gpsi + v142 + 3124);
LABEL_133:
              if ( v85 == -1 )
                v85 = 0;
              goto LABEL_57;
            }
            v143 = 51LL;
          }
          else
          {
            if ( v8 == v84 )
            {
              v85 = v83[474];
LABEL_57:
              *(_DWORD *)(a4 + 8) += v85;
              goto LABEL_58;
            }
            if ( v8 == 96 )
            {
              v85 = v83[571];
              goto LABEL_57;
            }
            v144 = GetDpiDepSysMetCachePlateauSlot(v8);
            if ( v144 != -1 )
            {
              v146 = 112LL * v144;
              v85 = *(_DWORD *)(v145 + v146 + 3052);
              if ( v85 != -1 )
                goto LABEL_57;
              EnsureDpiDepSysMetCacheForPlateau(v8);
              v85 = *(_DWORD *)(gpsi + v146 + 3052);
              goto LABEL_133;
            }
            v143 = 4LL;
          }
          v85 = ScaleSystemMetricForDPIWithoutCache(v143, v8);
          goto LABEL_57;
        }
        v81 = gpsi;
      }
      v82 = (_DWORD *)(*(_QWORD *)v81 + 1904LL);
      goto LABEL_53;
    case -1:
      if ( (*((_BYTE *)a1 + 54) & 8) != 0 )
      {
        SysMenu = xxxGetSysMenu(a1, 0LL);
        if ( SysMenu )
        {
          if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(SysMenu + 52) )
          {
            *(_QWORD *)(a4 + 24) = *(_QWORD *)SysMenu;
            if ( !(unsigned int)HasCaptionIcon((__int64)a1) )
            {
LABEL_31:
              v50 = *(__int64 **)(*((_QWORD *)a1 + 2) + 528LL);
              if ( v50 )
                v51 = *v50;
              else
                v51 = 0LL;
              if ( !v51 )
                return 1LL;
              v152 = (*(_BYTE *)v51 & 6) == 6;
              goto LABEL_65;
            }
            v12 = GetWindowBordersForDpi(*((_DWORD *)a1 + 13), *((_DWORD *)a1 + 12), v10, v11, v8);
            v13 = IsDPIAbsoluteSysMet(5uLL);
            if ( (*((_BYTE *)a1 + 50) & 0x40) == 0 )
            {
              if ( v13 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 0 )
                {
LABEL_196:
                  v26 = gpsi;
                  v27 = (_DWORD *)(gpsi + 2288LL);
                  goto LABEL_17;
                }
              }
              else if ( IsDPIDWMSysMet(v15)
                     && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 0
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v188, v189, v190) + 408)
                     && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v191,
                                                              v192,
                                                              v193)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1 )
              {
                goto LABEL_196;
              }
              if ( IsDPIDWMSysMet(5uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v195, v196, v197) + 408)
                  ? (v201 = 0)
                  : (v201 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v198,
                                                                  v199,
                                                                  v200)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v201) )
              {
                v26 = gpsi;
                v27 = (_DWORD *)(gpsi + 2676LL);
              }
              else
              {
                v26 = gpsi;
                v27 = (_DWORD *)(gpsi + 1900LL);
              }
LABEL_17:
              *(_DWORD *)(a4 + 4) = *((_DWORD *)a1 + 28) + v12 * *v27;
              v28 = *(_DWORD **)v26;
              v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 8678LL);
              if ( *((char *)a1 + 48) < 0 )
              {
                if ( v8 == v29 )
                {
                  v31 = v28[522];
                  goto LABEL_21;
                }
                if ( v8 == 96 )
                {
                  v31 = v28[619];
                  goto LABEL_21;
                }
                v202 = GetDpiDepSysMetCachePlateauSlot(v8);
                if ( v202 != -1 )
                {
                  v203 = 28LL * v202;
                  v31 = v28[v203 + 782];
                  if ( v31 == -1 )
                  {
                    EnsureDpiDepSysMetCacheForPlateau(v8);
                    v31 = *(_DWORD *)(v203 * 4 + gpsi + 3128);
                    if ( v31 == -1 )
                      v31 = 0;
                  }
                  goto LABEL_21;
                }
                v204 = 52LL;
              }
              else
              {
                if ( v8 == v29 )
                {
                  v30 = v28[500];
LABEL_20:
                  v31 = v30;
LABEL_21:
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + v31;
                  goto LABEL_22;
                }
                if ( v8 == 96 )
                {
                  v30 = v28[597];
                  goto LABEL_20;
                }
                v205 = GetDpiDepSysMetCachePlateauSlot(v8);
                if ( v205 != -1 )
                {
                  v206 = 28LL * v205;
                  v30 = v28[v206 + 773];
                  if ( v30 == -1 )
                  {
                    EnsureDpiDepSysMetCacheForPlateau(v8);
                    v30 = *(_DWORD *)(v206 * 4 + gpsi + 3092);
                    if ( v30 == -1 )
                      v30 = 0;
                  }
                  goto LABEL_20;
                }
                v204 = 30LL;
              }
              v30 = ScaleSystemMetricForDPIWithoutCache(v204, v8);
              goto LABEL_20;
            }
            if ( v13 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) != 0 )
                goto LABEL_150;
            }
            else if ( !IsDPIDWMSysMet(v15)
                   || (W32GetCurrentThreadDpiAwarenessContext(v167, v166, v168, v169) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v170, v171, v172) + 408)
                     ? (v176 = 0)
                     : (v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v173,
                                                                     v174,
                                                                     v175)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v176) )
            {
LABEL_150:
              if ( IsDPIDWMSysMet(5uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v156, v155, v157, v158) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161) + 408)
                  ? (v165 = 0)
                  : (v165 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v162,
                                                                  v163,
                                                                  v164)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v165) )
              {
                v177 = gpsi;
                v178 = (_DWORD *)(gpsi + 2676LL);
              }
              else
              {
                v177 = gpsi;
                v178 = (_DWORD *)(gpsi + 1900LL);
              }
LABEL_165:
              *(_DWORD *)(a4 + 12) = *((_DWORD *)a1 + 30) - v12 * *v178;
              v179 = *(_DWORD **)v177;
              v180 = *(unsigned __int16 *)(*(_QWORD *)v177 + 8678LL);
              if ( *((char *)a1 + 48) < 0 )
              {
                if ( v8 == v180 )
                {
                  v181 = v179[522];
LABEL_188:
                  *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - v181;
LABEL_22:
                  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 0 )
                    {
LABEL_229:
                      v44 = (_QWORD *)gpsi;
                      v45 = (_DWORD *)(gpsi + 2292LL);
                      goto LABEL_26;
                    }
                  }
                  else if ( IsDPIDWMSysMet(v33)
                         && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 0
                         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v207, v208, v209) + 408)
                         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v210,
                                                                  v211,
                                                                  v212)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1 )
                  {
                    goto LABEL_229;
                  }
                  if ( IsDPIDWMSysMet(6uLL) )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42, v43) & 0xF) == 1
                      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v214, v215, v216) + 408)
                      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v217,
                                                               v218,
                                                               v219)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1 )
                    {
                      v44 = (_QWORD *)gpsi;
                      v45 = (_DWORD *)(gpsi + 2680LL);
LABEL_26:
                      *(_DWORD *)(a4 + 8) = *((_DWORD *)a1 + 29) + v12 * *v45;
                      v46 = *v44;
                      v47 = *(unsigned __int16 *)(v46 + 8678);
                      if ( *((char *)a1 + 48) < 0 )
                      {
                        if ( v8 == v47 )
                        {
                          v49 = *(_DWORD *)(v46 + 2092);
                          goto LABEL_30;
                        }
                        if ( v8 == 96 )
                        {
                          v49 = *(_DWORD *)(v46 + 2480);
                          goto LABEL_30;
                        }
                        v221 = GetDpiDepSysMetCachePlateauSlot(v8);
                        if ( v221 != -1 )
                        {
                          v223 = 112LL * v221;
                          v49 = *(_DWORD *)(v222 + v223 + 3132);
                          if ( v49 == -1 )
                          {
                            EnsureDpiDepSysMetCacheForPlateau(v8);
                            v49 = *(_DWORD *)(gpsi + v223 + 3132);
                            if ( v49 == -1 )
                              v49 = 0;
                          }
                          goto LABEL_30;
                        }
                        v224 = 53LL;
                      }
                      else
                      {
                        if ( v8 == v47 )
                        {
                          v48 = *(_DWORD *)(v46 + 2004);
LABEL_29:
                          v49 = v48;
LABEL_30:
                          LODWORD(v5) = a3;
                          *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + v49;
                          goto LABEL_31;
                        }
                        if ( v8 == 96 )
                        {
                          v48 = *(_DWORD *)(v46 + 2392);
                          goto LABEL_29;
                        }
                        v225 = GetDpiDepSysMetCachePlateauSlot(v8);
                        if ( v225 != -1 )
                        {
                          v227 = 112LL * v225;
                          v48 = *(_DWORD *)(v226 + v227 + 3096);
                          if ( v48 == -1 )
                          {
                            EnsureDpiDepSysMetCacheForPlateau(v8);
                            v48 = *(_DWORD *)(gpsi + v227 + 3096);
                            if ( v48 == -1 )
                              v48 = 0;
                          }
                          goto LABEL_29;
                        }
                        v224 = 31LL;
                      }
                      v48 = ScaleSystemMetricForDPIWithoutCache(v224, v8);
                      goto LABEL_29;
                    }
                    v44 = (_QWORD *)gpsi;
                  }
                  v45 = (_DWORD *)(*v44 + 1904LL);
                  goto LABEL_26;
                }
                if ( v8 == 96 )
                {
                  v181 = v179[619];
                  goto LABEL_188;
                }
                v182 = GetDpiDepSysMetCachePlateauSlot(v8);
                if ( v182 != -1 )
                {
                  v183 = 28LL * v182;
                  v181 = v179[v183 + 782];
                  if ( v181 == -1 )
                  {
                    EnsureDpiDepSysMetCacheForPlateau(v8);
                    v181 = *(_DWORD *)(v183 * 4 + gpsi + 3128);
                    if ( v181 == -1 )
                      v181 = 0;
                  }
                  goto LABEL_188;
                }
                v184 = 52LL;
LABEL_186:
                v185 = ScaleSystemMetricForDPIWithoutCache(v184, v8);
                goto LABEL_187;
              }
              if ( v8 == v180 )
              {
                v185 = v179[500];
              }
              else
              {
                if ( v8 != 96 )
                {
                  v186 = GetDpiDepSysMetCachePlateauSlot(v8);
                  if ( v186 != -1 )
                  {
                    v187 = 28LL * v186;
                    v185 = v179[v187 + 773];
                    if ( v185 == -1 )
                    {
                      EnsureDpiDepSysMetCacheForPlateau(v8);
                      v185 = *(_DWORD *)(v187 * 4 + gpsi + 3092);
                      if ( v185 == -1 )
                        v185 = 0;
                    }
                    goto LABEL_187;
                  }
                  v184 = 30LL;
                  goto LABEL_186;
                }
                v185 = v179[597];
              }
LABEL_187:
              v181 = v185;
              goto LABEL_188;
            }
            v177 = gpsi;
            v178 = (_DWORD *)(gpsi + 2288LL);
            goto LABEL_165;
          }
        }
      }
      break;
    case -4:
      _InterlockedIncrement(&glSendMessage);
      v228 = xxxSendTransformableMessageTimeout(a1, 481LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      v229 = ValidateHmenu(v228);
      if ( v229 )
      {
        if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(v229 + 52) )
        {
          *(_QWORD *)(a4 + 24) = v228;
          if ( (_DWORD)v5 )
          {
            v230 = *(_QWORD *)(v229 + 80);
            v231 = 152 * v5;
            if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
            {
              v232 = *((_DWORD *)a1 + 34) - *(_DWORD *)(v231 + v230 - 80);
              *(_DWORD *)(a4 + 12) = v232;
              *(_DWORD *)(a4 + 4) = v232 - *(_DWORD *)(v231 + v230 - 72);
            }
            else
            {
              v233 = *((_DWORD *)a1 + 32) + *(_DWORD *)(v231 + v230 - 80);
              *(_DWORD *)(a4 + 4) = v233;
              *(_DWORD *)(a4 + 12) = *(_DWORD *)(v231 + v230 - 72) + v233;
            }
            v234 = *((_DWORD *)a1 + 33) + *(_DWORD *)(v231 + v230 - 76);
            *(_DWORD *)(a4 + 8) = v234;
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(v231 + v230 - 68) + v234;
          }
          else
          {
            *(_OWORD *)(a4 + 4) = *((_OWORD *)a1 + 8);
          }
          v235 = safe_cast_fnid_to_PMENUWND((__int64)a1);
          if ( !v235 )
            return 1LL;
          v236 = *(_QWORD *)(v235 + 360);
          if ( !v236 )
            return 1LL;
          v237 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 528LL);
          v238 = v237 ? *v237 : 0LL;
          if ( *(_QWORD *)(v236 + 64) != v238 )
            return 1LL;
          v239 = *(_DWORD *)(a4 + 40) | 1;
          *(_DWORD *)(a4 + 40) = v239;
          if ( !(_DWORD)v5 )
          {
            *(_DWORD *)(a4 + 40) = v239 | 2;
            return 1LL;
          }
          if ( (_DWORD)v5 != *(_DWORD *)(v236 + 80) + 1 )
            return 1LL;
          *(_DWORD *)(a4 + 40) = v239 | 2;
          v240 = *(__int64 **)(v236 + 24);
          if ( v240 )
            v7 = *v240;
          goto LABEL_277;
        }
      }
      break;
  }
  return 0LL;
}
