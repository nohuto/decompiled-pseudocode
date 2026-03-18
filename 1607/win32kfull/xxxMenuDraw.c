/*
 * XREFs of xxxMenuDraw @ 0x1C00B6AD8
 * Callers:
 *     xxxPaintMenuBar @ 0x1C012D944 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C020E6B8 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00B4828 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00B7568 (xxxSendUAHInitMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00B7D88 (xxxSendUAHMenuMessage.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00B99DC (GreSetViewportOrg.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  int v4; // ebx
  __int64 v5; // rsi
  int v8; // r13d
  int v9; // ebx
  int TextAlign; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  _DWORD *v45; // rcx
  LONG v46; // ecx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ecx
  int *v73; // rcx
  int v74; // eax
  int v75; // ecx
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // ecx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // ecx
  _DWORD *v102; // rcx
  LONG v103; // ecx
  __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // ecx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  int v129; // ecx
  int *v130; // rcx
  LONG v131; // ecx
  LONG v132; // eax
  __int64 v133; // rdx
  unsigned __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  int v147; // ecx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  _DWORD *v159; // rcx
  LONG v160; // ebx
  int v161; // ecx
  __int64 v162; // rdx
  unsigned __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
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
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rdx
  __int64 v185; // r8
  __int64 v186; // r9
  _DWORD *v188; // rcx
  unsigned int v189; // edx
  __int64 v190; // rax
  int v192; // [rsp+30h] [rbp-49h]
  __int64 v193; // [rsp+38h] [rbp-41h] BYREF
  RECT v194; // [rsp+40h] [rbp-39h] BYREF
  int v195; // [rsp+50h] [rbp-29h]
  RECT v196; // [rsp+58h] [rbp-21h] BYREF
  __int64 v197; // [rsp+68h] [rbp-11h]
  __int64 v198; // [rsp+70h] [rbp-9h]
  __int64 v199; // [rsp+78h] [rbp-1h]
  _QWORD v200[10]; // [rsp+80h] [rbp+7h] BYREF
  int v201; // [rsp+E8h] [rbp+6Fh]
  int v202; // [rsp+F8h] [rbp+7Fh]

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 40);
  v5 = a3;
  v201 = 0;
  v8 = 0;
  v197 = gptiCurrent;
  v9 = v4 & 1;
  v193 = 0LL;
  if ( gihmodUserApiHook < 0 || !a3 )
    v5 = *(_QWORD *)(a2 + 72);
  GreGetDCPoint(a1, 4LL, &v193);
  GetDPIMETRICS((struct tagWND *)v5);
  v199 = GreSelectFontInternal(a1);
  TextAlign = GreGetTextAlign(a1);
  v14 = *(_DWORD **)(a2 + 80);
  v195 = TextAlign;
  if ( v14 && (*v14 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v15 = *(_DWORD *)(gpsi + 4976LL);
  if ( *(_DWORD *)(gpsi + 5040LL) != v15 || (v202 = 49152, *(_DWORD *)(gpsi + 5024LL) != v15) )
    v202 = 0;
  v16 = gptiCurrent;
  v200[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v200;
  v200[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  if ( *(_QWORD *)(a2 + 112) )
    goto LABEL_18;
  if ( gihmodUserApiHook >= 0 && v9 )
  {
    if ( v5 && (unsigned int)xxxSendUAHInitMenuMessage(v5, a2, a1) )
    {
      xxxSendUAHMenuMessage(v5, 145LL, a2, a1);
LABEL_18:
      v8 = GreSetBkMode(a1, 1);
      v201 = v8;
      goto LABEL_20;
    }
    v5 = *(_QWORD *)(a2 + 72);
    ThreadLockExchange(v5, (__int64)v200);
  }
LABEL_20:
  if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
  {
    v17 = *(unsigned int *)(a2 + 120);
    if ( (_DWORD)v17 == -1 || (unsigned int)v17 >= *(_DWORD *)(a2 + 52) )
      v18 = 0LL;
    else
      v18 = *(_QWORD *)(a2 + 80) + 152 * v17;
    GreSetViewportOrg(a1);
    v3 = *(_DWORD *)(a2 + 120);
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 80);
  }
  v192 = 0;
  if ( v3 < *(_DWORD *)(a2 + 52) )
  {
    v16 = v9;
    v198 = v9;
    while ( 1 )
    {
      if ( !v18 )
      {
LABEL_161:
        v8 = v201;
        goto LABEL_162;
      }
      if ( (*(_DWORD *)v18 & 0x20) != 0 && v16 )
        break;
LABEL_105:
      if ( (*(_DWORD *)v18 & 0x800) != 0 )
      {
        if ( (*(_DWORD *)v18 & 0x100) == 0 || (v16 = 1024LL, *(_WORD *)(v197 + 552) < 0x400u) )
        {
          if ( !(unsigned int)MNIsUAHMenu(a2) )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v134, v133, v135, v136) & 0xF) != 0 )
              {
LABEL_111:
                if ( IsDPIDWMSysMet(6uLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v138, v137, v139, v140) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v141, v142, v143) + 408)
                    ? (v147 = 0)
                    : (v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v144,
                                                                    v145,
                                                                    v146)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v147) )
                {
                  v159 = (_DWORD *)(gpsi + 2680LL);
                }
                else
                {
                  v159 = (_DWORD *)(gpsi + 1904LL);
                }
LABEL_126:
                v160 = *(_DWORD *)(v18 + 76) + (*(_DWORD *)(v18 + 84) >> 1) - *v159;
                v161 = *(_DWORD *)(v18 + 72);
                v196.top = v160;
                v196.left = v161 + 1;
                v196.right = *(_DWORD *)(v18 + 80) - 1 + v161;
                if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v163, v162, v164, v165) & 0xF) != 0 )
                  {
LABEL_128:
                    if ( IsDPIDWMSysMet(0x2EuLL)
                      && (W32GetCurrentThreadDpiAwarenessContext(v167, v166, v168, v169) & 0xF) == 1
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v170, v171, v172) + 408)
                        ? (v176 = 0)
                        : (v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                        (__int64)KeGetCurrentThread(),
                                                                        v173,
                                                                        v174,
                                                                        v175)
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                          v176) )
                    {
                      v188 = (_DWORD *)(gpsi + 2840LL);
                    }
                    else
                    {
                      v188 = (_DWORD *)(gpsi + 2064LL);
                    }
                    goto LABEL_143;
                  }
                }
                else
                {
                  if ( !IsDPIDWMSysMet(v163)
                    || (W32GetCurrentThreadDpiAwarenessContext(v178, v177, v179, v180) & 0xF) != 0 )
                  {
                    goto LABEL_128;
                  }
                  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v181, v182, v183) + 408)
                    || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v184,
                                                               v185,
                                                               v186)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1) )
                  {
                    goto LABEL_128;
                  }
                }
                v188 = (_DWORD *)(gpsi + 2452LL);
LABEL_143:
                v196.bottom = v160 + *v188;
                DrawEdge(a1, &v196, 2u, v202 | 0xA);
                MNDrawInsertionBar(a1, (struct tagITEM *)v18);
LABEL_148:
                if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
                {
                  v16 = (unsigned int)(*(_DWORD *)(v18 + 84) + v192);
                  v192 = v16;
                  if ( (unsigned int)v16 > *(_DWORD *)(a2 + 60) )
                    goto LABEL_161;
                }
                goto LABEL_150;
              }
            }
            else
            {
              if ( !IsDPIDWMSysMet(v134) || (W32GetCurrentThreadDpiAwarenessContext(v149, v148, v150, v151) & 0xF) != 0 )
                goto LABEL_111;
              if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v152, v153, v154) + 408)
                || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v155,
                                                           v156,
                                                           v157)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1) )
              {
                goto LABEL_111;
              }
            }
            v159 = (_DWORD *)(gpsi + 2292LL);
            goto LABEL_126;
          }
        }
      }
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 288) & 0x10000000) != 0 )
        {
          v189 = *(unsigned __int16 *)(v5 + 356);
          goto LABEL_147;
        }
        if ( (*(_DWORD *)(v5 + 352) & 0xF) != 0
          || (v190 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 408LL)) == 0
          || (*(_DWORD *)(*(_QWORD *)(v190 + 8) + 244LL) & 1) == 0 )
        {
LABEL_146:
          v189 = *(unsigned __int16 *)(gpsi + 8678LL);
          goto LABEL_147;
        }
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v11, v12, v13) & 0xF) != 0 )
      {
        goto LABEL_146;
      }
      v189 = 96;
LABEL_147:
      xxxDrawMenuItem(a1, v189, a2, v18, 0, (struct tagWND *)v5);
      if ( (unsigned int)MNGetpItemIndex(a2, v18) != -1 )
        goto LABEL_148;
LABEL_150:
      if ( ++v3 == -1 || v3 >= *(_DWORD *)(a2 + 52) )
        v18 = 0LL;
      else
        v18 = *(_QWORD *)(a2 + 80) + 152LL * v3;
      v16 = v198;
      if ( v3 >= *(_DWORD *)(a2 + 52) )
        goto LABEL_161;
    }
    if ( (*(_DWORD *)v18 & 0x2000) != 0 && v3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) != 0 )
          goto LABEL_36;
      }
      else if ( !IsDPIDWMSysMet(v20)
             || (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 408)
               ? (v44 = 0)
               : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v41,
                                                              v42,
                                                              v43)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v44) )
      {
LABEL_36:
        if ( IsDPIDWMSysMet(7uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
            ? (v33 = 0)
            : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v30,
                                                           v31,
                                                           v32)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v33) )
        {
          v45 = (_DWORD *)(gpsi + 2684LL);
        }
        else
        {
          v45 = (_DWORD *)(gpsi + 1908LL);
        }
LABEL_51:
        v46 = *(_DWORD *)(v18 - 80) - *v45;
        v194.top = 0;
        v194.left = v46;
        if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0 )
            goto LABEL_53;
        }
        else if ( !IsDPIDWMSysMet(v48)
               || (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64, v65) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 408)
                 ? (v72 = 0)
                 : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v69,
                                                                v70,
                                                                v71)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v72) )
        {
LABEL_53:
          if ( IsDPIDWMSysMet(5uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
              ? (v61 = 0)
              : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v58,
                                                             v59,
                                                             v60)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v61) )
          {
            v73 = (int *)(gpsi + 2676LL);
          }
          else
          {
            v73 = (int *)(gpsi + 1900LL);
          }
          goto LABEL_68;
        }
        v73 = (int *)(gpsi + 2288LL);
LABEL_68:
        v74 = *v73;
        v75 = *(_DWORD *)(v18 - 80);
LABEL_104:
        v131 = v75 - v74;
        v132 = *(_DWORD *)(a2 + 60);
        v194.right = v131;
        v194.bottom = v132;
        DrawEdge(a1, &v194, 2u, v202 | 5);
        goto LABEL_105;
      }
      v45 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_51;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v77, v76, v78, v79) & 0xF) != 0 )
        goto LABEL_71;
    }
    else if ( !IsDPIDWMSysMet(v77)
           || (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97) + 408)
             ? (v101 = 0)
             : (v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v98,
                                                             v99,
                                                             v100)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v101) )
    {
LABEL_71:
      if ( IsDPIDWMSysMet(7uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v81, v80, v82, v83) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86) + 408)
          ? (v90 = 0)
          : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v87,
                                                         v88,
                                                         v89)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v90) )
      {
        v102 = (_DWORD *)(gpsi + 2684LL);
      }
      else
      {
        v102 = (_DWORD *)(gpsi + 1908LL);
      }
LABEL_86:
      v103 = *(_DWORD *)(v18 + 72) - *v102;
      v194.top = 0;
      v194.left = v103;
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v105, v104, v106, v107) & 0xF) != 0 )
          goto LABEL_88;
      }
      else if ( !IsDPIDWMSysMet(v105)
             || (W32GetCurrentThreadDpiAwarenessContext(v120, v119, v121, v122) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 408)
               ? (v129 = 0)
               : (v129 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v126,
                                                               v127,
                                                               v128)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v129) )
      {
LABEL_88:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v109, v108, v110, v111) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v113, v114) + 408)
            ? (v118 = 0)
            : (v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v115,
                                                            v116,
                                                            v117)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v118) )
        {
          v130 = (int *)(gpsi + 2676LL);
        }
        else
        {
          v130 = (int *)(gpsi + 1900LL);
        }
        goto LABEL_103;
      }
      v130 = (int *)(gpsi + 2288LL);
LABEL_103:
      v74 = *v130;
      v75 = *(_DWORD *)(v18 + 72);
      goto LABEL_104;
    }
    v102 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_86;
  }
LABEL_162:
  ThreadUnlock1(v16, v11);
  if ( v8 )
    GreSetBkMode(a1, v8);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFontInternal(a1);
}
