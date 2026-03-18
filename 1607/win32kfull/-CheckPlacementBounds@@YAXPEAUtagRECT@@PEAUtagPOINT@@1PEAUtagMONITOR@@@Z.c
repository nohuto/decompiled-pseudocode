/*
 * XREFs of ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00B33A0
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall CheckPlacementBounds(
        struct tagRECT *a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        struct tagMONITOR *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  LONG *v15; // rbx
  LONG top; // ebp
  int v17; // r11d
  LONG v18; // r10d
  int v19; // r8d
  LONG bottom; // ecx
  int v21; // r9d
  LONG left; // r14d
  int v23; // esi
  LONG right; // edx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int *v37; // rcx
  int v38; // edi
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int *v51; // rcx
  int v52; // edx
  LONG v53; // ecx
  LONG y; // eax
  int v55; // r8d
  LONG v56; // edx
  int v57; // ecx
  LONG x; // eax
  int v59; // edx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ecx
  int v65; // ecx
  LONG v66; // ecx
  int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // ecx

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11) + 408)
      ? (v9 = 0LL)
      : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v9) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 408)
        ? (v64 = 0)
        : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v61,
                                                       v62,
                                                       v63)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v64) )
    {
      v15 = (LONG *)((char *)a4 + 108);
    }
    else
    {
      v15 = (LONG *)((char *)a4 + 76);
    }
  }
  else
  {
    v15 = (LONG *)((char *)a4 + 92);
  }
  top = a1->top;
  v17 = -1;
  v18 = v15[1];
  if ( top < v18 )
    v19 = -1;
  else
    v19 = top > v15[3];
  bottom = a1->bottom;
  if ( bottom < v18 )
    v21 = -1;
  else
    v21 = bottom > v15[3];
  left = a1->left;
  if ( a1->left < *v15 )
    v23 = -1;
  else
    v23 = left > v15[2];
  right = a1->right;
  if ( right >= *v15 )
    v17 = right > v15[2];
  if ( v19 * v21 > 0 || v23 * v17 > 0 )
  {
    if ( v19 >= 0 )
    {
      if ( v21 > 0 )
      {
        v65 = bottom - top;
        if ( v15[3] - v65 > v18 )
          v18 = v15[3] - v65;
        a1->top = v18;
        a1->bottom = v18 + v65;
      }
    }
    else
    {
      a1->bottom = bottom - top;
      a1->top = v15[1];
    }
    if ( v23 >= 0 )
    {
      if ( v17 > 0 )
      {
        v66 = *v15;
        v67 = right - left;
        if ( v15[2] - v67 > *v15 )
          v66 = v15[2] - v67;
        a1->left = v66;
        a1->right = v66 + v67;
      }
    }
    else
    {
      a1->right = right - left;
      a1->left = *v15;
    }
  }
  if ( a2->x != -1 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) == 0 )
      {
LABEL_76:
        v37 = (int *)(gpsi + 2456LL);
        goto LABEL_25;
      }
    }
    else if ( IsDPIDWMSysMet(v26)
           && (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_76;
    }
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
        ? (v81 = 0)
        : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v78,
                                                       v79,
                                                       v80)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v81) )
    {
      v37 = (int *)(gpsi + 2844LL);
    }
    else
    {
      v37 = (int *)(gpsi + 2068LL);
    }
LABEL_25:
    v38 = *v37;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) == 0 )
      {
LABEL_90:
        v51 = (int *)(gpsi + 2460LL);
        goto LABEL_29;
      }
    }
    else if ( IsDPIDWMSysMet(v40)
           && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83, v84) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86, v87)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_90;
    }
    if ( IsDPIDWMSysMet(0x30uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 408)
        ? (v95 = 0)
        : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v92,
                                                       v93,
                                                       v94)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v95) )
    {
      v51 = (int *)(gpsi + 2848LL);
    }
    else
    {
      v51 = (int *)(gpsi + 2072LL);
    }
LABEL_29:
    v52 = *v51;
    v53 = v15[1];
    y = a2->y;
    if ( y >= v53 )
      v55 = y > v15[3];
    else
      v55 = -1;
    v56 = y + v52;
    if ( v56 >= v53 )
      v57 = v56 > v15[3];
    else
      v57 = -1;
    x = a2->x;
    if ( a2->x >= *v15 )
      v59 = x > v15[2];
    else
      v59 = -1;
    if ( x + v38 >= *v15 )
      v60 = x + v38 > v15[2];
    else
      v60 = -1;
    if ( v55 * v57 > 0 || v59 * v60 > 0 )
    {
      a2->y = -1;
      a2->x = -1;
    }
  }
  if ( a3->x != -1 && (*v15 + a3->x >= v15[2] || v15[1] + a3->y >= v15[3]) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
