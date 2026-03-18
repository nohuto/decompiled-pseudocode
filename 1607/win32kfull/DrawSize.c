/*
 * XREFs of DrawSize @ 0x1C022BED4
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C024571C (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, unsigned int a3, int a4)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  _DWORD *v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  int v37; // ebp
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  _DWORD *v53; // rcx
  unsigned int v54; // ebx
  bool v55; // zf
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ecx
  _DWORD *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx
  __int64 v96; // rcx
  _DWORD *v97; // rax
  _DWORD v99[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v100; // [rsp+40h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 49) & 0x40) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) != 0 )
        goto LABEL_4;
    }
    else if ( !IsDPIDWMSysMet(v9)
           || (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
             ? (v33 = 0)
             : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v30,
                                                            v31,
                                                            v32)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v33) )
    {
LABEL_4:
      if ( IsDPIDWMSysMet(2uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18) + 408)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v19,
                                                         v20,
                                                         v21)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v22) )
      {
        v34 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v34 = (_DWORD *)(gpsi + 1888LL);
      }
      goto LABEL_19;
    }
    v34 = (_DWORD *)(gpsi + 2276LL);
LABEL_19:
    a3 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - *v34 - a3;
  }
  v37 = IsDPIAbsoluteSysMet(3uLL);
  if ( v37 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v38, v39) & 0xF) != 0 )
      goto LABEL_22;
LABEL_32:
    v53 = (_DWORD *)(gpsi + 2280LL);
    goto LABEL_37;
  }
  if ( IsDPIDWMSysMet(v36)
    && (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47, v48) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_32;
  }
LABEL_22:
  if ( IsDPIDWMSysMet(3uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v43, v40, v41, v42) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
      ? (v44 = 0)
      : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v44) )
  {
    v53 = (_DWORD *)(gpsi + 2668LL);
  }
  else
  {
    v53 = (_DWORD *)(gpsi + 1892LL);
  }
LABEL_37:
  v54 = *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) - *v53 - a4;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29A )
    v55 = (*(_BYTE *)(a1 + 52) & 0x10) == 0;
  else
    v55 = SizeBoxHwnd(a1, v40, v41, v42) == 0;
  if ( v55 )
  {
    v99[1] = v54;
    v99[0] = a3;
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0 )
        goto LABEL_43;
    }
    else if ( !IsDPIDWMSysMet(v57)
           || (W32GetCurrentThreadDpiAwarenessContext(v66, v65, v67, v68) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71) + 408)
             ? (v72 = 0)
             : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v60,
                                                            v61,
                                                            v62)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v72) )
    {
LABEL_43:
      if ( IsDPIDWMSysMet(2uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v63, v60, v61, v62) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 408)
          ? (v64 = 0)
          : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v60,
                                                         v61,
                                                         v62)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v64) )
      {
        v73 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v73 = (_DWORD *)(gpsi + 1888LL);
      }
LABEL_58:
      v99[2] = *v73;
      if ( v37 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)v73, v60, v61, v62) & 0xF) != 0 )
          goto LABEL_60;
      }
      else if ( !IsDPIDWMSysMet(3uLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87, v88) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
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
LABEL_60:
        if ( IsDPIDWMSysMet(3uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 408)
            ? (v84 = 0)
            : (v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v81,
                                                           v82,
                                                           v83)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v84) )
        {
          v96 = gpsi;
          v97 = (_DWORD *)(gpsi + 2668LL);
        }
        else
        {
          v96 = gpsi;
          v97 = (_DWORD *)(gpsi + 1892LL);
        }
        goto LABEL_75;
      }
      v96 = gpsi;
      v97 = (_DWORD *)(gpsi + 2280LL);
LABEL_75:
      v99[3] = *v97;
      v100 = *(_QWORD *)(v96 + 5208);
      return GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v99, 1);
    }
    v73 = (_DWORD *)(gpsi + 2276LL);
    goto LABEL_58;
  }
  return BitBltSysBmp(a2, a3, v54, (*(_BYTE *)(a1 + 49) & 0x40) != 0 ? 91 : 45);
}
