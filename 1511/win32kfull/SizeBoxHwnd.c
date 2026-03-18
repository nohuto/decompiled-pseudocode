/*
 * XREFs of SizeBoxHwnd @ 0x1C0249344
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     xxxWindowHitTest2 @ 0x1C00962A0 (xxxWindowHitTest2.c)
 *     FindNCHit @ 0x1C0102F28 (FindNCHit.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     DrawSize @ 0x1C0233278 (DrawSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall SizeBoxHwnd(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r13d
  int v3; // ecx
  int v4; // r14d
  int v6; // r15d
  int v7; // r12d
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _DWORD *v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 124);
  v3 = *(_BYTE *)(a1 + 50) & 0x40;
  if ( v3 )
    v4 = *(_DWORD *)(v1 + 112);
  else
    v4 = *(_DWORD *)(v1 + 120);
  while ( 1 )
  {
    if ( (*(_WORD *)(v1 + 66) & 0x3FFF) == 0x29D )
      return 0LL;
    if ( (*(_BYTE *)(v1 + 54) & 4) != 0 )
      break;
    if ( (*(_BYTE *)(v1 + 55) & 0x40) == 0 || (*(_BYTE *)(v1 + 40) & 8) != 0 )
      return 0LL;
    v1 = *(_QWORD *)(v1 + 88);
  }
  if ( (*(_BYTE *)(v1 + 55) & 1) != 0 )
    return 0LL;
  if ( v3 )
    v6 = *(_DWORD *)(v1 + 128);
  else
    v6 = *(_DWORD *)(v1 + 136);
  v7 = *(_DWORD *)(v1 + 140);
  if ( v3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0 )
      {
        goto LABEL_18;
      }
    }
    else if ( !IsDPIDWMSysMet(v8)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v14 = 0)
             : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v14) )
    {
LABEL_18:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v11 = 0)
          : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v11) )
      {
        v15 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v15 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_34:
      if ( v4 - *v15 <= v6 )
        goto LABEL_69;
      return 0LL;
    }
    v15 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_34;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
    {
      goto LABEL_52;
    }
LABEL_63:
    v27 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_68;
  }
  if ( IsDPIDWMSysMet(v20)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_63;
  }
LABEL_52:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v23 = 0)
      : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v23) )
  {
    v27 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v27 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_68:
  if ( v4 + *v27 < v6 )
    return 0LL;
LABEL_69:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
    {
      goto LABEL_39;
    }
LABEL_38:
    v17 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_47;
  }
  if ( IsDPIDWMSysMet(v28)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_38;
  }
LABEL_39:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v19 = 0)
      : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v19) )
  {
    v17 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v17 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_47:
  if ( v2 + *v17 < v7 )
    return 0LL;
  return v1;
}
