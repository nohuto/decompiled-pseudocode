/*
 * XREFs of SetTiledRect @ 0x1C0104F70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     InternalGetRealClientRect @ 0x1C01052BC (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rcx
  int v21; // edi
  _DWORD *v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r14d
  _DWORD *v28; // rdx
  int v29; // r15d
  int v30; // ecx
  int v31; // edi
  int v32; // ecx
  __int64 result; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _DWORD *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _DWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _DWORD *v61; // rcx
  __int64 v62; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // ecx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  int v124; // ecx
  int v125; // [rsp+30h] [rbp-38h] BYREF
  int v126; // [rsp+34h] [rbp-34h]
  int v127; // [rsp+38h] [rbp-30h]
  int v128; // [rsp+3Ch] [rbp-2Ch]

  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v125, 2, v6, 0);
  ++*(_WORD *)(a3 + 156);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) != 0 )
    v11 = (_DWORD *)(gpsi + 2008LL);
  else
    v11 = (_DWORD *)(gpsi + 2396LL);
  v14 = IsDPIAbsoluteSysMet(0x1EuLL);
  if ( v14 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v15, v16) & 0xF) != 0 )
    {
LABEL_5:
      v20 = (_DWORD *)(gpsi + 2000LL);
      goto LABEL_6;
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v13) || (W32GetCurrentThreadDpiAwarenessContext(v62, v17, v18, v19) & 0xF) != 0 )
      goto LABEL_5;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_5;
    }
  }
  v20 = (_DWORD *)(gpsi + 2388LL);
LABEL_6:
  v21 = *(__int16 *)(a3 + 156) * (*v11 + *v20);
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v20, v17, v18, v19) & 0xF) != 0 )
    v22 = (_DWORD *)(gpsi + 2012LL);
  else
    v22 = (_DWORD *)(gpsi + 2400LL);
  v27 = IsDPIAbsoluteSysMet(0x1FuLL);
  if ( !v27 )
  {
    if ( !IsDPIDWMSysMet(v24) || (W32GetCurrentThreadDpiAwarenessContext(v65, v64, v66, v67) & 0xF) != 0 )
      goto LABEL_10;
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73)
                                             + 408)
                                 + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_10;
    }
LABEL_17:
    v28 = (_DWORD *)(gpsi + 2392LL);
    goto LABEL_11;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 0 )
    goto LABEL_17;
LABEL_10:
  v28 = (_DWORD *)(gpsi + 2004LL);
LABEL_11:
  v29 = v127 - v125;
  v30 = *(__int16 *)(a3 + 156) * (*v28 + *v22);
  if ( v21 > (v127 - v125) / 4 || v30 > (v128 - v126) / 4 )
  {
    *(_WORD *)(a3 + 156) = 0;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x20uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37) & 0xF) != 0 )
        goto LABEL_20;
    }
    else if ( !IsDPIDWMSysMet(v35)
           || (W32GetCurrentThreadDpiAwarenessContext(v76, v75, v77, v78) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 408)
             ? (v39 = 0LL)
             : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v38,
                                                            v40,
                                                            v41)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !(_DWORD)v39) )
    {
LABEL_20:
      if ( IsDPIDWMSysMet(0x20uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v40, v41) + 408)
          ? (v39 = 0LL)
          : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v38,
                                                         v40,
                                                         v41)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            (_DWORD)v39) )
      {
        v42 = (_DWORD *)(gpsi + 2784LL);
      }
      else
      {
        v42 = (_DWORD *)(gpsi + 2008LL);
      }
LABEL_22:
      if ( v14 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) != 0 )
          goto LABEL_24;
      }
      else if ( !IsDPIDWMSysMet(0x1EuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84, v85) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 408)
               ? (v92 = 0)
               : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v89,
                                                              v90,
                                                              v91)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v92) )
      {
LABEL_24:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 408)
            ? (v99 = 0)
            : (v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v96,
                                                           v97,
                                                           v98)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v99) )
        {
          v47 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v47 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_26:
        v21 = *v42 + *v47;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x21uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v49, v48, v50, v51) & 0xF) != 0 )
            goto LABEL_28;
        }
        else if ( !IsDPIDWMSysMet(v49)
               || (W32GetCurrentThreadDpiAwarenessContext(v101, v100, v102, v103) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 408)
                 ? (v53 = 0LL)
                 : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v52,
                                                                v54,
                                                                v55)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !(_DWORD)v53) )
        {
LABEL_28:
          if ( IsDPIDWMSysMet(0x21uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54, v55) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v54, v55) + 408)
              ? (v53 = 0LL)
              : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v52,
                                                             v54,
                                                             v55)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                (_DWORD)v53) )
          {
            v56 = (_DWORD *)(gpsi + 2788LL);
          }
          else
          {
            v56 = (_DWORD *)(gpsi + 2012LL);
          }
LABEL_30:
          if ( v27 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54, v55) & 0xF) != 0 )
              goto LABEL_32;
          }
          else if ( !IsDPIDWMSysMet(0x1FuLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v108, v107, v109, v110) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 408)
                   ? (v117 = 0)
                   : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                   (__int64)KeGetCurrentThread(),
                                                                   v114,
                                                                   v115,
                                                                   v116)
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                     !v117) )
          {
LABEL_32:
            if ( IsDPIDWMSysMet(0x1FuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 408)
                ? (v124 = 0)
                : (v124 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v121,
                                                                v122,
                                                                v123)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v124) )
            {
              v61 = (_DWORD *)(gpsi + 2780LL);
            }
            else
            {
              v61 = (_DWORD *)(gpsi + 2004LL);
            }
            goto LABEL_34;
          }
          v61 = (_DWORD *)(gpsi + 2392LL);
LABEL_34:
          v30 = *v56 + *v61;
          goto LABEL_13;
        }
        v56 = (_DWORD *)(gpsi + 2400LL);
        goto LABEL_30;
      }
      v47 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_26;
    }
    v42 = (_DWORD *)(gpsi + 2396LL);
    goto LABEL_22;
  }
LABEL_13:
  v31 = v125 + v21;
  v32 = v126 + v30;
  *a2 = v31;
  a2[1] = v32;
  a2[2] = v31 + (v29 + 2 * (v29 + 1)) / 4;
  result = (unsigned int)(v32 + (3 * (v128 - v126) + 2) / 4);
  a2[3] = result;
  return result;
}
