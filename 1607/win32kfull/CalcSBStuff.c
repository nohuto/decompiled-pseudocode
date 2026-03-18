/*
 * XREFs of CalcSBStuff @ 0x1C00AF9AC
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00AF75C (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C014E540 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022ABA0 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022AD58 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022AFE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CalcSBStuff2 @ 0x1C00AFB0C (CalcSBStuff2.c)
 *     _InitPwSB @ 0x1C00AFCC8 (_InitPwSB.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  _DWORD *v11; // rcx
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  _DWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // ecx
  _DWORD v69[2]; // [rsp+20h] [rbp-20h] BYREF
  int v70; // [rsp+28h] [rbp-18h]
  int v71; // [rsp+2Ch] [rbp-14h]
  int v72; // [rsp+30h] [rbp-10h] BYREF
  int v73; // [rsp+34h] [rbp-Ch]
  int v74; // [rsp+38h] [rbp-8h]
  int v75; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v69, 33LL);
  if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
  {
    v7 = v69[0];
    v8 = (unsigned int)(*(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - v69[0]);
    v69[0] = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - v70;
    v70 = v8;
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 49) & 0x40) == 0 )
    {
      v10 = (*(_BYTE *)(a1 + 40) & 2) == 0;
      v72 = v70;
      v74 = v70;
      if ( !v10 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) != 0 )
          v11 = (_DWORD *)(gpsi + 1888LL);
        else
          v11 = (_DWORD *)(gpsi + 2276LL);
        v74 = v70 + *v11;
      }
      goto LABEL_9;
    }
    v10 = (*(_BYTE *)(a1 + 40) & 2) == 0;
    v72 = v69[0];
    v74 = v69[0];
    if ( v10 )
    {
LABEL_9:
      v73 = v69[1];
      v75 = v71;
      goto LABEL_10;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0 )
        goto LABEL_28;
    }
    else if ( !IsDPIDWMSysMet(v25)
           || (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
             ? (v49 = 0)
             : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v46,
                                                            v47,
                                                            v48)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v49) )
    {
LABEL_28:
      if ( IsDPIDWMSysMet(2uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
          ? (v38 = 0)
          : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v35,
                                                         v36,
                                                         v37)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v38) )
      {
        v50 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v50 = (_DWORD *)(gpsi + 1888LL);
      }
      goto LABEL_43;
    }
    v50 = (_DWORD *)(gpsi + 2276LL);
LABEL_43:
    v72 = v69[0] - *v50;
    goto LABEL_9;
  }
  v10 = (*(_BYTE *)(a1 + 40) & 4) == 0;
  v73 = v71;
  v75 = v71;
  if ( !v10 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0 )
        goto LABEL_18;
    }
    else if ( !IsDPIDWMSysMet(v16)
           || (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
             ? (v61 = 0)
             : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v58,
                                                            v59,
                                                            v60)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v61) )
    {
LABEL_18:
      if ( IsDPIDWMSysMet(3uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 408)
          ? (v68 = 0)
          : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v65,
                                                         v66,
                                                         v67)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v68) )
      {
        v23 = (_DWORD *)(gpsi + 2668LL);
      }
      else
      {
        v23 = (_DWORD *)(gpsi + 1892LL);
      }
      goto LABEL_20;
    }
    v23 = (_DWORD *)(gpsi + 2280LL);
LABEL_20:
    v75 = v71 + *v23;
  }
  v72 = v69[0];
  v74 = v70;
LABEL_10:
  result = InitPwSB(a1);
  if ( result )
  {
    v13 = *(_QWORD *)(a1 + 176);
    if ( a3 )
      v14 = v13 + 20;
    else
      v14 = v13 + 4;
    return CalcSBStuff2(a2, &v72, v14, a3);
  }
  return result;
}
