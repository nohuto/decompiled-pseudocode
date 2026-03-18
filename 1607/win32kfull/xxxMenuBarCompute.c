/*
 * XREFs of xxxMenuBarCompute @ 0x1C00B7A04
 * Callers:
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     xxxCalcMenuBar @ 0x1C00B85DC (xxxCalcMenuBar.c)
 *     xxxPaintMenuBar @ 0x1C012D944 (xxxPaintMenuBar.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0232EDC (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C00B7B88 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C00B83FC (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(struct tagMENU *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  struct tagMENU *v9; // rbp
  __int16 v10; // di
  int v11; // r14d
  int v12; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  unsigned int v42; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a4;
  v42 = 0;
  v7 = a3;
  v9 = a1;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 288) & 0x10000000) != 0 )
    {
      v10 = *(_WORD *)(a2 + 356);
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(a2 + 352) & 0xF) == 0 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL);
      if ( v27 )
      {
        a1 = (struct tagMENU *)*(unsigned int *)(*(_QWORD *)(v27 + 8) + 244LL);
        if ( ((unsigned __int8)a1 & 1) != 0 )
          goto LABEL_24;
      }
    }
LABEL_19:
    a1 = (struct tagMENU *)gpsi;
    v10 = *(_WORD *)(gpsi + 8678LL);
    goto LABEL_4;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, 0LL, a3, a4) & 0xF) != 0 )
    goto LABEL_19;
LABEL_24:
  v10 = 96;
LABEL_4:
  if ( ((*(_DWORD *)(a2 + 288) & 0x40000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 768) & 0x80000) != 0)
    && *((_WORD *)v9 + 34) != v10 )
  {
    MNClearCachedPopupSizes(v9);
    *((_WORD *)v9 + 34) = v10;
  }
  v11 = a5;
  v12 = xxxMNCompute(v9, a2, a2, v7, v6, a5, &v42);
  if ( (*((_DWORD *)v9 + 10) & 1) == 0 )
  {
    if ( v42 )
      v12 = xxxMNCompute(v9, a2, a2, v7, v6, v11, &v42);
    MBC_RightJustifyMenu(v9);
  }
  if ( v12 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 0 )
      {
LABEL_34:
        v25 = (_DWORD *)(gpsi + 2292LL);
        return (unsigned int)(v12 + *v25);
      }
    }
    else if ( IsDPIDWMSysMet(v14)
           && (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_34;
    }
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
        ? (v41 = 0)
        : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v38,
                                                       v39,
                                                       v40)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v41) )
    {
      v25 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v25 = (_DWORD *)(gpsi + 1904LL);
    }
    return (unsigned int)(v12 + *v25);
  }
  return v5;
}
