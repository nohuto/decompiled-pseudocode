/*
 * XREFs of ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C00E0064 (ProcessMouseInputViaRim.c)
 *     xxxMoveEvent @ 0x1C011E61C (xxxMoveEvent.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C000D61C (AcquireMagInputLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DoNewMouseAccel @ 0x1C00AEB48 (DoNewMouseAccel.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     GetDpiForSystem @ 0x1C0129578 (GetDpiForSystem.c)
 *     DoTouchpadAccel @ 0x1C01CA6AC (DoTouchpadAccel.c)
 *     MagInputTransform @ 0x1C01FAEF4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01FAFBC (MagnificationTransformPoint.c)
 */

void __fastcall GetMouseCoord(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct tagPOINT *a6,
        struct _SUBPIXELS *a7,
        int a8,
        int a9,
        int a10)
{
  struct _SUBPIXELS *v10; // r14
  int v11; // r12d
  char v12; // r13
  int v13; // r12d
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // ecx
  int *v40; // rcx
  int v41; // r15d
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  int v61; // ecx
  int *v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // ecx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  int *v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  LONG v108; // r15d
  struct tagPOINT *v109; // rbx
  int v110; // edx
  unsigned int x_high; // eax
  __int64 v112; // rdx
  unsigned int y_high; // eax
  __int64 v114; // rdx
  unsigned __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  _DWORD *v129; // rcx
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
  __int64 v141; // rdx
  unsigned __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rcx
  int v146; // ecx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  int v154; // ecx
  INT v155; // eax
  LONG y; // ecx
  __int64 v157; // rax
  __int64 v158; // r8
  char CurrentThreadDpiAwarenessContext; // al
  struct tagPOINT *v160; // r15
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rsi
  __int64 v164; // r8
  __int64 v165; // r9
  INT DpiForSystem; // ebx
  INT v167; // eax
  INT v168; // edx
  int v169; // ecx
  int v170; // eax
  int v171; // r8d
  int v172; // r10d
  int v173; // eax
  int v174; // eax
  INT a; // [rsp+60h] [rbp+40h] BYREF
  INT v176; // [rsp+68h] [rbp+48h] BYREF
  __int64 v177; // [rsp+78h] [rbp+58h]

  v177 = a4;
  v176 = a2;
  a = a1;
  v10 = a7;
  v11 = a4;
  v12 = a3;
  *(_QWORD *)a7 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4);
    v160 = a6;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      v163 = MonitorFromPoint((unsigned __int64)*a6, 0x20u);
      if ( v163 )
      {
        DpiForSystem = GetDpiForSystem(v162, v161, v164, v165);
        v167 = EngMulDiv(a, *(unsigned __int16 *)(v163 + 154), DpiForSystem);
        v168 = *(unsigned __int16 *)(v163 + 154);
        a = v167;
        v176 = EngMulDiv(v176, v168, DpiForSystem);
      }
    }
    if ( a10 )
    {
      if ( gMouseSpeed || (qword_1C03281F0 & 0x8000000000LL) == 0 )
      {
        DoTouchpadAccel(&a, &v176);
LABEL_146:
        v160->x += a;
        v160->y += v176;
        *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd) = LOWORD(v160->x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL)
                                                                                                 - 1) << 16);
        *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 1) = LOWORD(v160->y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL) - 1) << 16);
        *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 2) = v11;
        goto LABEL_147;
      }
    }
    else if ( gMouseSpeed )
    {
      DoNewMouseAccel(&a, &v176, v10);
      goto LABEL_146;
    }
    if ( gMouseSensitivity == 10 )
    {
      *(_DWORD *)v10 = rand() % 0x10000;
      v174 = rand() % 0x10000;
    }
    else
    {
      if ( a )
      {
        v169 = idxRemainder + a * gMouseSensitivityFactor;
        v170 = v169 % 256;
        a = v169 / 256;
        v171 = v169 % 256;
        idxRemainder = v169 % 256;
        if ( v169 < 0 && v170 > 0 )
        {
          ++a;
          v171 = v170 - 256;
          idxRemainder = v170 - 256;
        }
      }
      else
      {
        v171 = idxRemainder;
      }
      if ( v176 )
      {
        v172 = idyRemainder + v176 * gMouseSensitivityFactor;
        v173 = v172 % 256;
        v176 = v172 / 256;
        idyRemainder = v172 % 256;
        if ( v172 < 0 && v173 > 0 )
        {
          ++v176;
          v173 -= 256;
          idyRemainder = v173;
        }
      }
      else
      {
        v173 = idyRemainder;
      }
      *(_DWORD *)v10 = v171 << 8;
      v174 = v173 << 8;
    }
    *((_DWORD *)v10 + 1) = v174;
    goto LABEL_146;
  }
  v13 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) != 0 )
        goto LABEL_5;
    }
    else if ( !IsDPIDWMSysMet(v15)
           || (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 408)
             ? (v39 = 0)
             : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v36,
                                                            v37,
                                                            v38)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v39) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x4EuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 408)
          ? (v28 = 0)
          : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v25,
                                                         v26,
                                                         v27)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v28) )
      {
        v40 = (int *)(gpsi + 2968LL);
      }
      else
      {
        v40 = (int *)(gpsi + 2192LL);
      }
