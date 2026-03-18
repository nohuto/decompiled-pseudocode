/*
 * XREFs of FindNCHit @ 0x1C00FAEF8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetWindowBorders @ 0x1C004F1E0 (GetWindowBorders.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     _HasCaptionIcon @ 0x1C00943D8 (_HasCaptionIcon.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     SizeBoxHwnd @ 0x1C0249384 (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  int v2; // r12d
  unsigned __int64 v4; // rbx
  __int128 v5; // xmm6
  int v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  _DWORD *v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  _DWORD *v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  _DWORD *v32; // rsi
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  _DWORD *v40; // rcx
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  _DWORD *v46; // r9
  __int64 v47; // rbx
  int v48; // edx
  int v49; // r15d
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  _DWORD *v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // ecx
  int *v65; // rcx
  int v66; // ecx
  int v67; // eax
  unsigned __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // ecx
  _DWORD *v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  _DWORD *v83; // rcx
  unsigned __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  _DWORD *v91; // rcx
  unsigned __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // ecx
  __int64 v96; // rcx
  __int64 v97; // rcx
  _DWORD *v99; // rsi
  unsigned __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int v103; // ecx
  __int64 v104; // rcx
  __int64 v105; // rcx
  _DWORD *v107; // rcx
  int v108; // edx
  int v109; // eax
  int v110; // edx
  int v111; // ecx
  int v112; // eax
  unsigned __int8 v113; // cl
  unsigned __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // ecx
  __int64 v118; // rcx
  __int64 v119; // rcx
  int v120; // ecx
  int *v121; // rbx
  unsigned __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rcx
  int v125; // ecx
  __int64 v126; // rcx
  __int64 v127; // rcx
  int v128; // ecx
  _DWORD *v129; // rdx
  unsigned __int64 v130; // rcx
  __int64 v131; // rcx
  __int64 v132; // rcx
  int v133; // ecx
  __int64 v134; // rcx
  __int64 v135; // rcx
  unsigned __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rcx
  int v140; // ecx
  __int64 v141; // rcx
  __int64 v142; // rcx
  int v144; // ecx
  int v145; // eax
  int v146; // ecx
  int v147; // eax
  unsigned __int64 v148; // rcx
  __int64 v149; // rcx
  __int64 v150; // rcx
  int v151; // ecx
  __int64 v152; // rcx
  __int64 v153; // rcx
  int v154; // ecx
  _DWORD *v155; // rcx
  unsigned __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rcx
  int v159; // ecx
  __int64 v160; // rcx
  __int64 v161; // rcx
  int v162; // ecx
  int *v163; // rcx
  unsigned __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  int v167; // ecx
  __int64 v168; // rcx
  __int64 v169; // rcx
  int v170; // ecx
  _DWORD *v171; // rcx
  unsigned __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  int v175; // ecx
  __int64 v176; // rcx
  __int64 v177; // rcx
  int v178; // ecx
  int v179; // edx
  char v180; // cl
  unsigned __int64 v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rcx
  int v184; // ecx
  __int64 v185; // rcx
  __int64 v186; // rcx
  int v187; // ecx
  int *v188; // rsi
  unsigned __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rcx
  int v192; // ecx
  __int64 v193; // rcx
  __int64 v194; // rcx
  int v195; // ecx
  _DWORD *v196; // rdx
  int v197; // ecx
  int v198; // eax
  int v199; // ecx
  char v200; // al
  __int64 v201; // rax
  int v202; // eax
  int v203; // [rsp+28h] [rbp-39h] BYREF
  int v204; // [rsp+2Ch] [rbp-35h]
  int v205; // [rsp+30h] [rbp-31h]
  int v206; // [rsp+34h] [rbp-2Dh]
  __int128 v207; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v208; // [rsp+48h] [rbp-19h]
  int v209; // [rsp+50h] [rbp-11h]
  __int128 v210; // [rsp+58h] [rbp-9h] BYREF
  _BYTE *v211; // [rsp+68h] [rbp+7h]
  int WindowBorders; // [rsp+70h] [rbp+Fh]
  _DWORD *v213; // [rsp+78h] [rbp+17h]

  v2 = (__int16)a2;
  HIDWORD(v208) = SHIWORD(a2);
  LODWORD(v208) = (__int16)a2;
  v4 = v208;
  v211 = (_BYTE *)a1;
  v209 = (__int16)a2;
  v213 = (_DWORD *)(a1 + 112);
  if ( !PtInRect((_DWORD *)(a1 + 112), v208) )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 55) & 0x20) != 0 )
  {
    v7 = IsDPIAbsoluteSysMet(8uLL);
    v9 = v8 - 7;
    if ( v7 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
      {
        goto LABEL_9;
      }
    }
    else if ( !IsDPIDWMSysMet(v8)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v15 = 0)
             : (v15 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL)),
               !v15) )
    {
LABEL_9:
      if ( IsDPIDWMSysMet(8uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v12 = 0)
          : (v12 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL)),
            v12) )
      {
        v16 = (_DWORD *)(gpsi + 2688LL);
      }
      else
      {
        v16 = (_DWORD *)(gpsi + 1912LL);
      }
LABEL_25:
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
        {
          goto LABEL_28;
        }
      }
      else if ( !IsDPIDWMSysMet(v17)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v23 = 0)
               : (v23 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL)),
                 !v23) )
      {
LABEL_28:
        if ( IsDPIDWMSysMet(6uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v20 = 0)
            : (v20 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL)),
              v20) )
        {
          v24 = (_DWORD *)(gpsi + 2680LL);
        }
        else
        {
          v24 = (_DWORD *)(gpsi + 1904LL);
        }
LABEL_44:
        if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
          {
            goto LABEL_47;
          }
        }
        else if ( !IsDPIDWMSysMet(v25)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v31 = 0)
                 : (v31 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL)),
                   !v31) )
        {
LABEL_47:
          if ( IsDPIDWMSysMet(7uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v28 = 0)
              : (v28 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL)),
                v28) )
          {
            v32 = (_DWORD *)(gpsi + 2684LL);
          }
          else
          {
            v32 = (_DWORD *)(gpsi + 1908LL);
          }
LABEL_63:
          if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
            {
              goto LABEL_66;
            }
          }
          else if ( !IsDPIDWMSysMet(v33)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v39 = 0)
                   : (v39 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL)),
                     !v39) )
          {
LABEL_66:
            if ( IsDPIDWMSysMet(5uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v36 = 0)
                : (v36 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL)),
                  v36) )
            {
              v40 = (_DWORD *)(gpsi + 2676LL);
            }
            else
            {
              v40 = (_DWORD *)(gpsi + 1900LL);
            }
            goto LABEL_82;
          }
          v40 = (_DWORD *)(gpsi + 2288LL);
LABEL_82:
          v41 = -(*v32 + *v40);
          v42 = -(*v16 + *v24);
          v43 = *v213 - v41;
          v205 = v213[2] + v41;
          v44 = v42 + v213[3];
          v203 = v43;
          v45 = v213[1] - v42;
          v206 = v44;
          v204 = v45;
          if ( !PtInRect(&v203, v208) )
            return 2LL;
          v47 = (__int64)v211;
          v48 = HIDWORD(v208);
LABEL_84:
          if ( (*(_BYTE *)(v47 + 50) & 0x40) != 0 )
            v49 = *v46 + *(_DWORD *)(v47 + 120) - v209;
          else
            v49 = v209;
          if ( v48 < v204 )
            return 2LL;
          if ( *(char *)(v47 + 48) < 0 )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v148) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x4000) != 0 )
              {
                goto LABEL_329;
              }
            }
            else if ( !IsDPIDWMSysMet(v148)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v152) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v153) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v154 = 0)
                     : (v154 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 416)
                                                          + 8LL)
                                              + 260LL)),
                       !v154) )
            {
LABEL_329:
              if ( IsDPIDWMSysMet(0x33uLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v150) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v151 = 0)
                  : (v151 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL)),
                    v151) )
              {
                v155 = (_DWORD *)(gpsi + 2860LL);
              }
              else
              {
                v155 = (_DWORD *)(gpsi + 2084LL);
              }
LABEL_345:
              v204 += *v155;
              if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x2000) != 0
                  || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x4000) != 0 )
                {
                  goto LABEL_348;
                }
              }
              else if ( !IsDPIDWMSysMet(v156)
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v160) + 776) & 0x2000) != 0
                     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v161) + 776) & 0x4000) != 0
                     || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                       ? (v162 = 0)
                       : (v162 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 416)
                                                            + 8LL)
                                                + 260LL)),
                         !v162) )
              {
LABEL_348:
                if ( IsDPIDWMSysMet(0x34uLL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v159 = 0)
                    : (v159 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                     + 416)
                                                         + 8LL)
                                             + 260LL)),
                      v159) )
                {
                  v163 = (int *)(gpsi + 2864LL);
                }
                else
                {
                  v163 = (int *)(gpsi + 2088LL);
                }
                goto LABEL_402;
              }
              v163 = (int *)(gpsi + 2476LL);
              goto LABEL_402;
            }
            v155 = (_DWORD *)(gpsi + 2472LL);
            goto LABEL_345;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x4000) != 0 )
            {
              goto LABEL_367;
            }
          }
          else if ( !IsDPIDWMSysMet(v164)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v168) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v169) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v170 = 0)
                   : (v170 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 416)
                                                        + 8LL)
                                            + 260LL)),
                     !v170) )
          {
LABEL_367:
            if ( IsDPIDWMSysMet(4uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v166) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v167 = 0)
                : (v167 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL)),
                  v167) )
            {
              v171 = (_DWORD *)(gpsi + 2672LL);
            }
            else
            {
              v171 = (_DWORD *)(gpsi + 1896LL);
            }
LABEL_383:
            v204 += *v171;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v172) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v173) + 776) & 0x4000) != 0 )
              {
                goto LABEL_386;
              }
            }
            else if ( !IsDPIDWMSysMet(v172)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v176) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v177) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v178 = 0)
                     : (v178 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                      + 416)
                                                          + 8LL)
                                              + 260LL)),
                       !v178) )
            {
LABEL_386:
              if ( IsDPIDWMSysMet(0x1EuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v174) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v175 = 0)
                  : (v175 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL)),
                    v175) )
              {
                v163 = (int *)(gpsi + 2776LL);
              }
              else
              {
                v163 = (int *)(gpsi + 2000LL);
              }
LABEL_402:
              v179 = *v163;
              if ( SHIDWORD(v208) >= v204 && ((unsigned __int8)v9 & *(_BYTE *)(v47 + 40)) != 0 )
                return 5LL;
              if ( v49 >= v203 && v49 < v205 && SHIDWORD(v208) < v204 )
              {
                v180 = *(_BYTE *)(v47 + 54);
                if ( (v180 & 8) != 0 )
                {
                  if ( v49 < v179 + v203 )
                    return (unsigned int)((unsigned int)HasCaptionIcon(v47) != 0) + 2;
                }
                else if ( (*(_BYTE *)(v47 + 45) & 2) != 0 )
                {
                  return 2LL;
                }
                v205 -= v179;
                if ( v49 >= v205 )
                  return 20LL;
                if ( *(char *)(v47 + 48) >= 0 )
                {
                  if ( (v180 & 3) != 0 )
                  {
                    v205 -= v179;
                    if ( v49 >= v205 )
                      return 9LL;
                    if ( v49 >= v205 - v179 )
                      return 8LL;
                  }
                  else if ( (*(_BYTE *)(v47 + 49) & 4) != 0 && v49 >= v205 - v179 )
                  {
                    return 21LL;
                  }
                }
              }
              return 2LL;
            }
            v163 = (int *)(gpsi + 2388LL);
            goto LABEL_402;
          }
          v171 = (_DWORD *)(gpsi + 2284LL);
          goto LABEL_383;
        }
        v32 = (_DWORD *)(gpsi + 2296LL);
        goto LABEL_63;
      }
      v24 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_44;
    }
    v16 = (_DWORD *)(gpsi + 2300LL);
    goto LABEL_25;
  }
  v5 = *(_OWORD *)(a1 + 128);
  v210 = v5;
  if ( PtInRect(&v210, v208) )
    return 1LL;
  v9 = 1;
  if ( (*(_BYTE *)(a1 + 49) & 2) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0 )
      {
        goto LABEL_91;
      }
    }
    else if ( !IsDPIDWMSysMet(v50)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v56 = 0)
             : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v56) )
    {
LABEL_91:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v53 = 0)
          : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v53) )
      {
        v57 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v57 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_107:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0 )
        {
          goto LABEL_110;
        }
      }
      else if ( !IsDPIDWMSysMet(v58)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v64 = 0)
               : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v64) )
      {
LABEL_110:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v61 = 0)
            : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v61) )
        {
          v65 = (int *)(gpsi + 2836LL);
        }
        else
        {
          v65 = (int *)(gpsi + 2060LL);
        }
        goto LABEL_126;
      }
      v65 = (int *)(gpsi + 2448LL);
LABEL_126:
      v66 = *v65;
      LODWORD(v207) = v210 - v66;
      v67 = DWORD1(v210) - *v57;
      DWORD2(v207) = DWORD2(v210) + v66;
      HIDWORD(v207) = *v57 + HIDWORD(v210);
      DWORD1(v207) = v67;
      goto LABEL_128;
    }
    v57 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_107;
  }
  v207 = v5;
LABEL_128:
  if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
    goto LABEL_170;
  if ( ((*(unsigned __int8 *)(a1 + 49) >> 6) & 1) != ((*(unsigned __int8 *)(a1 + 50) >> 6) & 1) )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0 )
      {
        goto LABEL_133;
      }
    }
    else if ( !IsDPIDWMSysMet(v68)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v74 = 0)
             : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v74) )
    {
LABEL_133:
      if ( IsDPIDWMSysMet(2uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v71 = 0)
          : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v71) )
      {
        v75 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v75 = (_DWORD *)(gpsi + 1888LL);
      }
      goto LABEL_149;
    }
    v75 = (_DWORD *)(gpsi + 2276LL);
LABEL_149:
    LODWORD(v207) = v207 - *v75;
    goto LABEL_170;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0 )
    {
      goto LABEL_153;
    }
  }
  else if ( !IsDPIDWMSysMet(v76)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v82 = 0)
           : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v82) )
  {
LABEL_153:
    if ( IsDPIDWMSysMet(2uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v79 = 0)
        : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v79) )
    {
      v83 = (_DWORD *)(gpsi + 2664LL);
    }
    else
    {
      v83 = (_DWORD *)(gpsi + 1888LL);
    }
    goto LABEL_169;
  }
  v83 = (_DWORD *)(gpsi + 2276LL);
LABEL_169:
  DWORD2(v207) += *v83;
LABEL_170:
  if ( (*(_BYTE *)(a1 + 40) & 4) == 0 )
    goto LABEL_191;
  if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x4000) != 0 )
    {
      goto LABEL_174;
    }
  }
  else if ( !IsDPIDWMSysMet(v84)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v90 = 0)
           : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v90) )
  {
LABEL_174:
    if ( IsDPIDWMSysMet(3uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v87 = 0)
        : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v87) )
    {
      v91 = (_DWORD *)(gpsi + 2668LL);
    }
    else
    {
      v91 = (_DWORD *)(gpsi + 1892LL);
    }
    goto LABEL_190;
  }
  v91 = (_DWORD *)(gpsi + 2280LL);
LABEL_190:
  HIDWORD(v207) += *v91;
LABEL_191:
  if ( PtInRect(&v207, v208) )
  {
    if ( (*(_BYTE *)(a1 + 49) & 2) == 0 )
      goto LABEL_463;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v181) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v182) + 776) & 0x4000) != 0 )
      {
        goto LABEL_426;
      }
    }
    else if ( !IsDPIDWMSysMet(v181)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v185) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v186) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v187 = 0)
             : (v187 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !v187) )
    {
LABEL_426:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v183) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v184 = 0)
          : (v184 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v184) )
      {
        v188 = (int *)(gpsi + 2840LL);
      }
      else
      {
        v188 = (int *)(gpsi + 2064LL);
      }
LABEL_442:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v189) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v190) + 776) & 0x4000) != 0 )
        {
          goto LABEL_445;
        }
      }
      else if ( !IsDPIDWMSysMet(v189)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v193) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v194) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v195 = 0)
               : (v195 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v195) )
      {
LABEL_445:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v191) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v192 = 0)
            : (v192 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v192) )
        {
          v196 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v196 = (_DWORD *)(gpsi + 2060LL);
        }
LABEL_461:
        v197 = *v188;
        v198 = -*v196;
        LODWORD(v207) = v207 + *v196;
        v199 = -v197;
        DWORD1(v207) -= v199;
        HIDWORD(v207) += v199;
        DWORD2(v207) += v198;
        if ( !PtInRect(&v207, v4) )
          return 18LL;
LABEL_463:
        v200 = *(_BYTE *)(a1 + 40);
        if ( (v200 & 4) == 0 || SHIDWORD(v208) < SHIDWORD(v210) )
          return 7LL;
        if ( (v200 & 2) != 0 )
        {
          v201 = SizeBoxHwnd(a1);
          if ( v2 >= SDWORD2(v210) )
          {
            v202 = v201 != 0 ? 0xD : 0;
            return (unsigned int)(v202 + 4);
          }
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 && v2 < (int)v210 )
          {
            v202 = v201 != 0 ? 0xC : 0;
            return (unsigned int)(v202 + 4);
          }
        }
        return 6LL;
      }
      v196 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_461;
    }
    v188 = (int *)(gpsi + 2452LL);
    goto LABEL_442;
  }
  WindowBorders = GetWindowBorders(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48));
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x4000) != 0 )
    {
      goto LABEL_195;
    }
LABEL_206:
    v99 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_211;
  }
  if ( IsDPIDWMSysMet(v92)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_206;
  }
LABEL_195:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v95 = 0)
      : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v95) )
  {
    v99 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v99 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_211:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x4000) != 0 )
    {
      goto LABEL_214;
    }
LABEL_225:
    v107 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_230;
  }
  if ( IsDPIDWMSysMet(v100)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v104) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_225;
  }
LABEL_214:
  if ( IsDPIDWMSysMet(5uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v103 = 0)
      : (v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v103) )
  {
    v107 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v107 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_230:
  v108 = *v99 * WindowBorders;
  v109 = *v213 + *v107 * WindowBorders;
  v205 = v213[2] - *v107 * WindowBorders;
  v110 = -v108;
  v111 = v110 + v213[3];
  v203 = v109;
  v112 = v213[1] - v110;
  v206 = v111;
  v204 = v112;
  if ( PtInRect(&v203, v4) )
  {
    v48 = HIDWORD(v208);
    if ( SHIDWORD(v208) >= SDWORD1(v207) )
      return 0LL;
    v47 = (__int64)v211;
    if ( (v211[54] & 0xC0) != 0xC0 )
    {
      if ( (v211[40] & 1) != 0 )
        return 5LL;
      return 0LL;
    }
    goto LABEL_84;
  }
  v113 = v211[54];
  if ( (v113 & 4) == 0 )
    return ((unsigned __int8)~v211[48] & (unsigned __int8)(~(v211[45] >> 1) & ~(v113 >> 6)) & 1) == 0 ? 0x12 : 0;
  if ( (char)v211[48] < 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x35uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x4000) != 0 )
      {
        goto LABEL_237;
      }
    }
    else if ( !IsDPIDWMSysMet(v114)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v120 = 0)
             : (v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !v120) )
    {
LABEL_237:
      if ( IsDPIDWMSysMet(0x35uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v117 = 0)
          : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v117) )
      {
        v121 = (int *)(gpsi + 2868LL);
      }
      else
      {
        v121 = (int *)(gpsi + 2092LL);
      }
LABEL_253:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x34uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x4000) != 0 )
        {
          goto LABEL_256;
        }
      }
      else if ( !IsDPIDWMSysMet(v122)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v128 = 0)
               : (v128 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v128) )
      {
LABEL_256:
        if ( IsDPIDWMSysMet(0x34uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v124) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v125 = 0)
            : (v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v125) )
        {
          v129 = (_DWORD *)(gpsi + 2864LL);
        }
        else
        {
          v129 = (_DWORD *)(gpsi + 2088LL);
        }
        goto LABEL_310;
      }
      v129 = (_DWORD *)(gpsi + 2476LL);
      goto LABEL_310;
    }
    v121 = (int *)(gpsi + 2480LL);
    goto LABEL_253;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v130) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x4000) != 0 )
    {
      goto LABEL_275;
    }
LABEL_286:
    v121 = (int *)(gpsi + 2392LL);
    goto LABEL_291;
  }
  if ( IsDPIDWMSysMet(v130)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_286;
  }
LABEL_275:
  if ( IsDPIDWMSysMet(0x1FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v132) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v133 = 0)
      : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v133) )
  {
    v121 = (int *)(gpsi + 2780LL);
  }
  else
  {
    v121 = (int *)(gpsi + 2004LL);
  }
LABEL_291:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x1EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v137) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x4000) != 0 )
    {
      goto LABEL_294;
    }
LABEL_305:
    v129 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_310;
  }
  if ( IsDPIDWMSysMet(v137)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v141) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_305;
  }
LABEL_294:
  if ( IsDPIDWMSysMet(0x1EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v140 = 0)
      : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v140) )
  {
    v129 = (_DWORD *)(gpsi + 2776LL);
  }
  else
  {
    v129 = (_DWORD *)(gpsi + 2000LL);
  }
LABEL_310:
  v144 = *v121;
  v145 = -*v129;
  v203 += *v129;
  v146 = -v144;
  v205 += v145;
  v204 -= v146;
  v206 += v146;
  if ( SHIDWORD(v208) >= v204 )
  {
    v147 = 0;
    if ( SHIDWORD(v208) >= v206 )
      v147 = 6;
  }
  else
  {
    v147 = 3;
  }
  if ( v209 >= v203 )
  {
    if ( v209 >= v205 )
      v147 += 2;
  }
  else
  {
    ++v147;
  }
  return (unsigned int)(v147 + 9);
}
