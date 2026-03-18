/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02327FC
 * Callers:
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0235880 (xxxTrackBox.c)
 * Callees:
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     BitBltSysBmp @ 0x1C00FB8D4 (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0231F10 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0231F9C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagRECT *a2, int a3, unsigned int a4)
{
  unsigned __int16 v8; // r8
  int v9; // ecx
  int v10; // r9d
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  int *v18; // rcx
  int v19; // r12d
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  _DWORD *v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  int *v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  unsigned int v43; // esi
  char left; // al
  unsigned int v45; // r9d
  HDC v46; // r12
  unsigned __int16 v47; // r8
  unsigned int v48; // r8d
  HDC DCEx; // [rsp+30h] [rbp-48h]
  RECT v50; // [rsp+38h] [rbp-40h] BYREF

  if ( a4 >= 2 )
  {
    InvertScrollHilite(a1, a2);
    if ( a4 == 2 )
      v8 = 1538;
    else
      v8 = 1540;
    SetOrClrWF(a3 != 0, a1, v8, 1);
    v9 = 1;
    v10 = 4;
    if ( gdwDeferWinEvent )
      v9 = 3;
    if ( a4 == 2 )
      v10 = 2;
    goto LABEL_104;
  }
  if ( (a2->left & 8) != 0 )
  {
    RecalcTrackRect((struct tagSBTRACK *)a2);
    a2->left &= ~8u;
  }
  v50 = a2[2];
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( (a2->left & 2) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0 )
      {
        goto LABEL_54;
      }
    }
    else if ( !IsDPIDWMSysMet(v28)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v34 = 0)
             : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v34) )
    {
LABEL_54:
      if ( IsDPIDWMSysMet(0x15uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v31 = 0)
          : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v31) )
      {
        v35 = (int *)(gpsi + 2740LL);
      }
      else
      {
        v35 = (int *)(gpsi + 1964LL);
      }
LABEL_70:
      v19 = *v35;
      if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
        {
          goto LABEL_73;
        }
      }
      else if ( !IsDPIDWMSysMet(v36)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v42 = 0)
               : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v42) )
      {
LABEL_73:
        if ( IsDPIDWMSysMet(3uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v39 = 0)
            : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v39) )
        {
          v27 = (_DWORD *)(gpsi + 2668LL);
        }
        else
        {
          v27 = (_DWORD *)(gpsi + 1892LL);
        }
        goto LABEL_89;
      }
      v27 = (_DWORD *)(gpsi + 2280LL);
      goto LABEL_89;
    }
    v35 = (int *)(gpsi + 2352LL);
    goto LABEL_70;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
    {
      goto LABEL_16;
    }
  }
  else if ( !IsDPIDWMSysMet(v11)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v17 = 0)
           : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v17) )
  {
LABEL_16:
    if ( IsDPIDWMSysMet(2uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v14 = 0)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v14) )
    {
      v18 = (int *)(gpsi + 2664LL);
    }
    else
    {
      v18 = (int *)(gpsi + 1888LL);
    }
    goto LABEL_32;
  }
  v18 = (int *)(gpsi + 2276LL);
LABEL_32:
  v19 = *v18;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x14uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
    {
      goto LABEL_35;
    }
  }
  else if ( !IsDPIDWMSysMet(v20)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v26 = 0)
           : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v26) )
  {
LABEL_35:
    if ( IsDPIDWMSysMet(0x14uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v23 = 0)
        : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v23) )
    {
      v27 = (_DWORD *)(gpsi + 2736LL);
    }
    else
    {
      v27 = (_DWORD *)(gpsi + 1960LL);
    }
    goto LABEL_89;
  }
  v27 = (_DWORD *)(gpsi + 2348LL);
LABEL_89:
  if ( v19 == v50.right - v50.left && *v27 == v50.bottom - v50.top )
  {
    v43 = a4;
    left = a2->left;
    if ( a4 )
      v45 = 2 * (~left & 2 | 0x19);
    else
      v45 = (left & 2) != 0 ? 46 : 58;
    if ( a3 )
      ++v45;
    v46 = DCEx;
    BitBltSysBmp(DCEx, v50.left, v50.top, v45);
  }
  else
  {
    v43 = a4;
    v46 = DCEx;
    DrawFrameControl(DCEx, &v50, 3, ~LOBYTE(a2->left) & 2 | (a3 != 0 ? 0x4200 : 0) | (a4 != 0));
  }
  _ReleaseDC(v46);
  if ( v43 )
    v47 = 1544;
  else
    v47 = 1537;
  SetOrClrWF(a3 != 0, a1, v47, 1);
  v9 = 1;
  if ( gdwDeferWinEvent )
    v9 = 3;
  v10 = v43 != 0 ? 5 : 1;
LABEL_104:
  if ( (a2->left & 4) != 0 )
    v48 = -4;
  else
    v48 = ((a2->left & 2) != 0) | 0xFFFFFFFA;
  xxxWindowEvent(0x800Au, (__int64 *)a1, v48, v10, v9);
}
