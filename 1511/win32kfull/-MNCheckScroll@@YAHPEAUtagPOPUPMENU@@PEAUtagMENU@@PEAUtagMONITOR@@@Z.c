/*
 * XREFs of ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C0133494
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0133580 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(struct tagPOPUPMENU *a1, struct tagMENU *a2, struct tagMONITOR *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  __int64 DPIMetrics; // rax
  __int64 v26; // r10
  __int64 v27; // r8
  int v28; // ecx
  unsigned int v29; // esi
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // rdx
  _DWORD *v34; // rax
  int v35; // eax
  bool v36; // zf
  int v37; // eax
  unsigned int v38; // eax
  struct tagRECT v39; // [rsp+20h] [rbp-28h] BYREF

  v39 = 0LL;
  MNGetPopupBoundsRect(a1, a3, &v39, 0);
  v4 = v39.bottom - v39.top;
  v5 = *((_DWORD *)a2 + 25);
  if ( v5 && v5 < v4 )
    v4 = *((_DWORD *)a2 + 25);
  v6 = *((_QWORD *)a2 + 10);
  if ( !v6 || *(_DWORD *)(v6 + 80) != *((_DWORD *)a2 + 14) )
    goto LABEL_9;
  v8 = IsDPIAbsoluteSysMet(8uLL);
  if ( v8 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0 )
    {
LABEL_22:
      v11 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_8;
    }
  }
  else if ( IsDPIDWMSysMet(v7)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_22;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v17 = 0)
      : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v17) )
  {
    v11 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v11 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_8:
  v12 = (unsigned int)(*((_DWORD *)a2 + 15) + 2 * *v11);
  if ( (unsigned int)v12 <= v4 )
  {
LABEL_9:
    *((_DWORD *)a2 + 32) &= 0xFFFFFFFC;
    *((_DWORD *)a2 + 30) = 0;
    *((_DWORD *)a2 + 31) = 0;
    return *((unsigned int *)a2 + 15);
  }
  if ( v8 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
    {
      goto LABEL_32;
    }
  }
  else if ( !IsDPIDWMSysMet(8uLL)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v20 = 0LL)
           : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !(_DWORD)v20) )
  {
LABEL_32:
    if ( IsDPIDWMSysMet(8uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v20 = 0LL)
        : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          (_DWORD)v20) )
    {
      v24 = (_DWORD *)(gpsi + 2688LL);
    }
    else
    {
      v24 = (_DWORD *)(gpsi + 1912LL);
    }
    goto LABEL_48;
  }
  v24 = (_DWORD *)(gpsi + 2300LL);
LABEL_48:
  DPIMetrics = GetDPIMetrics(v20, v19, v21);
  v26 = *((_QWORD *)a2 + 10);
  v27 = *((unsigned int *)a2 + 13);
  v28 = 0;
  v29 = -2 * (*v24 + *(_DWORD *)(DPIMetrics + 68)) + v4;
  v30 = v26;
  if ( (int)v27 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v30 + 76) > v29 )
        break;
      ++v28;
      v30 += 152LL;
    }
    while ( v28 < (int)v27 );
    if ( v28 )
      v30 -= 152LL;
  }
  v31 = *(_DWORD *)(v30 + 76);
  v32 = (unsigned int)(v27 - 1);
  v33 = 0LL;
  *((_DWORD *)a2 + 15) = v31;
  if ( (int)v32 >= 0 )
  {
    v34 = (_DWORD *)(v26 + 152LL * (int)v32 + 84);
    do
    {
      v33 = (unsigned int)(*v34 + v33);
      if ( (unsigned int)v33 > v31 )
        break;
      v34 -= 38;
      v32 = (unsigned int)(v32 - 1);
    }
    while ( (int)v32 >= 0 );
  }
  if ( (_DWORD)v32 != (_DWORD)v27 - 1 )
    v32 = (unsigned int)(v32 + 1);
  *((_DWORD *)a2 + 31) = v32;
  if ( *((_DWORD *)a2 + 30) > (int)v32 )
    *((_DWORD *)a2 + 30) = v32;
  v35 = *((_DWORD *)a2 + 30);
  if ( v35 == (_DWORD)v32 )
  {
    *((_DWORD *)a2 + 32) |= 3u;
  }
  else
  {
    v36 = v35 == 0;
    v37 = *((_DWORD *)a2 + 32);
    if ( v36 )
      v38 = v37 & 0xFFFFFFFC | 2;
    else
      v38 = v37 & 0xFFFFFFFC | 1;
    *((_DWORD *)a2 + 32) = v38;
  }
  return (unsigned int)(*((_DWORD *)a2 + 15) + 2 * *(_DWORD *)(GetDPIMetrics(v32, v33, v27) + 68));
}
