/*
 * XREFs of xxxCalcCaptionButton @ 0x1C0236BA4
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C00C7B60 (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxMNCanClose @ 0x1C00CB3C0 (xxxMNCanClose.c)
 *     GetWindowBorders @ 0x1C00CBEDC (GetWindowBorders.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, __int16 *a3, _DWORD *a4, _WORD *a5, int a6)
{
  bool v7; // zf
  unsigned __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  _DWORD *v18; // rcx
  int v19; // edi
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  int *v27; // rcx
  int v28; // ebx
  int WindowBorders; // ebx
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _DWORD *v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 ThreadWin32Thread; // rax
  int v43; // ecx
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // ecx
  int v49; // ebx
  int v50; // r13d
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  int *v58; // rcx
  int v59; // edi
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  int *v67; // rcx
  unsigned __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int *v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v83; // ebx
  __int64 v84; // r12
  __int16 v85; // ax
  unsigned __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rax
  int v90; // ecx
  _DWORD *v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // ecx
  _WORD *v96; // rax
  __int16 *v97; // rcx
  int v98; // eax
  int v99; // ecx
  unsigned __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int v103; // ecx
  __int64 v104; // rcx
  __int64 v105; // rcx
  _DWORD *v107; // rcx
  int v108; // edi
  unsigned __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  int v112; // ecx
  __int64 v113; // rcx
  __int64 v114; // rcx
  int *v116; // rbx
  unsigned __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  int v120; // ecx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rax
  int v124; // ecx
  int *v125; // rdx
  int v126; // ecx
  int v127; // eax
  int v128; // edx
  int v129; // r8d
  int v132; // [rsp+68h] [rbp+10h]

  v7 = (*(_BYTE *)(a1 + 55) & 0x20) == 0;
  *a3 = 0;
  if ( !v7 )
  {
    v11 = 1;
    if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
      {
        goto LABEL_5;
      }
    }
    else if ( !IsDPIDWMSysMet(v10)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v17 = 0)
             : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v17) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(7uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v14 = 0)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v14) )
      {
        v18 = (_DWORD *)(gpsi + 2684LL);
      }
      else
      {
        v18 = (_DWORD *)(gpsi + 1908LL);
      }
LABEL_21:
      v19 = -*v18;
      if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
        {
          goto LABEL_24;
        }
      }
      else if ( !IsDPIDWMSysMet(v20)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v26 = 0)
               : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v26) )
      {
LABEL_24:
        if ( IsDPIDWMSysMet(8uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v23 = 0)
            : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v23) )
        {
          v27 = (int *)(gpsi + 2688LL);
        }
        else
        {
          v27 = (int *)(gpsi + 1912LL);
        }
        goto LABEL_40;
      }
      v27 = (int *)(gpsi + 2300LL);
LABEL_40:
      v28 = *v27;
      goto LABEL_78;
    }
    v18 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_21;
  }
  WindowBorders = GetWindowBorders(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48));
  v30 = IsDPIAbsoluteSysMet(5uLL);
  v11 = v31 - 4;
  if ( v30 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
    {
      goto LABEL_44;
    }
LABEL_55:
    v38 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_60;
  }
  if ( IsDPIDWMSysMet(v31)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL)
       : 0 )
    {
      goto LABEL_55;
    }
  }
LABEL_44:
  if ( IsDPIDWMSysMet(5uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v34 = 0)
      : (v34 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL)),
        v34) )
  {
    v38 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v38 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_60:
  v19 = -(WindowBorders * *v38);
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0 )
    {
LABEL_63:
      if ( !IsDPIDWMSysMet(6uLL) || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) == 0 )
        goto LABEL_76;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v43 = 0;
      if ( *(_QWORD *)(ThreadWin32Thread + 408) )
        v43 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL);
      if ( v43 )
        v44 = (_DWORD *)(gpsi + 2680LL);
      else
LABEL_76:
        v44 = (_DWORD *)(gpsi + 1904LL);
      goto LABEL_77;
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v39)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0 )
    {
      goto LABEL_63;
    }
    v47 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v48 = 0;
    if ( *(_QWORD *)(v47 + 408) )
      v48 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL);
    if ( !v48 )
      goto LABEL_63;
  }
  v44 = (_DWORD *)(gpsi + 2292LL);
LABEL_77:
  v28 = *v44 * WindowBorders;
LABEL_78:
  v49 = -v28;
  *a4 = *(_DWORD *)(a1 + 112) - v19;
  a4[2] = v19 + *(_DWORD *)(a1 + 120);
  a4[1] = *(_DWORD *)(a1 + 116) - v49;
  a4[3] = v49 + *(_DWORD *)(a1 + 124);
  v50 = -*(_DWORD *)(a1 + 112);
  v132 = -*(_DWORD *)(a1 + 116);
  if ( *(char *)(a1 + 48) < 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0 )
      {
        goto LABEL_82;
      }
    }
    else if ( !IsDPIDWMSysMet(v51)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v57 = 0)
             : (v57 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL)),
               !v57) )
    {
LABEL_82:
      if ( IsDPIDWMSysMet(0x34uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v54 = 0)
          : (v54 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL)),
            v54) )
      {
        v58 = (int *)(gpsi + 2864LL);
      }
      else
      {
        v58 = (int *)(gpsi + 2088LL);
      }
LABEL_98:
      v59 = *v58;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x35uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0 )
        {
          goto LABEL_101;
        }
      }
      else if ( !IsDPIDWMSysMet(v60)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v66 = 0)
               : (v66 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL)),
                 !v66) )
      {
LABEL_101:
        if ( IsDPIDWMSysMet(0x35uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v63 = 0)
            : (v63 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL)),
              v63) )
        {
          v67 = (int *)(gpsi + 2868LL);
        }
        else
        {
          v67 = (int *)(gpsi + 2092LL);
        }
        goto LABEL_155;
      }
      v67 = (int *)(gpsi + 2480LL);
      goto LABEL_155;
    }
    v58 = (int *)(gpsi + 2476LL);
    goto LABEL_98;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0 )
    {
      goto LABEL_120;
    }
LABEL_131:
    v75 = (int *)(gpsi + 2388LL);
    goto LABEL_136;
  }
  if ( IsDPIDWMSysMet(v68)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL)
       : 0 )
    {
      goto LABEL_131;
    }
  }
LABEL_120:
  if ( IsDPIDWMSysMet(0x1EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v71 = 0)
      : (v71 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL)),
        v71) )
  {
    v75 = (int *)(gpsi + 2776LL);
  }
  else
  {
    v75 = (int *)(gpsi + 2000LL);
  }
LABEL_136:
  v59 = *v75;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0 )
    {
      goto LABEL_139;
    }
LABEL_150:
    v67 = (int *)(gpsi + 2392LL);
    goto LABEL_155;
  }
  if ( IsDPIDWMSysMet(v76)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL)
       : 0 )
    {
      goto LABEL_150;
    }
  }
LABEL_139:
  if ( IsDPIDWMSysMet(0x1FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v79 = 0)
      : (v79 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL)),
        v79) )
  {
    v67 = (int *)(gpsi + 2780LL);
  }
  else
  {
    v67 = (int *)(gpsi + 2004LL);
  }
LABEL_155:
  v83 = *v67;
  if ( a2 != 5 )
  {
    if ( a2 != 2 )
    {
      v7 = a2 == 3;
      v84 = a1;
      if ( !v7 )
      {
        if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
        {
          a4[2] -= v59;
          *a5 = 11;
          v85 = -3712;
          goto LABEL_187;
        }
        goto LABEL_190;
      }
      if ( ((unsigned __int8)v11 & *(_BYTE *)(a1 + 54)) == 0 && !a6 )
        goto LABEL_190;
      a4[2] -= v59;
      v96 = a5;
      if ( ((unsigned __int8)v11 & *(_BYTE *)(a1 + 55)) == 0 )
      {
        *a5 = 14;
        v85 = -4048;
        goto LABEL_187;
      }
LABEL_180:
      *v96 = 8;
      *a3 = -3808;
      goto LABEL_192;
    }
    v84 = a1;
    if ( (*(_BYTE *)(a1 + 54) & 2) == 0 && !a6 )
      goto LABEL_190;
    a4[2] += -2 * v59;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x4000) != 0 )
      {
LABEL_165:
        if ( !IsDPIDWMSysMet(0x2DuLL) || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) == 0 )
          goto LABEL_178;
        v89 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v90 = 0;
        if ( *(_QWORD *)(v89 + 408) )
          v90 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL);
        if ( v90 )
          v91 = (_DWORD *)(gpsi + 2836LL);
        else
LABEL_178:
          v91 = (_DWORD *)(gpsi + 2060LL);
LABEL_179:
        v50 += *v91;
        v96 = a5;
        if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
        {
          *a5 = 4;
          v85 = -4064;
          goto LABEL_187;
        }
        goto LABEL_180;
      }
    }
    else
    {
      if ( !IsDPIDWMSysMet(v86)
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x4000) != 0 )
      {
        goto LABEL_165;
      }
      v94 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v95 = 0;
      if ( *(_QWORD *)(v94 + 408) )
        v95 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL);
      if ( !v95 )
        goto LABEL_165;
    }
    v91 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_179;
  }
  v84 = a1;
  if ( (unsigned int)xxxMNCanClose(a1) || a6 )
  {
    *a5 = *(char *)(a1 + 48) < 0 ? 0x29 : 0;
    v85 = -4000;
LABEL_187:
    v97 = a3;
    *a3 = v85;
    goto LABEL_191;
  }
LABEL_190:
  v97 = a3;
LABEL_191:
  if ( !*v97 )
  {
    LOWORD(v108) = v132;
    return (unsigned __int16)v50 | ((unsigned __int16)v108 << 16);
  }
LABEL_192:
  v98 = a4[2] - v59;
  v99 = v83 + a4[1];
  *a4 = v98;
  a4[3] = v99;
  LOWORD(v50) = v98 + v50;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x4000) != 0 )
    {
      goto LABEL_195;
    }
LABEL_206:
    v107 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_211;
  }
  if ( IsDPIDWMSysMet(v100)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v104) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL)
       : 0 )
    {
      goto LABEL_206;
    }
  }
LABEL_195:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v103 = 0)
      : (v103 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL)),
        v103) )
  {
    v107 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v107 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_211:
  v108 = *v107 + a4[1] + v132;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v109) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v110) + 776) & 0x4000) != 0 )
    {
      goto LABEL_214;
    }
LABEL_225:
    v116 = (int *)(gpsi + 2292LL);
    goto LABEL_230;
  }
  if ( IsDPIDWMSysMet(v109)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x4000) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL)
       : 0 )
    {
      goto LABEL_225;
    }
  }
LABEL_214:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v111) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v112 = 0)
      : (v112 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL)),
        v112) )
  {
    v116 = (int *)(gpsi + 2680LL);
  }
  else
  {
    v116 = (int *)(gpsi + 1904LL);
  }
LABEL_230:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x4000) != 0 )
    {
LABEL_233:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v120 = 0)
          : (v120 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL)),
            v120) )
      {
        v125 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v125 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_248;
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v117)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x4000) != 0 )
    {
      goto LABEL_233;
    }
    v123 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v124 = 0;
    if ( *(_QWORD *)(v123 + 408) )
      v124 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL);
    if ( !v124 )
      goto LABEL_233;
  }
  v125 = (int *)(gpsi + 2288LL);
LABEL_248:
  v126 = *v116;
  v127 = *v125;
  a4[2] += *v125;
  *a4 -= v127;
  a4[1] -= v126;
  a4[3] += v126;
  if ( (*(_BYTE *)(v84 + 50) & 0x40) != 0 )
  {
    v128 = *(_DWORD *)(v84 + 112) + *(_DWORD *)(v84 + 120) - *a4;
    v129 = a4[2] - *a4;
    a4[2] = v128;
    *a4 = v128 - v129;
  }
  return (unsigned __int16)v50 | ((unsigned __int16)v108 << 16);
}
