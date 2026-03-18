/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     FixHDCBITSBmp @ 0x1C011D850 (FixHDCBITSBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E4F0 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  unsigned int v6; // r13d
  struct tagCURSOR *v7; // r15
  struct tagRECT *v8; // rdi
  HDC v9; // rsi
  __int64 v10; // rdx
  __int64 i; // r8
  __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  _QWORD *v18; // rcx
  __int64 j; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int *v35; // rdi
  __int64 v36; // rsi
  struct tagOEMBITMAPINFO *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // xmm3_8
  __int128 v40; // xmm2
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  int *v45; // rbx
  LONG top; // ecx
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
  _DWORD *v73; // rbx
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // r14d
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
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // ecx
  _DWORD *v101; // rcx
  __int64 v102; // rdx
  unsigned __int64 v103; // rcx
  int v104; // ebx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rdx
  int v113; // ecx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  int v122; // ecx
  _DWORD *v123; // rcx
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  int *v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  int v148; // ecx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  int v159; // ecx
  int *v160; // rcx
  RECT v161; // [rsp+60h] [rbp-10h] BYREF

  v6 = a2->bottom - a2->top;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, i, v12) + 408)
      ? (v13 = 0)
      : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, i, v12)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !v13 || (v14 = gpsi, *(_WORD *)(gpsi + 8678LL) == 96)) )
  {
    v14 = gpsi;
    v15 = gpsi + 5652LL;
  }
  else
  {
    v15 = gpsi + 7140LL;
  }
  if ( v6 != *(_DWORD *)(v15 + 476) || a4 == *(HBRUSH *)(v14 + 5336) || *((_QWORD *)v7 + 16) )
  {
    top = v8->top;
    v161.left = v8->left;
    v161.right = v6 + v161.left;
    v161.top = top;
    v161.bottom = top + v6;
    FillRect(v9, &v161, a4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0 )
        goto LABEL_59;
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
LABEL_59:
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
        v73 = (_DWORD *)(gpsi + 2676LL);
      }
      else
      {
        v73 = (_DWORD *)(gpsi + 1900LL);
      }
LABEL_74:
      v78 = IsDPIAbsoluteSysMet(0x31uLL);
      if ( v78 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) != 0 )
          goto LABEL_76;
      }
      else if ( !IsDPIDWMSysMet(v75)
             || (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92, v93) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 408)
               ? (v100 = 0)
               : (v100 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v97,
                                                               v98,
                                                               v99)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v100) )
      {
LABEL_76:
        if ( IsDPIDWMSysMet(0x31uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81, v82) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 408)
            ? (v89 = 0)
            : (v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v86,
                                                           v87,
                                                           v88)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v89) )
        {
          v101 = (_DWORD *)(gpsi + 2852LL);
        }
        else
        {
          v101 = (_DWORD *)(gpsi + 2076LL);
        }
LABEL_91:
        v161.left += *v73 + (int)(v6 - *v101) / 2;
        v104 = IsDPIAbsoluteSysMet(0x32uLL);
        if ( v104 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v103, v102, v105, v106) & 0xF) != 0 )
            goto LABEL_93;
        }
        else if ( !IsDPIDWMSysMet(v103)
               || (W32GetCurrentThreadDpiAwarenessContext(v115, v114, v116, v117) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 408)
                 ? (v122 = 0)
                 : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v121,
                                                                 v107,
                                                                 v108)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v122) )
        {
LABEL_93:
          if ( IsDPIDWMSysMet(0x32uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v110, v109, v107, v108) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v107, v108) + 408)
              ? (v113 = 0)
              : (v113 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v112,
                                                              v107,
                                                              v108)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v113) )
          {
            v123 = (_DWORD *)(gpsi + 2856LL);
          }
          else
          {
            v123 = (_DWORD *)(gpsi + 2080LL);
          }
LABEL_108:
          v124 = v6 - *v123;
          v125 = (unsigned int)(v124 >> 31);
          v161.top += v124 / 2;
          if ( v104 )
          {
            LODWORD(v125) = v124 % 2;
            if ( (W32GetCurrentThreadDpiAwarenessContext(2LL, v125, v107, v108) & 0xF) != 0 )
              goto LABEL_110;
          }
          else if ( !IsDPIDWMSysMet(0x32uLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v131, v130, v132, v133) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 408)
                   ? (v127 = 0LL)
                   : (v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v126,
                                                                   v128,
                                                                   v129)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !(_DWORD)v127) )
          {
LABEL_110:
            if ( IsDPIDWMSysMet(0x32uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v127, v126, v128, v129) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v128, v129) + 408)
                ? (v127 = 0LL)
                : (v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v126,
                                                                v128,
                                                                v129)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  (_DWORD)v127) )
            {
              v137 = (int *)(gpsi + 2856LL);
            }
            else
            {
              v137 = (int *)(gpsi + 2080LL);
            }
