/*
 * XREFs of MNItemHitTest @ 0x1C0142870
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     xxxMenuItemFromPoint @ 0x1C02331F4 (xxxMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall MNItemHitTest(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rcx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  bool v36; // sf
  int v37; // eax
  unsigned int v38; // r8d
  int *v39; // r10
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // r9d
  __int64 v43; // r10
  unsigned int v44; // r11d
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // ecx
  __int64 v74; // r9
  __int64 v75; // rcx
  unsigned int v76; // edi
  int v77; // edx
  int v78; // r10d
  int v79; // eax
  int v80; // ebx
  _DWORD *v81; // r11
  __int64 v82; // r11
  int v83; // [rsp+20h] [rbp-20h] BYREF
  int v84; // [rsp+24h] [rbp-1Ch]
  int v85; // [rsp+28h] [rbp-18h]
  int v86; // [rsp+2Ch] [rbp-14h]
  unsigned __int64 v87; // [rsp+60h] [rbp+20h]

  v87 = a3;
  if ( !*(_DWORD *)(a1 + 52) )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 50) & 0x40) != 0 )
      LODWORD(v87) = *(_DWORD *)(a2 + 120) - a3;
    else
      LODWORD(v87) = a3 - *(_DWORD *)(a2 + 112);
    HIDWORD(v87) = HIDWORD(a3) - *(_DWORD *)(a2 + 116);
    goto LABEL_16;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) == 0 )
    {
LABEL_31:
      v17 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_7;
    }
  }
  else if ( IsDPIDWMSysMet(v6)
         && (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_31;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
      ? (v59 = 0)
      : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v59) )
  {
    v17 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v17 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_7:
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 0 )
    {
LABEL_45:
      v30 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_11;
    }
  }
  else if ( IsDPIDWMSysMet(v19)
         && (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_45;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 408)
      ? (v73 = 0)
      : (v73 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v73) )
  {
    v30 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v30 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_11:
  v31 = -*v30;
  v32 = *(_DWORD *)(a2 + 112) - v31;
  v33 = -*v17;
  v85 = *(_DWORD *)(a2 + 120) + v31;
  v34 = v33 + *(_DWORD *)(a2 + 124);
  v83 = v32;
  v35 = *(_DWORD *)(a2 + 116) - v33;
  v86 = v34;
  v84 = v35;
  if ( !PtInRect(&v83, v87) )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(a2 + 50) & 0x40) != 0 )
    LODWORD(v87) = *(_DWORD *)(a2 + 136) - v87;
  else
    LODWORD(v87) = v87 - *(_DWORD *)(a2 + 128);
  v36 = HIDWORD(v87) - *(_DWORD *)(a2 + 132) < 0;
  v37 = HIDWORD(v87) - *(_DWORD *)(a2 + 132);
  HIDWORD(v87) = v37;
  if ( v36 )
    return 4294967293LL;
  if ( v37 >= *(_DWORD *)(a1 + 60) )
    return 4294967292LL;
LABEL_16:
  v38 = -1;
  if ( (*(_DWORD *)(a1 + 128) & 3) != 0 )
  {
    v74 = *(unsigned int *)(a1 + 120);
    if ( (_DWORD)v74 == -1 || (unsigned int)v74 >= *(_DWORD *)(a1 + 52) )
      v75 = 0LL;
    else
      v75 = *(_QWORD *)(a1 + 80) + 152 * v74;
    if ( v75 )
    {
      v76 = *(_DWORD *)(a1 + 52);
      v77 = 0;
      v83 = 0;
      v78 = 0;
      v79 = *(_DWORD *)(v75 + 80);
      v84 = 0;
      v85 = v79;
      if ( (unsigned int)v74 < v76 )
      {
        v80 = *(_DWORD *)(a1 + 60);
        v81 = (_DWORD *)(v75 + 84);
        do
        {
          if ( v77 >= v80 )
            break;
          v86 = *v81 + v78;
          if ( PtInRect(&v83, v87) )
            return v42;
          v81 = (_DWORD *)(v82 + 152);
          v77 = v78;
          v84 = v78;
        }
        while ( v42 + 1 < v76 );
      }
    }
    return v38;
  }
  if ( !*(_DWORD *)(a1 + 52) )
    return v38;
  v39 = (int *)(*(_QWORD *)(a1 + 80) + 72LL);
  while ( 1 )
  {
    v40 = v39[1];
    v83 = *v39;
    v85 = v39[2] + v83;
    v41 = v40 + v39[3];
    v84 = v40;
    v86 = v41;
    if ( PtInRect(&v83, v87) )
      break;
    v39 = (int *)(v43 + 152);
    if ( v42 + 1 >= v44 )
      return v38;
  }
  return v42;
}
