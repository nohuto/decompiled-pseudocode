/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00B4828
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  unsigned int v4; // r14d
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ecx
  int *v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  int v51; // edi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // ecx
  __int64 v67; // rcx
  int *v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  int v74; // ecx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  int v82; // ecx
  _DWORD *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // ecx
  _DWORD *v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdx
  int v106; // ecx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  int v115; // ecx
  int *v116; // rcx
  __int64 v117; // rdx
  int v118; // eax
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
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  int v140; // ecx
  _DWORD *v141; // rcx
  int v142; // edx
  int v143; // [rsp+38h] [rbp-29h] BYREF
  int v144; // [rsp+3Ch] [rbp-25h]
  int v145; // [rsp+40h] [rbp-21h]
  int v146; // [rsp+44h] [rbp-1Dh]
  __int64 v147; // [rsp+48h] [rbp-19h]
  int v148; // [rsp+50h] [rbp-11h]
  int v149; // [rsp+54h] [rbp-Dh]
  int v150; // [rsp+58h] [rbp-9h]
  unsigned int v151; // [rsp+5Ch] [rbp-5h]
  __int64 v152; // [rsp+60h] [rbp-1h]
  int v153; // [rsp+68h] [rbp+7h]
  int v154; // [rsp+6Ch] [rbp+Bh]
  int v155; // [rsp+70h] [rbp+Fh]
  int v156; // [rsp+74h] [rbp+13h]
  __int64 v157; // [rsp+78h] [rbp+17h]

  v4 = *((_DWORD *)a2 + 1) & 0x80000000;
  if ( *((int *)a2 + 1) < 0 || (*((_DWORD *)a2 + 1) & 0x40000000) != 0 )
  {
    v5 = IsDPIAbsoluteSysMet(0x44uLL);
    v10 = v7 - 67;
    v11 = v5;
    if ( v5 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) != 0 )
        goto LABEL_5;
    }
    else if ( !IsDPIDWMSysMet(v7)
           || (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 408)
             ? (v24 = 0)
             : (v24 = v10 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v12,
                                                                  v13,
                                                                  v14)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL)),
               !v24) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x44uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v15, v12, v13, v14) & 0xF) == (_BYTE)v10
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
          ? (v16 = 0)
          : (v16 = v10 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v12,
                                                               v13,
                                                               v14)
                                                           + 408)
                                               + 8LL)
                                   + 244LL)),
            v16) )
      {
        v25 = (_DWORD *)(gpsi + 2928LL);
      }
      else
      {
        v25 = (_DWORD *)(gpsi + 2152LL);
      }
LABEL_20:
      v143 = *v25 + *((_DWORD *)a2 + 18);
      if ( v11 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v25, v12, v13, v14) & 0xF) != 0 )
          goto LABEL_22;
      }
      else if ( !IsDPIDWMSysMet(0x44uLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 408)
               ? (v47 = 0)
               : (v47 = v10 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v44,
                                                                    v45,
                                                                    v46)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL)),
                 !v47) )
      {
LABEL_22:
        if ( IsDPIDWMSysMet(0x44uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == (_BYTE)v10
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 408)
            ? (v36 = 0)
            : (v36 = v10 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v33,
                                                                 v34,
                                                                 v35)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL)),
              v36) )
        {
          v48 = (int *)(gpsi + 2928LL);
        }
        else
        {
          v48 = (int *)(gpsi + 2152LL);
        }
LABEL_37:
        v145 = *v48;
        v51 = IsDPIAbsoluteSysMet(0x45uLL);
        if ( v51 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v52, v53) & 0xF) != 0 )
            goto LABEL_39;
        }
        else if ( !IsDPIDWMSysMet(v50)
               || (W32GetCurrentThreadDpiAwarenessContext(v60, v59, v61, v62) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 408)
                 ? (v66 = 0)
                 : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v54,
                                                                v55,
                                                                v56)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v66) )
        {
LABEL_39:
          if ( IsDPIDWMSysMet(0x45uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v57, v54, v55, v56) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 408)
              ? (v58 = 0)
              : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v54,
                                                             v55,
                                                             v56)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v58) )
          {
            v67 = gpsi;
            v68 = (int *)(gpsi + 2932LL);
          }
          else
          {
            v67 = gpsi;
            v68 = (int *)(gpsi + 2156LL);
          }
LABEL_54:
          v146 = *v68;
          if ( v4 )
            v69 = *((_DWORD *)a2 + 19);
          else
            v69 = *((_DWORD *)a2 + 19) + *((_DWORD *)a2 + 21) - v146;
          v144 = v69;
          v147 = *(_QWORD *)(v67 + 5192);
          if ( v11 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v67, v54, v55, v56) & 0xF) != 0 )
              goto LABEL_59;
          }
          else if ( !IsDPIDWMSysMet(0x44uLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v76, v75, v77, v78) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 408)
                   ? (v82 = 0)
                   : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v70,
                                                                  v71,
                                                                  v72)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v82) )
          {
LABEL_59:
            if ( IsDPIDWMSysMet(0x44uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v73, v70, v71, v72) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 408)
                ? (v74 = 0)
                : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v70,
                                                               v71,
                                                               v72)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v74) )
            {
              v83 = (_DWORD *)(gpsi + 2928LL);
            }
            else
            {
              v83 = (_DWORD *)(gpsi + 2152LL);
            }
