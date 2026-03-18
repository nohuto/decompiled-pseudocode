/*
 * XREFs of xxxMNCompute @ 0x1C00B4BF8
 * Callers:
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00B7568 (xxxSendUAHInitMenuMessage.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C014E06C (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMNCompute(
        struct tagMENU *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int *a7)
{
  signed int v7; // r12d
  unsigned int v9; // r14d
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // rax
  char *v16; // rcx
  int v18; // r13d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  unsigned int v27; // ebp
  __int64 v28; // rdi
  int v29; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v31; // r11
  __int64 v32; // rsi
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // esi
  unsigned int v38; // r13d
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // r12d
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // ecx
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char v68; // al
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rdx
  int v78; // ecx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // ecx
  unsigned int v86; // esi
  _WORD *v87; // rax
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v89; // eax
  int v90; // eax
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
  _DWORD *v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // ecx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // ecx
  __int64 v131; // rax
  __int64 v132; // rdx
  unsigned __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // r9
  int v146; // ecx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // r9
  int v157; // ecx
  _DWORD *v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  int v165; // ecx
  __int64 v166; // rsi
  __int64 v167; // rdx
  unsigned __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // r8
  __int64 v180; // r9
  int v181; // ecx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  int v192; // ecx
  _DWORD *v193; // rcx
  __int64 v194; // rdx
  unsigned __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rdx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rdx
  __int64 v206; // r8
  __int64 v207; // r9
  int v208; // ecx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rdx
  __int64 v217; // r8
  __int64 v218; // r9
  _DWORD *v220; // rcx
  _DWORD *v221; // rdx
  unsigned int v222; // r9d
  _DWORD *v223; // rdx
  unsigned int v224; // [rsp+40h] [rbp-88h]
  unsigned int v225; // [rsp+44h] [rbp-84h]
  signed int v226; // [rsp+48h] [rbp-80h]
  unsigned int v227; // [rsp+4Ch] [rbp-7Ch]
  int v228; // [rsp+50h] [rbp-78h]
  int v229; // [rsp+54h] [rbp-74h]
  int v230; // [rsp+58h] [rbp-70h]
  HDC DCEx; // [rsp+60h] [rbp-68h]
  struct tagPOINT v232; // [rsp+68h] [rbp-60h] BYREF
  __int64 v233; // [rsp+70h] [rbp-58h]
  __int64 v234; // [rsp+78h] [rbp-50h]
  unsigned int v235; // [rsp+D0h] [rbp+8h]
  unsigned int v237; // [rsp+E0h] [rbp+18h]
  unsigned int v238; // [rsp+E8h] [rbp+20h]

  v238 = a4;
  v7 = 0;
  v224 = 0;
  v225 = 0;
  v9 = a4;
  v12 = 0;
  v233 = gptiCurrent;
  v13 = 1LL;
  v14 = 96;
  if ( !a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, 1LL, 0LL, a4) & 0xF) == 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a3 + 288) & 0x10000000) == 0 )
  {
    if ( (*(_DWORD *)(a3 + 352) & 0xF) == 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 408LL);
      if ( v15 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 8) + 244LL) & 1) != 0 )
          goto LABEL_10;
      }
    }
LABEL_9:
    v14 = *(unsigned __int16 *)(gpsi + 8678LL);
    goto LABEL_10;
  }
  v14 = *(unsigned __int16 *)(a3 + 356);
LABEL_10:
  v16 = (char *)a1 + 72;
  if ( a2 != *((_QWORD *)a1 + 9) )
    HMAssignmentLock(v16, a2);
  if ( a7 )
  {
    v225 = *a7;
    v9 = v238;
  }
  if ( !*((_DWORD *)a1 + 13) )
    return 0LL;
  v18 = *((_DWORD *)a1 + 10) & 1;
  v230 = v18;
  if ( v18 )
  {
    v225 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)a1 + 14) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v16, v13, a3, a4) & 0xF) == 2 )
  {
    v19 = 65539LL;
    v20 = a3;
  }
  else
  {
    v20 = 0LL;
    v19 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v20, 0LL, v19);
  GetDPIMETRICSForDpi(v14);
  v21 = GreSelectFontInternal(DCEx);
  v25 = 0LL;
  v234 = v21;
  v227 = 0;
  v226 = 0;
  v237 = 0;
  if ( gihmodUserApiHook >= 0 )
  {
    xxxSendUAHInitMenuMessage(a2, a1, DCEx);
    v25 = 0LL;
  }
  v26 = *((_DWORD *)a1 + 13);
  v27 = a5;
  v229 = 0;
  *((_DWORD *)a1 + 16) = 0;
  v228 = 0;
  v235 = 0;
  if ( v26 )
    v28 = *((_QWORD *)a1 + 10);
  else
    v28 = 0LL;
  if ( !v26 )
    goto LABEL_230;
  while ( v28 )
  {
    if ( (*(_DWORD *)v28 & 0x800) == 0
      || (unsigned int)MNIsOwnerDrawItem(a1, v28) && (v23 = 1024LL, *(_WORD *)(v233 + 552) >= 0x400u) )
    {
      if ( *(_QWORD *)(v28 + 104) == v25 || (v33 = 1, *(_QWORD *)(v28 + 40) == v25) )
        v33 = v25;
      v229 |= v33;
      v34 = xxxMNItemSize(a1, (struct tagWND *)a2, v14, DCEx, (struct tagITEM *)v28, v18, &v232);
      v35 = v228;
      if ( v34 )
        v35 = 1;
      v228 = v35;
      if ( (unsigned int)MNGetpItemIndex((__int64)a1, v28) == -1 )
        break;
      *(struct tagPOINT *)(v28 + 80) = v232;
      if ( !v18
        && (*(_QWORD *)(v28 + 104) == v25 || *(_QWORD *)(v28 + 40) != v25)
        && !(unsigned int)MNIsUAHMenu((__int64)a1) )
      {
        v23 = (unsigned int)(2 * *(_DWORD *)(GetDPIMETRICSForDpi(v14) + 48));
        *(_DWORD *)(v28 + 80) += v23;
        v25 = 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v28 + 80) = v25;
      if ( v14 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v29 = *(_DWORD *)(gpsi + 2100LL);
      }
      else if ( v14 == 96 )
      {
        v29 = *(_DWORD *)(gpsi + 2488LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(v14);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v29 = ScaleSystemMetricForDPIWithoutCache(55LL, v14);
          v25 = 0LL;
        }
        else
        {
          v32 = 112LL * DpiDepSysMetCachePlateauSlot;
          v29 = *(_DWORD *)(v31 + v32 + 3140);
          if ( v29 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v14);
            v25 = 0LL;
            v23 = gpsi;
            v29 = *(_DWORD *)(v32 + gpsi + 3140);
            if ( v29 == -1 )
              v29 = 0;
          }
          else
          {
            v25 = 0LL;
          }
          v12 = v224;
        }
      }
      *(_DWORD *)(v28 + 84) = v29 / 2;
    }
    if ( v225 && *(_DWORD *)(v28 + 84) < v225 )
      *(_DWORD *)(v28 + 84) = v225;
    v36 = v235;
    if ( !v235 )
    {
      v12 = *(_DWORD *)(v28 + 84);
      v224 = v12;
    }
    if ( v18 )
    {
      v37 = *(_DWORD *)v28 & 0x60;
      if ( !v37 && *((_DWORD *)a1 + 13) != v235 + 1 )
        goto LABEL_119;
      v38 = v235 + 1;
      v39 = v7;
      if ( *((_DWORD *)a1 + 13) == v235 + 1 && *(_DWORD *)(v28 + 80) > v7 )
        v39 = *(_DWORD *)(v28 + 80);
      v40 = v25;
      LOBYTE(v40) = v37 == 0;
      v41 = xxxMNRecalcTabStrings(DCEx, a1, v237, v40 + v235, v39, v27);
      if ( (unsigned int)MNGetpItemIndex((__int64)a1, v28) == -1 )
        break;
      v25 = 0LL;
      if ( !v37 )
      {
        v36 = v235;
        goto LABEL_116;
      }
      if ( v228 && (*(_BYTE *)(a2 + 45) & 2) == 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45);
          v25 = 0LL;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
            goto LABEL_82;
LABEL_81:
          v23 = gpsi + 2288LL;
        }
        else
        {
          if ( IsDPIDWMSysMet(v43) && (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) == 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53);
            v25 = 0LL;
            if ( *(_QWORD *)(ThreadWin32Thread + 408) )
            {
              v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v55,
                                                          v24,
                                                          0LL)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1;
              v25 = 0LL;
            }
            else
            {
              v56 = 0;
            }
            if ( v56 )
              goto LABEL_81;
          }
LABEL_82:
          if ( IsDPIDWMSysMet(5uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v24, v25) & 0xF) == 1 )
            {
              v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v24, v60);
              v25 = 0LL;
              if ( *(_QWORD *)(v61 + 408) )
              {
                v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v62,
                                                            v24,
                                                            0LL)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1;
                v25 = 0LL;
              }
              else
              {
                v63 = 0;
              }
              if ( v63 )
              {
                v23 = gpsi + 2676LL;
                goto LABEL_91;
              }
            }
            else
            {
              v25 = 0LL;
            }
          }
          v23 = gpsi + 1900LL;
        }
LABEL_91:
        v27 = v41 + *(_DWORD *)v23;
LABEL_112:
        v36 = v235;
        v86 = v235;
        v9 = v238;
        v226 = *(_DWORD *)(v28 + 80);
        v237 = v235;
        if ( *((_DWORD *)a1 + 13) == v38 )
        {
          v41 = xxxMNRecalcTabStrings(DCEx, a1, v235, v38, *(_DWORD *)(v28 + 80), v27);
          if ( (unsigned int)MNGetpItemIndex((__int64)a1, v28) == -1 )
            goto LABEL_146;
          v36 = v235;
          v25 = 0LL;
LABEL_116:
          if ( *((_DWORD *)a1 + 13) == v38 )
            *((_DWORD *)a1 + 14) = v41;
        }
        v18 = v230;
        v7 = v226;
LABEL_119:
        v12 = v224;
        *(_DWORD *)(v28 + 76) = v9;
        v9 += *(_DWORD *)(v28 + 84);
        *(_DWORD *)(v28 + 72) = v27;
        if ( v227 < v9 )
          v227 = v9;
        goto LABEL_131;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        v68 = W32GetCurrentThreadDpiAwarenessContext(v65, v64, v66, v67);
        v25 = 0LL;
        if ( (v68 & 0xF) != 0 )
          goto LABEL_102;
LABEL_101:
        v23 = gpsi + 2448LL;
LABEL_111:
        v27 = v41 + 2 * *(_DWORD *)v23;
        goto LABEL_112;
      }
      if ( IsDPIDWMSysMet(v65) && (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71, v72) & 0xF) == 0 )
      {
        v76 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75);
        v25 = 0LL;
        if ( *(_QWORD *)(v76 + 408) )
        {
          v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v77,
                                                      v24,
                                                      0LL)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1;
          v25 = 0LL;
        }
        else
        {
          v78 = 0;
        }
        if ( v78 )
          goto LABEL_101;
      }
LABEL_102:
      if ( IsDPIDWMSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v24, v25) & 0xF) == 1 )
        {
          v83 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v24, v82);
          v25 = 0LL;
          if ( *(_QWORD *)(v83 + 408) )
          {
            v85 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v84,
                                                        v24,
                                                        0LL)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1;
            v25 = 0LL;
          }
          else
          {
            v85 = 0;
          }
          if ( v85 )
          {
            v23 = gpsi + 2836LL;
            goto LABEL_111;
          }
        }
        else
        {
          v25 = 0LL;
        }
      }
      v23 = gpsi + 2060LL;
      goto LABEL_111;
    }
    v87 = *(_WORD **)(v28 + 40);
    if ( v87 && *v87 == 8 )
    {
      if ( !(unsigned int)MNIsUAHMenu((__int64)a1) )
      {
        *(_DWORD *)(v28 + 80) -= *(_DWORD *)(GetDPIMETRICSForDpi(v14) + 48);
        v25 = 0LL;
      }
      v36 = v235;
    }
    if ( (*(_DWORD *)v28 & 0x60) != 0
      || (DPIMETRICSForDpi = GetDPIMETRICSForDpi(v14),
          v25 = 0LL,
          v23 = *((_DWORD *)a1 + 14) + a5,
          v36 = v235,
          v27 + *(_DWORD *)(v28 + 80) + *(_DWORD *)(DPIMETRICSForDpi + 48) > (unsigned int)v23)
      && v235 )
    {
      v27 = a5;
      v9 += v12;
      v12 = *(_DWORD *)(v28 + 84);
      v224 = v12;
    }
    *(_DWORD *)(v28 + 72) = v27;
    v27 += *(_DWORD *)(v28 + 80);
    *(_DWORD *)(v28 + 76) = v9;
LABEL_131:
    v89 = *(_DWORD *)(v28 + 84);
    if ( v7 < *(_DWORD *)(v28 + 80) )
      v7 = *(_DWORD *)(v28 + 80);
    v226 = v7;
    if ( v12 != v89 )
    {
      if ( v12 < v89 )
        v12 = *(_DWORD *)(v28 + 84);
      v224 = v12;
      if ( v18 )
        goto LABEL_140;
      v225 = v12;
    }
    if ( !v18 )
      v227 = v9 + v12;
LABEL_140:
    v22 = v36 + 1;
    v235 = v22;
    if ( (_DWORD)v22 == -1 || (unsigned int)v22 >= *((_DWORD *)a1 + 13) )
      v28 = v25;
    else
      v28 = *((_QWORD *)a1 + 10) + 152LL * (unsigned int)v22;
    if ( (unsigned int)v22 >= *((_DWORD *)a1 + 13) )
      break;
  }
  v86 = v237;
LABEL_146:
  if ( !v229 || v86 )
  {
LABEL_230:
    v86 = v237;
    *((_DWORD *)a1 + 16) = 0;
    goto LABEL_231;
  }
  v90 = *((_DWORD *)a1 + 10);
  if ( v90 >= 0 )
  {
    if ( (v90 & 0x4000000) != 0 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 408)
          ? (v121 = 0)
          : (v121 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v118,
                                                          v119,
                                                          v120)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            !v121 || *(_WORD *)(gpsi + 8678LL) == 96) )
      {
        v122 = gpsi + 5652LL;
      }
      else
      {
        v122 = gpsi + 7140LL;
      }
      v123 = *((unsigned int *)a1 + 16);
      if ( (unsigned int)v123 <= *(_DWORD *)(v122 + 1016) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v123, v118, v119, v120) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v125, v126) + 408)
            ? (v130 = 0)
            : (v130 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v127,
                                                            v128,
                                                            v129)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              !v130 || *(_WORD *)(gpsi + 8678LL) == 96) )
        {
          v131 = gpsi + 5652LL;
        }
        else
        {
          v131 = gpsi + 7140LL;
        }
        LODWORD(v123) = *(_DWORD *)(v131 + 1016);
      }
      *((_DWORD *)a1 + 16) = v123;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v133, v132, v134, v135) & 0xF) != 0 )
          goto LABEL_188;
      }
      else if ( !IsDPIDWMSysMet(v133)
             || (W32GetCurrentThreadDpiAwarenessContext(v148, v147, v149, v150) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v151, v152, v153) + 408)
               ? (v157 = 0)
               : (v157 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v154,
                                                               v155,
                                                               v156)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v157) )
      {
LABEL_188:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v137, v136, v138, v139) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v141, v142) + 408)
            ? (v146 = 0)
            : (v146 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v143,
                                                            v144,
                                                            v145)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v146) )
        {
          v158 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v158 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_203;
      }
      v158 = (_DWORD *)(gpsi + 2448LL);
LABEL_203:
      *((_DWORD *)a1 + 16) += *v158;
      goto LABEL_231;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v159, v160, v161) + 408)
        ? (v165 = 0)
        : (v165 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v162,
                                                        v163,
                                                        v164)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          !v165 || *(_WORD *)(gpsi + 8678LL) == 96) )
    {
      v166 = gpsi + 5652LL;
    }
    else
    {
      v166 = gpsi + 7140LL;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v168, v167, v169, v170) & 0xF) != 0 )
        goto LABEL_214;
    }
    else if ( !IsDPIDWMSysMet(v168)
           || (W32GetCurrentThreadDpiAwarenessContext(v183, v182, v184, v185) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v186, v187, v188) + 408)
             ? (v192 = 0)
             : (v192 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v189,
                                                             v190,
                                                             v191)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v192) )
    {
LABEL_214:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v172, v171, v173, v174) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v175, v176, v177) + 408)
          ? (v181 = 0)
          : (v181 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v178,
                                                          v179,
                                                          v180)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v181) )
      {
        v193 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v193 = (_DWORD *)(gpsi + 2060LL);
      }
      goto LABEL_229;
    }
    v193 = (_DWORD *)(gpsi + 2448LL);
LABEL_229:
    *((_DWORD *)a1 + 16) += *v193 + *(_DWORD *)(v166 + 1016);
    v86 = v237;
    goto LABEL_231;
  }
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( !IsDPIDWMSysMet(v92) || (W32GetCurrentThreadDpiAwarenessContext(v107, v106, v108, v109) & 0xF) != 0 )
      goto LABEL_151;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v113, v114, v115)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_151;
    }
    goto LABEL_161;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94) & 0xF) == 0 )
  {
LABEL_161:
    v117 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_166;
  }
LABEL_151:
  if ( IsDPIDWMSysMet(0x2DuLL)
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
    v117 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v117 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_166:
  *((_DWORD *)a1 + 16) += *v117;
LABEL_231:
  if ( !*((_DWORD *)a1 + 16) )
    goto LABEL_250;
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( !IsDPIDWMSysMet(v195) || (W32GetCurrentThreadDpiAwarenessContext(v210, v209, v211, v212) & 0xF) != 0 )
      goto LABEL_234;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v213, v214, v215) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v216, v217, v218)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_234;
    }
    goto LABEL_244;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v195, v194, v196, v197) & 0xF) == 0 )
  {
LABEL_244:
    v220 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_249;
  }
LABEL_234:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v199, v198, v200, v201) & 0xF) == 1
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
    v220 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v220 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_249:
  *((_DWORD *)a1 + 16) += *v220;
LABEL_250:
  if ( v86 )
  {
    if ( *((_DWORD *)a1 + 13) )
    {
      v221 = (_DWORD *)*((_QWORD *)a1 + 10);
      if ( (*v221 & 0x4000) != 0 )
      {
        v222 = 0;
        v223 = v221 + 18;
        do
        {
          ++v222;
          *v223 = *((_DWORD *)a1 + 14) - v223[2] - *v223;
          v223 += 38;
        }
        while ( v222 < *((_DWORD *)a1 + 13) );
      }
    }
  }
  GreSelectFontInternal(DCEx);
  _ReleaseDC(DCEx);
  *((_DWORD *)a1 + 15) = v227 - v238;
  if ( a7 )
    *a7 = v225;
  return *((unsigned int *)a1 + 15);
}
