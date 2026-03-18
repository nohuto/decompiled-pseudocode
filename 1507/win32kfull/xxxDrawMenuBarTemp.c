/*
 * XREFs of xxxDrawMenuBarTemp @ 0x1C0240598
 * Callers:
 *     NtUserDrawMenuBarTemp @ 0x1C0219550 (NtUserDrawMenuBarTemp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxMenuBarCompute @ 0x1C004F804 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBD44 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawMenuBarTemp(struct tagWND *a1, HDC a2, const RECT *a3, __int64 a4, __int64 a5)
{
  int SystemMetricsForWindow; // eax
  __int64 v9; // r8
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 DPIMetrics; // rax
  int CharDimensions; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  unsigned int *v39; // rcx
  __int64 v40; // rcx
  int v41; // ebx
  unsigned __int64 v42; // rcx
  int v43; // r12d
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _DWORD *v50; // rcx
  int v51; // r14d
  unsigned __int64 v52; // rcx
  int v53; // esi
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rcx
  _DWORD *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rcx
  _DWORD *v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned __int64 v77; // rcx
  int v78; // edi
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int *v83; // rcx
  __int64 v84; // rcx
  int v85; // ecx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // ecx
  __int64 v89; // rcx
  __int64 v90; // rcx
  _DWORD *v92; // rbx
  unsigned __int64 v93; // rcx
  int v94; // esi
  __int64 v95; // rcx
  __int64 v96; // rcx
  int v97; // ecx
  __int64 v98; // rcx
  __int64 v99; // rcx
  _DWORD *v101; // rdx
  HBRUSH v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  _DWORD *v120; // rcx
  __int64 v121; // rcx
  int v122; // ecx
  __int64 v123; // rcx
  __int64 v124; // rcx
  int v125; // ecx
  __int64 v126; // rcx
  __int64 v127; // rcx
  unsigned int *v129; // rcx
  unsigned int v130; // edi
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  _DWORD *v135; // rbx
  __int64 v136; // rcx
  __int64 v137; // rcx
  int v138; // ecx
  __int64 v139; // rcx
  __int64 v140; // rcx
  _DWORD *v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  int v146; // [rsp+30h] [rbp-D8h]
  unsigned int v147; // [rsp+34h] [rbp-D4h]
  unsigned int v148; // [rsp+38h] [rbp-D0h]
  unsigned int v149; // [rsp+3Ch] [rbp-CCh]
  unsigned int v150; // [rsp+40h] [rbp-C8h]
  unsigned int v151; // [rsp+44h] [rbp-C4h]
  __int64 v153; // [rsp+50h] [rbp-B8h]
  __int64 v154; // [rsp+58h] [rbp-B0h]
  _QWORD v155[3]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v156[4]; // [rsp+78h] [rbp-90h] BYREF
  int v157; // [rsp+7Ch] [rbp-8Ch]
  int v158; // [rsp+88h] [rbp-80h]
  int v159; // [rsp+98h] [rbp-70h]

  v154 = *((_QWORD *)GetDPIMETRICS(a1) + 1);
  v147 = *((_DWORD *)GetDPIMETRICS(a1) + 12);
  v151 = *((_DWORD *)GetDPIMETRICS(a1) + 14);
  v150 = *((_DWORD *)GetDPIMETRICS(a1) + 13);
  v148 = *((_DWORD *)GetDPIMETRICS(a1) + 15);
  v149 = *((_DWORD *)GetDPIMETRICS(a1) + 16);
  SystemMetricsForWindow = GetSystemMetricsForWindow((__int64)a1, 0x37u);
  v9 = *(_QWORD *)(a4 + 72);
  v146 = SystemMetricsForWindow;
  v155[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v155;
  v155[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = a3->bottom - a3->top;
  v153 = *(_QWORD *)(a4 + 72);
  if ( a5 )
  {
    *(_QWORD *)(GetDPIMetrics(v155, gptiCurrent, v9) + 8) = a5;
    GetDPIMetrics(v12, v11, v13);
    GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
    DPIMetrics = GetDPIMetrics(v15, v14, v16);
    CharDimensions = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v156, DPIMetrics + 52);
    *(_DWORD *)(GetDPIMetrics(v20, v19, v21) + 48) = CharDimensions;
    v25 = GetDPIMetrics(v23, v22, v24);
    *(_DWORD *)(v25 + 56) = v159;
    GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
    v29 = GetDPIMetrics(v27, v26, v28);
    *(_DWORD *)(v29 + 60) = v158;
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0 )
      {
        goto LABEL_7;
      }
    }
    else if ( !IsDPIDWMSysMet(v30)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v38 = 0)
             : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v38) )
    {
LABEL_7:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v35 = 0)
          : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v35) )
      {
        v39 = (unsigned int *)(gpsi + 2680LL);
      }
      else
      {
        v39 = (unsigned int *)(gpsi + 1904LL);
      }
      goto LABEL_23;
    }
    v39 = (unsigned int *)(gpsi + 2292LL);
LABEL_23:
    v40 = *v39;
    v41 = v40 + v157;
    *(_DWORD *)(GetDPIMetrics(v40, v32, v33) + 64) = v41;
  }
  v43 = IsDPIAbsoluteSysMet(6uLL);
  if ( v43 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0 )
    {
      goto LABEL_27;
    }
LABEL_38:
    v50 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_43;
  }
  if ( IsDPIDWMSysMet(v42)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_38;
  }
LABEL_27:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v46 = 0)
      : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v46) )
  {
    v50 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v50 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_43:
  v51 = v10 - *v50;
  v53 = IsDPIAbsoluteSysMet(0x2EuLL);
  if ( v53 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0 )
    {
      goto LABEL_46;
    }
LABEL_57:
    v60 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_62;
  }
  if ( IsDPIDWMSysMet(v52)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) == 0 )
  {
    v56 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                    + 260LL) & 1;
    if ( (_DWORD)v56 )
      goto LABEL_57;
  }
LABEL_46:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v56 = 0LL)
      : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        (_DWORD)v56) )
  {
    v60 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v60 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_62:
  v61 = GetDPIMetrics(v56, v55, v57);
  v65 = (unsigned int)(*v60 + *(_DWORD *)(v61 + 60) + *(_DWORD *)(GetDPIMetrics(v63, v62, v64) + 52));
  if ( v51 > (int)v65 )
    goto LABEL_83;
  if ( v53 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x4000) != 0 )
    {
      goto LABEL_66;
    }
  }
  else if ( !IsDPIDWMSysMet(0x2EuLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v68 = 0LL)
           : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !(_DWORD)v68) )
  {
LABEL_66:
    if ( IsDPIDWMSysMet(0x2EuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v68 = 0LL)
        : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          (_DWORD)v68) )
    {
      v72 = (_DWORD *)(gpsi + 2840LL);
    }
    else
    {
      v72 = (_DWORD *)(gpsi + 2064LL);
    }
    goto LABEL_82;
  }
  v72 = (_DWORD *)(gpsi + 2452LL);
LABEL_82:
  v73 = GetDPIMetrics(v68, v67, v69);
  v51 = *v72 + *(_DWORD *)(v73 + 60) + *(_DWORD *)(GetDPIMetrics(v75, v74, v76) + 52);
LABEL_83:
  v78 = IsDPIAbsoluteSysMet(0x37uLL);
  if ( v78 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x4000) != 0 )
    {
      goto LABEL_95;
    }
LABEL_94:
    v83 = (int *)(gpsi + 2488LL);
    goto LABEL_103;
  }
  if ( IsDPIDWMSysMet(v77)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_94;
  }
LABEL_95:
  if ( IsDPIDWMSysMet(0x37uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v85 = 0)
      : (v85 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v85) )
  {
    v83 = (int *)(gpsi + 2876LL);
  }
  else
  {
    v83 = (int *)(gpsi + 2100LL);
  }
LABEL_103:
  *v83 = v51;
  if ( v43 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0 )
    {
      goto LABEL_106;
    }
LABEL_117:
    v92 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_122;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_117;
  }
LABEL_106:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v88 = 0)
      : (v88 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v88) )
  {
    v92 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v92 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_122:
  v94 = IsDPIAbsoluteSysMet(0xFuLL);
  if ( v94 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x4000) != 0 )
    {
      goto LABEL_125;
    }
LABEL_136:
    v101 = (_DWORD *)(gpsi + 2328LL);
    goto LABEL_141;
  }
  if ( IsDPIDWMSysMet(v93)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_136;
  }
LABEL_125:
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v97 = 0)
      : (v97 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v97) )
  {
    v101 = (_DWORD *)(gpsi + 2716LL);
  }
  else
  {
    v101 = (_DWORD *)(gpsi + 1940LL);
  }
LABEL_141:
  *v101 = v51 + *v92;
  xxxMenuBarCompute((struct tagMENU *)a4, (__int64)a1, (unsigned int)a3->top, a3->left, a3->right);
  a3->bottom = a3->top + *(_DWORD *)(a4 + 60);
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
    v102 = *(HBRUSH *)(gpsi + 3936LL);
  else
    v102 = *(HBRUSH *)(gpsi + 3728LL);
  FillRect(a2, a3, v102);
  xxxMenuDraw(a2, a4, 0LL);
  *(_QWORD *)(GetDPIMetrics(v104, v103, v105) + 8) = v154;
  *(_DWORD *)(GetDPIMetrics(v154, v106, v107) + 48) = v147;
  *(_DWORD *)(GetDPIMetrics(v147, v108, v109) + 56) = v151;
  *(_DWORD *)(GetDPIMetrics(v151, v110, v111) + 52) = v150;
  *(_DWORD *)(GetDPIMetrics(v150, v112, v113) + 60) = v148;
  *(_DWORD *)(GetDPIMetrics(v148, v114, v115) + 64) = v149;
  if ( v78 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x4000) != 0 )
    {
      goto LABEL_156;
    }
LABEL_155:
    v120 = (_DWORD *)(gpsi + 2488LL);
    goto LABEL_164;
  }
  if ( IsDPIDWMSysMet(0x37uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_155;
  }
LABEL_156:
  if ( IsDPIDWMSysMet(0x37uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v122 = 0)
      : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v122) )
  {
    v120 = (_DWORD *)(gpsi + 2876LL);
  }
  else
  {
    v120 = (_DWORD *)(gpsi + 2100LL);
  }
LABEL_164:
  *v120 = v146;
  if ( v94 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v120) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x4000) != 0 )
    {
      goto LABEL_167;
    }
LABEL_178:
    v129 = (unsigned int *)(gpsi + 2328LL);
    goto LABEL_183;
  }
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v126) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_178;
  }
LABEL_167:
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v124) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v125 = 0)
      : (v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v125) )
  {
    v129 = (unsigned int *)(gpsi + 2716LL);
  }
  else
  {
    v129 = (unsigned int *)(gpsi + 1940LL);
  }
LABEL_183:
  v130 = *v129;
  if ( v43 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v129) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x4000) != 0 )
    {
      goto LABEL_186;
    }
LABEL_197:
    v135 = (_DWORD *)(gpsi + 2292LL);
    goto LABEL_202;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x4000) == 0 )
  {
    v132 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1;
    if ( (_DWORD)v132 )
      goto LABEL_197;
  }
LABEL_186:
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v132) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v132 = 0LL)
      : (v132 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        (_DWORD)v132) )
  {
    v135 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v135 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_202:
  if ( v94 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v132) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x4000) != 0 )
    {
      goto LABEL_205;
    }
LABEL_216:
    v142 = (_DWORD *)(gpsi + 2328LL);
    goto LABEL_221;
  }
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v139) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v140) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_216;
  }
LABEL_205:
  if ( IsDPIDWMSysMet(0xFuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v137) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v138 = 0)
      : (v138 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v138) )
  {
    v142 = (_DWORD *)(gpsi + 2716LL);
  }
  else
  {
    v142 = (_DWORD *)(gpsi + 1940LL);
  }
LABEL_221:
  *v142 = v146 + *v135;
  HMAssignmentLock(a4 + 72, v153);
  ThreadUnlock1(v144, v143);
  return v130;
}
