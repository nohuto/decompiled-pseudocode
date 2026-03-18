/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014FAB0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011F944 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0150204 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  unsigned __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // rbp
  HDC TooltipDC; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  const WCHAR *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *v47; // rbx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  _DWORD *v74; // rcx
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
  _DWORD *v101; // rbx
  __int64 v102; // rdx
  unsigned __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  int v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // ecx
  _DWORD *v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  LONG *v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  int v132; // ecx
  LONG cy; // edx
  LONG y; // ecx
  int v135; // edx
  _QWORD v136[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(gpsi + 5368LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v136[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v136;
    ++*(_DWORD *)(v8 + 8);
    v15 = (const WCHAR *)*((_QWORD *)a1 + 50);
    v16 = -1LL;
    v136[1] = v8;
    do
      ++v16;
    while ( v15[v16] );
    xxxClientGetTextExtentPointW(TooltipDC, v15, v16, a2);
    v8 = ThreadUnlock1(v18, v17);
    if ( !v8 )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v19 = (unsigned __int16 *)*((_QWORD *)a1 + 50);
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    GreGetTextExtentW(TooltipDC, v19, v20, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) != 0 )
      goto LABEL_13;
LABEL_23:
    v47 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_28;
  }
  if ( IsDPIDWMSysMet(v22)
    && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_23;
  }
LABEL_13:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
      ? (v35 = 0)
      : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v35) )
  {
    v47 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v47 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_28:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v50, v51) & 0xF) != 0 )
      goto LABEL_30;
LABEL_40:
    v74 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_45;
  }
  if ( IsDPIDWMSysMet(v49)
    && (W32GetCurrentThreadDpiAwarenessContext(v64, v63, v65, v66) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_40;
  }
LABEL_30:
  if ( IsDPIDWMSysMet(5uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54, v55) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 408)
      ? (v62 = 0)
      : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v62) )
  {
    v74 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v74 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_45:
  a2->cx += *v47 + 4 * *v74;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v75, v77, v78) & 0xF) != 0 )
      goto LABEL_47;
LABEL_57:
    v101 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_62;
  }
  if ( IsDPIDWMSysMet(v76)
    && (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92, v93) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_57;
  }
LABEL_47:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81, v82) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 408)
      ? (v89 = 0)
      : (v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v89) )
  {
    v101 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v101 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_62:
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v103, v102, v104, v105) & 0xF) != 0 )
      goto LABEL_64;
  }
  else if ( !IsDPIDWMSysMet(v103)
         || (W32GetCurrentThreadDpiAwarenessContext(v112, v111, v113, v114) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v115, v116, v117) + 408)
           ? (v118 = 0)
           : (v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v106,
                                                           v107,
                                                           v108)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v118) )
  {
LABEL_64:
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v109, v106, v107, v108) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v107, v108) + 408)
        ? (v110 = 0)
        : (v110 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v106,
                                                        v107,
                                                        v108)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v110) )
    {
      v119 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v119 = (_DWORD *)(gpsi + 1904LL);
    }
    goto LABEL_79;
  }
  v119 = (_DWORD *)(gpsi + 2292LL);
LABEL_79:
  v120 = (unsigned int)(*v101 + 2 * *v119);
  a2->cy += v120;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v120, v106, v107, v108) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v121, v123, v124) + 408)
      ? (v122 = 0LL)
      : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v121,
                                                      v123,
                                                      v124)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        !(_DWORD)v122) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v122, v121, v123, v124) & 0xF) != 1
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128) + 408)
        ? (v132 = 0)
        : (v132 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v129,
                                                        v130,
                                                        v131)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v125 = (LONG *)(v8 + 60),
          !v132) )
    {
      v125 = (LONG *)(v8 + 28);
    }
  }
  else
  {
    v125 = (LONG *)(v8 + 44);
  }
  cy = a2->cy;
  y = a3->y;
  if ( y + cy < v125[3] )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 96) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 96) &= ~1u;
    a3->y = y - cy;
  }
  v135 = v125[2];
  if ( a2->cx + a3->x >= v135 )
    a3->x = v135 - a2->cx;
  if ( a3->x < *v125 )
    a3->x = *v125;
  return 1LL;
}
