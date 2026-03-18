/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC
 * Callers:
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F75C8 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F7694 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  __int64 v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rcx
  struct tagBWL *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagBWL *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // rcx
  int *v51; // rax
  int v52; // ebx
  INT v53; // eax
  int v54; // edx
  __int64 PrevTaskIndex; // r9
  char *v56; // rdx
  int v57; // ebp
  int v58; // eax
  bool v59; // zf
  int v60; // r15d
  __int64 v61; // rcx
  int v62; // r13d
  int v63; // eax
  __int64 v64; // r8
  __int64 v65; // rdx
  int v66; // r10d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _DWORD *v71; // r12
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // ecx
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
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
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  int v104; // ecx
  _DWORD *v105; // rbx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  int v111; // r12d
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  int v123; // ecx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  int v134; // ecx
  _DWORD *v135; // rbx
  __int64 v136; // rcx
  int v137; // ebx
  __int64 v138; // rdx
  __int64 DPIMetrics; // rax
  int v140; // r13d
  __int64 v141; // rdx
  __int64 v142; // kr00_8
  __int64 v143; // rax
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  int v147; // r13d
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // kr08_8
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  int v161; // ecx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  int v172; // ecx
  _DWORD *v173; // rbx
  _DWORD *DPIServerInfo; // rax
  __int64 v175; // rdx
  int v176; // ecx
  __int64 v177; // r8
  __int64 v178; // r9
  int v179; // [rsp+20h] [rbp-68h]
  int v180; // [rsp+24h] [rbp-64h]
  int v181; // [rsp+28h] [rbp-60h]
  int v182; // [rsp+2Ch] [rbp-5Ch] BYREF
  _DWORD *v183; // [rsp+30h] [rbp-58h]
  _DWORD *v184; // [rsp+38h] [rbp-50h]
  HWND *v185; // [rsp+40h] [rbp-48h] BYREF
  int v187; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  v9 = *(_DWORD **)(GetDispInfo(a1) + 88);
  *a1 = 0LL;
  v10 = *(_QWORD *)(v8 + 16);
  v183 = v9;
  v11 = BuildHwndList(*(_QWORD *)(v10 + 96), (struct tagWND *)2, 0LL);
  v15 = v11;
  if ( v11 )
  {
    v19 = _RemoveNonTaskWindows(v11, a2, &v182, &v185);
    if ( v19 < 2 )
    {
      if ( v19 != 1
        || (LOBYTE(v16) = 1, v20 = HMValidateHandleNoSecure(*((_QWORD *)v15 + 4), v16, v17, v18), (v7 = v20) != 0)
        && (*(_BYTE *)(v20 + 47) & 7) == 1
        && a2 == (struct tagWND *)v20 )
      {
        v7 = *(_QWORD *)(v8 + 160);
      }
LABEL_9:
      FreeHwndList(v15);
      if ( v7 )
        return (struct tagWND *)v7;
      goto LABEL_109;
    }
    v21 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
    v22 = v21;
    if ( !v21 )
      goto LABEL_9;
    *(_QWORD *)(v21 + 8) = gptiCurrent;
    *(_QWORD *)(v21 + 16) = v15;
    *(_QWORD *)(v21 + 24) = v185;
    *(_DWORD *)(v21 + 40) = v19;
    *(_DWORD *)(v21 + 44) = v19;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0 )
        goto LABEL_13;
    }
    else if ( !IsDPIDWMSysMet(v25)
           || (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
             ? (v49 = 0)
             : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v46,
                                                            v47,
                                                            v48)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v49) )
    {
LABEL_13:
      if ( IsDPIDWMSysMet(0xBuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
          ? (v38 = 0)
          : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v35,
                                                         v36,
                                                         v37)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v38) )
      {
        v50 = gpsi;
        v51 = (int *)(gpsi + 2700LL);
      }
      else
      {
        v50 = gpsi;
        v51 = (int *)(gpsi + 1924LL);
      }
