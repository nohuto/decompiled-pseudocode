/*
 * XREFs of FindBestPos @ 0x1C013BA14
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C013B310 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C013BD50 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall FindBestPos(
        LONG left,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int *a7,
        struct tagRECT *a8,
        unsigned __int64 a9)
{
  __int64 v12; // rdx
  struct tagRECT *v13; // r9
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  LONG *p_bottom; // rax
  __int64 v19; // rax
  bool v20; // zf
  LONG *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int right; // edx
  int bottom; // edx
  LONG top; // r8d
  struct tagRECT *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  LONG *v41; // rax
  __int64 v42; // rdx
  _BOOL8 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 CurrentProcessWin32Process; // rax
  struct tagRECT *v59; // rax
  int v60; // r9d
  int v61; // ecx
  int v62; // r12d
  int v63; // edx
  __int64 v64; // r15
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned int v68; // eax
  struct tagRECT v71; // [rsp+48h] [rbp-79h] BYREF
  struct tagPOINT v72; // [rsp+58h] [rbp-69h] BYREF
  struct tagRECT v73; // [rsp+60h] [rbp-61h] BYREF
  struct tagRECT v74; // [rsp+70h] [rbp-51h] BYREF
  struct tagRECT v75; // [rsp+80h] [rbp-41h] BYREF
  __int128 v76; // [rsp+90h] [rbp-31h] BYREF
  unsigned int v77[4]; // [rsp+A0h] [rbp-21h]

  if ( a7 )
  {
    if ( IsRectEmptyInl(a8 + 32) )
    {
      v14 = *(_DWORD *)(v12 + 352) & 0xF;
      if ( !v14
        && (v53 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v53 + 8) + 244LL) & 1) != 0 )
      {
        v13 = (struct tagRECT *)((char *)a8 + 44);
      }
      else if ( v14 == 1
             && (v54 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v54 + 8) + 244LL) & 1) != 0 )
      {
        v13 = (struct tagRECT *)((char *)a8 + 60);
      }
      else
      {
        v13 = (struct tagRECT *)((char *)a8 + 28);
      }
    }
    else
    {
      v14 = *(_DWORD *)(v12 + 352) & 0xF;
      if ( !v14
        && (v55 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v55 + 8) + 244LL) & 1) != 0 )
      {
        v13 = a8 + 33;
      }
      else if ( v14 == 1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL);
        if ( v15 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v15 + 8) + 244LL) & 1) != 0 )
            v13 = a8 + 34;
        }
      }
    }
    v75 = *v13;
    if ( !v14
      && (v56 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v56 + 8) + 244LL) & 1) != 0 )
    {
      p_bottom = &a8[5].bottom;
    }
    else if ( v14 != 1
           || (v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL)) == 0
           || (v17 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 244LL), p_bottom = &a8[6].bottom, (v17 & 1) == 0) )
    {
      p_bottom = &a8[4].bottom;
    }
    v74 = *(struct tagRECT *)p_bottom;
    if ( !v14 )
    {
      v57 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL);
      if ( v57 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v57 + 8) + 244LL) & 1) != 0 )
        {
LABEL_107:
          v21 = &a8[2].bottom;
          goto LABEL_17;
        }
      }
    }
    if ( v14 != 1 )
      goto LABEL_40;
    v19 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 408LL);
    if ( !v19 )
      goto LABEL_40;
    v20 = (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 244LL) & 1) == 0;
  }
  else
  {
    v28 = a8 + 32;
    if ( IsRectEmptyInl(a8 + 32) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36) + 408)
          ? (v34 = 0LL)
          : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v33,
                                                         v35,
                                                         v36)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v34) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36) + 408)
            ? (v34 = 0LL)
            : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v33,
                                                           v35,
                                                           v36)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              (_DWORD)v34) )
        {
          v28 = (struct tagRECT *)((char *)a8 + 60);
        }
        else
        {
          v28 = (struct tagRECT *)((char *)a8 + 28);
        }
      }
      else
      {
        v28 = (struct tagRECT *)((char *)a8 + 44);
      }
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36) + 408)
             ? (v34 = 0LL)
             : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v33,
                                                            v35,
                                                            v36)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !(_DWORD)v34) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) == 1 )
      {
        v34 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1;
        if ( (_DWORD)v34 )
          v28 = a8 + 34;
      }
    }
    else
    {
      v28 = a8 + 33;
    }
    v75 = *v28;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v39, v40) + 408)
        ? (v38 = 0LL)
        : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v37,
                                                       v39,
                                                       v40)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v38) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v39, v40) + 408)
          ? (v38 = 0LL)
          : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v37,
                                                         v39,
                                                         v40)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v41 = &a8[6].bottom,
            !(_DWORD)v38) )
      {
        v41 = &a8[4].bottom;
      }
    }
    else
    {
      v41 = &a8[5].bottom;
    }
    v74 = *(struct tagRECT *)v41;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0xF) == 0 )
    {
      v43 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v44, v45) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v44, v45)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1;
      if ( v43 )
        goto LABEL_107;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 1 )
      goto LABEL_40;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408) )
      v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1;
    else
      v52 = 0;
    v20 = v52 == 0;
  }
  v21 = &a8[3].bottom;
  if ( v20 )
LABEL_40:
    v21 = &a8[1].bottom;
LABEL_17:
  v76 = *(_OWORD *)v21;
  if ( (a6 & 0x10000) != 0 || PtInRect(&v74, a9) && (!a7 || (*a7 & 0x10000000) == 0) )
  {
    v73 = v74;
    goto LABEL_22;
  }
  if ( a7 )
  {
    LODWORD(CurrentProcessWin32Process) = *a7 >> 31;
    goto LABEL_115;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23, v22);
  if ( !CurrentProcessWin32Process )
  {
LABEL_115:
    if ( (_DWORD)CurrentProcessWin32Process )
      goto LABEL_116;
LABEL_112:
    v59 = (struct tagRECT *)&v76;
    goto LABEL_113;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x30) != 0 )
    goto LABEL_112;
LABEL_116:
  v59 = &v75;
LABEL_113:
  v73 = *v59;
  if ( a7 )
    *a7 |= 0x10000000u;
LABEL_22:
  if ( a5 )
  {
    v71 = *a5;
    IntersectRect(&v71, &v71.left, &v73.left);
  }
  else
  {
    v71.left = left;
    v71.top = a2;
    v71.right = left;
    v71.bottom = a2;
  }
  right = v73.right;
  if ( a3 + left > v73.right )
  {
    left = v73.right - a3;
    if ( a7 )
    {
      if ( (*a7 & 0x1800000) != 0 )
        *a7 = *a7 & 0xF07FFFFF | *a7 & 0xE000000 ^ 0x1000000;
    }
  }
  if ( left < v73.left )
  {
    left = v73.left;
    if ( a7 )
    {
      if ( (*a7 & 0x1800000) != 0 )
        *a7 = *a7 & 0xF07FFFFF | *a7 & 0xE000000 ^ 0x800000;
    }
  }
  if ( (a6 & 8) != 0 && a3 + left > right )
    left = right - a3;
  bottom = v73.bottom;
  top = v73.top;
  if ( a4 + a2 > v73.bottom )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < v73.top || a2 >= v73.bottom )
      a2 = v73.bottom - a4;
    else
      a2 -= a4;
    if ( a7 && (*a7 & 0x6000000) != 0 )
      *a7 = *a7 & 0xF07FFFFF | *a7 & 0x9800000 ^ 0x4000000;
  }
  if ( a2 < top )
  {
    a2 = top;
    if ( a7 )
    {
      if ( (*a7 & 0x6000000) != 0 )
        *a7 = *a7 & 0xF07FFFFF | *a7 & 0x9800000 ^ 0x2000000;
    }
  }
  if ( (a6 & 0x20) != 0 && a4 + a2 > bottom && (a6 & 0x20000) != 0 )
    a2 = bottom - a4;
  if ( !(unsigned int)TryRect(4u, left, a2, a3, a4, &v71, &v72, (struct tagMONITOR *)a8) )
  {
    v60 = ((unsigned __int8)a6 >> 5) & 2;
    v61 = (a6 & 8) != 0 ? 0 : 2;
    v77[v60] = v61;
    v77[v60 + 1] = 2 - v61;
    v62 = 0;
    v63 = (a6 & 0x20) == 0 ? 2 : 0;
    v77[2 - v60] = v63 + 1;
    v64 = 0LL;
    v77[3 - v60] = 3 - v63;
    while ( !(unsigned int)TryRect(v77[v64], left, a2, a3, a4, &v71, &v72, (struct tagMONITOR *)a8) )
    {
      ++v62;
      if ( ++v64 >= 4 )
        return (unsigned __int16)left | ((unsigned __int16)a2 << 16);
    }
    if ( !a7 )
      goto LABEL_150;
    v65 = v77[v62];
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( v67 )
        {
          if ( v67 != 1 )
          {
LABEL_150:
            LOWORD(left) = v72.x;
            LOWORD(a2) = v72.y;
            return (unsigned __int16)left | ((unsigned __int16)a2 << 16);
          }
          v68 = *a7 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v68 = *a7 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v68 = *a7 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v68 = *a7 & 0xF07FFFFF | 0x1000000;
    }
    *a7 = v68;
    goto LABEL_150;
  }
  return (unsigned __int16)left | ((unsigned __int16)a2 << 16);
}
