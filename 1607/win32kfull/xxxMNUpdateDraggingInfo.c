/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C0233768
 * Callers:
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C020F004 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C020F08C (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C02333A4 (xxxMNSetGapState.c)
 */

__int64 __fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r12
  int v8; // ebp
  unsigned int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  _DWORD *v57; // rcx
  unsigned int v58; // eax
  bool v59; // zf
  _QWORD v61[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (__int64 *)(a1 + 80);
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 80);
  v61[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v61;
  v61[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = *v3;
  v8 = *(_DWORD *)(a1 + 92) & 3;
  v9 = *(_DWORD *)(a1 + 88);
  LockMFMWFPWindow(v3, a2, a3, gptiCurrent);
  v10 = *v3;
  *(_DWORD *)(a1 + 88) = v5;
  if ( !IsMFMWFPWindow(v10) || (v13 = safe_cast_fnid_to_PMENUWND(v12)) == 0 || !*(_QWORD *)(v13 + 360) )
  {
    *v3 = 0LL;
    *(_DWORD *)(a1 + 88) = -1;
    return ThreadUnlock1(v12, v11);
  }
  v14 = MNGetpItem(*(_QWORD *)(v13 + 360), v5);
  *(_DWORD *)(a1 + 92) = 0;
  v17 = v14;
  if ( v14 )
  {
    v18 = *(_QWORD *)(v15 + 40);
    v19 = *(unsigned int *)(v18 + 120);
    if ( (_DWORD)v19 == -1 || (unsigned int)v19 >= *(_DWORD *)(v18 + 52) )
      v20 = 0LL;
    else
      v20 = *(_QWORD *)(v18 + 80) + 152 * v19;
    v21 = *(_DWORD *)(v20 + 76) + *(_DWORD *)(a1 + 16) - *(_DWORD *)(v16 + 132);
    v24 = IsDPIAbsoluteSysMet(0x45uLL);
    if ( v24 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v25, v26) & 0xF) != 0 )
        goto LABEL_13;
    }
    else if ( !IsDPIDWMSysMet(v23)
           || (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
             ? (v38 = 0)
             : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v11,
                                                            v27,
                                                            v28)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v38) )
    {
LABEL_13:
      if ( IsDPIDWMSysMet(0x45uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v29, v11, v27, v28) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v27, v28) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v11,
                                                         v27,
                                                         v28)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v30) )
      {
        v12 = gpsi + 2932LL;
      }
      else
      {
        v12 = gpsi + 2156LL;
      }
LABEL_28:
      if ( v21 <= *(_DWORD *)(v17 + 76) + *(_DWORD *)v12 )
      {
        *(_DWORD *)(a1 + 92) = 1;
        goto LABEL_49;
      }
      if ( v24 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v27, v28) & 0xF) != 0 )
          goto LABEL_32;
      }
      else if ( !IsDPIDWMSysMet(0x45uLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
               ? (v56 = 0)
               : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v11,
                                                              v54,
                                                              v55)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v56) )
      {
LABEL_32:
        if ( IsDPIDWMSysMet(0x45uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v39, v11, v40, v41) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v42, v43) + 408)
            ? (v46 = 0)
            : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v11,
                                                           v44,
                                                           v45)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v46) )
        {
          v57 = (_DWORD *)(gpsi + 2932LL);
        }
        else
        {
          v57 = (_DWORD *)(gpsi + 2156LL);
        }
        goto LABEL_47;
      }
      v57 = (_DWORD *)(gpsi + 2544LL);
LABEL_47:
      v12 = (unsigned int)(*(_DWORD *)(v17 + 76) + *(_DWORD *)(v17 + 84) - *v57);
      if ( v21 >= (int)v12 )
        *(_DWORD *)(a1 + 92) = 2;
      goto LABEL_49;
    }
    v12 = gpsi + 2544LL;
    goto LABEL_28;
  }
LABEL_49:
  if ( v7 != *v3 )
    goto LABEL_60;
  v58 = *(_DWORD *)(a1 + 88) - v9;
  if ( v58 != -1 )
  {
    if ( !v58 )
    {
      if ( v8 == *(_DWORD *)(a1 + 92) )
        return ThreadUnlock1(v12, v11);
      goto LABEL_60;
    }
    if ( v58 == 1 && *(_DWORD *)(a1 + 92) == 1 )
    {
      v59 = v8 == 2;
      goto LABEL_59;
    }
LABEL_60:
    *(_DWORD *)(a1 + 92) |= 4u;
    xxxMNSetGapState(v7, v9, v8);
    xxxMNSetGapState(*v3, *(unsigned int *)(a1 + 88), *(_DWORD *)(a1 + 92));
    return ThreadUnlock1(v12, v11);
  }
  if ( *(_DWORD *)(a1 + 92) != 2 )
    goto LABEL_60;
  v59 = v8 == 1;
LABEL_59:
  if ( !v59 )
    goto LABEL_60;
  return ThreadUnlock1(v12, v11);
}
