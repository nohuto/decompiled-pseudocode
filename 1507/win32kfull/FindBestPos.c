/*
 * XREFs of FindBestPos @ 0x1C010869C
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C02181E0 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C010890C (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int *a7,
        struct tagRECT *a8,
        unsigned __int64 a9)
{
  int v9; // r14d
  struct tagRECT *v10; // r13
  BOOL v13; // eax
  __int64 v14; // rdx
  struct tagRECT *v15; // r9
  int v16; // r8d
  LONG *p_bottom; // rax
  LONG *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  int v21; // edx
  LONG v22; // r8d
  struct tagRECT *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  LONG *v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v32; // rax
  __int64 v33; // r9
  int v34; // ecx
  int v35; // r8d
  int v36; // r12d
  __int64 v37; // r14
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // eax
  struct tagRECT v44; // [rsp+48h] [rbp-89h] BYREF
  __int128 v45; // [rsp+60h] [rbp-71h] BYREF
  struct tagPOINT v46; // [rsp+70h] [rbp-61h] BYREF
  __int64 v47; // [rsp+78h] [rbp-59h]
  __int128 v48; // [rsp+80h] [rbp-51h] BYREF
  __int128 v49; // [rsp+90h] [rbp-41h] BYREF
  struct tagRECT v50; // [rsp+A0h] [rbp-31h] BYREF
  unsigned int v51[2]; // [rsp+B0h] [rbp-21h]
  _BYTE v52[4]; // [rsp+B8h] [rbp-19h]
  _BYTE v53[4]; // [rsp+BCh] [rbp-15h]

  v9 = a3;
  v10 = a5;
  v47 = (__int64)a5;
  if ( a7 )
  {
    v13 = IsRectEmptyInl(a8 + 32);
    v16 = *(_DWORD *)(v14 + 344);
    if ( v13 )
    {
      if ( v16 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v16 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
          v15 = (struct tagRECT *)((char *)a8 + 60);
        else
          v15 = (struct tagRECT *)((char *)a8 + 28);
      }
      else
      {
        v15 = (struct tagRECT *)((char *)a8 + 44);
      }
    }
    else if ( v16 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v16 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
        v15 = a8 + 34;
    }
    else
    {
      v15 = a8 + 33;
    }
    v50 = *v15;
    if ( v16 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v16 != 1
        || (p_bottom = &a8[6].bottom,
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        p_bottom = &a8[4].bottom;
      }
    }
    else
    {
      p_bottom = &a8[5].bottom;
    }
    v48 = *(_OWORD *)p_bottom;
    if ( v16 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v16 != 1
        || (v18 = &a8[3].bottom,
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v18 = &a8[1].bottom;
      }
    }
    else
    {
      v18 = &a8[2].bottom;
    }
  }
  else
  {
    v24 = a8 + 32;
    if ( IsRectEmptyInl(a8 + 32) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v26 = 0LL)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !(_DWORD)v26) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v26 = 0LL)
            : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              (_DWORD)v26) )
        {
          v24 = (struct tagRECT *)((char *)a8 + 60);
        }
        else
        {
          v24 = (struct tagRECT *)((char *)a8 + 28);
        }
      }
      else
      {
        v24 = (struct tagRECT *)((char *)a8 + 44);
      }
    }
    else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v26 = 0LL)
             : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !(_DWORD)v26) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0 )
      {
        v26 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1;
        if ( (_DWORD)v26 )
          v24 = a8 + 34;
      }
    }
    else
    {
      v24 = a8 + 33;
    }
    v50 = *v24;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v27 = 0LL)
        : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v27) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v27 = 0LL)
          : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v28 = &a8[6].bottom,
            !(_DWORD)v27) )
      {
        v28 = &a8[4].bottom;
      }
    }
    else
    {
      v28 = &a8[5].bottom;
    }
    v48 = *(_OWORD *)v28;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v29 = 0LL)
        : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v29) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v18 = &a8[3].bottom,
            !v30) )
      {
        v18 = &a8[1].bottom;
      }
    }
    else
    {
      v18 = &a8[2].bottom;
    }
    v9 = a3;
    v10 = (struct tagRECT *)v47;
  }
  v49 = *(_OWORD *)v18;
  if ( (a6 & 0x10000) != 0 || PtInRect(&v48, a9) && (!a7 || (*a7 & 0x10000000) == 0) )
  {
    v45 = v48;
    goto LABEL_18;
  }
  if ( a7 )
  {
    LODWORD(CurrentProcessWin32Process) = *a7 >> 31;
    goto LABEL_105;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
  if ( !CurrentProcessWin32Process )
  {
LABEL_105:
    if ( (_DWORD)CurrentProcessWin32Process )
      goto LABEL_106;
LABEL_102:
    v32 = &v49;
    goto LABEL_103;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x30) != 0 )
    goto LABEL_102;
LABEL_106:
  v32 = (__int128 *)&v50;
LABEL_103:
  v45 = *v32;
  if ( a7 )
    *a7 |= 0x10000000u;
LABEL_18:
  if ( v10 )
  {
    v44 = *v10;
    IntersectRect(&v44, &v44.left, (int *)&v45);
  }
  else
  {
    v44.left = a1;
    v44.top = a2;
    v44.right = a1;
    v44.bottom = a2;
  }
  v20 = DWORD2(v45);
  if ( v9 + a1 > SDWORD2(v45) )
  {
    a1 = DWORD2(v45) - v9;
    if ( a7 )
    {
      if ( (*a7 & 0x1800000) != 0 )
        *a7 = *a7 & 0xF07FFFFF | *a7 & 0xE000000 ^ 0x1000000;
    }
  }
  if ( a1 < (int)v45 )
  {
    a1 = v45;
    if ( a7 )
    {
      if ( (*a7 & 0x1800000) != 0 )
        *a7 = *a7 & 0xF07FFFFF | *a7 & 0xE000000 ^ 0x800000;
    }
  }
  if ( (a6 & 8) != 0 && v9 + a1 > v20 )
    a1 = v20 - v9;
  v21 = HIDWORD(v45);
  v22 = DWORD1(v45);
  if ( a4 + a2 > SHIDWORD(v45) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v45) || a2 >= SHIDWORD(v45) )
      a2 = HIDWORD(v45) - a4;
    else
      a2 -= a4;
    if ( a7 && (*a7 & 0x6000000) != 0 )
      *a7 = *a7 & 0xF07FFFFF | *a7 & 0x9800000 ^ 0x4000000;
  }
  if ( a2 < v22 )
  {
    a2 = v22;
    if ( a7 )
    {
      if ( (*a7 & 0x6000000) != 0 )
        *a7 = *a7 & 0xF07FFFFF | *a7 & 0x9800000 ^ 0x2000000;
    }
  }
  if ( (a6 & 0x20) != 0 && a4 + a2 > v21 && (a6 & 0x20000) != 0 )
    a2 = v21 - a4;
  if ( !(unsigned int)TryRect(4u, a1, a2, a3, a4, &v44, &v46, (struct tagMONITOR *)a8) )
  {
    v33 = ((unsigned __int8)a6 >> 5) & 2;
    v34 = (a6 & 8) != 0 ? 0 : 2;
    v51[v33] = v34;
    v51[v33 + 1] = 2 - v34;
    v35 = (a6 & 0x20) == 0 ? 2 : 0;
    v36 = 0;
    *(_DWORD *)&v52[-4 * v33] = v35 + 1;
    v37 = 0LL;
    *(_DWORD *)&v53[-4 * v33] = 3 - v35;
    while ( !(unsigned int)TryRect(v51[v37], a1, a2, a3, a4, &v44, &v46, (struct tagMONITOR *)a8) )
    {
      ++v36;
      if ( ++v37 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !a7 )
      goto LABEL_144;
    v38 = v51[v36];
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          if ( v40 != 1 )
          {
LABEL_144:
            LOWORD(a1) = v46.x;
            LOWORD(a2) = v46.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v41 = *a7 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v41 = *a7 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v41 = *a7 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v41 = *a7 & 0xF07FFFFF | 0x1000000;
    }
    *a7 = v41;
    goto LABEL_144;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