LABEL_125:
            if ( v78 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v127, v126, v128, v129) & 0xF) != 0 )
                goto LABEL_127;
            }
            else if ( !IsDPIDWMSysMet(0x31uLL)
                   || (W32GetCurrentThreadDpiAwarenessContext(v150, v149, v151, v152) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v153, v154, v155) + 408)
                     ? (v159 = 0)
                     : (v159 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v156,
                                                                     v157,
                                                                     v158)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                       !v159) )
            {
LABEL_127:
              if ( IsDPIDWMSysMet(0x31uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v139, v138, v140, v141) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v142, v143, v144) + 408)
                  ? (v148 = 0)
                  : (v148 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v145,
                                                                  v146,
                                                                  v147)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v148) )
              {
                v160 = (int *)(gpsi + 2852LL);
              }
              else
              {
                v160 = (int *)(gpsi + 2076LL);
              }
              goto LABEL_142;
            }
            v160 = (int *)(gpsi + 2464LL);
LABEL_142:
            DrawIconEx(a1, v161.left, v161.top, (__int64)a3, *v160, *v137, 0, 0LL, 3);
            v8 = a2;
            goto LABEL_143;
          }
          v137 = (int *)(gpsi + 2468LL);
          goto LABEL_125;
        }
        v123 = (_DWORD *)(gpsi + 2468LL);
        goto LABEL_108;
      }
      v101 = (_DWORD *)(gpsi + 2464LL);
      goto LABEL_91;
    }
    v73 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_74;
  }
  v16 = gcachedCaptions[0];
  if ( (a5 & 0x10) == 0 )
  {
    v17 = 1;
    v10 = (__int64)&gcachedCaptions[3];
    for ( i = 1LL; i < 5; ++i )
    {
      if ( *(struct tagCURSOR **)v10 == v7 )
        break;
      ++v17;
      v10 += 24LL;
    }
    if ( v17 < 5 )
      goto LABEL_46;
LABEL_19:
    if ( (a5 & 0x10) != 0 )
    {
      v17 = 0;
    }
    else
    {
      v17 = 1;
      v18 = &gcachedCaptions[3];
      for ( j = 1LL; j < 4; ++j )
      {
        if ( !*v18 )
          break;
        ++v17;
        v18 += 3;
      }
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) != 0 )
        goto LABEL_26;
    }
    else if ( !IsDPIDWMSysMet(v21)
           || (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
             ? (v25 = 0LL)
             : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v24,
                                                            v26,
                                                            v27)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !(_DWORD)v25) )
    {
LABEL_26:
      if ( IsDPIDWMSysMet(0x31uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v27) + 408)
          ? (v25 = 0LL)
          : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v24,
                                                         v26,
                                                         v27)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            (_DWORD)v25) )
      {
        v35 = (unsigned int *)(gpsi + 2852LL);
        v7 = a3;
      }
      else
      {
        v35 = (unsigned int *)(gpsi + 2076LL);
      }
      goto LABEL_41;
    }
    v35 = (unsigned int *)(gpsi + 2464LL);
LABEL_41:
    if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0 || *(_WORD *)(gpsi + 8678LL) == 96 )
    {
      v36 = 3LL * v17;
      v37 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v36 + 1];
    }
    else
    {
      v36 = 3LL * v17;
      v37 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v36 + 2];
    }
    BltMe4Times(v37, v6, *v35, ghdcMem, v7, a5);
    HMAssignmentLock(v36 * 8 + gcachedCaptions[0], v7);
    v16 = gcachedCaptions[0];
    v8 = a2;
    v9 = a1;
    goto LABEL_46;
  }
  if ( (struct tagCURSOR *)gcachedCaptions[0] != v7 )
    goto LABEL_19;
  v17 = 0;
LABEL_46:
  if ( v17 > 1LL )
  {
    v10 = 24LL * v17;
    i = v17 - 1LL;
    v17 = 1;
    while ( 1 )
    {
      v38 = v10 + v16;
      v39 = *(_QWORD *)(v10 + v16 + 16);
      v10 -= 24LL;
      v40 = *(_OWORD *)v38;
      *(_OWORD *)v38 = *(_OWORD *)(v10 + v16);
      *(_QWORD *)(v38 + 16) = *(_QWORD *)(v10 + v16 + 16);
      *(_OWORD *)(v10 + gcachedCaptions[0]) = v40;
      *(_QWORD *)(v10 + gcachedCaptions[0] + 16) = v39;
      if ( !--i )
        break;
      v16 = gcachedCaptions[0];
    }
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v10, i, v12) & 0xF) != 0 || *(_WORD *)(gpsi + 8678LL) == 96 )
  {
    v44 = 3LL * v17;
    v45 = (int *)gcachedCaptions[3 * v17 + 1];
  }
  else
  {
    v44 = 3LL * v17;
    v45 = (int *)gcachedCaptions[3 * v17 + 2];
  }
  if ( (a5 & 1) == 0 )
    v45 += 4;
  FixHDCBITSBmp(v44, v41, v42, v43);
  NtGdiBitBltInternal(v9, v8->left, v8->top, v6, v6, *(HDC *)(gpDispInfo + 32LL), *v45, v45[1], 0xCC0020u, 0, 0);
LABEL_143:
  v8->left += v6;
}
