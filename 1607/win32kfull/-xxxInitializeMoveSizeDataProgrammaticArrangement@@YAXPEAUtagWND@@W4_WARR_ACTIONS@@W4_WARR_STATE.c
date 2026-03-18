/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FF19C
 * Callers:
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxInitializeMoveSizeDataProgrammaticArrangement(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // r14d
  int v7; // r10d
  unsigned int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // r8
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
  __int64 v29; // rax
  int v30; // ecx
  _WORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  unsigned __int16 v42; // ax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  char v47; // al
  __int64 v48; // r8
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
  __int64 v59; // rax
  int v60; // ecx
  _WORD *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // ecx
  __int64 v72; // r8
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v78; // r8
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
  __int64 ThreadWin32Thread; // rax
  int v90; // ecx
  _WORD *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // ecx
  __int64 v102; // r9
  __int64 result; // rax
  int v104; // ecx
  unsigned int v105; // [rsp+78h] [rbp+10h]

  v6 = 0;
  v7 = a4;
  v11 = *(_DWORD *)(a5 + 180) & 0xFFFF7FFF;
  *(_QWORD *)a5 = a1;
  *(_DWORD *)(a5 + 180) = v11 | 0x30000;
  if ( a3 == 5 )
    v12 = *(_OWORD *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  else
    v12 = *(_OWORD *)(a1 + 112);
  if ( v7 )
  {
    if ( v7 == 1 )
      v6 = 6;
  }
  else
  {
    v6 = 18;
  }
  if ( a2 == 3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v74, v73, v75, v76);
      LOWORD(v78) = 1;
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
        goto LABEL_64;
    }
    else if ( !IsDPIDWMSysMet(v74)
           || (W32GetCurrentThreadDpiAwarenessContext(v80, v79, v81, v82) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 408)
             ? (v90 = 0, LOWORD(v78) = 1)
             : (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88),
                LOWORD(v78) = 1,
                v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 408) + 8LL) + 244LL) & 1),
               !v90) )
    {
LABEL_64:
      if ( IsDPIDWMSysMet(6uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v93, v92, v78, v94) & 0xF) == 1 )
        {
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97) + 408) )
            v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v98,
                                                         v99,
                                                         v100)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1;
          else
            v101 = 0;
          LOWORD(v78) = 1;
          if ( v101 )
          {
            v91 = (_WORD *)(gpsi + 2680LL);
            goto LABEL_73;
          }
        }
        else
        {
          LOWORD(v78) = 1;
        }
      }
      v91 = (_WORD *)(gpsi + 1904LL);
      goto LABEL_73;
    }
    v91 = (_WORD *)(gpsi + 2292LL);
LABEL_73:
    v42 = v78 + *v91 + WORD2(v12);
    v72 = 3LL;
    goto LABEL_74;
  }
  if ( (unsigned int)(a2 - 4) <= 3 )
  {
    if ( a3 && a3 != 3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        v17 = W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16);
        LOWORD(v18) = 1;
        if ( (v17 & 0xF) != 0 )
          goto LABEL_22;
      }
      else if ( !IsDPIDWMSysMet(v14)
             || (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
               ? (v30 = 0, LOWORD(v18) = 1)
               : (v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28),
                  LOWORD(v18) = 1,
                  v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 408) + 8LL) + 244LL) & 1),
                 !v30) )
      {
LABEL_22:
        if ( IsDPIDWMSysMet(6uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v18, v34) & 0xF) == 1 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408) )
              v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v38,
                                                          v39,
                                                          v40)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1;
            else
              v41 = 0;
            LOWORD(v18) = 1;
            if ( v41 )
            {
              v31 = (_WORD *)(gpsi + 2680LL);
              goto LABEL_31;
            }
          }
          else
          {
            LOWORD(v18) = 1;
          }
        }
        v31 = (_WORD *)(gpsi + 1904LL);
        goto LABEL_31;
      }
      v31 = (_WORD *)(gpsi + 2292LL);
LABEL_31:
      v42 = v18 + WORD2(v12) + *v31;
LABEL_52:
      v72 = 9LL;
      goto LABEL_74;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
    {
      v47 = W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46);
      LOWORD(v48) = 1;
      if ( (v47 & 0xF) != 0 )
        goto LABEL_42;
    }
    else if ( !IsDPIDWMSysMet(v44)
           || (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
             ? (v60 = 0, LOWORD(v48) = 1)
             : (v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58),
                LOWORD(v48) = 1,
                v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 408) + 8LL) + 244LL) & 1),
               !v60) )
    {
LABEL_42:
      if ( IsDPIDWMSysMet(4uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v48, v64) & 0xF) == 1 )
        {
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 408) )
            v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v68,
                                                        v69,
                                                        v70)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1;
          else
            v71 = 0;
          LOWORD(v48) = 1;
          if ( v71 )
          {
            v61 = (_WORD *)(gpsi + 2672LL);
            goto LABEL_51;
          }
        }
        else
        {
          LOWORD(v48) = 1;
        }
      }
      v61 = (_WORD *)(gpsi + 1896LL);
      goto LABEL_51;
    }
    v61 = (_WORD *)(gpsi + 2284LL);
LABEL_51:
    v42 = WORD2(v12) + *v61 - v48;
    goto LABEL_52;
  }
  v42 = v105;
  v72 = v105;
LABEL_74:
  v102 = (unsigned __int16)(v12 + (DWORD2(v12) - (int)v12) / 2) | (v42 << 16);
  *a6 = v102;
  result = xxxInitializeMoveSizeData(a1, a5, v72, v102, v6);
  if ( a2 == 3 )
  {
    *(_DWORD *)(a5 + 180) |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (unsigned __int8)(*(_BYTE *)(a5 + 180) ^ ((*(_DWORD *)(a5 + 180) | 0x800u) >> 5)) & 0x80;
      v104 = result ^ (*(_DWORD *)(a5 + 180) | 0x800);
      *(_DWORD *)(a5 + 180) = v104;
      if ( (v104 & 0x200000) != 0 && a3 == 4 )
        *(_DWORD *)(a5 + 216) = 4;
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(a5 + 152) = 0;
        *(_DWORD *)(a5 + 156) = 0;
      }
    }
    else if ( a2 <= 7 )
    {
      result = (*(_DWORD *)(a5 + 180) | 0xC00) ^ (*(_BYTE *)(a5 + 180) ^ (unsigned __int8)((*(_DWORD *)(a5 + 180) | 0xC00u) >> 5)) & 0x80u;
      *(_DWORD *)(a5 + 180) = result;
    }
  }
  return result;
}