LABEL_28:
      v52 = *v51;
      v179 = *v51;
      v53 = EngMulDiv(11, *(unsigned __int16 *)(v50 + 8678), 96);
      v54 = v182;
      *(_DWORD *)(v22 + 112) = v52;
      v187 = v52 + v53;
      *(_DWORD *)(v22 + 116) = v52 + v53;
      PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v22, v54, 1, a3 == 0);
      v56 = (char *)v15 + 8 * PrevTaskIndex + 32;
      v57 = v19;
      *(_QWORD *)(v22 + 32) = v56;
      if ( gnFastAltTabColumns < v19 )
        v57 = gnFastAltTabColumns;
      v58 = v19 / v57;
      v59 = v19 == v57 * (v19 / v57);
      v60 = v19 % v57;
      v61 = !v59;
      v62 = v61 + v58;
      v63 = gnFastAltTabRows;
      v180 = v62;
      if ( v62 <= gnFastAltTabRows )
      {
        *(_DWORD *)(v22 + 48) = 0;
      }
      else
      {
        v62 = gnFastAltTabRows;
        v180 = gnFastAltTabRows;
        v60 = v57;
        *(_DWORD *)(v22 + 48) = 1;
        *(_DWORD *)(v22 + 44) = v57 * v63;
      }
      *(_DWORD *)(v22 + 56) = v57;
      *(_DWORD *)(v22 + 60) = v62;
      if ( !v60 )
        v60 = v57;
      *(_DWORD *)(v22 + 64) = v60;
      if ( (int)PrevTaskIndex < v57 * v62 )
      {
        v66 = 0;
        v64 = (unsigned int)((int)PrevTaskIndex / v57);
        v61 = (unsigned int)(v57 * ((int)PrevTaskIndex / v57));
        v65 = (unsigned int)((int)PrevTaskIndex % v57);
      }
      else
      {
        v64 = (unsigned int)((v62 >> 2) + 1);
        v65 = (unsigned int)((v57 >> 2) + 1);
        PrevTaskIndex = (unsigned int)(PrevTaskIndex - v57 * ((v62 >> 2) + 1) - v65);
        v66 = PrevTaskIndex;
      }
      *(_DWORD *)(v22 + 52) = v66;
      *(_DWORD *)(v22 + 72) = v64;
      *(_DWORD *)(v22 + 68) = v65;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v61, v65, v64, PrevTaskIndex) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v69, v70) + 408)
          ? (v68 = 0LL)
          : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v67,
                                                         v69,
                                                         v70)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v68) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74) + 408)
            ? (v78 = 0)
            : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v75,
                                                           v76,
                                                           v77)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v78) )
        {
          v71 = v183 + 15;
        }
        else
        {
          v71 = v183 + 7;
        }
      }
      else
      {
        v71 = v183 + 11;
      }
      v184 = v71;
      v181 = IsDPIAbsoluteSysMet(5uLL);
      if ( v181 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81, v82) & 0xF) != 0 )
          goto LABEL_53;
      }
      else if ( !IsDPIDWMSysMet(v80)
             || (W32GetCurrentThreadDpiAwarenessContext(v95, v94, v96, v97) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v98, v99, v100) + 408)
               ? (v104 = 0)
               : (v104 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v101,
                                                               v102,
                                                               v103)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v104) )
      {
LABEL_53:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v84, v83, v85, v86) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89) + 408)
            ? (v93 = 0)
            : (v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v90,
                                                           v91,
                                                           v92)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v93) )
        {
          v105 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v105 = (_DWORD *)(gpsi + 1900LL);
        }
