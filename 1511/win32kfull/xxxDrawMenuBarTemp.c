/*
 * XREFs of xxxDrawMenuBarTemp @ 0x1C0240734
 * Callers:
 *     NtUserDrawMenuBarTemp @ 0x1C02193E0 (NtUserDrawMenuBarTemp.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C0013EA8 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDrawMenuBarTemp(struct tagWND *a1, HDC a2, const RECT *a3, __int64 a4, __int64 a5)
{
  int SystemMetricsForWindow; // eax
  __int64 v9; // r8
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 DPIMetrics; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int CharDimensions; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  unsigned int *v41; // rcx
  __int64 v42; // rcx
  int v43; // ebx
  unsigned __int64 v44; // rcx
  int v45; // r12d
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _DWORD *v52; // rcx
  int v53; // r14d
  unsigned __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rcx
  _DWORD *v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rcx
  _DWORD *v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned __int64 v79; // rcx
  int v80; // edi
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  int *v85; // rcx
  __int64 v86; // rcx
  int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rcx
  _DWORD *v94; // rbx
  unsigned __int64 v95; // rcx
  int v96; // esi
  __int64 v97; // rcx
  __int64 v98; // rcx
  int v99; // ecx
  __int64 v100; // rcx
  __int64 v101; // rcx
  _DWORD *v103; // rdx
  HBRUSH v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rcx
  _DWORD *v122; // rcx
  __int64 v123; // rcx
  int v124; // ecx
  __int64 v125; // rcx
  __int64 v126; // rcx
  int v127; // ecx
  __int64 v128; // rcx
  __int64 v129; // rcx
  unsigned int *v131; // rcx
  unsigned int v132; // edi
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  _DWORD *v137; // rbx
  __int64 v138; // rcx
  __int64 v139; // rcx
  int v140; // ecx
  __int64 v141; // rcx
  __int64 v142; // rcx
  _DWORD *v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  int v148; // [rsp+30h] [rbp-D8h]
  unsigned int v149; // [rsp+34h] [rbp-D4h]
  unsigned int v150; // [rsp+38h] [rbp-D0h]
  unsigned int v151; // [rsp+3Ch] [rbp-CCh]
  unsigned int v152; // [rsp+40h] [rbp-C8h]
  unsigned int v153; // [rsp+44h] [rbp-C4h]
  __int64 v155; // [rsp+50h] [rbp-B8h]
  __int64 v156; // [rsp+58h] [rbp-B0h]
  _QWORD v157[3]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v158[4]; // [rsp+78h] [rbp-90h] BYREF
  int v159; // [rsp+7Ch] [rbp-8Ch]
  int v160; // [rsp+88h] [rbp-80h]
  int v161; // [rsp+98h] [rbp-70h]

  v156 = *((_QWORD *)GetDPIMETRICS(a1) + 1);
  v149 = *((_DWORD *)GetDPIMETRICS(a1) + 12);
  v153 = *((_DWORD *)GetDPIMETRICS(a1) + 14);
  v152 = *((_DWORD *)GetDPIMETRICS(a1) + 13);
  v150 = *((_DWORD *)GetDPIMETRICS(a1) + 15);
  v151 = *((_DWORD *)GetDPIMETRICS(a1) + 16);
  SystemMetricsForWindow = GetSystemMetricsForWindow((__int64)a1, 0x37u);
  v9 = *(_QWORD *)(a4 + 72);
  v148 = SystemMetricsForWindow;
  v157[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v157;
  v157[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = a3->bottom - a3->top;
  v155 = *(_QWORD *)(a4 + 72);
  if ( a5 )
  {
    *(_QWORD *)(GetDPIMetrics(v157, gptiCurrent, v9) + 8) = a5;
    DPIMetrics = GetDPIMetrics(v12, v11, v13);
    v15 = GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *(_QWORD *)(DPIMetrics + 8));
    v19 = GetDPIMetrics(v17, v16, v18);
    CharDimensions = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v158, v19 + 52);
    *(_DWORD *)(GetDPIMetrics(v22, v21, v23) + 48) = CharDimensions;
    v27 = GetDPIMetrics(v25, v24, v26);
    *(_DWORD *)(v27 + 56) = v161;
    GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), v15);
    v31 = GetDPIMetrics(v29, v28, v30);
    *(_DWORD *)(v31 + 60) = v160;
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0 )
      {
        goto LABEL_7;
      }
    }
    else if ( !IsDPIDWMSysMet(v32)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v40 = 0)
             : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v40) )
    {
LABEL_7:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v37 = 0)
          : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v37) )
      {
        v41 = (unsigned int *)(gpsi + 2680LL);
      }
      else
      {
        v41 = (unsigned int *)(gpsi + 1904LL);
      }
      goto LABEL_23;
    }
    v41 = (unsigned int *)(gpsi + 2292LL);
LABEL_23:
    v42 = *v41;
    v43 = v42 + v159;
    *(_DWORD *)(GetDPIMetrics(v42, v34, v35) + 64) = v43;
  }
  v45 = IsDPIAbsoluteSysMet(6uLL);
  if ( v45 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0 )
    {
      goto LABEL_27;
    }
LABEL_38:
    v52 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_43;
  }
  if ( IsDPIDWMSysMet(v44)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_38;
  }
LABEL_27:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v48 = 0)
      : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v48) )
  {
    v52 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v52 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_43:
  v53 = v10 - *v52;
  v55 = IsDPIAbsoluteSysMet(0x2EuLL);
  if ( v55 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) != 0 )
    {
      goto LABEL_46;
    }
LABEL_57:
    v62 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_62;
  }
  if ( IsDPIDWMSysMet(v54)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) == 0 )
  {
    v58 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 244LL) & 1;
    if ( (_DWORD)v58 )
      goto LABEL_57;
  }
LABEL_46:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v58 = 0LL)
      : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        (_DWORD)v58) )
  {
    v62 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v62 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_62:
  v63 = GetDPIMetrics(v58, v57, v59);
  v67 = (unsigned int)(*v62 + *(_DWORD *)(v63 + 60) + *(_DWORD *)(GetDPIMetrics(v65, v64, v66) + 52));
  if ( v53 > (int)v67 )
    goto LABEL_83;
  if ( v55 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) != 0 )
    {
      goto LABEL_66;
    }
  }
  else if ( !IsDPIDWMSysMet(0x2EuLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v70 = 0LL)
           : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !(_DWORD)v70) )
  {
LABEL_66:
    if ( IsDPIDWMSysMet(0x2EuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v70 = 0LL)
        : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          (_DWORD)v70) )
    {
      v74 = (_DWORD *)(gpsi + 2840LL);
    }
    else
    {
      v74 = (_DWORD *)(gpsi + 2064LL);
    }
    goto LABEL_82;
  }
  v74 = (_DWORD *)(gpsi + 2452LL);
LABEL_82:
  v75 = GetDPIMetrics(v70, v69, v71);
  v53 = *v74 + *(_DWORD *)(v75 + 60) + *(_DWORD *)(GetDPIMetrics(v77, v76, v78) + 52);
LABEL_83:
  v80 = IsDPIAbsoluteSysMet(0x37uLL);
  if ( v80 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) != 0 )
    {
      goto LABEL_95;
    }
LABEL_94:
    v85 = (int *)(gpsi + 2488LL);
    goto LABEL_103;
  }
  if ( IsDPIDWMSysMet(v79)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_94;
  }
LABEL_95:
  if ( IsDPIDWMSysMet(0x37uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v87 = 0)
      : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v87) )
  {
    v85 = (int *)(gpsi + 2876LL);
  }
  else
  {
    v85 = (int *)(gpsi + 2100LL);
  }
LABEL_103:
  *v85 = v53;
  if ( v45 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x4000) != 0 )
    {
      goto LABEL_106;
    }
LABEL_117:
    v94 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_122;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_117;
  }
LABEL_106:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v90 = 0)
      : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v90) )
  {
    v94 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v94 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_122:
  v96 = IsDPIAbsoluteSysMet(0xFuLL);
  if ( v96 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x4000) != 0 )
    {
      goto LABEL_125;
    }
LABEL_136:
    v103 = (_DWORD *)(gpsi + 2328LL);
    goto LABEL_141;
  }
  if ( IsDPIDWMSysMet(v95)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_136;
  }
LABEL_125:
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v99 = 0)
      : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v99) )
  {
    v103 = (_DWORD *)(gpsi + 2716LL);
  }
  else
  {
    v103 = (_DWORD *)(gpsi + 1940LL);
  }
LABEL_141:
  *v103 = v53 + *v94;
  xxxMenuBarCompute((struct tagMENU *)a4, (__int64)a1, (unsigned int)a3->top, a3->left, a3->right);
  a3->bottom = a3->top + *(_DWORD *)(a4 + 60);
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    v104 = *(HBRUSH *)(gpsi + 3936LL);
  else
    v104 = *(HBRUSH *)(gpsi + 3728LL);
  FillRect(a2, a3, v104);
  xxxMenuDraw(a2, a4, 0LL);
  *(_QWORD *)(GetDPIMetrics(v106, v105, v107) + 8) = v156;
  *(_DWORD *)(GetDPIMetrics(v156, v108, v109) + 48) = v149;
  *(_DWORD *)(GetDPIMetrics(v149, v110, v111) + 56) = v153;
  *(_DWORD *)(GetDPIMetrics(v153, v112, v113) + 52) = v152;
  *(_DWORD *)(GetDPIMetrics(v152, v114, v115) + 60) = v150;
  *(_DWORD *)(GetDPIMetrics(v150, v116, v117) + 64) = v151;
  if ( v80 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x4000) != 0 )
    {
      goto LABEL_156;
    }
LABEL_155:
    v122 = (_DWORD *)(gpsi + 2488LL);
    goto LABEL_164;
  }
  if ( IsDPIDWMSysMet(0x37uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v120) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_155;
  }
LABEL_156:
  if ( IsDPIDWMSysMet(0x37uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v124 = 0)
      : (v124 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
        v124) )
  {
    v122 = (_DWORD *)(gpsi + 2876LL);
  }
  else
  {
    v122 = (_DWORD *)(gpsi + 2100LL);
  }
LABEL_164:
  *v122 = v148;
  if ( v96 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v125) + 776) & 0x4000) != 0 )
    {
      goto LABEL_167;
    }
LABEL_178:
    v131 = (unsigned int *)(gpsi + 2328LL);
    goto LABEL_183;
  }
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v128) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v129) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_178;
  }
LABEL_167:
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v127 = 0)
      : (v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
        v127) )
  {
    v131 = (unsigned int *)(gpsi + 2716LL);
  }
  else
  {
    v131 = (unsigned int *)(gpsi + 1940LL);
  }
LABEL_183:
  v132 = *v131;
  if ( v45 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x4000) != 0 )
    {
      goto LABEL_186;
    }
LABEL_197:
    v137 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_202;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x4000) == 0 )
  {
    v134 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1;
    if ( (_DWORD)v134 )
      goto LABEL_197;
  }
LABEL_186:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v134 = 0LL)
      : (v134 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
        (_DWORD)v134) )
  {
    v137 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v137 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_202:
  if ( v96 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v138) + 776) & 0x4000) != 0 )
    {
      goto LABEL_205;
    }
LABEL_216:
    v144 = (_DWORD *)(gpsi + 2328LL);
    goto LABEL_221;
  }
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v141) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_216;
  }
LABEL_205:
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v140 = 0)
      : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
        v140) )
  {
    v144 = (_DWORD *)(gpsi + 2716LL);
  }
  else
  {
    v144 = (_DWORD *)(gpsi + 1940LL);
  }
LABEL_221:
  *v144 = v148 + *v137;
  HMAssignmentLock(a4 + 72, v155);
  ThreadUnlock1(v146, v145);
  return v132;
}
