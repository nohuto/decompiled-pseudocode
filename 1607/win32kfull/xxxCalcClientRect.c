/*
 * XREFs of xxxCalcClientRect @ 0x1C006D964
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C02253D0 (xxxUpdateClientRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C006EAD8 (GetWindowBordersWithDpiAwareness.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxMenuBarCompute @ 0x1C00B7A04 (xxxMenuBarCompute.c)
 *     GetCaptionHeight @ 0x1C011CE48 (GetCaptionHeight.c)
 */

char __fastcall xxxCalcClientRect(__int64 a1, __int128 *a2, int a3)
{
  int v5; // r12d
  int WindowBordersWithDpiAwareness; // ebx
  int v7; // r14d
  signed int v8; // r13d
  signed int v9; // r15d
  int v10; // eax
  int v11; // r12d
  __int64 v12; // rbx
  int v13; // esi
  int v14; // ecx
  char result; // al
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _DWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _DWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _DWORD *v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // ecx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r9
  __int64 v90; // r9
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // ecx
  __int128 v106; // [rsp+30h] [rbp-30h]
  __int128 v107; // [rsp+30h] [rbp-30h]
  __int64 v108; // [rsp+40h] [rbp-20h] BYREF
  __int64 v109; // [rsp+48h] [rbp-18h]
  char v110; // [rsp+A0h] [rbp+40h]

  v110 = *(_BYTE *)(a1 + 40) & 0xF;
  SetOrClrWF(0LL, a1, 15LL, 1LL);
  SetOrClrWF(0LL, a1, 1040LL, 1LL);
  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
  {
    v106 = *a2;
    if ( (*(_BYTE *)(a1 + 54) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1LL, a1, 8LL, 1LL);
      v5 = GetCaptionHeight(a1) + DWORD1(v106);
    }
    else
    {
      v5 = HIDWORD(*(_QWORD *)a2);
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
    v7 = WindowBordersWithDpiAwareness * GetSystemMetricsForWindow(a1, 5LL);
    v8 = v106 + v7;
    v9 = DWORD2(v106) - v7;
    LODWORD(v106) = v106 + v7;
    DWORD2(v106) -= v7;
    v10 = -(WindowBordersWithDpiAwareness * GetSystemMetricsForWindow(a1, 6LL));
    HIDWORD(v107) = v10 + HIDWORD(v106);
    v11 = v5 - v10;
    DWORD1(v107) = v11;
    if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
    {
      v12 = *(_QWORD *)(a1 + 192);
      if ( v12 )
      {
        SetOrClrWF(1LL, a1, 1LL, 1LL);
        if ( !a3 )
        {
          *(_DWORD *)(v12 + 40) |= 0x200u;
          v108 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v108;
          v109 = v12;
          ++*(_DWORD *)(v12 + 8);
          v11 += xxxMenuBarCompute((struct tagMENU *)v12, v9 - v8);
          DWORD1(v107) = v11;
          *(_DWORD *)(v109 + 40) &= ~0x200u;
          ThreadUnlock1(v57, v56);
        }
      }
    }
    v13 = HIDWORD(v107);
    v14 = 0;
    if ( v11 >= SHIDWORD(v107) )
    {
      v13 = v11;
      HIDWORD(v107) = v11;
      v14 = 1;
    }
    if ( (*(_BYTE *)(a1 + 45) & 2) != 0 && v8 >= v9 )
    {
      v9 = v8;
      DWORD2(v107) = v8;
      v14 = 1;
    }
    if ( v14 )
      goto LABEL_12;
    if ( (*(_BYTE *)(a1 + 49) & 2) == 0 )
    {
LABEL_16:
      if ( (*(_BYTE *)(a1 + 54) & 0x10) != 0 && v13 - v11 > (int)GetSystemMetricsForWindow(a1, 3LL) )
      {
        SetOrClrWF(1LL, a1, 4LL, 1LL);
        v16 = a3;
        if ( !a3 )
          HIDWORD(v107) = v13 - GetSystemMetricsForWindow(a1, 3LL);
      }
      else
      {
        v16 = a3;
      }
      if ( (*(_BYTE *)(a1 + 54) & 0x20) != 0 && v9 - v8 >= (int)GetSystemMetricsForWindow(a1, 2LL) )
      {
        SetOrClrWF(1LL, a1, 2LL, 1LL);
        if ( !v16 )
        {
          if ( ((*(unsigned __int8 *)(a1 + 49) >> 6) & 1) != ((*(unsigned __int8 *)(a1 + 50) >> 6) & 1) )
            LODWORD(v107) = GetSystemMetricsForWindow(a1, 2LL) + v8;
          else
            DWORD2(v107) = v9 - GetSystemMetricsForWindow(a1, 2LL);
        }
      }
LABEL_12:
      *a2 = v107;
      goto LABEL_13;
    }
    v20 = IsDPIAbsoluteSysMet(45LL);
    if ( v20 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19) & 0xF) == 0 )
      {
LABEL_58:
        v27 = (_DWORD *)(gpsi + 2448LL);
        goto LABEL_34;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v18)
           && (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_58;
    }
    if ( (unsigned int)IsDPIDWMSysMet(45LL)
      && (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 408)
        ? (v71 = 0)
        : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v68,
                                                       v69,
                                                       v70)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v71) )
    {
      v27 = (_DWORD *)(gpsi + 2836LL);
    }
    else
    {
      v27 = (_DWORD *)(gpsi + 2060LL);
    }
