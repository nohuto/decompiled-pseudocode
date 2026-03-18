/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C00B5C08 (GetDPIMETRICSForDpi.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

void __fastcall xxxTooltipRender(struct tagTOOLTIPWND *a1, HDC a2)
{
  int v4; // edx
  int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
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
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  const WCHAR *SourceString; // r8
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // ecx
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
  LONG *v90; // rdi
  __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // ecx
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
  _DWORD *v117; // rcx
  unsigned __int16 *v118; // r8
  __int64 v119; // rax
  RECT v120; // [rsp+50h] [rbp-48h] BYREF

  if ( *((_QWORD *)a1 + 50) )
  {
    GetDPIMETRICSForDpi();
    GreSelectFontInternal(a2);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 5052LL));
    v4 = -*((_DWORD *)a1 + 32);
    v5 = -*((_DWORD *)a1 + 33);
    v6 = *(_DWORD *)(gpsi + 5056LL);
    v120.left = 0;
    v120.right = v4 + *((_DWORD *)a1 + 34);
    v120.top = v5 + *((_DWORD *)a1 + 33);
    v120.bottom = v5 + *((_DWORD *)a1 + 35);
    if ( v6 == (unsigned int)GreGetNearestColor(a2, v6) )
    {
      GreSetBkColor(a2, v6);
      v10 = 2;
    }
    else
    {
      FillRect(a2, &v120, *(HBRUSH *)(gpsi + 5280LL));
      GreSetBkMode(a2, 1);
      v10 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 0 )
          goto LABEL_18;
      }
      else if ( IsDPIDWMSysMet(v13)
             && (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v33,
                                                      v34,
                                                      v35)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_18;
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) == 1
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
      }
LABEL_18:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) == 0 )
        {
LABEL_30:
          SourceString = (const WCHAR *)*((_QWORD *)a1 + 50);
          v63 = -1LL;
          do
            ++v63;
          while ( SourceString[v63] );
          xxxClientExtTextOutW(a2, (__int64)&v120, SourceString, v63);
          return;
        }
      }
      else if ( IsDPIDWMSysMet(v38)
             && (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v58,
                                                      v59,
                                                      v60)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_30;
      }
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v42, v41, v43, v44) & 0xF) == 1
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 408) )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50);
      }
      goto LABEL_30;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v65, v64, v66, v67) & 0xF) != 0 )
        goto LABEL_35;
    }
    else if ( !IsDPIDWMSysMet(v65)
           || (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81, v82) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 408)
             ? (v89 = 0)
             : (v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v86,
                                                            v87,
                                                            v88)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v89) )
    {
LABEL_35:
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v69, v68, v70, v71) & 0xF) == 1
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
        v90 = (LONG *)(gpsi + 2680LL);
      }
      else
      {
        v90 = (LONG *)(gpsi + 1904LL);
      }
LABEL_50:
      if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94) & 0xF) != 0 )
          goto LABEL_52;
      }
      else if ( !IsDPIDWMSysMet(v92)
             || (W32GetCurrentThreadDpiAwarenessContext(v107, v106, v108, v109) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 408)
               ? (v116 = 0)
               : (v116 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v113,
                                                               v114,
                                                               v115)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v116) )
      {
LABEL_52:
        if ( IsDPIDWMSysMet(5uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v96, v95, v97, v98) & 0xF) == 1
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
          v117 = (_DWORD *)(gpsi + 2676LL);
        }
        else
        {
          v117 = (_DWORD *)(gpsi + 1900LL);
        }
        goto LABEL_67;
      }
      v117 = (_DWORD *)(gpsi + 2288LL);
LABEL_67:
      v118 = (unsigned __int16 *)*((_QWORD *)a1 + 50);
      v119 = -1LL;
      do
        ++v119;
      while ( v118[v119] );
      GreExtTextOutWInternal(a2, 2 * *v117, *v90, v10, &v120, v118, v119, 0LL, 0LL, 0);
      return;
    }
    v90 = (LONG *)(gpsi + 2292LL);
    goto LABEL_50;
  }
}
