/*
 * XREFs of CalcSBStuff @ 0x1C0087930
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00876E8 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C0119440 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02319B4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0231B6C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0231DF8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C023352C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C02339E0 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     CalcSBStuff2 @ 0x1C0087AC4 (CalcSBStuff2.c)
 *     _InitPwSB @ 0x1C0087CBC (_InitPwSB.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  bool v13; // zf
  int v14; // r14d
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  _DWORD *v25; // rcx
  int v26; // ecx
  _DWORD v27[2]; // [rsp+20h] [rbp-20h] BYREF
  int v28; // [rsp+28h] [rbp-18h]
  int v29; // [rsp+2Ch] [rbp-14h]
  int v30; // [rsp+30h] [rbp-10h] BYREF
  int v31; // [rsp+34h] [rbp-Ch]
  int v32; // [rsp+38h] [rbp-8h]
  int v33; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v27, 33LL);
  if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
  {
    v6 = v27[0];
    v7 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - v27[0];
    v27[0] = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - v28;
    v28 = v7;
  }
  else
  {
    v7 = v28;
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 49) & 0x40) == 0 )
    {
      v30 = v7;
      v32 = v7;
      if ( (*(_BYTE *)(a1 + 40) & 2) != 0 )
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
        v32 = v7 + *v9;
      }
      goto LABEL_10;
    }
    v30 = v27[0];
    v32 = v27[0];
    if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
    {
LABEL_10:
      v31 = v27[1];
      v33 = v29;
      goto LABEL_11;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(2LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0 )
      {
        goto LABEL_31;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v18)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v24 = 0)
             : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v24) )
    {
LABEL_31:
      if ( (unsigned int)IsDPIDWMSysMet(2LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v21 = 0)
          : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
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
    v30 = v27[0] - *v25;
    goto LABEL_10;
  }
  v13 = (*(_BYTE *)(a1 + 40) & 4) == 0;
  v14 = v29;
  v31 = v29;
  v33 = v29;
  if ( !v13 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
    {
      if ( (unsigned int)IsDPIDWMSysMet(3LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v26 = 0)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v14 = v29,
            v7 = v28,
            v26) )
      {
        v16 = (_DWORD *)(gpsi + 2668LL);
      }
      else
      {
        v16 = (_DWORD *)(gpsi + 1892LL);
      }
    }
    else
    {
      v16 = (_DWORD *)(gpsi + 2280LL);
    }
    v33 = v14 + *v16;
  }
  v30 = v27[0];
  v32 = v7;
LABEL_11:
  result = InitPwSB(a1);
  if ( result )
  {
    v11 = *(_QWORD *)(a1 + 176);
    if ( a3 )
      v12 = v11 + 20;
    else
      v12 = v11 + 4;
    return CalcSBStuff2(a2, &v30, v12, a3);
  }
  return result;
}
