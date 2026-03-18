/*
 * XREFs of ParkIcon @ 0x1C00B2AE0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0120C50 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     InternalGetRealClientRect @ 0x1C01052BC (InternalGetRealClientRect.c)
 */

__int64 __fastcall ParkIcon(__int64 a1, unsigned int *a2)
{
  int v4; // r13d
  int v5; // r15d
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rbx
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
  _DWORD *v32; // rcx
  unsigned int v33; // r12d
  int v34; // edi
  int v35; // esi
  int v36; // ebx
  char v37; // al
  int v38; // r11d
  int v39; // ecx
  int v40; // r14d
  __int64 v41; // rdi
  int v42; // r13d
  char v43; // al
  __int64 Prop; // rax
  int v45; // r10d
  int v46; // r11d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // ecx
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
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
  _DWORD *v101; // rbx
  __int64 v102; // rdx
  unsigned __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // ecx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  int v127; // ecx
  _DWORD *v128; // rcx
  int v129; // ecx
  int v130; // eax
  unsigned int v131; // [rsp+30h] [rbp-39h] BYREF
  int v132; // [rsp+34h] [rbp-35h]
  unsigned int v133; // [rsp+38h] [rbp-31h]
  int v134; // [rsp+3Ch] [rbp-2Dh]
  int v135; // [rsp+40h] [rbp-29h]
  int v136; // [rsp+44h] [rbp-25h]
  int v137; // [rsp+48h] [rbp-21h] BYREF
  int v138; // [rsp+4Ch] [rbp-1Dh]
  int v139; // [rsp+50h] [rbp-19h]
  int v140; // [rsp+54h] [rbp-15h]
  int SystemMetricsForWindow; // [rsp+58h] [rbp-11h]
  int v142; // [rsp+5Ch] [rbp-Dh]
  int v143; // [rsp+60h] [rbp-9h]
  unsigned int v144; // [rsp+64h] [rbp-5h]
  int v145; // [rsp+68h] [rbp-1h]
  __int64 v146; // [rsp+70h] [rbp+7h]
  __int64 v147; // [rsp+78h] [rbp+Fh]
  unsigned __int16 v150; // [rsp+E0h] [rbp+77h]
  int v151; // [rsp+E8h] [rbp+7Fh]

  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0x2Fu);
  v4 = SystemMetricsForWindow;
  v151 = GetSystemMetricsForWindow(a1, 0x30u);
  v5 = v151;
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    result = 4294935296LL;
    *a2 = -32000;
    a2[1] = -32000;
    return result;
  }
  v146 = *(_QWORD *)(a1 + 88);
  InternalGetRealClientRect(v146, (unsigned int)&v137, 1, 0, 1);
  if ( (GetSystemMetricsForWindow(a1, 0x38u) & 1) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 0 )
      {
LABEL_46:
        v19 = (_DWORD *)(gpsi + 2456LL);
        goto LABEL_8;
      }
    }
    else if ( IsDPIDWMSysMet(v8)
           && (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_46;
    }
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 408)
        ? (v60 = 0)
        : (v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v57,
                                                       v58,
                                                       v59)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v60) )
    {
      v19 = (_DWORD *)(gpsi + 2844LL);
    }
    else
    {
      v19 = (_DWORD *)(gpsi + 2068LL);
    }
LABEL_8:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 0 )
      {
LABEL_60:
        v32 = (_DWORD *)(gpsi + 2496LL);
LABEL_12:
        v33 = v137 + *v19 - *v32;
        v135 = v4;
        goto LABEL_13;
      }
    }
    else if ( IsDPIDWMSysMet(v21)
           && (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_60;
    }
    if ( IsDPIDWMSysMet(0x39uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
        ? (v74 = 0)
        : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v71,
                                                       v72,
                                                       v73)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v74) )
    {
      v32 = (_DWORD *)(gpsi + 2884LL);
    }
    else
    {
      v32 = (_DWORD *)(gpsi + 2108LL);
    }
    goto LABEL_12;
  }
  v33 = v139 - v4;
  v135 = -v4;
