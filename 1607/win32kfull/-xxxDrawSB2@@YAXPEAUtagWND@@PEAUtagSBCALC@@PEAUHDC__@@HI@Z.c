/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014E5CC
 * Callers:
 *     xxxDrawScrollBar @ 0x1C014E540 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C014F0D0 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v6; // eax
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ecx
  int *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ecx
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
  int v62; // edi
  int v63; // r12d
  unsigned int *v64; // rcx
  unsigned int *v65; // rdx
  int v66; // edi
  struct tagSBCALC *v67; // r8
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // ecx
  _DWORD *v94; // rcx
  __int64 v95; // rdx
  unsigned __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
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
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // ecx
  _DWORD *v121; // rcx
  unsigned int v122; // r14d
  __int64 v123; // rdx
  __int64 v124; // r9
  __int64 v125; // r8
  unsigned int v126; // r9d
  __int64 v127; // rdx
  unsigned __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  int v141; // ecx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  int v152; // ecx
  _DWORD *v153; // rcx
  __int64 v154; // rdx
  unsigned __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  int v168; // ecx
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  int v179; // ecx
  _DWORD *v180; // rcx
  __int64 v181; // rbx
  RECT v182; // [rsp+30h] [rbp-61h] BYREF
  int v183; // [rsp+40h] [rbp-51h]
  int TextColor; // [rsp+44h] [rbp-4Dh]
  struct tagSBCALC *v185; // [rsp+48h] [rbp-49h]
  struct tagWND *v186; // [rsp+50h] [rbp-41h]
  __int64 v187; // [rsp+58h] [rbp-39h]
  HBRUSH ColorObjects; // [rsp+60h] [rbp-31h]
  _QWORD v189[6]; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v190; // [rsp+98h] [rbp+7h] BYREF
  unsigned int v191; // [rsp+9Ch] [rbp+Bh] BYREF
  LONG v192; // [rsp+A0h] [rbp+Fh]
  LONG v193; // [rsp+A4h] [rbp+13h]

  v6 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v185 = a2;
  v183 = a4;
  v186 = a1;
  v7 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v8 = v6 / 2;
  if ( v6 / 2 > 0 && v7 > 0 )
  {
    if ( a4 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != 0 )
          goto LABEL_6;
      }
      else if ( !IsDPIDWMSysMet(v10)
             || (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
               ? (v34 = 0)
               : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v31,
                                                              v32,
                                                              v33)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v34) )
      {
LABEL_6:
        if ( IsDPIDWMSysMet(0x14uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
            ? (v23 = 0)
            : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v20,
                                                           v21,
                                                           v22)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v23) )
        {
          v35 = (int *)(gpsi + 2736LL);
        }
        else
        {
          v35 = (int *)(gpsi + 1960LL);
        }
        goto LABEL_38;
      }
      v35 = (int *)(gpsi + 2348LL);
      goto LABEL_38;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) != 0 )
        goto LABEL_23;
    }
    else if ( !IsDPIDWMSysMet(v37)
           || (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
             ? (v61 = 0)
             : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v58,
                                                            v59,
                                                            v60)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v61) )
    {
LABEL_23:
      if ( IsDPIDWMSysMet(0x15uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42, v43) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 408)
          ? (v50 = 0)
          : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v47,
                                                         v48,
                                                         v49)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v50) )
      {
        v35 = (int *)(gpsi + 2740LL);
      }
      else
      {
        v35 = (int *)(gpsi + 1964LL);
      }
LABEL_38:
      v62 = *v35;
      v63 = -1;
      DCOBJ::DCOBJ((DCOBJ *)v189, a3);
      if ( v189[0] )
        v63 = *(_DWORD *)(*(_QWORD *)(v189[0] + 80LL) + 36LL);
      DCOBJ::~DCOBJ((DCOBJ *)v189);
      TextColor = GreGetTextColor(a3);
      ColorObjects = xxxGetColorObjects(v186, a3);
      v64 = &v190;
      if ( v8 > v62 )
        v8 = v62;
      v65 = &v191;
      v66 = v183;
      if ( !v183 )
      {
        v64 = &v191;
        v65 = &v190;
      }
      v67 = v185;
      *v64 = *((_DWORD *)v185 + 6);
      *v65 = *((_DWORD *)v67 + 4);
      v64[2] = *((_DWORD *)v67 + 7);
      v65[2] = *((_DWORD *)v67 + 5);
      v187 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 5232LL));
      if ( v66 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v69, v68, v70, v71) & 0xF) != 0 )
            goto LABEL_47;
        }
        else if ( !IsDPIDWMSysMet(v69)
               || (W32GetCurrentThreadDpiAwarenessContext(v84, v83, v85, v86) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89) + 408)
                 ? (v93 = 0)
                 : (v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v90,
                                                                v91,
                                                                v92)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v93) )
        {
LABEL_47:
          if ( IsDPIDWMSysMet(0x14uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v73, v72, v74, v75) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 408)
              ? (v82 = 0)
              : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v79,
                                                             v80,
                                                             v81)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v82) )
          {
            v94 = (_DWORD *)(gpsi + 2736LL);
          }
          else
          {
            v94 = (_DWORD *)(gpsi + 1960LL);
          }
