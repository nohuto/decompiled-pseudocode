/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022A858
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022AD58 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  _DWORD *v1; // rdi
  _DWORD *v2; // r14
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  _DWORD *v30; // rcx
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
  __int64 v57; // rax
  int v58; // edx
  int v59; // ecx
  int v60; // r8d

  v1 = (_DWORD *)((char *)a1 + 32);
  v2 = (_DWORD *)((char *)a1 + 32);
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0xAuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0 )
        goto LABEL_22;
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
LABEL_22:
      if ( IsDPIDWMSysMet(0xAuLL)
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
        v30 = (_DWORD *)(gpsi + 2696LL);
      }
      else
      {
        v30 = (_DWORD *)(gpsi + 1920LL);
      }
      goto LABEL_37;
    }
    v30 = (_DWORD *)(gpsi + 2308LL);
LABEL_37:
    v2 = v1 + 1;
    goto LABEL_38;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(9uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v5, v4, v6, v7) & 0xF) != 0 )
      goto LABEL_4;
  }
  else if ( !IsDPIDWMSysMet(v5)
         || (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
           ? (v29 = 0)
           : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v26,
                                                          v27,
                                                          v28)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v29) )
  {
LABEL_4:
    if ( IsDPIDWMSysMet(9uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
        ? (v18 = 0)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v15,
                                                       v16,
                                                       v17)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v18) )
    {
      v30 = (_DWORD *)(gpsi + 2692LL);
    }
    else
    {
      v30 = (_DWORD *)(gpsi + 1916LL);
    }
    goto LABEL_19;
  }
  v30 = (_DWORD *)(gpsi + 2304LL);
LABEL_19:
  ++v1;
LABEL_38:
  v57 = *((_QWORD *)a1 + 12);
  v58 = 2 * *v30;
  v59 = *(_DWORD *)(v57 + 24);
  v60 = 8 * (*(_DWORD *)(v57 + 28) - v59);
  *v2 = v59 - v60;
  *v1 = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - v58;
  v2[2] = v60 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  v1[2] = v58 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
