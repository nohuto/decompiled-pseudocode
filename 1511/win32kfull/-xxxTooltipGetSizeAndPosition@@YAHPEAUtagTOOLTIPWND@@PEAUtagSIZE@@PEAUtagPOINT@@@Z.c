/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014A490
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014A3C8 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00C6410 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C014AC2C (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  unsigned __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // rbp
  HDC TooltipDC; // rbx
  __int64 ThreadWin32Thread; // rax
  const WCHAR *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  _DWORD *v41; // rbx
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  LONG *v52; // rbx
  int v53; // ecx
  LONG cy; // edx
  LONG y; // ecx
  int v56; // edx
  _QWORD v57[4]; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 3976LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v57;
    ++*(_DWORD *)(v8 + 8);
    v12 = (const WCHAR *)*((_QWORD *)a1 + 52);
    v13 = -1LL;
    v57[1] = v8;
    do
      ++v13;
    while ( v12[v13] );
    xxxClientGetTextExtentPointW(TooltipDC, v12, v13, a2);
    v8 = ThreadUnlock1(v15, v14);
    if ( !v8 )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v16 = (unsigned __int16 *)*((_QWORD *)a1 + 52);
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    GreGetTextExtentW(TooltipDC, v16, v17, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
    {
      goto LABEL_14;
    }
LABEL_25:
    v25 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_30;
  }
  if ( IsDPIDWMSysMet(v18)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_25;
  }
LABEL_14:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v21 = 0)
      : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v21) )
  {
    v25 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v25 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_30:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0 )
    {
      goto LABEL_33;
    }
LABEL_44:
    v33 = (_DWORD *)(gpsi + 2288LL);
    goto LABEL_49;
  }
  if ( IsDPIDWMSysMet(v26)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_44;
  }
LABEL_33:
  if ( IsDPIDWMSysMet(5uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v29 = 0)
      : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v29) )
  {
    v33 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v33 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_49:
  a2->cx += *v25 + 4 * *v33;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
    {
      goto LABEL_52;
    }
LABEL_63:
    v41 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_68;
  }
  if ( IsDPIDWMSysMet(v34)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_63;
  }
LABEL_52:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v37 = 0)
      : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v37) )
  {
    v41 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v41 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_68:
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
    {
      goto LABEL_71;
    }
  }
  else if ( !IsDPIDWMSysMet(v42)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v48 = 0)
           : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v48) )
  {
LABEL_71:
    if ( IsDPIDWMSysMet(6uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v45 = 0)
        : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v45) )
    {
      v49 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v49 = (_DWORD *)(gpsi + 1904LL);
    }
    goto LABEL_87;
  }
  v49 = (_DWORD *)(gpsi + 2292LL);
LABEL_87:
  v50 = (unsigned int)(*v41 + 2 * *v49);
  a2->cy += v50;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v51 = 0LL)
      : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v51) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v53 = 0)
        : (v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v52 = (LONG *)(v8 + 60),
          !v53) )
    {
      v52 = (LONG *)(v8 + 28);
    }
  }
  else
  {
    v52 = (LONG *)(v8 + 44);
  }
  cy = a2->cy;
  y = a3->y;
  if ( y + cy < v52[3] )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 100) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 100) &= ~1u;
    a3->y = y - cy;
  }
  v56 = v52[2];
  if ( a2->cx + a3->x >= v56 )
    a3->x = v56 - a2->cx;
  if ( a3->x < *v52 )
    a3->x = *v52;
  return 1LL;
}
