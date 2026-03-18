/*
 * XREFs of MNDrawArrow @ 0x1C0236A44
 * Callers:
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  HDC DCEx; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  int *v27; // rcx
  int v28; // r14d
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  unsigned int v35; // r14d
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  int v65; // ecx
  unsigned int *v66; // rcx
  unsigned int v67; // edi
  unsigned int v68; // esi
  __int64 v69; // rdx
  int v70; // ebx
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // ecx
  _DWORD *v88; // rbx
  struct tagDPIMETRICS *DPIMETRICS; // rax
  int v90; // edi
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  int v104; // ecx
  _QWORD *v105; // rax
  __int64 v106; // rax
  RECT v107; // [rsp+20h] [rbp-38h] BYREF

  result = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(result + 128) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v5, 0LL, 66561LL);
    v11 = IsDPIAbsoluteSysMet(7uLL);
    if ( v11 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v12, v13) & 0xF) != 0 )
        goto LABEL_7;
    }
    else if ( !IsDPIDWMSysMet(v10)
           || (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
             ? (v26 = 0)
             : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v14,
                                                            v15,
                                                            v16)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v26) )
    {
LABEL_7:
      if ( IsDPIDWMSysMet(7uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v17, v14, v15, v16) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 408)
          ? (v18 = 0)
          : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v14,
                                                         v15,
                                                         v16)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v18) )
      {
        v27 = (int *)(gpsi + 2684LL);
      }
      else
      {
        v27 = (int *)(gpsi + 1908LL);
      }
LABEL_22:
      v28 = *v27;
      v29 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 40LL);
      if ( (int)v29 >= 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v14, v15, v16) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v32, v33) + 408)
            ? (v31 = 0LL)
            : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v30,
                                                           v32,
                                                           v33)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v31 || *(_WORD *)(gpsi + 8678LL) == 96) )
        {
          v34 = gpsi + 5652LL;
        }
        else
        {
          v34 = gpsi + 7140LL;
        }
        v35 = *(_DWORD *)(v34 + 1016) + v28;
LABEL_50:
        if ( a3 == -3 )
        {
          if ( v11 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) != 0 )
              goto LABEL_53;
          }
          else if ( !IsDPIDWMSysMet(7uLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59, v60) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 408)
                   ? (v65 = 0)
                   : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v64,
                                                                  v50,
                                                                  v51)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v65) )
          {
LABEL_53:
            if ( IsDPIDWMSysMet(7uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v53, v52, v50, v51) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v50, v51) + 408)
                ? (v56 = 0)
                : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v55,
                                                               v50,
                                                               v51)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v56) )
            {
              v66 = (unsigned int *)(gpsi + 2684LL);
            }
            else
            {
              v66 = (unsigned int *)(gpsi + 1908LL);
            }
            goto LABEL_68;
          }
          v66 = (unsigned int *)(gpsi + 2296LL);
LABEL_68:
          v67 = *v66;
          v68 = 65;
          v69 = 2LL;
          v70 = 8;
          goto LABEL_87;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73, v74) & 0xF) != 0 )
            goto LABEL_71;
        }
        else if ( !IsDPIDWMSysMet(v72)
               || (W32GetCurrentThreadDpiAwarenessContext(v81, v80, v82, v83) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86) + 408)
                 ? (v87 = 0)
                 : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v75,
                                                                v76,
                                                                v77)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v87) )
        {
LABEL_71:
          if ( IsDPIDWMSysMet(8uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v78, v75, v76, v77) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
              ? (v79 = 0)
              : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v75,
                                                             v76,
                                                             v77)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v79) )
          {
            v88 = (_DWORD *)(gpsi + 2688LL);
          }
          else
          {
            v88 = (_DWORD *)(gpsi + 1912LL);
          }
          goto LABEL_86;
        }
        v88 = (_DWORD *)(gpsi + 2300LL);
LABEL_86:
        DPIMETRICS = GetDPIMETRICS((struct tagWND *)v5, v75, v76, v77);
        v90 = *(_DWORD *)(v5 + 124) - *(_DWORD *)(v5 + 116);
        v68 = 68;
        v67 = v90 - *((_DWORD *)DPIMETRICS + 17) - *v88;
        v69 = 3LL;
        v70 = 16;
LABEL_87:
        v91 = *(_QWORD *)(a2 + 40);
        if ( (*(_DWORD *)(v91 + 128) & 3) == (_DWORD)v69 )
        {
          v68 += 2;
          v70 |= 0x100u;
        }
        if ( !*(_QWORD *)(v91 + 112) )
        {
          BitBltSysBmp(DCEx, v35, v67, v68);
          result = BitBltSysBmp(DCEx, v35, v67, v68);
LABEL_110:
          if ( !a1 )
            return _ReleaseDC(DCEx);
          return result;
        }
        v107.top = v67;
        v107.left = v35;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v91, v69, v50, v51) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 408)
            ? (v95 = 0)
            : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v92,
                                                           v93,
                                                           v94)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !v95) )
        {
          v96 = (_QWORD *)gpsi;
        }
        else
        {
          v96 = (_QWORD *)gpsi;
          if ( *(_WORD *)(gpsi + 8678LL) != 96 )
          {
            v97 = gpsi + 7140LL;
LABEL_99:
            v107.right = v35 + *(_DWORD *)(v97 + 1048);
            if ( (W32GetCurrentThreadDpiAwarenessContext((unsigned int)v107.right, v92, v93, v94) & 0xF) != 0
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
              v105 = (_QWORD *)gpsi;
            }
            else
            {
              v105 = (_QWORD *)gpsi;
              if ( *(_WORD *)(gpsi + 8678LL) != 96 )
              {
                v106 = gpsi + 7140LL;
LABEL_108:
                v107.bottom = v67 + *(_DWORD *)(v106 + 1052);
                result = DrawFrameControl(DCEx, &v107, 2, v70 | 0x800u);
                goto LABEL_110;
              }
            }
            v106 = *v105 + 5652LL;
            goto LABEL_108;
          }
        }
        v97 = *v96 + 5652LL;
        goto LABEL_99;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) != 0 )
          goto LABEL_34;
      }
      else if ( !IsDPIDWMSysMet(v37)
             || (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
               ? (v49 = 0)
               : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v30,
                                                              v32,
                                                              v33)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v49) )
      {
LABEL_34:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v40, v30, v32, v33) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v32, v33) + 408)
            ? (v41 = 0)
            : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v30,
                                                           v32,
                                                           v33)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v41) )
        {
          v31 = gpsi + 2836LL;
        }
        else
        {
          v31 = gpsi + 2060LL;
        }
        goto LABEL_49;
      }
      v31 = gpsi + 2448LL;
LABEL_49:
      v35 = v28 + 2 * *(_DWORD *)v31;
      goto LABEL_50;
    }
    v27 = (int *)(gpsi + 2296LL);
    goto LABEL_22;
  }
  return result;
}
