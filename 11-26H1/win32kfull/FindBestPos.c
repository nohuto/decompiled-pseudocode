/*
 * XREFs of FindBestPos @ 0x14017604C
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1402AFF30 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1401766F4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1401767D0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        __int64 a9)
{
  unsigned int **v11; // rax
  unsigned int CurrentThreadCompositedDpiContext; // eax
  struct tagRECT v13; // xmm6
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int *v16; // rcx
  __m128i v17; // xmm7
  __int64 v18; // r8
  LONG x; // r9d
  __int64 v20; // r10
  LONG left; // r11d
  LONG v22; // r13d
  int v23; // r14d
  int v24; // r15d
  unsigned int v25; // eax
  int v26; // r10d
  int v27; // r9d
  LONG v28; // eax
  int v29; // ecx
  int v30; // r8d
  LONG v31; // eax
  LONG v33; // ecx
  int v34; // r12d
  bool v35; // cf
  int v36; // r8d
  LONG v37; // edx
  int v38; // r8d
  __int64 v39; // r15
  unsigned int v40; // r14d
  BOOL v41; // eax
  unsigned int *v42; // rcx
  const struct tagWND *v43; // r14
  unsigned int WindowCompositedDpiContext; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v48; // r14d
  unsigned int v49; // r14d
  unsigned int *v50; // rcx
  unsigned int v51; // eax
  int v53; // [rsp+4Ch] [rbp-8Dh]
  int v54; // [rsp+50h] [rbp-89h]
  __m128i v55; // [rsp+58h] [rbp-81h] BYREF
  struct tagPOINT v56[2]; // [rsp+68h] [rbp-71h] BYREF
  int v57; // [rsp+78h] [rbp-61h]
  int v58; // [rsp+7Ch] [rbp-5Dh]
  struct tagMONITOR *v59; // [rsp+80h] [rbp-59h]
  __m128i v60; // [rsp+88h] [rbp-51h] BYREF
  struct tagRECT v61; // [rsp+98h] [rbp-41h] BYREF

  v54 = a4;
  v11 = *a7;
  v59 = a8;
  v55 = 0LL;
  if ( *v11 )
  {
    v42 = **a7;
    if ( *((_QWORD *)v42 + 7) )
      v43 = (const struct tagWND *)*((_QWORD *)v42 + 7);
    else
      v43 = (const struct tagWND *)*((_QWORD *)v42 + 2);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(v43);
    GetMonitorMenuRectForDpi(&v61, a8, (WindowCompositedDpiContext >> 8) & 0x1FF);
    v13 = v61;
    v45 = GetWindowCompositedDpiContext(v43);
    GetMonitorWorkRectForDpi((__m128i *)v56, (__int64)a8, (v45 >> 8) & 0x1FF);
    v46 = GetWindowCompositedDpiContext(v43);
    GetMonitorRectForDpi(&v60, (__int64)a8, (v46 >> 8) & 0x1FF);
    v17 = v60;
  }
  else
  {
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorMenuRectForDpi(&v61, a8, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v13 = v61;
    v14 = GetCurrentThreadCompositedDpiContext();
    GetMonitorWorkRectForDpi((__m128i *)&v61, (__int64)a8, (v14 >> 8) & 0x1FF);
    *(struct tagRECT *)&v56[0].x = v61;
    v15 = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi((__m128i *)&v61, (__int64)a8, (v15 >> 8) & 0x1FF);
    v17 = (__m128i)v61;
  }
  LODWORD(v18) = v56[1].y;
  x = v56[1].x;
  LODWORD(v20) = v56[0].y;
  left = v56[0].x;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_4;
  if ( (int)a9 < v56[1].x && SHIDWORD(a9) >= v56[0].y && (int)a9 >= v56[0].x && SHIDWORD(a9) < v56[1].y )
  {
    if ( !**a7 )
      goto LABEL_4;
    v16 = **a7;
    if ( (*v16 & 0x10000000) == 0 )
      goto LABEL_4;
  }
  if ( **a7 )
  {
    v41 = ***a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( !CurrentProcessWin32Process || !*(_QWORD *)CurrentProcessWin32Process )
      goto LABEL_55;
    v41 = (*(_BYTE *)(CurrentProcessWin32Process + 808) & 0x30) == 0;
  }
  if ( v41 )
  {
    v61 = v13;
    goto LABEL_56;
  }
LABEL_55:
  v61 = (struct tagRECT)v17;
LABEL_56:
  left = v61.left;
  x = v61.right;
  v20 = HIDWORD(*(_QWORD *)&v61.left);
  v18 = HIDWORD(*(_QWORD *)&v61.right);
  if ( **a7 )
    ***a7 |= 0x10000000u;
LABEL_4:
  if ( a5 )
  {
    v55 = *(__m128i *)a5;
    v33 = v55.m128i_i32[2];
    v22 = _mm_cvtsi128_si32(v55);
    if ( v22 <= left )
      v22 = left;
    v55.m128i_i32[0] = v22;
    if ( v55.m128i_i32[2] >= x )
      v33 = x;
    v53 = v33;
    v55.m128i_i32[2] = v33;
    if ( v22 >= v33 )
      goto LABEL_33;
    v23 = v55.m128i_i32[1];
    v24 = v55.m128i_i32[3];
    if ( v55.m128i_i32[1] <= (int)v20 )
      v23 = v20;
    v55.m128i_i32[1] = v23;
    if ( v55.m128i_i32[3] >= (int)v18 )
      v24 = v18;
    v55.m128i_i32[3] = v24;
    if ( v23 >= v24 )
    {
LABEL_33:
      v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
      v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      v55 = 0LL;
      v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      v22 = _mm_cvtsi128_si32((__m128i)0LL);
    }
  }
  else
  {
    v55.m128i_i32[0] = a1;
    v53 = a1;
    v22 = a1;
    v55.m128i_i32[2] = a1;
    v23 = a2;
    v55.m128i_i32[1] = a2;
    v24 = a2;
    v55.m128i_i32[3] = a2;
  }
  if ( a3 + a1 > x )
  {
    a1 = x - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < left )
  {
    a1 = left;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  v57 = a6 & 8;
  if ( (a6 & 8) != 0 && a3 + a1 > x )
    a1 = x - a3;
  if ( a2 + v54 > (int)v18 )
  {
    if ( (a6 & 0x20010) != 0 || a2 - v54 < (int)v20 || a2 >= (int)v18 )
      a2 = v18 - v54;
    else
      a2 -= v54;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
  }
  if ( a2 < (int)v20 )
  {
    a2 = v20;
    if ( **a7 )
    {
      if ( (***a7 & 0x6000000) != 0 )
        ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    }
  }
  v58 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a2 + v54 > (int)v18 && (a6 & 0x20000) != 0 )
    a2 = v18 - v54;
  v25 = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v60, (__int64)v59, (v25 >> 8) & 0x1FF);
  v26 = a3;
  v27 = v54;
  v28 = a1;
  if ( a1 <= v22 )
    v28 = v22;
  v56[0].x = a1;
  v56[0].y = a2;
  v29 = a3 + a1;
  v30 = a2 + v54;
  if ( a3 + a1 >= v53 )
    v29 = v53;
  if ( v28 < v29 )
  {
    v31 = a2;
    if ( a2 <= v23 )
      v31 = v23;
    if ( v30 >= v24 )
      v30 = v24;
    if ( v31 < v30 )
    {
      v34 = a6 & 0x40;
      v35 = v57 != 0;
      v57 = -v57;
      v36 = v35 ? 0 : 2;
      v37 = 2 - v36;
      *(LONG *)((char *)&v61.left + (v34 != 0 ? 8 : 0)) = v36;
      v38 = v58;
      v35 = v58 != 0;
      *(LONG *)((char *)&v61.top + (v34 != 0 ? 8 : 0)) = v37;
      *(LONG *)((char *)&v61.left + (v34 == 0 ? 8 : 0)) = v35 ? 1 : 3;
      v39 = 0LL;
      *(LONG *)((char *)&v61.bottom + (-(__int64)(v34 != 0) & 0xFFFFFFFFFFFFFFF8uLL)) = v38 != 0 ? 3 : 1;
      while ( 1 )
      {
        if ( v39 >= 4 )
          return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
        v40 = *(&v61.left + v39);
        if ( (unsigned int)TryRect(v40, a1, a2, v26, v27, (struct tagRECT *)&v55, v56, v59) )
          break;
        v27 = v54;
        ++v39;
        v26 = a3;
      }
      if ( **a7 )
      {
        if ( !v40 )
        {
          v50 = **a7;
          v51 = *v50 & 0xF07FFFFF | 0x1000000;
          goto LABEL_89;
        }
        v48 = v40 - 1;
        if ( !v48 )
        {
          v50 = **a7;
          v51 = *v50 & 0xF07FFFFF | 0x4000000;
          goto LABEL_89;
        }
        v49 = v48 - 1;
        if ( !v49 )
        {
          v50 = **a7;
          v51 = *v50 & 0xF07FFFFF | 0x800000;
          goto LABEL_89;
        }
        if ( v49 == 1 )
        {
          v50 = **a7;
          v51 = *v50 & 0xF07FFFFF | 0x2000000;
LABEL_89:
          *v50 = v51;
        }
      }
      LOWORD(a1) = v56[0].x;
      LOWORD(a2) = v56[0].y;
    }
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
