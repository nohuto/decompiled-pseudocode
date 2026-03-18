/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0140258 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(
        struct tagPOPUPMENU *a1,
        struct tagITEM *a2,
        int a3,
        int a4,
        int *a5,
        int *a6,
        struct tagMONITOR **a7)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r12d
  unsigned int v12; // esi
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  _DWORD *v42; // rcx
  int v43; // r8d
  LONG left; // edi
  int v45; // edi
  unsigned int v46; // r8d
  int v47; // edx
  unsigned int v48; // ecx
  LONG top; // esi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  _DWORD *v82; // rcx
  int v83; // r9d
  __int64 v84; // rdx
  unsigned __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
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
  _DWORD *v110; // rcx
  int v111; // esi
  __int64 v112; // rdx
  unsigned __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  int v137; // ecx
  _DWORD *v138; // rcx
  __int64 v139; // rdx
  unsigned __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // r9
  int v153; // ecx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  int v164; // ecx
  _DWORD *v165; // rcx
  int v166; // ecx
  struct tagMONITOR **v167; // rcx
  struct tagRECT v171; // [rsp+28h] [rbp-48h] BYREF
  struct tagRECT *v172; // [rsp+38h] [rbp-38h]
  int *v173; // [rsp+40h] [rbp-30h]
  int *v174; // [rsp+48h] [rbp-28h]
  struct tagMONITOR **v175; // [rsp+50h] [rbp-20h]
  __int128 v176; // [rsp+58h] [rbp-18h] BYREF

  v173 = a5;
  v174 = a6;
  v175 = a7;
  v9 = *(_DWORD *)a1;
  v171 = 0LL;
  if ( (v9 & 1) != 0 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = 4;
    v12 = *(unsigned __int8 *)(v10 + 55);
    v176 = 0uLL;
    v176 = *(_OWORD *)(v10 + 112);
    v13 = (v12 >> 5) & 1;
    if ( v13 && (unsigned int)IsTrayWindow(v10) )
      xxxSendMinRectMessages(*((__int64 **)a1 + 2), (int *)&v176, v14, v15);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x28uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) != 0 )
        goto LABEL_7;
    }
    else if ( !IsDPIDWMSysMet(v17)
           || (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
             ? (v41 = 0)
             : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v38,
                                                            v39,
                                                            v40)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v41) )
    {
LABEL_7:
      if ( IsDPIDWMSysMet(0x28uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v27,
                                                         v28,
                                                         v29)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v30) )
      {
        v42 = (_DWORD *)(gpsi + 2816LL);
      }
      else
      {
        v42 = (_DWORD *)(gpsi + 2040LL);
      }
LABEL_22:
      v43 = v176;
      if ( *v42 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 40LL) & 0x20) != 0 )
      {
        *(_DWORD *)a1 |= 0x10u;
        if ( v13 )
        {
          left = DWORD2(v176) - a3;
          goto LABEL_31;
        }
        v45 = *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20) - a3;
      }
      else
      {
        if ( v13 )
        {
          left = v176;
LABEL_31:
          if ( !v13 )
          {
            v46 = *((_DWORD *)a2 + 18) + v43;
            v47 = *((_DWORD *)a2 + 19) + DWORD1(v176);
            v48 = v46 + *((_DWORD *)a2 + 20);
            *(_QWORD *)&v176 = __PAIR64__(v47, v46);
            DWORD2(v176) = v48;
            HIDWORD(v176) = v47 + *((_DWORD *)a2 + 21);
          }
          v172 = (struct tagRECT *)MonitorFromRect((int *)&v176, 1u);
          MNGetPopupBoundsRect(a1, v172, &v171, 0);
          if ( v13 )
          {
            top = DWORD1(v176) - a4;
            if ( DWORD1(v176) - a4 < v171.top )
              top = HIDWORD(v176);
          }
          else
          {
            top = HIDWORD(v176);
          }
          v50 = *((_QWORD *)a1 + 2);
          if ( left >= v171.right - a3 )
            left = v171.right - a3;
          if ( (*(_BYTE *)(v50 + 50) & 0x40) != 0 )
          {
            left = *(_DWORD *)(v50 + 112) + *(_DWORD *)(v50 + 120) - left - a3;
            if ( left >= v171.right - a3 )
              left = v171.right - a3;
          }
          goto LABEL_90;
        }
        v45 = *((_DWORD *)a2 + 18);
      }
      left = v43 + v45;
      goto LABEL_31;
    }
    v42 = (_DWORD *)(gpsi + 2428LL);
    goto LABEL_22;
  }
  v51 = *((_QWORD *)a1 + 2);
  v11 = 1;
  v52 = *((_QWORD *)a1 + 5);
  left = *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20) + *(_DWORD *)(v51 + 112);
  top = *((_DWORD *)a2 + 19) + *(_DWORD *)(v51 + 116);
  if ( (*(_DWORD *)(v52 + 128) & 3) != 0 )
  {
    v53 = *(unsigned int *)(v52 + 120);
    if ( (_DWORD)v53 == -1 || (unsigned int)v53 >= *(_DWORD *)(v52 + 52) )
      v54 = 0LL;
    else
      v54 = *(_QWORD *)(v52 + 80) + 152 * v53;
    top += *(_DWORD *)(GetDPIMetrics(v52, a2) + 68) - *(_DWORD *)(v54 + 76);
  }
  v172 = (struct tagRECT *)MonitorFromWindow(*((_QWORD *)a1 + 2), 1u);
  MNGetPopupBoundsRect(a1, v172, &v171, 0);
  v55 = *((_QWORD *)a1 + 2);
  if ( ((*(unsigned __int8 *)a1 >> 4) & 1) == ((*(unsigned __int8 *)(v55 + 50) >> 6) & 1) )
  {
    v83 = a3;
    goto LABEL_69;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0 )
      goto LABEL_51;
