/*
 * XREFs of ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C
 * Callers:
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00B6970 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     GetDPIServerInfoForDpi @ 0x1C00B76E8 (GetDPIServerInfoForDpi.c)
 *     xxxPSMGetTextExtent @ 0x1C00B92A4 (xxxPSMGetTextExtent.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     FindCharPosition @ 0x1C0245FB8 (FindCharPosition.c)
 *     GreGetTextCharacterExtra @ 0x1C029121C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0291258 (GreSetTextCharacterExtra.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU *a1,
        struct tagWND *a2,
        unsigned int a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        struct tagPOINT *a7)
{
  struct tagMENU *v8; // r14
  HDC v9; // rbx
  unsigned int v12; // r12d
  LONG v13; // r15d
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v15; // r11
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct HLFONT__ *v21; // r9
  unsigned int v22; // r10d
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r11
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  __int64 v30; // r11
  __int64 v31; // rbx
  bool v32; // zf
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  _DWORD *v47; // rcx
  int v48; // eax
  int v49; // eax
  __int64 v50; // r11
  __int64 v51; // rbx
  int v52; // eax
  int v53; // eax
  __int64 v54; // r11
  __int64 v55; // rbx
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r14d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // ecx
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
  _DWORD *v83; // rsi
  __int64 DPIMETRICSForDpi; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // ecx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // ecx
  _DWORD *v111; // rsi
  __int64 v112; // rbx
  __int64 v113; // rdx
  unsigned __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  int v118; // ecx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // ecx
  __int64 v134; // rax
  __int64 v135; // rdx
  unsigned __int64 v136; // rcx
  int v137; // edi
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // r8
  __int64 v150; // r9
  _DWORD *v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  int v162; // ecx
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  int v173; // ecx
  _DWORD *v174; // rcx
  __int64 v176; // [rsp+38h] [rbp-60h]
  unsigned __int16 v177[2]; // [rsp+40h] [rbp-58h] BYREF
  int v178; // [rsp+44h] [rbp-54h]
  int v179; // [rsp+48h] [rbp-50h]
  unsigned int v182; // [rsp+C8h] [rbp+30h]

  v8 = a1;
  v9 = a4;
  v12 = 0;
  v13 = 0;
  if ( !a6 )
  {
    if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v13 = *(_DWORD *)(gpsi + 2100LL);
    }
    else if ( a3 == 96 )
    {
      v13 = *(_DWORD *)(gpsi + 2488LL);
    }
    else
    {
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a3);
      if ( DpiDepSysMetCachePlateauSlot == -1 )
      {
        v13 = ScaleSystemMetricForDPIWithoutCache(55LL, a3);
      }
      else
      {
        v16 = 112LL * DpiDepSysMetCachePlateauSlot;
        v13 = *(_DWORD *)(v16 + v15 + 3140);
        if ( v13 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(a3);
          v13 = *(_DWORD *)(v16 + gpsi + 3140);
          if ( v13 == -1 )
            v13 = 0;
        }
        v9 = a4;
      }
    }
  }
  v176 = 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi() + 16) )
    {
      v176 = GreSelectFontInternal(v9);
    }
    else
    {
      GreGetTextCharacterExtra(v9);
      GetDPIMETRICSForDpi();
      GetDPIServerInfoForDpi(a3);
      v9 = a4;
      GreSetTextCharacterExtra(a4);
    }
  }
  v17 = MNIsOwnerDrawItem(v8, a5);
  v21 = (struct HLFONT__ *)*((_QWORD *)a5 + 13);
  v22 = v17;
  v182 = v17;
  if ( v21 )
  {
    v23 = MNIsUAHMenu((__int64)v8);
    if ( !v23 || (v19 = (unsigned int)v21, !(_DWORD)v21) || (_DWORD)v21 == 4 || (unsigned int)v21 >= 0xC )
    {
      if ( v21 == (struct HLFONT__ *)-1LL )
        goto LABEL_22;
      if ( *((_DWORD *)a5 + 28) != -1 )
      {
LABEL_94:
        v12 = *((_DWORD *)a5 + 28);
        v19 = v12;
        if ( *((_DWORD *)v8 + 16) > v12 )
          v19 = *((unsigned int *)v8 + 16);
        *((_DWORD *)v8 + 16) = v19;
        if ( a6 )
        {
          v13 = *((_DWORD *)a5 + 29);
        }
        else if ( *((_DWORD *)a5 + 29) > v13 )
        {
          v13 = *((_DWORD *)a5 + 29);
        }
        goto LABEL_107;
      }
      if ( (*((_DWORD *)a5 + 1) & 0x20000000) == 0 )
      {
        if ( v23 )
        {
LABEL_22:
          xxxMNGetBitmapSize(v8, a5, a2, a3, v9);
          if ( (unsigned int)MNGetpItemIndex((__int64)v8, (__int64)a5) == -1 )
            goto LABEL_218;
          goto LABEL_93;
        }
        if ( (unsigned int)GreExtGetObjectW(v21, 32, v177) )
        {
          *((_DWORD *)a5 + 28) = v178;
          *((_DWORD *)a5 + 29) = v179;
          goto LABEL_70;
        }
        if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
        {
          v48 = *(_DWORD *)(gpsi + 2096LL);
        }
        else if ( a3 == 96 )
        {
          v48 = *(_DWORD *)(gpsi + 2484LL);
        }
        else
        {
          v49 = GetDpiDepSysMetCachePlateauSlot(a3);
          if ( v49 == -1 )
          {
            v48 = ScaleSystemMetricForDPIWithoutCache(54LL, a3);
          }
          else
          {
            v51 = 112 * (v49 + 28LL);
            v48 = *(_DWORD *)(v51 + v50);
            if ( v48 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(a3);
              v48 = *(_DWORD *)(v51 + gpsi);
              if ( v48 == -1 )
                v48 = 0;
            }
          }
        }
        *((_DWORD *)a5 + 28) = v48;
        if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
        {
          v52 = *(_DWORD *)(gpsi + 2100LL);
        }
        else if ( a3 == 96 )
        {
          v52 = *(_DWORD *)(gpsi + 2488LL);
        }
        else
        {
          v53 = GetDpiDepSysMetCachePlateauSlot(a3);
          if ( v53 == -1 )
          {
            v52 = ScaleSystemMetricForDPIWithoutCache(55LL, a3);
          }
          else
          {
            v55 = 112LL * v53;
            v52 = *(_DWORD *)(v55 + v54 + 3140);
            if ( v52 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(a3);
              v52 = *(_DWORD *)(v55 + gpsi + 3140);
              if ( v52 == -1 )
                v52 = 0;
            }
          }
        }
        *((_DWORD *)a5 + 29) = v52;
LABEL_66:
        v9 = a4;
LABEL_70:
        v22 = v182;
        goto LABEL_94;
      }
      if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v24 = *(_DWORD *)(gpsi + 2096LL);
      }
      else if ( a3 == 96 )
      {
        v24 = *(_DWORD *)(gpsi + 2484LL);
      }
      else
      {
        v25 = GetDpiDepSysMetCachePlateauSlot(a3);
        if ( v25 == -1 )
        {
          v24 = ScaleSystemMetricForDPIWithoutCache(54LL, a3);
        }
        else
        {
          v27 = 112 * (v25 + 28LL);
          v24 = *(_DWORD *)(v27 + v26);
          if ( v24 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(a3);
            v24 = *(_DWORD *)(v27 + gpsi);
            if ( v24 == -1 )
              v24 = 0;
          }
        }
      }
      *((_DWORD *)a5 + 28) = v24;
      if ( a3 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v28 = *(_DWORD *)(gpsi + 2100LL);
      }
      else if ( a3 == 96 )
      {
        v28 = *(_DWORD *)(gpsi + 2488LL);
      }
      else
      {
        v29 = GetDpiDepSysMetCachePlateauSlot(a3);
        if ( v29 == -1 )
        {
          v28 = ScaleSystemMetricForDPIWithoutCache(55LL, a3);
        }
        else
        {
          v31 = 112LL * v29;
          v28 = *(_DWORD *)(v31 + v30 + 3140);
          if ( v28 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(a3);
            v28 = *(_DWORD *)(v31 + gpsi + 3140);
            if ( v28 == -1 )
              v28 = 0;
          }
        }
      }
      v32 = *((_QWORD *)a5 + 13) == 1LL;
      *((_DWORD *)a5 + 29) = v28;
      if ( !v32 )
      {
        v9 = a4;
LABEL_93:
        v22 = v182;
        goto LABEL_94;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0 )
          goto LABEL_50;
      }
      else if ( !IsDPIDWMSysMet(v34)
             || (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
               ? (v46 = 0)
               : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v18,
                                                              v20,
                                                              (__int64)v21)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v46) )
      {
LABEL_50:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v37, v18, v20, (__int64)v21) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v20, (__int64)v21) + 408)
            ? (v38 = 0)
            : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v18,
                                                           v20,
                                                           (__int64)v21)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v38) )
        {
          v47 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v47 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_65;
      }
      v47 = (_DWORD *)(gpsi + 2448LL);
LABEL_65:
      *((_DWORD *)a5 + 28) += *v47;
      goto LABEL_66;
    }
  }
  if ( !v22 )
    goto LABEL_108;
  xxxMNGetBitmapSize(v8, a5, a2, a3, v9);
  if ( (unsigned int)MNGetpItemIndex((__int64)v8, (__int64)a5) == -1 )
    goto LABEL_218;
  v12 = *((_DWORD *)a5 + 28);
  if ( a6 )
  {
    v13 = *((_DWORD *)a5 + 29);
    v19 = *(unsigned int *)(GetDPIMETRICSForDpi() + 48);
    v12 += 2 * v19;
  }
  else if ( (unsigned int)MNIsUAHMenu((__int64)v8) )
  {
    v13 = *((_DWORD *)a5 + 29);
  }
  v22 = v182;
LABEL_107:
  if ( v22 )
    goto LABEL_213;
LABEL_108:
  if ( !*((_QWORD *)a5 + 5) )
    goto LABEL_167;
  if ( a6 )
  {
    v60 = IsDPIAbsoluteSysMet(0x2EuLL);
    if ( v60 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0 )
        goto LABEL_112;
    }
    else if ( !IsDPIDWMSysMet(v57)
           || (W32GetCurrentThreadDpiAwarenessContext(v73, v72, v74, v75) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 408)
             ? (v82 = 0)
             : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v79,
                                                            v80,
                                                            v81)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v82) )
    {
LABEL_112:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v62, v61, v63, v64) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 408)
          ? (v71 = 0)
          : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v68,
                                                         v69,
                                                         v70)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v71) )
      {
        v83 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v83 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_127:
      DPIMETRICSForDpi = GetDPIMETRICSForDpi();
      v86 = (unsigned int)(*v83 + *(_DWORD *)(DPIMETRICSForDpi + 60) + *(_DWORD *)(GetDPIMETRICSForDpi() + 52));
      if ( v13 > (int)v86 )
      {
LABEL_146:
        v9 = a4;
        v8 = a1;
        goto LABEL_147;
      }
      if ( v60 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87, v88) & 0xF) != 0 )
          goto LABEL_130;
      }
      else if ( !IsDPIDWMSysMet(0x2EuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v102, v103) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
               ? (v110 = 0)
               : (v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v107,
                                                               v108,
                                                               v109)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v110) )
      {
LABEL_130:
        if ( IsDPIDWMSysMet(0x2EuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v90, v89, v91, v92) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 408)
            ? (v99 = 0)
            : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v96,
                                                           v97,
                                                           v98)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v99) )
        {
          v111 = (_DWORD *)(gpsi + 2840LL);
        }
        else
        {
          v111 = (_DWORD *)(gpsi + 2064LL);
        }
        goto LABEL_145;
      }
      v111 = (_DWORD *)(gpsi + 2452LL);
LABEL_145:
      v112 = GetDPIMETRICSForDpi();
      v13 = *(_DWORD *)(GetDPIMETRICSForDpi() + 52) + *(_DWORD *)(v112 + 60) + *v111;
      goto LABEL_146;
    }
    v83 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_127;
  }
LABEL_147:
  FindCharPosition(*((_QWORD *)a5 + 5), 9LL);
  xxxPSMGetTextExtent(v9, *((unsigned __int16 **)a5 + 5));
  if ( v12 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v114, v113, v115, v116) & 0xF) != 0 )
        goto LABEL_150;
    }
    else if ( !IsDPIDWMSysMet(v114)
           || (W32GetCurrentThreadDpiAwarenessContext(v120, v119, v121, v122) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 408)
             ? (v126 = 0)
             : (v126 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v18,
                                                             v20,
                                                             (__int64)v21)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v126) )
    {
LABEL_150:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v117, v18, v20, (__int64)v21) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v20, (__int64)v21) + 408)
          ? (v118 = 0)
          : (v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v18,
                                                          v20,
                                                          (__int64)v21)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v118) )
      {
        v19 = gpsi + 2836LL;
      }
      else
      {
        v19 = gpsi + 2060LL;
      }
      goto LABEL_165;
    }
    v19 = gpsi + 2448LL;
LABEL_165:
    v12 += *(_DWORD *)v19;
    goto LABEL_167;
  }
  v12 = 0;
LABEL_167:
  if ( a6 )
  {
    if ( (*((_DWORD *)v8 + 10) & 0x84000000) != 0x80000000 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, (__int64)v21) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v127, v128, v129) + 408)
          ? (v133 = 0)
          : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v130,
                                                          v131,
                                                          v132)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            !v133 || *(_WORD *)(gpsi + 8678LL) == 96) )
      {
        v134 = gpsi + 5652LL;
      }
      else
      {
        v134 = gpsi + 7140LL;
      }
      v12 += *(_DWORD *)(v134 + 1016);
    }
    v137 = IsDPIAbsoluteSysMet(0x2DuLL);
    if ( v137 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v136, v135, v138, v139) & 0xF) != 0 )
        goto LABEL_180;
    }
    else if ( !IsDPIDWMSysMet(v136)
           || (W32GetCurrentThreadDpiAwarenessContext(v145, v144, v146, v147) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v148, v149, v150) + 408)
             ? (v141 = 0LL)
             : (v141 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v140,
                                                             v142,
                                                             v143)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !(_DWORD)v141) )
    {
LABEL_180:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v141, v140, v142, v143) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v142, v143) + 408)
          ? (v141 = 0LL)
          : (v141 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v140,
                                                          v142,
                                                          v143)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            (_DWORD)v141) )
      {
        v151 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v151 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_195:
      if ( v137 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v141, v140, v142, v143) & 0xF) != 0 )
          goto LABEL_197;
      }
      else if ( !IsDPIDWMSysMet(0x2DuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v164, v163, v165, v166) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v167, v168, v169) + 408)
               ? (v173 = 0)
               : (v173 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v170,
                                                               v171,
                                                               v172)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v173) )
      {
LABEL_197:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v153, v152, v154, v155) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v156, v157, v158) + 408)
            ? (v162 = 0)
            : (v162 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v159,
                                                            v160,
                                                            v161)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v162) )
        {
          v174 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v174 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_212;
      }
      v174 = (_DWORD *)(gpsi + 2448LL);
LABEL_212:
      v12 += *v151 + *v174 + 2;
      v13 += 2;
      goto LABEL_213;
    }
    v151 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_195;
  }
LABEL_213:
  if ( (unsigned int)MNGetpItemIndex((__int64)v8, (__int64)a5) != -1 && (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( v176 )
      GreSelectFontInternal(a4);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_218:
  a7->x = v12;
  a7->y = v13;
  return v182;
}
