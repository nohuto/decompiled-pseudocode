/*
 * XREFs of ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C013EE04
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0140258 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(struct tagPOPUPMENU *a1, struct tagMENU *a2, struct tagMONITOR *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // ecx
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
  _DWORD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r10
  int v53; // r8d
  int v54; // ecx
  unsigned int v55; // esi
  __int64 v56; // rax
  unsigned int v57; // r9d
  __int64 v58; // rcx
  __int64 v59; // rdx
  _DWORD *v60; // rax
  int v61; // eax
  bool v62; // zf
  int v63; // eax
  unsigned int v64; // eax
  struct tagRECT v65; // [rsp+20h] [rbp-18h] BYREF

  v65 = 0LL;
  MNGetPopupBoundsRect(a1, a3, &v65, 0);
  v4 = v65.bottom - v65.top;
  v5 = *((_DWORD *)a2 + 25);
  if ( v5 && v5 < v4 )
    v4 = *((_DWORD *)a2 + 25);
  v6 = *((_QWORD *)a2 + 10);
  if ( !v6 || *(_DWORD *)(v6 + 80) != *((_DWORD *)a2 + 14) )
    goto LABEL_9;
  v9 = IsDPIAbsoluteSysMet(8uLL);
  if ( v9 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v10, v11) & 0xF) == 0 )
    {
LABEL_20:
      v20 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_8;
    }
  }
  else if ( IsDPIDWMSysMet(v8)
         && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18, v19)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18, v19) + 408)
      ? (v27 = 0)
      : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18, v19)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v27) )
  {
    v20 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v20 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_8:
  v21 = (unsigned int)(*((_DWORD *)a2 + 15) + 2 * *v20);
  if ( (unsigned int)v21 <= v4 )
  {
LABEL_9:
    *((_DWORD *)a2 + 32) &= 0xFFFFFFFC;
    *((_DWORD *)a2 + 30) = 0;
    *((_DWORD *)a2 + 31) = 0;
    return *((unsigned int *)a2 + 15);
  }
  if ( v9 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v16, v18, v19) & 0xF) != 0 )
      goto LABEL_29;
  }
  else if ( !IsDPIDWMSysMet(8uLL)
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
LABEL_29:
    if ( IsDPIDWMSysMet(8uLL)
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
      v50 = (_DWORD *)(gpsi + 2688LL);
    }
    else
    {
      v50 = (_DWORD *)(gpsi + 1912LL);
    }
    goto LABEL_44;
  }
  v50 = (_DWORD *)(gpsi + 2300LL);
LABEL_44:
  v51 = ((__int64 (*)(void))GetDPIMetrics)();
  v52 = *((_QWORD *)a2 + 10);
  v53 = *((_DWORD *)a2 + 13);
  v54 = 0;
  v55 = -2 * (*(_DWORD *)(v51 + 68) + *v50) + v4;
  v56 = v52;
  if ( v53 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v56 + 76) > v55 )
        break;
      ++v54;
      v56 += 152LL;
    }
    while ( v54 < v53 );
    if ( v54 )
      v56 -= 152LL;
  }
  v57 = *(_DWORD *)(v56 + 76);
  v58 = (unsigned int)(v53 - 1);
  v59 = 0LL;
  *((_DWORD *)a2 + 15) = v57;
  if ( (int)v58 >= 0 )
  {
    v60 = (_DWORD *)(v52 + 152LL * (int)v58 + 84);
    do
    {
      v59 = (unsigned int)(*v60 + v59);
      if ( (unsigned int)v59 > v57 )
        break;
      v60 -= 38;
      v58 = (unsigned int)(v58 - 1);
    }
    while ( (int)v58 >= 0 );
  }
  if ( (_DWORD)v58 != v53 - 1 )
    v58 = (unsigned int)(v58 + 1);
  *((_DWORD *)a2 + 31) = v58;
  if ( *((_DWORD *)a2 + 30) > (int)v58 )
    *((_DWORD *)a2 + 30) = v58;
  v61 = *((_DWORD *)a2 + 30);
  if ( v61 == (_DWORD)v58 )
  {
    *((_DWORD *)a2 + 32) |= 3u;
  }
  else
  {
    v62 = v61 == 0;
    v63 = *((_DWORD *)a2 + 32);
    if ( v62 )
      v64 = v63 & 0xFFFFFFFC | 2;
    else
      v64 = v63 & 0xFFFFFFFC | 1;
    *((_DWORD *)a2 + 32) = v64;
  }
  return (unsigned int)(2 * *(_DWORD *)(GetDPIMetrics(v58, v59) + 68) + *((_DWORD *)a2 + 15));
}
