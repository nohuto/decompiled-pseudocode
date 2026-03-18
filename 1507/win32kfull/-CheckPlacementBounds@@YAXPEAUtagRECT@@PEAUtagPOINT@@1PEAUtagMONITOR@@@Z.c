/*
 * XREFs of ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00F2E18
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
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
  int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int *v23; // rcx
  int v24; // edi
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int *v28; // rcx
  int v29; // edx
  LONG v30; // ecx
  LONG y; // eax
  int v32; // r8d
  LONG v33; // edx
  int v34; // ecx
  LONG x; // eax
  int v36; // edx
  int v37; // eax
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
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v8 = 0LL)
      : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1),
        !(_DWORD)v8) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v19 = 0)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v19) )
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
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) == 0 )
      {
LABEL_79:
        v23 = (int *)(gpsi + 2456LL);
        goto LABEL_26;
      }
    }
    else if ( IsDPIDWMSysMet(v20)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_79;
    }
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v44 = 0)
        : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v44) )
    {
      v23 = (int *)(gpsi + 2844LL);
    }
    else
    {
      v23 = (int *)(gpsi + 2068LL);
    }
LABEL_26:
    v24 = *v23;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) == 0 )
      {
LABEL_95:
        v28 = (int *)(gpsi + 2460LL);
        goto LABEL_30;
      }
    }
    else if ( IsDPIDWMSysMet(v25)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_95;
    }
    if ( IsDPIDWMSysMet(0x30uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v48 = 0)
        : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v48) )
    {
      v28 = (int *)(gpsi + 2848LL);
    }
    else
    {
      v28 = (int *)(gpsi + 2072LL);
    }
LABEL_30:
    v29 = *v28;
    v30 = v9[1];
    y = a2->y;
    if ( y >= v30 )
      v32 = y > v9[3];
    else
      v32 = -1;
    v33 = y + v29;
    if ( v33 >= v30 )
      v34 = v33 > v9[3];
    else
      v34 = -1;
    x = a2->x;
    if ( a2->x >= *v9 )
      v36 = x > v9[2];
    else
      v36 = -1;
    if ( x + v24 >= *v9 )
      v37 = x + v24 > v9[2];
    else
      v37 = -1;
    if ( v32 * v34 > 0 || v36 * v37 > 0 )
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