LABEL_74:
            v84 = (unsigned int)(*((_DWORD *)a2 + 18) + 2 * *v83);
            v148 = v84;
            if ( v11 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v84, v70, v71, v72) & 0xF) != 0 )
                goto LABEL_76;
            }
            else if ( !IsDPIDWMSysMet(0x44uLL)
                   || (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92, v93) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 408)
                     ? (v97 = 0)
                     : (v97 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v85,
                                                                    v86,
                                                                    v87)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v97) )
            {
LABEL_76:
              if ( IsDPIDWMSysMet(0x44uLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v88, v85, v86, v87) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 408)
                  ? (v89 = 0)
                  : (v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v85,
                                                                 v86,
                                                                 v87)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v89) )
              {
                v98 = (_DWORD *)(gpsi + 2928LL);
              }
              else
              {
                v98 = (_DWORD *)(gpsi + 2152LL);
              }
LABEL_91:
              v99 = (unsigned int)(4 * *v98);
              v150 = *((_DWORD *)a2 + 20) - v99;
              if ( v51 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v99, v85, v86, v87) & 0xF) != 0 )
                  goto LABEL_93;
              }
              else if ( !IsDPIDWMSysMet(0x45uLL)
                     || (W32GetCurrentThreadDpiAwarenessContext(v108, v107, v109, v110) & 0xF) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 408)
                       ? (v115 = 0)
                       : (v115 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                       (__int64)KeGetCurrentThread(),
                                                                       v114,
                                                                       v100,
                                                                       v101)
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                         !v115) )
              {
LABEL_93:
                if ( IsDPIDWMSysMet(0x45uLL)
                  && (W32GetCurrentThreadDpiAwarenessContext(v103, v102, v100, v101) & 0xF) == 1
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v100, v101) + 408)
                    ? (v106 = 0)
                    : (v106 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v105,
                                                                    v100,
                                                                    v101)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                      v106) )
                {
                  v116 = (int *)(gpsi + 2932LL);
                }
                else
                {
                  v116 = (int *)(gpsi + 2156LL);
                }
LABEL_108:
                v117 = (unsigned int)(*v116 >> 31);
                LODWORD(v117) = *v116 % 2;
                v151 = *v116 / 2;
                if ( v4 )
                  v118 = *((_DWORD *)a2 + 19);
                else
                  v118 = *((_DWORD *)a2 + 19) + *((_DWORD *)a2 + 21) - v151;
                v149 = v118;
                v152 = v147;
                if ( v11 )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v151, v117, v100, v101) & 0xF) != 0 )
                    goto LABEL_113;
                }
                else if ( !IsDPIDWMSysMet(0x44uLL)
                       || (W32GetCurrentThreadDpiAwarenessContext(v131, v130, v132, v133) & 0xF) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 408)
                         ? (v140 = 0)
                         : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v137,
                                                                         v138,
                                                                         v139)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1),
                           !v140) )
                {
LABEL_113:
                  if ( IsDPIDWMSysMet(0x44uLL)
                    && (W32GetCurrentThreadDpiAwarenessContext(v120, v119, v121, v122) & 0xF) == 1
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 408)
                      ? (v129 = 0)
                      : (v129 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                      (__int64)KeGetCurrentThread(),
                                                                      v126,
                                                                      v127,
                                                                      v128)
                                                                  + 408)
                                                      + 8LL)
                                          + 244LL) & 1),
                        v129) )
                  {
                    v141 = (_DWORD *)(gpsi + 2928LL);
                  }
                  else
                  {
                    v141 = (_DWORD *)(gpsi + 2152LL);
                  }
                  goto LABEL_128;
                }
                v141 = (_DWORD *)(gpsi + 2540LL);
LABEL_128:
                v142 = *((_DWORD *)a2 + 18) + *((_DWORD *)a2 + 20) - 2 * *v141;
                v155 = v145;
                v156 = v146;
                v154 = v144;
                v153 = v142;
                v157 = v147;
                GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)&v143, 3);
                return;
              }
              v116 = (int *)(gpsi + 2544LL);
              goto LABEL_108;
            }
            v98 = (_DWORD *)(gpsi + 2540LL);
            goto LABEL_91;
          }
          v83 = (_DWORD *)(gpsi + 2540LL);
          goto LABEL_74;
        }
        v67 = gpsi;
        v68 = (int *)(gpsi + 2544LL);
        goto LABEL_54;
      }
      v48 = (int *)(gpsi + 2540LL);
      goto LABEL_37;
    }
    v25 = (_DWORD *)(gpsi + 2540LL);
    goto LABEL_20;
  }
}
