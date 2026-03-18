/*
 * XREFs of InternalGetRealClientRect @ 0x1C01052BC
 * Callers:
 *     ParkIcon @ 0x1C00B2AE0 (ParkIcon.c)
 *     SetTiledRect @ 0x1C0104F70 (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C014E1F0 (xxxArrangeIconicWindows.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 */

char __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  __int64 DispInfo; // rax
  char v7; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _OWORD *v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  _DWORD *v41; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  _DWORD *v69; // rcx
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx
  _DWORD *v96; // rcx
  __int64 v97; // rdx
  unsigned __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // ecx
  _DWORD *v123; // rcx
  __int64 v124; // rdx
  unsigned __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  int v138; // ecx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  int v149; // ecx
  _DWORD *v150; // rcx

  v5 = a4;
  LODWORD(DispInfo) = *(_WORD *)(a1 + 66) & 0x3FFF;
  v7 = a3;
  if ( (_DWORD)DispInfo != 669 )
  {
    LOBYTE(DispInfo) = GetRect(a1, a2, 17);
    if ( (v7 & 1) == 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(a1 + 40) & 4) == 0 )
    {
LABEL_21:
      if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
        goto LABEL_9;
      if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) != 0 )
          goto LABEL_46;
      }
      else if ( !IsDPIDWMSysMet(v44)
             || (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60, v61) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 408)
               ? (v68 = 0)
               : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v65,
                                                              v66,
                                                              v67)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v68) )
      {
LABEL_46:
        if ( IsDPIDWMSysMet(2uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
            ? (v57 = 0)
            : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v54,
                                                           v55,
                                                           v56)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v57) )
        {
          v69 = (_DWORD *)(gpsi + 2664LL);
        }
        else
        {
          v69 = (_DWORD *)(gpsi + 1888LL);
        }
        goto LABEL_61;
      }
      v69 = (_DWORD *)(gpsi + 2276LL);
LABEL_61:
      LODWORD(DispInfo) = *v69;
      *(_DWORD *)(a2 + 8) += *v69;
      goto LABEL_9;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0 )
        goto LABEL_28;
    }
    else if ( !IsDPIDWMSysMet(v16)
           || (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
             ? (v40 = 0)
             : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v37,
                                                            v38,
                                                            v39)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v40) )
    {
LABEL_28:
      if ( IsDPIDWMSysMet(3uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
          ? (v29 = 0)
          : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v26,
                                                         v27,
                                                         v28)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v29) )
      {
        v41 = (_DWORD *)(gpsi + 2668LL);
      }
      else
      {
        v41 = (_DWORD *)(gpsi + 1892LL);
      }
      goto LABEL_43;
    }
    v41 = (_DWORD *)(gpsi + 2280LL);
LABEL_43:
    LODWORD(DispInfo) = *v41;
    *(_DWORD *)(a2 + 12) += *v41;
    goto LABEL_21;
  }
  if ( !a4 )
  {
    DispInfo = GetDispInfo(a1);
    v5 = *(_QWORD *)(DispInfo + 88);
  }
  if ( a5 || (LOBYTE(DispInfo) = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF, (_BYTE)DispInfo == 2) )
  {
    if ( (v7 & 4) != 0 )
      v14 = (_OWORD *)(v5 + 28);
    else
      v14 = (_OWORD *)(v5 + 76);
  }
  else
  {
    LOBYTE(DispInfo) = W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF;
    if ( (_BYTE)DispInfo == 1 )
    {
      if ( (v7 & 4) != 0 )
        v14 = (_OWORD *)(v5 + 60);
      else
        v14 = (_OWORD *)(v5 + 108);
    }
    else if ( (v7 & 4) != 0 )
    {
      v14 = (_OWORD *)(v5 + 44);
    }
    else
    {
      v14 = (_OWORD *)(v5 + 92);
    }
  }
  *(_OWORD *)a2 = *v14;
LABEL_9:
  if ( (v7 & 2) != 0 )
  {
    LODWORD(DispInfo) = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2104LL) >= 0 )
    {
      if ( (int)DispInfo <= 1 )
      {
        LODWORD(DispInfo) = *(_DWORD *)(gpsi + 2072LL);
        *(_DWORD *)(a2 + 12) -= DispInfo;
        return DispInfo;
      }
      if ( (int)DispInfo > 3 )
      {
        if ( (_DWORD)DispInfo != 4 )
        {
          if ( (_DWORD)DispInfo == 5 )
            goto LABEL_67;
          if ( (_DWORD)DispInfo != 6 )
          {
            if ( (_DWORD)DispInfo != 7 )
              return DispInfo;
LABEL_67:
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v71, v70, v72, v73) & 0xF) != 0 )
                goto LABEL_69;
            }
            else if ( !IsDPIDWMSysMet(v71)
                   || (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87, v88) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
                     ? (v95 = 0)
                     : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v92,
                                                                    v93,
                                                                    v94)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v95) )
            {
LABEL_69:
              if ( IsDPIDWMSysMet(0x2FuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 408)
                  ? (v84 = 0)
                  : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v81,
                                                                 v82,
                                                                 v83)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v84) )
              {
                v96 = (_DWORD *)(gpsi + 2844LL);
              }
              else
              {
                v96 = (_DWORD *)(gpsi + 2068LL);
              }
              goto LABEL_84;
            }
            v96 = (_DWORD *)(gpsi + 2456LL);
LABEL_84:
            LODWORD(DispInfo) = *v96;
            *(_DWORD *)(a2 + 8) -= *v96;
            return DispInfo;
          }
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v98, v97, v99, v100) & 0xF) != 0 )
            goto LABEL_87;
        }
        else if ( !IsDPIDWMSysMet(v98)
               || (W32GetCurrentThreadDpiAwarenessContext(v113, v112, v114, v115) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v116, v117, v118) + 408)
                 ? (v122 = 0)
                 : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v119,
                                                                 v120,
                                                                 v121)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v122) )
        {
LABEL_87:
          if ( IsDPIDWMSysMet(0x2FuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v102, v101, v103, v104) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v105, v106, v107) + 408)
              ? (v111 = 0)
              : (v111 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v108,
                                                              v109,
                                                              v110)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v111) )
          {
            v123 = (_DWORD *)(gpsi + 2844LL);
          }
          else
          {
            v123 = (_DWORD *)(gpsi + 2068LL);
          }
          goto LABEL_102;
        }
        v123 = (_DWORD *)(gpsi + 2456LL);
LABEL_102:
        LODWORD(DispInfo) = *v123;
        *(_DWORD *)a2 += *v123;
        return DispInfo;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v125, v124, v126, v127) & 0xF) != 0 )
          goto LABEL_105;
      }
      else if ( !IsDPIDWMSysMet(v125)
             || (W32GetCurrentThreadDpiAwarenessContext(v140, v139, v141, v142) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v143, v144, v145) + 408)
               ? (v149 = 0)
               : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v146,
                                                               v147,
                                                               v148)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v149) )
      {
LABEL_105:
        if ( IsDPIDWMSysMet(0x30uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v129, v128, v130, v131) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v132, v133, v134) + 408)
            ? (v138 = 0)
            : (v138 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v135,
                                                            v136,
                                                            v137)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v138) )
        {
          v150 = (_DWORD *)(gpsi + 2848LL);
        }
        else
        {
          v150 = (_DWORD *)(gpsi + 2072LL);
        }
        goto LABEL_120;
      }
      v150 = (_DWORD *)(gpsi + 2460LL);
LABEL_120:
      LODWORD(DispInfo) = *v150;
      *(_DWORD *)(a2 + 4) += *v150;
    }
  }
  return DispInfo;
}
