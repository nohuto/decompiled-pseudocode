/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022B5BC
 * Callers:
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C022E1C0 (xxxTrackBox.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C022ACCC (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022AD58 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagRECT *a2, int a3, unsigned int a4)
{
  unsigned __int16 v8; // r8
  int v9; // ecx
  int v10; // r9d
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
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
  int *v37; // rcx
  int v38; // r12d
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ecx
  _DWORD *v65; // rcx
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // ecx
  int *v92; // rcx
  __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // ecx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // ecx
  char left; // al
  __int64 v120; // r9
  HDC v121; // r12
  unsigned __int16 v122; // r8
  unsigned int v123; // r8d
  HDC DCEx; // [rsp+30h] [rbp-38h]
  RECT v125; // [rsp+38h] [rbp-30h] BYREF

  if ( a4 >= 2 )
  {
    InvertScrollHilite(a1, a2);
    if ( a4 == 2 )
      v8 = 1538;
    else
      v8 = 1540;
    SetOrClrWF(a3 != 0, a1, v8, 1);
    v9 = 1;
    v10 = 4;
    if ( gdwDeferWinEvent )
      v9 = 3;
    if ( a4 == 2 )
      v10 = 2;
    goto LABEL_96;
  }
  if ( (a2->left & 8) != 0 )
  {
    RecalcTrackRect((struct tagSBTRACK *)a2);
    a2->left &= ~8u;
  }
  v125 = a2[2];
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( (a2->left & 2) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v67, v66, v68, v69) & 0xF) != 0 )
        goto LABEL_49;
    }
    else if ( !IsDPIDWMSysMet(v67)
           || (W32GetCurrentThreadDpiAwarenessContext(v82, v81, v83, v84) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 408)
             ? (v91 = 0)
             : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v88,
                                                            v89,
                                                            v90)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v91) )
    {
LABEL_49:
      if ( IsDPIDWMSysMet(0x15uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v71, v70, v72, v73) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74, v75, v76) + 408)
          ? (v80 = 0)
          : (v80 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v77,
                                                         v78,
                                                         v79)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v80) )
      {
        v92 = (int *)(gpsi + 2740LL);
      }
      else
      {
        v92 = (int *)(gpsi + 1964LL);
      }
LABEL_64:
      v38 = *v92;
      if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v94, v93, v95, v96) & 0xF) != 0 )
          goto LABEL_66;
      }
      else if ( !IsDPIDWMSysMet(v94)
             || (W32GetCurrentThreadDpiAwarenessContext(v109, v108, v110, v111) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v113, v114) + 408)
               ? (v118 = 0)
               : (v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v115,
                                                               v116,
                                                               v117)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v118) )
      {
LABEL_66:
        if ( IsDPIDWMSysMet(3uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v98, v97, v99, v100) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103) + 408)
            ? (v107 = 0)
            : (v107 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v104,
                                                            v105,
                                                            v106)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v107) )
        {
          v65 = (_DWORD *)(gpsi + 2668LL);
        }
        else
        {
          v65 = (_DWORD *)(gpsi + 1892LL);
        }
        goto LABEL_81;
      }
      v65 = (_DWORD *)(gpsi + 2280LL);
      goto LABEL_81;
    }
    v92 = (int *)(gpsi + 2352LL);
    goto LABEL_64;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) != 0 )
      goto LABEL_15;
  }
  else if ( !IsDPIDWMSysMet(v12)
         || (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 408)
           ? (v36 = 0)
           : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v33,
                                                          v34,
                                                          v35)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v36) )
  {
LABEL_15:
    if ( IsDPIDWMSysMet(2uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 408)
        ? (v25 = 0)
        : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v22,
                                                       v23,
                                                       v24)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v25) )
    {
      v37 = (int *)(gpsi + 2664LL);
    }
    else
    {
      v37 = (int *)(gpsi + 1888LL);
    }
    goto LABEL_30;
  }
  v37 = (int *)(gpsi + 2276LL);
LABEL_30:
  v38 = *v37;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 0 )
      goto LABEL_32;
  }
  else if ( !IsDPIDWMSysMet(v40)
         || (W32GetCurrentThreadDpiAwarenessContext(v55, v54, v56, v57) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 408)
           ? (v64 = 0)
           : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v61,
                                                          v62,
                                                          v63)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v64) )
  {
LABEL_32:
    if ( IsDPIDWMSysMet(0x14uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
        ? (v53 = 0)
        : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v50,
                                                       v51,
                                                       v52)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v53) )
    {
      v65 = (_DWORD *)(gpsi + 2736LL);
    }
    else
    {
      v65 = (_DWORD *)(gpsi + 1960LL);
    }
    goto LABEL_81;
  }
  v65 = (_DWORD *)(gpsi + 2348LL);
LABEL_81:
  if ( v38 == v125.right - v125.left && *v65 == v125.bottom - v125.top )
  {
    left = a2->left;
    if ( a4 )
      v120 = 2 * (~left & 2 | 0x19u);
    else
      v120 = (left & 2) != 0 ? 46 : 58;
    if ( a3 )
      v120 = (unsigned int)(v120 + 1);
    v121 = DCEx;
    BitBltSysBmp(DCEx, (unsigned int)v125.left, (unsigned int)v125.top, v120);
  }
  else
  {
    v121 = DCEx;
    DrawFrameControl(DCEx, &v125, 3, ~LOBYTE(a2->left) & 2 | (a3 != 0 ? 0x4200 : 0) | (a4 != 0));
  }
  _ReleaseDC(v121);
  if ( a4 )
    v122 = 1544;
  else
    v122 = 1537;
  SetOrClrWF(a3 != 0, a1, v122, 1);
  v9 = 1;
  if ( gdwDeferWinEvent )
    v9 = 3;
  v10 = a4 != 0 ? 5 : 1;
LABEL_96:
  if ( (a2->left & 4) != 0 )
    v123 = -4;
  else
    v123 = ((a2->left & 2) != 0) | 0xFFFFFFFA;
  xxxWindowEvent(0x800Au, (__int64 *)a1, v123, v10, v9);
}