LABEL_20:
      v41 = *v40;
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0 )
          goto LABEL_22;
      }
      else if ( !IsDPIDWMSysMet(v43)
             || (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
               ? (v61 = 0)
               : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v60,
                                                              v46,
                                                              v47)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v61) )
      {
LABEL_22:
        if ( IsDPIDWMSysMet(0x4FuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v46, v47) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v46, v47) + 408)
            ? (v52 = 0)
            : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v51,
                                                           v46,
                                                           v47)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v52) )
        {
          v62 = (int *)(gpsi + 2972LL);
        }
        else
        {
          v62 = (int *)(gpsi + 2196LL);
        }
        goto LABEL_71;
      }
      v62 = (int *)(gpsi + 2584LL);
      goto LABEL_71;
    }
    v40 = (int *)(gpsi + 2580LL);
    goto LABEL_20;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0LL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v64, v63, v65, v66) & 0xF) != 0 )
      goto LABEL_39;
LABEL_49:
    v89 = (int *)(gpsi + 2268LL);
    goto LABEL_54;
  }
  if ( IsDPIDWMSysMet(v64)
    && (W32GetCurrentThreadDpiAwarenessContext(v79, v78, v80, v81) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_49;
  }
LABEL_39:
  if ( IsDPIDWMSysMet(0LL)
    && (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73) + 408)
      ? (v77 = 0)
      : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74, v75, v76)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v77) )
  {
    v89 = (int *)(gpsi + 2656LL);
  }
  else
  {
    v89 = (int *)(gpsi + 1880LL);
  }
LABEL_54:
  v41 = *v89;
  if ( (unsigned int)IsDPIAbsoluteSysMet(1uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92, v93) & 0xF) != 0 )
      goto LABEL_56;
LABEL_66:
    v62 = (int *)(gpsi + 2272LL);
    goto LABEL_71;
  }
  if ( IsDPIDWMSysMet(v91)
    && (W32GetCurrentThreadDpiAwarenessContext(v100, v99, v101, v102) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v46, v47) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_66;
  }
LABEL_56:
  if ( IsDPIDWMSysMet(1uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v95, v94, v46, v47) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v46, v47) + 408)
      ? (v98 = 0)
      : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v46, v47)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v98) )
  {
    v62 = (int *)(gpsi + 2660LL);
  }
  else
  {
    v62 = (int *)(gpsi + 1884LL);
  }