LABEL_62:
          if ( v8 != *v94 )
          {
LABEL_82:
            v122 = a5;
            v182.left = v190;
            v182.right = v192;
            v182.top = v191;
            v182.bottom = v191 + v8;
            DrawFrameControl(a3, &v182, 3, (a5 & 1) << 8);
            v182.bottom = v193;
            v126 = ((a5 & 2) << 7) | 1;
            v182.top = v193 - v8;
LABEL_122:
            DrawFrameControl(a3, &v182, 3, v126);
            goto LABEL_123;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v96, v95, v97, v98) & 0xF) != 0 )
              goto LABEL_65;
          }
          else if ( !IsDPIDWMSysMet(v96)
                 || (W32GetCurrentThreadDpiAwarenessContext(v111, v110, v112, v113) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116) + 408)
                   ? (v120 = 0)
                   : (v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v117,
                                                                   v118,
                                                                   v119)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v120) )
          {
LABEL_65:
            if ( IsDPIDWMSysMet(2uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v100, v99, v101, v102) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
                ? (v109 = 0)
                : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v106,
                                                                v107,
                                                                v108)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v109) )
            {
              v121 = (_DWORD *)(gpsi + 2664LL);
            }
            else
            {
              v121 = (_DWORD *)(gpsi + 1888LL);
            }
LABEL_80:
            if ( v7 == *v121 )
            {
              v122 = a5;
              BitBltSysBmp(a3, v190, v191, (a5 & 1) != 0 ? 49 : 46);
              v123 = v190;
              v124 = (a5 & 2) != 0 ? 53 : 50;
              v125 = (unsigned int)(v193 - v8);
LABEL_120:
              BitBltSysBmp(a3, v123, v125, v124);
LABEL_123:
              v181 = GreSelectBrush(a3, v187);
              DrawThumb2(v186, v185, a3, ColorObjects, v183, v122);
              GreSelectBrush(a3, v181);
              GreSetBkColor(a3, v63);
              GreSetTextColor(a3, TextColor);
              return;
            }
            goto LABEL_82;
          }
          v121 = (_DWORD *)(gpsi + 2276LL);
          goto LABEL_80;
        }
        v94 = (_DWORD *)(gpsi + 2348LL);
        goto LABEL_62;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v128, v127, v129, v130) & 0xF) != 0 )
          goto LABEL_85;
      }
      else if ( !IsDPIDWMSysMet(v128)
             || (W32GetCurrentThreadDpiAwarenessContext(v143, v142, v144, v145) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v146, v147, v148) + 408)
               ? (v152 = 0)
               : (v152 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v149,
                                                               v150,
                                                               v151)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v152) )
      {
LABEL_85:
        if ( IsDPIDWMSysMet(0x15uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v132, v131, v133, v134) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v135, v136, v137) + 408)
            ? (v141 = 0)
            : (v141 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v138,
                                                            v139,
                                                            v140)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v141) )
        {
          v153 = (_DWORD *)(gpsi + 2740LL);
        }
        else
        {
          v153 = (_DWORD *)(gpsi + 1964LL);
        }
LABEL_100:
        if ( v8 != *v153 )
        {
LABEL_121:
          v122 = a5;
          v182.top = v191;
          v182.bottom = v193;
          v182.left = v190;
          v182.right = v190 + v8;
          DrawFrameControl(a3, &v182, 3, ((a5 & 1) << 8) | 2);
          v182.right = v192;
          v126 = ((a5 & 2) << 7) | 3;
          v182.left = v192 - v8;
          goto LABEL_122;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v155, v154, v156, v157) & 0xF) != 0 )
            goto LABEL_103;
        }
        else if ( !IsDPIDWMSysMet(v155)
               || (W32GetCurrentThreadDpiAwarenessContext(v170, v169, v171, v172) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v173, v174, v175) + 408)
                 ? (v179 = 0)
                 : (v179 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v176,
                                                                 v177,
                                                                 v178)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v179) )
        {
LABEL_103:
          if ( IsDPIDWMSysMet(3uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v159, v158, v160, v161) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v162, v163, v164) + 408)
              ? (v168 = 0)
              : (v168 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v165,
                                                              v166,
                                                              v167)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v168) )
          {
            v180 = (_DWORD *)(gpsi + 2668LL);
          }
          else
          {
            v180 = (_DWORD *)(gpsi + 1892LL);
          }
LABEL_118:
          if ( v7 == *v180 )
          {
            v122 = a5;
            BitBltSysBmp(a3, v190, v191, (a5 & 1) != 0 ? 61 : 58);
            v125 = v191;
            v124 = (a5 & 2) != 0 ? 57 : 54;
            v123 = (unsigned int)(v192 - v8);
            goto LABEL_120;
          }
          goto LABEL_121;
        }
        v180 = (_DWORD *)(gpsi + 2280LL);
        goto LABEL_118;
      }
      v153 = (_DWORD *)(gpsi + 2352LL);
      goto LABEL_100;
    }
    v35 = (int *)(gpsi + 2352LL);
    goto LABEL_38;
  }
}
