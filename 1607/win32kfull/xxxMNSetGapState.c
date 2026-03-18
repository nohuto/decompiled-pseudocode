/*
 * XREFs of xxxMNSetGapState @ 0x1C02333A4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C0216EA0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0233768 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C020E55C (xxxInvalidateRect.c)
 *     MNGetpItem @ 0x1C020F08C (MNGetpItem.c)
 */

void __fastcall xxxMNSetGapState(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // r14
  _DWORD *v9; // rax
  int v10; // r10d
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
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
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  _DWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // ecx
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD v77[3]; // [rsp+20h] [rbp-30h] BYREF
  int v78; // [rsp+38h] [rbp-18h] BYREF
  int v79; // [rsp+3Ch] [rbp-14h]
  int v80; // [rsp+40h] [rbp-10h]
  int v81; // [rsp+44h] [rbp-Ch]

  if ( (a3 & 3) == 0 )
    return;
  v5 = 0LL;
  if ( !IsMFMWFPWindow(a1) )
    return;
  v6 = safe_cast_fnid_to_PMENUWND(v4);
  if ( !v6 )
    return;
  v8 = *(_QWORD *)(v6 + 360);
  if ( !v8 )
    return;
  v9 = (_DWORD *)MNGetpItem(*(_QWORD *)(v6 + 360), v7);
  if ( !v9 )
    return;
  v78 = v9[18];
  v80 = v9[18] + v9[20];
  v79 = v9[19];
  v81 = v9[19] + v9[21];
  if ( (v11 & 1) == 0 )
  {
    v42 = MNGetpItem(v8, v10 + 1);
    if ( v44 )
    {
      *(_DWORD *)(v43 + 4) |= 0x40000000u;
      if ( !v42 )
        goto LABEL_53;
      *(_DWORD *)(v42 + 4) |= 0x80000000;
    }
    else
    {
      *(_DWORD *)(v43 + 4) &= ~0x40000000u;
      if ( !v42 )
        goto LABEL_53;
      *(_DWORD *)(v42 + 4) &= ~0x80000000;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47, v48) & 0xF) != 0 )
        goto LABEL_37;
    }
    else if ( !IsDPIDWMSysMet(v46)
           || (W32GetCurrentThreadDpiAwarenessContext(v61, v60, v62, v63) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 408)
             ? (v70 = 0)
             : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v67,
                                                            v68,
                                                            v69)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v70) )
    {
LABEL_37:
      if ( IsDPIDWMSysMet(0x45uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
          ? (v59 = 0)
          : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v56,
                                                         v57,
                                                         v58)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v59) )
      {
        v71 = (_DWORD *)(gpsi + 2932LL);
      }
      else
      {
        v71 = (_DWORD *)(gpsi + 2156LL);
      }
      goto LABEL_52;
    }
    v71 = (_DWORD *)(gpsi + 2544LL);
LABEL_52:
    v81 += *v71;
    goto LABEL_53;
  }
  v12 = MNGetpItem(v8, v10 - 1);
  if ( v14 )
  {
    *(_DWORD *)(v13 + 4) |= 0x80000000;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 4) |= 0x40000000u;
      goto LABEL_12;
    }
  }
  else
  {
    *(_DWORD *)(v13 + 4) &= ~0x80000000;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 4) &= ~0x40000000u;
LABEL_12:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x45uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0 )
          goto LABEL_14;
      }
      else if ( !IsDPIDWMSysMet(v16)
             || (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
               ? (v40 = 0)
               : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v37,
                                                              v38,
                                                              v39)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v40) )
      {
LABEL_14:
        if ( IsDPIDWMSysMet(0x45uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
            ? (v29 = 0)
            : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v26,
                                                           v27,
                                                           v28)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v29) )
        {
          v41 = (_DWORD *)(gpsi + 2932LL);
        }
        else
        {
          v41 = (_DWORD *)(gpsi + 2156LL);
        }
        goto LABEL_29;
      }
      v41 = (_DWORD *)(gpsi + 2544LL);
LABEL_29:
      v79 -= *v41;
    }
  }
LABEL_53:
  v72 = *(_QWORD *)(v8 + 40);
  v73 = *(unsigned int *)(v72 + 120);
  if ( (_DWORD)v73 != -1 && (unsigned int)v73 < *(_DWORD *)(v72 + 52) )
    v5 = *(_QWORD *)(v72 + 80) + 152 * v73;
  v74 = *(_DWORD *)(v5 + 76);
  v79 -= v74;
  v81 -= v74;
  v77[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v77;
  ++*(_DWORD *)(a1 + 8);
  v77[1] = a1;
  xxxInvalidateRect((struct tagWND *)a1, &v78, 1);
  ThreadUnlock1(v76, v75);
}