LABEL_71:
  v108 = a * v41;
  v109 = a6;
  v110 = *v62;
  a6->x = v108;
  if ( v108 < 0 )
  {
    *(_DWORD *)v10 = -(unsigned __int16)-(__int16)v108;
    x_high = -((unsigned int)-v109->x >> 16);
  }
  else
  {
    *(_DWORD *)v10 = (unsigned __int16)v108;
    x_high = HIWORD(v109->x);
  }
  v112 = (unsigned int)(v176 * v110);
  v109->x = x_high;
  v109->y = v112;
  if ( (int)v112 < 0 )
  {
    LOWORD(v112) = -(__int16)v112;
    *((_DWORD *)v10 + 1) = -(unsigned __int16)v112;
    y_high = -((unsigned int)-v109->y >> 16);
  }
  else
  {
    *((_DWORD *)v10 + 1) = (unsigned __int16)v112;
    y_high = HIWORD(v109->y);
  }
  v109->y = y_high;
  if ( !v13 )
    goto LABEL_114;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x4CuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v115, v114, v116, v117) & 0xF) != 0 )
      goto LABEL_88;
LABEL_87:
    v129 = (_DWORD *)(gpsi + 2572LL);
    goto LABEL_96;
  }
  if ( IsDPIDWMSysMet(v115)
    && (W32GetCurrentThreadDpiAwarenessContext(v119, v118, v120, v121) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v122, v123, v124) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v125, v126, v127) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_87;
  }
LABEL_88:
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v131, v130, v132, v133) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 408)
      ? (v140 = 0)
      : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v137,
                                                      v138,
                                                      v139)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
        v140) )
  {
    v129 = (_DWORD *)(gpsi + 2960LL);
  }
  else
  {
    v129 = (_DWORD *)(gpsi + 2184LL);
  }
LABEL_96:
  v109->x += *v129;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x4DuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v142, v141, v143, v144) & 0xF) != 0 )
      goto LABEL_98;
  }
  else if ( !IsDPIDWMSysMet(v142)
         || (W32GetCurrentThreadDpiAwarenessContext(v148, v147, v149, v150) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v151, v152, v153) + 408)
           ? (v154 = 0)
           : (v154 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v112,
                                                           v46,
                                                           v47)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v154) )
  {
LABEL_98:
    if ( IsDPIDWMSysMet(0x4DuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v145, v112, v46, v47) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v46, v47) + 408)
        ? (v146 = 0)
        : (v146 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v112,
                                                        v46,
                                                        v47)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v146) )
    {
      v62 = (int *)(gpsi + 2964LL);
    }
    else
    {
      v62 = (int *)(gpsi + 2188LL);
    }
    goto LABEL_113;
  }
  v62 = (int *)(gpsi + 2576LL);
LABEL_113:
  v109->y += *v62;
LABEL_114:
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v62, v112, v46, v47) & 0xF) != 2 )
  {
    LogicalToPhysicalDPIPoint(v109, v109, 0LL, 0LL);
    v155 = EngMulDiv(v109->x - *(_DWORD *)(gpsi + 2184LL), 0xFFFF, *(_DWORD *)(gpsi + 2192LL));
    y = v109->y;
    a = v155;
    v176 = EngMulDiv(y - *(_DWORD *)(gpsi + 2188LL), 0xFFFF, *(_DWORD *)(gpsi + 2196LL));
  }
  idyRemainder = 0;
  idxRemainder = 0;
  if ( !a9 || (v12 & 0x20) != 0 )
  {
    AcquireMagInputLock();
    v157 = MagInputTransform();
    if ( v157 && PtInRect((_DWORD *)(v157 + 16), (unsigned __int64)*v109) )
      MagnificationTransformPoint(v158, v109);
    _InterlockedExchange64(&gpMagInputLock, 0LL);
  }
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd) = a | 0xFFFF0000;
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 1) = v176 | 0xFFFF0000;
  *((_DWORD *)&gaptMouse + 6 * (unsigned int)gptInd + 2) = v177;
LABEL_147:
  *((_QWORD *)&gaptMouse + 3 * (unsigned int)gptInd + 2) = a5;
  gptInd = ((_BYTE)gptInd + 1) & 0x3F;
}
