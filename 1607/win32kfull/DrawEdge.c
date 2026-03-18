/*
 * XREFs of DrawEdge @ 0x1C006E2BC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     DrawPushButton @ 0x1C00AE7EC (DrawPushButton.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C014F060 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DrawDiagonal @ 0x1C0246524 (DrawDiagonal.c)
 *     FillTriangle @ 0x1C0246DB8 (FillTriangle.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // esi
  unsigned int v6; // r10d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _DWORD *v42; // rdx
  __int64 v43; // rcx
  __int64 left; // rdx
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int *v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // edi
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  _DWORD *v72; // rcx
  LONG v73; // edx
  __int64 v74; // rbx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // edi
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  int *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  _DWORD *v93; // rcx
  unsigned int v94; // eax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r9
  __int64 v101; // r9
  __int64 v102; // r9
  int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // r9
  __int64 v124; // rdx
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r9
  int v128; // ecx
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  int v135; // ecx
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  int v142; // ecx
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // r9
  __int64 v148; // r9
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
  __int64 v168; // r9
  __int64 v170; // r9
  __int64 v171; // r9
  int v172; // ecx
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  int v186; // ecx
  __int64 v187; // r8
  int v188; // eax
  HBRUSH v189; // r8
  RECT v190; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v191; // [rsp+40h] [rbp-59h]
  RECT *v192; // [rsp+48h] [rbp-51h]
  LONG right; // [rsp+50h] [rbp-49h] BYREF
  LONG top; // [rsp+54h] [rbp-45h]
  int v195; // [rsp+58h] [rbp-41h]
  int v196; // [rsp+5Ch] [rbp-3Dh]
  _QWORD v197[10]; // [rsp+60h] [rbp-39h]

  v191 = a3;
  v5 = a4;
  v192 = a2;
  v6 = 1;
  if ( *(_WORD *)(gpsi + 8676LL) == 1 )
    v5 = a4 | 0x8000;
  if ( (v5 & 0x8000) != 0 )
    v5 |= 0x4000u;
  v190 = *a2;
  v7 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( (v5 & 0x4000) != 0 )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        if ( (v7 & 3) != 0 )
          v12 = *(_QWORD *)(gpsi + 5136LL);
        else
          v12 = *(_QWORD *)(gpsi + 5128LL);
      }
      else if ( (v7 & 3) != 0 )
      {
        v12 = *(_QWORD *)(gpsi + 5216LL);
      }
      else
      {
        v12 = *(_QWORD *)(gpsi + 5208LL);
      }
      v11 = v12;
    }
    else
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 != 4 )
              return 0LL;
            if ( (v5 & 0x1000) != 0 )
              v11 = *(_QWORD *)(gpsi + 5216LL);
            else
              v11 = *(_QWORD *)(gpsi + 5256LL);
            v12 = *(_QWORD *)(gpsi + 5264LL);
          }
          else
          {
            if ( (v5 & 0x1000) != 0 )
              v11 = *(_QWORD *)(gpsi + 5264LL);
            else
              v11 = *(_QWORD *)(gpsi + 5248LL);
            v12 = *(_QWORD *)(gpsi + 5216LL);
          }
        }
        else
        {
          if ( (v5 & 0x1000) != 0 )
            v11 = *(_QWORD *)(gpsi + 5256LL);
          else
            v11 = *(_QWORD *)(gpsi + 5216LL);
          v12 = *(_QWORD *)(gpsi + 5248LL);
        }
      }
      else
      {
        if ( (v5 & 0x1000) != 0 )
          v11 = *(_QWORD *)(gpsi + 5248LL);
        else
          v11 = *(_QWORD *)(gpsi + 5264LL);
        v12 = *(_QWORD *)(gpsi + 5256LL);
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v94 = DrawDiagonal((_DWORD)a1, (unsigned int)&v190, v11, v12, v5);
      goto LABEL_55;
    }
    v13 = 0;
    if ( (v5 & 4) != 0 )
    {
      v16 = IsDPIAbsoluteSysMet(5LL);
      if ( v16 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v17) & 0xF) == 0 )
        {
LABEL_93:
          v24 = (_DWORD *)(gpsi + 2288LL);
          goto LABEL_19;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v15)
             && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v21,
                                                      v23,
                                                      v99)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_93;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v23, v101) + 408)
          ? (v103 = 0)
          : (v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v21,
                                                          v23,
                                                          v102)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v103) )
      {
        v24 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v24 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_19:
      v190.right -= *v24;
      right = v190.right;
      top = v190.top;
      if ( v16 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v21, v23) & 0xF) == 0 )
        {
LABEL_107:
          v31 = (int *)(gpsi + 2288LL);
LABEL_23:
          v195 = *v31;
          v13 = 1;
          v196 = v190.bottom - v190.top;
          v197[0] = v12;
          goto LABEL_24;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(5LL)
             && (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v107,
                                                      v108,
                                                      v109)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_107;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 408)
          ? (v117 = 0)
          : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v114,
                                                          v115,
                                                          v116)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v117) )
      {
        v31 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v31 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_23;
    }
LABEL_24:
    if ( (v5 & 8) == 0 )
      goto LABEL_34;
    v34 = IsDPIAbsoluteSysMet(6LL);
    if ( v34 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v35) & 0xF) == 0 )
        goto LABEL_121;
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v33)
           && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v121,
                                                    v41,
                                                    v122)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
LABEL_121:
      v42 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_29;
    }
    if ( (unsigned int)IsDPIDWMSysMet(6LL)
      && (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v41, v125) + 408)
        ? (v128 = 0)
        : (v128 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v126,
                                                        v41,
                                                        v127)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v128) )
    {
      v42 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v42 = (_DWORD *)(gpsi + 1904LL);
    }
LABEL_29:
    v43 = (unsigned int)(v190.bottom - *v42);
    left = (unsigned int)v190.left;
    v190.bottom = v43;
    v45 = 3LL * v13;
    v46 = v190.right - v190.left;
    *(&right + 2 * v45) = v190.left;
    *(&top + 2 * v45) = v43;
    *(&v195 + 2 * v45) = v46;
    if ( v34 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v43, left, v41) & 0xF) != 0 )
        goto LABEL_31;
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(6LL)
           || (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v129, v130, v131) + 408)
             ? (v135 = 0)
             : (v135 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v132,
                                                             v133,
                                                             v134)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v135) )
    {
LABEL_31:
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v51, v50, v52) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v136, v137, v138) + 408)
          ? (v142 = 0)
          : (v142 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v139,
                                                          v140,
                                                          v141)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v142) )
      {
        v53 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v53 = (int *)(gpsi + 1904LL);
      }
      goto LABEL_33;
    }
    v53 = (int *)(gpsi + 2292LL);
LABEL_33:
    *(&v196 + 6 * v13) = *v53;
    v197[3 * v13++] = v12;
LABEL_34:
    if ( (v5 & 1) != 0 )
    {
      v54 = 3LL * v13;
      *(&right + 2 * v54) = v190.left;
      *(&top + 2 * v54) = v190.top;
      v57 = IsDPIAbsoluteSysMet(5LL);
      if ( v57 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v56, v55, v58) & 0xF) == 0 )
        {
LABEL_149:
          v65 = (int *)(gpsi + 2288LL);
          goto LABEL_39;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v56)
             && (W32GetCurrentThreadDpiAwarenessContext(v60, v59, v61) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v143, v144, v145) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v62,
                                                      v64,
                                                      v146)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_149;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v64, v148) + 408)
          ? (v150 = 0)
          : (v150 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v62,
                                                          v64,
                                                          v149)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v150) )
      {
        v65 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v65 = (int *)(gpsi + 1900LL);
      }
LABEL_39:
      *(&v195 + 6 * v13) = *v65;
      *(&v196 + 6 * v13) = v190.bottom - v190.top;
      v197[3 * v13++] = v11;
      if ( v57 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v65, v62, v64) & 0xF) == 0 )
        {
LABEL_163:
          v72 = (_DWORD *)(gpsi + 2288LL);
LABEL_43:
          v190.left += *v72;
          goto LABEL_44;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(5LL)
             && (W32GetCurrentThreadDpiAwarenessContext(v67, v66, v68) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v151, v152, v153) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v154,
                                                      v155,
                                                      v156)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_163;
      }
      if ( (unsigned int)IsDPIDWMSysMet(5LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v70, v69, v71) & 0xF) == 1
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
        v72 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v72 = (_DWORD *)(gpsi + 1900LL);
      }
      goto LABEL_43;
    }
LABEL_44:
    if ( (v5 & 2) != 0 )
    {
      v73 = v190.left;
      v74 = 3LL * v13;
      *(&top + 2 * v74) = v190.top;
      v75 = v190.right - v73;
      *(&right + 2 * v74) = v73;
      *(&v195 + 2 * v74) = v75;
      v78 = IsDPIAbsoluteSysMet(6LL);
      if ( v78 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v77, v76, v79) & 0xF) == 0 )
        {
LABEL_178:
          v86 = (int *)(gpsi + 2292LL);
          goto LABEL_49;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(v77)
             && (W32GetCurrentThreadDpiAwarenessContext(v81, v80, v82) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v165, v166, v167) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v83,
                                                      v85,
                                                      v168)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_178;
      }
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v84, v83, v85) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v85, v170) + 408)
          ? (v172 = 0)
          : (v172 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v83,
                                                          v85,
                                                          v171)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v172) )
      {
        v86 = (int *)(gpsi + 2680LL);
      }
      else
      {
        v86 = (int *)(gpsi + 1904LL);
      }
LABEL_49:
      *(&v196 + 6 * v13) = *v86;
      v197[3 * v13++] = v11;
      if ( v78 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v86, v83, v85) & 0xF) == 0 )
        {
LABEL_192:
          v93 = (_DWORD *)(gpsi + 2292LL);
LABEL_53:
          v190.top += *v93;
          goto LABEL_54;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(6LL)
             && (W32GetCurrentThreadDpiAwarenessContext(v88, v87, v89) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v173, v174, v175) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v176,
                                                      v177,
                                                      v178)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_192;
      }
      if ( (unsigned int)IsDPIDWMSysMet(6LL)
        && (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v180, v181, v182) + 408)
          ? (v186 = 0)
          : (v186 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v183,
                                                          v184,
                                                          v185)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v186) )
      {
        v93 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v93 = (_DWORD *)(gpsi + 1904LL);
      }
      goto LABEL_53;
    }
LABEL_54:
    v94 = GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&right, v13);
LABEL_55:
    a3 = v191;
    v6 = v94;
LABEL_56:
    v7 = a3 & 0xC;
    if ( (a3 & 0xC) == 0 )
      break;
    v191 = a3 & 0xFFFFFFF3;
  }
  if ( (v5 & 0x800) != 0 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      if ( (v5 & 0x8000) != 0 )
        v187 = *(_QWORD *)(gpsi + 5128LL);
      else
        v187 = *(_QWORD *)(gpsi + 5208LL);
      v188 = FillTriangle(a1, &v190, v187, v5);
    }
    else
    {
      if ( (v5 & 0x8000) != 0 )
        v189 = *(HBRUSH *)(gpsi + 5128LL);
      else
        v189 = *(HBRUSH *)(gpsi + 5208LL);
      v188 = FillRect(a1, &v190, v189);
    }
    v6 = v188;
  }
  if ( (v5 & 0x2000) != 0 )
    *v192 = v190;
  return v6;
}