LABEL_13:
  v131 = v33;
  v144 = v33;
  if ( (GetSystemMetricsForWindow(a1, 0x38u) & 2) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v75, v77, v78) & 0xF) != 0 )
        goto LABEL_69;
    }
    else if ( !IsDPIDWMSysMet(v76)
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
LABEL_69:
      if ( IsDPIDWMSysMet(0x30uLL)
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
        v101 = (_DWORD *)(gpsi + 2848LL);
      }
      else
      {
        v101 = (_DWORD *)(gpsi + 2072LL);
      }
LABEL_84:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v103, v102, v104, v105) & 0xF) != 0 )
          goto LABEL_86;
      }
      else if ( !IsDPIDWMSysMet(v103)
             || (W32GetCurrentThreadDpiAwarenessContext(v118, v117, v119, v120) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v121, v122, v123) + 408)
               ? (v127 = 0)
               : (v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v124,
                                                               v125,
                                                               v126)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v127) )
      {
LABEL_86:
        if ( IsDPIDWMSysMet(0x3AuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v107, v106, v108, v109) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 408)
            ? (v116 = 0)
            : (v116 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v113,
                                                            v114,
                                                            v115)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v116) )
        {
          v128 = (_DWORD *)(gpsi + 2888LL);
        }
        else
        {
          v128 = (_DWORD *)(gpsi + 2112LL);
        }
        goto LABEL_101;
      }
      v128 = (_DWORD *)(gpsi + 2500LL);
LABEL_101:
      v35 = *v101 + v138 - *v128;
      v34 = v140;
      goto LABEL_15;
    }
    v101 = (_DWORD *)(gpsi + 2460LL);
    goto LABEL_84;
  }
  v34 = v140;
  v35 = v140 - v151;
  v5 = -v151;
LABEL_15:
  v36 = v35;
  v143 = v5;
  v132 = v35;
  v142 = v35;
  v37 = GetSystemMetricsForWindow(a1, 0x38u);
  v38 = v151;
  if ( (v37 & 4) != 0 )
  {
    v39 = 0;
    v40 = v34 / v151;
    if ( v34 / v151 < 1 )
      v40 = 1;
  }
  else
  {
    v39 = 1;
    v40 = v139 / v4;
    if ( v139 / v4 < 1 )
      v40 = 1;
  }
  v136 = 0;
  v150 = atomCheckpointProp;
  v145 = v40;
  v147 = v39;
  do
  {
    v134 = v36 + v38;
    v133 = SystemMetricsForWindow + v131;
    v41 = *(_QWORD *)(v146 + 96);
    if ( !v41 )
      break;
    v42 = v136;
    do
    {
      v43 = *(_BYTE *)(v41 + 55);
      if ( (v43 & 0x10) == 0 || v41 == a1 )
        goto LABEL_22;
      if ( (v43 & 0x20) != 0 )
      {
        GetRect(v41, (__int64)&v137, 66);
      }
      else
      {
        Prop = GetProp(v41, v150, 1LL);
        if ( !Prop || (*(_BYTE *)(Prop + 32) & 9) != 9 )
          goto LABEL_22;
        v129 = *(_DWORD *)(Prop + 16);
        v130 = *(_DWORD *)(Prop + 20);
        v137 = v129;
        v138 = v130;
        v140 = v46 + v130;
        v139 = v45 + v129;
      }
      ++v42;
      if ( (unsigned int)IntersectRect(&v137, &v137, (int *)&v131) )
        break;
LABEL_22:
      v41 = *(_QWORD *)(v41 + 72);
    }
    while ( v41 );
    v136 = v42;
    if ( !v41 )
      break;
    if ( --v40 )
    {
      if ( v147 )
      {
        v131 += v135;
        goto LABEL_35;
      }
LABEL_37:
      v36 += v143;
    }
    else
    {
      v40 = v145;
      if ( v147 )
      {
        v131 = v144;
        goto LABEL_37;
      }
      v36 = v142;
      v131 += v135;
    }
    v132 = v36;
LABEL_35:
    v38 = v151;
  }
  while ( v136 < 5000 );
  result = v131;
  *a2 = v131;
  a2[1] = v36;
  return result;
}
