/*
 * XREFs of ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00F7FA0
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

void __fastcall CheckPlacementBounds(
        struct tagRECT *a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        struct tagMONITOR *a4)
{
  __int64 v8; // rcx
  LONG *v9; // rbx
  LONG top; // ebp
  int v11; // r11d
  LONG v12; // r10d
  int v13; // r8d
  LONG bottom; // ecx
  int v15; // r9d
  LONG left; // r14d
  int v17; // esi
  LONG right; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int *v22; // rcx
  int v23; // edi
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int *v27; // rcx
  int v28; // edx
  LONG v29; // ecx
  LONG y; // eax
  int v31; // r8d
  LONG v32; // edx
  int v33; // ecx
  LONG x; // eax
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  LONG v39; // ecx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v48; // ecx

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v8 = 0LL)
      : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v8) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v37 = 0)
        : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v37) )
    {
      v9 = (LONG *)((char *)a4 + 108);
    }
    else
    {
      v9 = (LONG *)((char *)a4 + 76);
    }
  }
  else
  {
    v9 = (LONG *)((char *)a4 + 92);
  }
  top = a1->top;
  v11 = -1;
  v12 = v9[1];
  if ( top < v12 )
    v13 = -1;
  else
    v13 = top > v9[3];
  bottom = a1->bottom;
  if ( bottom < v12 )
    v15 = -1;
  else
    v15 = bottom > v9[3];
  left = a1->left;
  if ( a1->left < *v9 )
    v17 = -1;
  else
    v17 = left > v9[2];
  right = a1->right;
  if ( right >= *v9 )
    v11 = right > v9[2];
  if ( v13 * v15 > 0 || v17 * v11 > 0 )
  {
    if ( v13 >= 0 )
    {
      if ( v15 > 0 )
      {
        v38 = bottom - top;
        if ( v9[3] - v38 > v12 )
          v12 = v9[3] - v38;
        a1->top = v12;
        a1->bottom = v12 + v38;
      }
    }
    else
    {
      a1->bottom = bottom - top;
      a1->top = v9[1];
    }
    if ( v17 >= 0 )
    {
      if ( v11 > 0 )
      {
        v39 = *v9;
        v40 = right - left;
        if ( v9[2] - v40 > *v9 )
          v39 = v9[2] - v40;
        a1->left = v39;
        a1->right = v39 + v40;
      }
    }
    else
    {
      a1->right = right - left;
      a1->left = *v9;
    }
  }
  if ( a2->x != -1 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) == 0 )
      {
LABEL_79:
        v22 = (int *)(gpsi + 2456LL);
        goto LABEL_22;
      }
    }
    else if ( IsDPIDWMSysMet(v19)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_79;
    }
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v44 = 0)
        : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v44) )
    {
      v22 = (int *)(gpsi + 2844LL);
    }
    else
    {
      v22 = (int *)(gpsi + 2068LL);
    }
LABEL_22:
    v23 = *v22;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) == 0 )
      {
LABEL_95:
        v27 = (int *)(gpsi + 2460LL);
        goto LABEL_26;
      }
    }
    else if ( IsDPIDWMSysMet(v24)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_95;
    }
    if ( IsDPIDWMSysMet(0x30uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v48 = 0)
        : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v48) )
    {
      v27 = (int *)(gpsi + 2848LL);
    }
    else
    {
      v27 = (int *)(gpsi + 2072LL);
    }
LABEL_26:
    v28 = *v27;
    v29 = v9[1];
    y = a2->y;
    if ( y >= v29 )
      v31 = y > v9[3];
    else
      v31 = -1;
    v32 = y + v28;
    if ( v32 >= v29 )
      v33 = v32 > v9[3];
    else
      v33 = -1;
    x = a2->x;
    if ( a2->x >= *v9 )
      v35 = x > v9[2];
    else
      v35 = -1;
    if ( x + v23 >= *v9 )
      v36 = x + v23 > v9[2];
    else
      v36 = -1;
    if ( v31 * v33 > 0 || v35 * v36 > 0 )
    {
      a2->y = -1;
      a2->x = -1;
    }
  }
  if ( a3->x != -1 && (*v9 + a3->x >= v9[2] || v9[1] + a3->y >= v9[3]) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