LABEL_34:
    if ( v9 - v8 < 2 * *v27 )
      goto LABEL_16;
    v30 = IsDPIAbsoluteSysMet(46LL);
    if ( v30 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v31) & 0xF) == 0 )
      {
LABEL_72:
        v38 = (_DWORD *)(gpsi + 2452LL);
        goto LABEL_39;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v29)
           && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_72;
    }
    if ( (unsigned int)IsDPIDWMSysMet(46LL)
      && (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 408)
        ? (v85 = 0)
        : (v85 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v82,
                                                       v83,
                                                       v84)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v85) )
    {
      v38 = (_DWORD *)(gpsi + 2840LL);
    }
    else
    {
      v38 = (_DWORD *)(gpsi + 2064LL);
    }
LABEL_39:
    if ( v13 - v11 < 2 * *v38 )
      goto LABEL_16;
    SetOrClrWF(1LL, a1, 1040LL, 1LL);
    if ( v30 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41) & 0xF) == 0 )
      {
LABEL_86:
        v48 = (_DWORD *)(gpsi + 2452LL);
        goto LABEL_44;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(46LL) && (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44) & 0xF) == 0 )
    {
      v46 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v47, v89)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1;
      if ( (_DWORD)v46 )
        goto LABEL_86;
    }
    if ( (unsigned int)IsDPIDWMSysMet(46LL)
      && (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v47, v90) + 408)
        ? (v46 = 0LL)
        : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v45,
                                                       v47,
                                                       v91)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          (_DWORD)v46) )
    {
      v48 = (_DWORD *)(gpsi + 2840LL);
    }
    else
    {
      v48 = (_DWORD *)(gpsi + 2064LL);
    }
LABEL_44:
    if ( v20 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47) & 0xF) == 0 )
      {
LABEL_100:
        v55 = (_DWORD *)(gpsi + 2448LL);
LABEL_48:
        v11 += *v48;
        v8 += *v55;
        v9 -= *v55;
        *(_QWORD *)&v107 = __PAIR64__(v11, v8);
        v13 -= *v48;
        *((_QWORD *)&v107 + 1) = __PAIR64__(v13, v9);
        goto LABEL_16;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(45LL)
           && (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_100;
    }
    if ( (unsigned int)IsDPIDWMSysMet(45LL)
      && (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v99, v100, v101) + 408)
        ? (v105 = 0)
        : (v105 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v102,
                                                        v103,
                                                        v104)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v105) )
    {
      v55 = (_DWORD *)(gpsi + 2836LL);
    }
    else
    {
      v55 = (_DWORD *)(gpsi + 2060LL);
    }
    goto LABEL_48;
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)a2;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a2 + 1);
LABEL_13:
  result = *(_BYTE *)(a1 + 40) & 0xF;
  if ( v110 != result )
  {
    result = *(_BYTE *)(a1 + 47);
    if ( result < 0 )
      return xxxWindowEvent(32772, a1, 0, 0, 1);
  }
  return result;
}