LABEL_61:
    v82 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_66;
  }
  if ( IsDPIDWMSysMet(v57)
    && (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73, v74) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_61;
  }
LABEL_51:
  if ( IsDPIDWMSysMet(7uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v61, v60, v62, v63) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 408)
      ? (v70 = 0)
      : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v70) )
  {
    v82 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v82 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_66:
  v55 = *((_QWORD *)a1 + 2);
  v83 = a3;
  if ( *v82 + *(_DWORD *)(v55 + 112) - a3 >= v171.left )
  {
    left = *v82 + *(_DWORD *)(v55 + 112) - a3;
    v11 = 2;
  }
LABEL_69:
  if ( left + v83 <= v171.right )
    goto LABEL_88;
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v85, v84, v86, v87) & 0xF) != 0 )
      goto LABEL_72;
  }
  else if ( !IsDPIDWMSysMet(v85)
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
LABEL_72:
    if ( IsDPIDWMSysMet(7uLL)
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
      v110 = (_DWORD *)(gpsi + 2684LL);
    }
    else
    {
      v110 = (_DWORD *)(gpsi + 1908LL);
    }
    goto LABEL_87;
  }
  v110 = (_DWORD *)(gpsi + 2296LL);
LABEL_87:
  v55 = *((_QWORD *)a1 + 2);
  v11 = 2;
  left = *v110 + *(_DWORD *)(v55 + 112) - a3;
LABEL_88:
  if ( (*(_BYTE *)(v55 + 50) & 0x40) != 0 )
    v11 ^= 3u;
LABEL_90:
  if ( top + a4 <= v171.bottom )
    goto LABEL_134;
  v111 = top - a4;
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v140, v139, v141, v142) & 0xF) != 0 )
        goto LABEL_113;
    }
    else if ( !IsDPIDWMSysMet(v140)
           || (W32GetCurrentThreadDpiAwarenessContext(v155, v154, v156, v157) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v158, v159, v160) + 408)
             ? (v164 = 0)
             : (v164 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v161,
                                                             v162,
                                                             v163)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v164) )
    {
LABEL_113:
      if ( IsDPIDWMSysMet(8uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v144, v143, v145, v146) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v147, v148, v149) + 408)
          ? (v153 = 0)
          : (v153 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v150,
                                                          v151,
                                                          v152)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v153) )
      {
        v165 = (_DWORD *)(gpsi + 2688LL);
      }
      else
      {
        v165 = (_DWORD *)(gpsi + 1912LL);
      }
      goto LABEL_128;
    }
    v165 = (_DWORD *)(gpsi + 2300LL);
LABEL_128:
    top = *((_DWORD *)a2 + 21) + 2 * *v165 + v111;
    goto LABEL_129;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x37uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v113, v112, v114, v115) & 0xF) != 0 )
      goto LABEL_94;
  }
  else if ( !IsDPIDWMSysMet(v113)
         || (W32GetCurrentThreadDpiAwarenessContext(v128, v127, v129, v130) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133) + 408)
           ? (v137 = 0)
           : (v137 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v134,
                                                           v135,
                                                           v136)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v137) )
  {
LABEL_94:
    if ( IsDPIDWMSysMet(0x37uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v117, v116, v118, v119) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 408)
        ? (v126 = 0)
        : (v126 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v123,
                                                        v124,
                                                        v125)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v126) )
    {
      v138 = (_DWORD *)(gpsi + 2876LL);
    }
    else
    {
      v138 = (_DWORD *)(gpsi + 2100LL);
    }
    goto LABEL_109;
  }
  v138 = (_DWORD *)(gpsi + 2488LL);
LABEL_109:
  top = v111 - *v138;
  if ( top < v171.top )
  {
    v166 = a4;
LABEL_133:
    top = v171.bottom - v166;
    goto LABEL_134;
  }
  v11 = 8;
LABEL_129:
  v166 = a4;
  if ( top < v171.top || top + a4 > v171.bottom )
    goto LABEL_133;
LABEL_134:
  if ( left <= v171.left )
    left = v171.left;
  v167 = v175;
  if ( top <= v171.top )
    top = v171.top;
  *v173 = left;
  *v174 = top;
  if ( v167 )
    *v167 = (struct tagMONITOR *)v172;
  return v11;
}
