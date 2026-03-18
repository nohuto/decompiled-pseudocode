/*
 * XREFs of SizeBoxHwnd @ 0x1C024571C
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     DrawSize @ 0x1C022BED4 (DrawSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall SizeBoxHwnd(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  int v3; // ecx
  int v4; // r14d
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
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
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  _DWORD *v73; // rcx
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9

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
      if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) != 0 )
        goto LABEL_17;
    }
    else if ( !IsDPIDWMSysMet(v9)
           || (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
             ? (v33 = 0)
             : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v30,
                                                            v31,
                                                            v32)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v33) )
    {
LABEL_17:
      if ( IsDPIDWMSysMet(0x2DuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18) + 408)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v19,
                                                         v20,
                                                         v21)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v22) )
      {
        v34 = (_DWORD *)(gpsi + 2836LL);
      }
      else
      {
        v34 = (_DWORD *)(gpsi + 2060LL);
      }
LABEL_32:
      if ( v4 - *v34 <= v6 )
        goto LABEL_64;
      return 0LL;
    }
    v34 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_32;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0 )
      goto LABEL_48;
LABEL_58:
    v73 = (_DWORD *)(gpsi + 2448LL);
    goto LABEL_63;
  }
  if ( IsDPIDWMSysMet(v48)
    && (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64, v65) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_58;
  }
LABEL_48:
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
      ? (v61 = 0)
      : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v61) )
  {
    v73 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v73 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_63:
  if ( v4 + *v73 < v6 )
    return 0LL;
LABEL_64:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v75, v74, v76, v77) & 0xF) != 0 )
      goto LABEL_36;
LABEL_35:
    v35 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_44;
  }
  if ( IsDPIDWMSysMet(v75)
    && (W32GetCurrentThreadDpiAwarenessContext(v79, v78, v80, v81) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_35;
  }
LABEL_36:
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
      ? (v46 = 0)
      : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v46) )
  {
    v35 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v35 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_44:
  if ( v2 + *v35 < v7 )
    return 0LL;
  return v1;
}
