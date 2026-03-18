/*
 * XREFs of _GetClientRect @ 0x1C010B47C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSendSizeMessage @ 0x1C010B400 (xxxSendSizeMessage.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0233F08 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _BOOL8 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _BOOL8 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int *v29; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  _DWORD *v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // ecx

  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 || (*(_BYTE *)(a1 + 45) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x29D )
    {
      *(_OWORD *)a2 = *(_OWORD *)(a1 + 128);
      v3 = *(_DWORD *)(a1 + 128);
      v4 = -*(_DWORD *)(a1 + 132);
      *(_DWORD *)(a2 + 12) += v4;
      result = (unsigned int)-v3;
      *(_DWORD *)a2 += result;
      *(_DWORD *)(a2 + 8) += result;
      *(_DWORD *)(a2 + 4) += v4;
      return result;
    }
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0LL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) == 0 )
      {
LABEL_60:
        v17 = (_DWORD *)(gpsi + 2268LL);
        goto LABEL_8;
      }
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) == 0 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1;
      if ( v11 )
        goto LABEL_60;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 408)
        ? (v87 = 0)
        : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v84,
                                                       v85,
                                                       v86)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v87) )
    {
      v17 = (_DWORD *)(gpsi + 2656LL);
    }
    else
    {
      v17 = (_DWORD *)(gpsi + 1880LL);
    }
LABEL_8:
    *(_DWORD *)(a2 + 8) = *v17;
    if ( (unsigned int)IsDPIAbsoluteSysMet(1uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 0 )
      {
LABEL_67:
        v29 = (unsigned int *)(gpsi + 2272LL);
        goto LABEL_12;
      }
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 0 )
    {
      v23 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24, v25) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24, v25)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1;
      if ( v23 )
        goto LABEL_67;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 408)
        ? (v91 = 0)
        : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v88,
                                                       v89,
                                                       v90)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v91) )
    {
      v29 = (unsigned int *)(gpsi + 2660LL);
    }
    else
    {
      v29 = (unsigned int *)(gpsi + 1884LL);
    }
    goto LABEL_12;
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0 )
      goto LABEL_27;
  }
  else if ( !IsDPIDWMSysMet(v32)
         || (W32GetCurrentThreadDpiAwarenessContext(v47, v46, v48, v49) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
           ? (v56 = 0)
           : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v53,
                                                          v54,
                                                          v55)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v56) )
  {
LABEL_27:
    if ( IsDPIDWMSysMet(0x39uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v36, v35, v37, v38) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 408)
        ? (v45 = 0)
        : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v42,
                                                       v43,
                                                       v44)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v45) )
    {
      v57 = (_DWORD *)(gpsi + 2884LL);
    }
    else
    {
      v57 = (_DWORD *)(gpsi + 2108LL);
    }
    goto LABEL_42;
  }
  v57 = (_DWORD *)(gpsi + 2496LL);
LABEL_42:
  *(_DWORD *)(a2 + 8) = *v57;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v59, v58, v60, v61) & 0xF) != 0 )
      goto LABEL_44;
  }
  else if ( !IsDPIDWMSysMet(v59)
         || (W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 408)
           ? (v83 = 0)
           : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v80,
                                                          v81,
                                                          v82)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v83) )
  {
LABEL_44:
    if ( IsDPIDWMSysMet(0x3AuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64, v65) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 408)
        ? (v72 = 0)
        : (v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v69,
                                                       v70,
                                                       v71)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v72) )
    {
      v29 = (unsigned int *)(gpsi + 2888LL);
    }
    else
    {
      v29 = (unsigned int *)(gpsi + 2112LL);
    }
    goto LABEL_12;
  }
  v29 = (unsigned int *)(gpsi + 2500LL);
LABEL_12:
  result = *v29;
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
