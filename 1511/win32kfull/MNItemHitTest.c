/*
 * XREFs of MNItemHitTest @ 0x1C0138158
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     xxxMenuItemFromPoint @ 0x1C023B734 (xxxMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall MNItemHitTest(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  unsigned int v20; // r8d
  int *v21; // r10
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // r9d
  __int64 v25; // r10
  unsigned int v26; // r11d
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // rcx
  unsigned int v38; // edi
  int v39; // edx
  int v40; // r10d
  int v41; // eax
  int v42; // ebx
  _DWORD *v43; // r11
  __int64 v44; // r11
  int v45; // [rsp+20h] [rbp-20h] BYREF
  int v46; // [rsp+24h] [rbp-1Ch]
  int v47; // [rsp+28h] [rbp-18h]
  int v48; // [rsp+2Ch] [rbp-14h]
  unsigned __int64 v49; // [rsp+70h] [rbp+30h]

  v49 = a3;
  if ( !*(_DWORD *)(a1 + 52) )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 50) & 0x40) != 0 )
      LODWORD(v49) = *(_DWORD *)(a2 + 120) - a3;
    else
      LODWORD(v49) = a3 - *(_DWORD *)(a2 + 112);
    HIDWORD(v49) = HIDWORD(a3) - *(_DWORD *)(a2 + 116);
    goto LABEL_16;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) == 0 )
    {
LABEL_33:
      v8 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_7;
    }
  }
  else if ( IsDPIDWMSysMet(v5)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_33;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v31 = 0)
      : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v31) )
  {
    v8 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v8 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_7:
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) == 0 )
    {
LABEL_49:
      v12 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_11;
    }
  }
  else if ( IsDPIDWMSysMet(v9)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_49;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v35 = 0)
      : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v35) )
  {
    v12 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v12 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_11:
  v13 = -*v12;
  v14 = *(_DWORD *)(a2 + 112) - v13;
  v15 = -*v8;
  v47 = *(_DWORD *)(a2 + 120) + v13;
  v16 = v15 + *(_DWORD *)(a2 + 124);
  v45 = v14;
  v17 = *(_DWORD *)(a2 + 116) - v15;
  v48 = v16;
  v46 = v17;
  if ( !PtInRect(&v45, v49) )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(a2 + 50) & 0x40) != 0 )
    LODWORD(v49) = *(_DWORD *)(a2 + 136) - v49;
  else
    LODWORD(v49) = v49 - *(_DWORD *)(a2 + 128);
  v18 = HIDWORD(v49) - *(_DWORD *)(a2 + 132) < 0;
  v19 = HIDWORD(v49) - *(_DWORD *)(a2 + 132);
  HIDWORD(v49) = v19;
  if ( v18 )
    return 4294967293LL;
  if ( v19 >= *(_DWORD *)(a1 + 60) )
    return 4294967292LL;
LABEL_16:
  v20 = -1;
  if ( (*(_DWORD *)(a1 + 128) & 3) != 0 )
  {
    v36 = *(unsigned int *)(a1 + 120);
    if ( (_DWORD)v36 == -1 || (unsigned int)v36 >= *(_DWORD *)(a1 + 52) )
      v37 = 0LL;
    else
      v37 = *(_QWORD *)(a1 + 80) + 152 * v36;
    if ( v37 )
    {
      v38 = *(_DWORD *)(a1 + 52);
      v39 = 0;
      v45 = 0;
      v40 = 0;
      v41 = *(_DWORD *)(v37 + 80);
      v46 = 0;
      v47 = v41;
      if ( (unsigned int)v36 < v38 )
      {
        v42 = *(_DWORD *)(a1 + 60);
        v43 = (_DWORD *)(v37 + 84);
        do
        {
          if ( v39 >= v42 )
            break;
          v48 = *v43 + v40;
          if ( PtInRect(&v45, v49) )
            return v24;
          v43 = (_DWORD *)(v44 + 152);
          v39 = v40;
          v46 = v40;
        }
        while ( v24 + 1 < v38 );
      }
    }
    return v20;
  }
  if ( !*(_DWORD *)(a1 + 52) )
    return v20;
  v21 = (int *)(*(_QWORD *)(a1 + 80) + 72LL);
  while ( 1 )
  {
    v22 = v21[1];
    v45 = *v21;
    v47 = v21[2] + v45;
    v23 = v22 + v21[3];
    v46 = v22;
    v48 = v23;
    if ( PtInRect(&v45, v49) )
      break;
    v21 = (int *)(v25 + 152);
    if ( v24 + 1 >= v26 )
      return v20;
  }
  return v24;
}
