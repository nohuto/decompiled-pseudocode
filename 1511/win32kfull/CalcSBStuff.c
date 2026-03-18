/*
 * XREFs of CalcSBStuff @ 0x1C0077960
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00776D8 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C0144A20 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0231DE4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0231F9C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0232228 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0233E10 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     CalcSBStuff2 @ 0x1C0077B08 (CalcSBStuff2.c)
 *     _InitPwSB @ 0x1C0077D00 (_InitPwSB.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // ecx
  _DWORD v30[2]; // [rsp+20h] [rbp-20h] BYREF
  int v31; // [rsp+28h] [rbp-18h]
  int v32; // [rsp+2Ch] [rbp-14h]
  int v33; // [rsp+30h] [rbp-10h] BYREF
  int v34; // [rsp+34h] [rbp-Ch]
  int v35; // [rsp+38h] [rbp-8h]
  int v36; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v30, 33LL);
  if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
  {
    v6 = v30[0];
    v17 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - v30[0];
    v30[0] = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - v31;
    v31 = v17;
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 49) & 0x40) == 0 )
    {
      v7 = (*(_BYTE *)(a1 + 40) & 2) == 0;
      v33 = v31;
      v35 = v31;
      if ( !v7 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
        {
          v9 = (_DWORD *)(gpsi + 1888LL);
        }
        else
        {
          v9 = (_DWORD *)(gpsi + 2276LL);
        }
        v35 = v31 + *v9;
      }
      goto LABEL_10;
    }
    v7 = (*(_BYTE *)(a1 + 40) & 2) == 0;
    v33 = v30[0];
    v35 = v30[0];
    if ( v7 )
    {
LABEL_10:
      v34 = v30[1];
      v36 = v32;
      goto LABEL_11;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
      {
        goto LABEL_31;
      }
    }
    else if ( !IsDPIDWMSysMet(v18)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v24 = 0)
             : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v24) )
    {
LABEL_31:
      if ( IsDPIDWMSysMet(2uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v21 = 0)
          : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v21) )
      {
        v25 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v25 = (_DWORD *)(gpsi + 1888LL);
      }
      goto LABEL_47;
    }
    v25 = (_DWORD *)(gpsi + 2276LL);
LABEL_47:
    v33 = v30[0] - *v25;
    goto LABEL_10;
  }
  v7 = (*(_BYTE *)(a1 + 40) & 4) == 0;
  v34 = v32;
  v36 = v32;
  if ( !v7 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0 )
      {
LABEL_21:
        v15 = (_DWORD *)(gpsi + 2280LL);
LABEL_22:
        v36 = v32 + *v15;
        goto LABEL_23;
      }
    }
    else if ( IsDPIDWMSysMet(v13)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_21;
    }
    if ( IsDPIDWMSysMet(3uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v29 = 0)
        : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v29) )
    {
      v15 = (_DWORD *)(gpsi + 2668LL);
    }
    else
    {
      v15 = (_DWORD *)(gpsi + 1892LL);
    }
    goto LABEL_22;
  }
LABEL_23:
  v33 = v30[0];
  v35 = v31;
LABEL_11:
  result = InitPwSB(a1);
  if ( result )
  {
    v11 = *(_QWORD *)(a1 + 176);
    if ( a3 )
      v12 = v11 + 20;
    else
      v12 = v11 + 4;
    return CalcSBStuff2(a2, &v33, v12, a3);
  }
  return result;
}