LABEL_68:
        v106 = (unsigned int)(*(_DWORD *)GetDPIServerInfo() * *v105);
        v108 = (unsigned int)(6 * v106 + *(_DWORD *)(GetDPIMetrics(v106, v107) + 72));
        v110 = (unsigned int)(v179 >> 31);
        LODWORD(v110) = v179 % 2;
        v111 = v71[2] - *v71;
        LODWORD(v183) = v179 / 2;
        v112 = (unsigned int)(v179 / 2 + v108 + v187 * gnFastAltTabColumns);
        if ( v111 < (int)v112 )
          goto LABEL_87;
        if ( v181 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v112, v110, v108, v109) & 0xF) != 0 )
            goto LABEL_71;
        }
        else if ( !IsDPIDWMSysMet(5uLL)
               || (W32GetCurrentThreadDpiAwarenessContext(v125, v124, v126, v127) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130) + 408)
                 ? (v134 = 0)
                 : (v134 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v131,
                                                                 v132,
                                                                 v133)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v134) )
        {
LABEL_71:
          if ( IsDPIDWMSysMet(5uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v114, v113, v115, v116) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 408)
              ? (v123 = 0)
              : (v123 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v120,
                                                              v121,
                                                              v122)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v123) )
          {
            v135 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v135 = (_DWORD *)(gpsi + 1900LL);
          }
          goto LABEL_86;
        }
        v135 = (_DWORD *)(gpsi + 2288LL);
LABEL_86:
        v136 = (unsigned int)(*(_DWORD *)GetDPIServerInfo() * *v135);
        v137 = 6 * v136;
        DPIMetrics = GetDPIMetrics(v136, v138);
        v111 = (_DWORD)v183 + v137 + *(_DWORD *)(DPIMetrics + 72) + v187 * gnFastAltTabColumns;
LABEL_87:
        v140 = v187 * v62;
        v142 = *(int *)(GetDPIMetrics(v112, v110) + 76);
        v141 = HIDWORD(v142);
        LODWORD(v141) = v142 % 2;
        LODWORD(v183) = v140;
        v143 = GetDPIMetrics(2LL, v141);
        v146 = (__int64)v184;
        LODWORD(v143) = v140 + v142 / 2 + 2 * *(_DWORD *)(v143 + 76);
        v147 = v184[3] - v184[1];
        v148 = (unsigned int)(v143 + v179);
        if ( v147 >= (int)v148 )
        {
          v150 = *(int *)(GetDPIMetrics(v148, v184) + 76);
          v149 = HIDWORD(v150);
          LODWORD(v149) = v150 % 2;
          v148 = *(unsigned int *)(GetDPIMetrics(2LL, v149) + 76);
          v147 = v179 + (_DWORD)v183 + v150 / 2 + 2 * v148;
        }
        if ( v180 == 1 )
          v57 = v60;
        if ( v181 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v148, v146, v144, v145) & 0xF) != 0 )
            goto LABEL_93;
        }
        else if ( !IsDPIDWMSysMet(5uLL)
               || (W32GetCurrentThreadDpiAwarenessContext(v163, v162, v164, v165) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v166, v167, v168) + 408)
                 ? (v172 = 0)
                 : (v172 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v169,
                                                                 v170,
                                                                 v171)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v172) )
        {
LABEL_93:
          if ( IsDPIDWMSysMet(5uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v152, v151, v153, v154) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155, v156, v157) + 408)
              ? (v161 = 0)
              : (v161 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v158,
                                                              v159,
                                                              v160)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v161) )
          {
            v173 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v173 = (_DWORD *)(gpsi + 1900LL);
          }
          goto LABEL_108;
        }
        v173 = (_DWORD *)(gpsi + 2288LL);
LABEL_108:
        DPIServerInfo = (_DWORD *)GetDPIServerInfo();
        LOBYTE(v175) = 1;
        v176 = *v173 * *DPIServerInfo;
        *(_DWORD *)(v22 + 76) = v111;
        *(_DWORD *)(v22 + 80) = v147;
        *(_DWORD *)(v22 + 88) = v179 >> 1;
        *(_DWORD *)(v22 + 84) = (v111 + -4 * v176 - v187 * v57) >> 1;
        *(_QWORD *)v22 = gpswiFirst;
        gpswiFirst = (struct tagSwitchWndInfo *)v22;
        *a1 = (struct tagSwitchWndInfo *)v22;
        return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v22 + 32), v175, v177, v178);
      }
      v105 = (_DWORD *)(gpsi + 2288LL);
      goto LABEL_68;
    }
    v50 = gpsi;
    v51 = (int *)(gpsi + 2312LL);
    goto LABEL_28;
  }
LABEL_109:
  LOBYTE(v3) = (GetKeyState(0x10u, v12, v13, v14) & 0x8000u) != 0LL;
  return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
}
