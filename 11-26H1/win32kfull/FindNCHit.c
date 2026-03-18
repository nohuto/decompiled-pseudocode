/*
 * XREFs of FindNCHit @ 0x14008AB60
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x14000F560 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 *     SizeBoxHwnd @ 0x140258834 (SizeBoxHwnd.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  __int64 v2; // r9
  int v4; // r13d
  unsigned int v5; // r15d
  unsigned int WindowDpiLastNotify; // r15d
  int v7; // r14d
  _DWORD *v8; // rcx
  int v9; // r8d
  __int64 v10; // r9
  unsigned int v11; // edi
  __m128i v12; // xmm2
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // r8
  int v18; // r12d
  int v19; // esi
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rcx
  int DpiDependentMetric; // eax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v29; // r9
  int v30; // r12d
  _BYTE *v31; // r9
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // r12d
  int v37; // r8d
  char *v38; // rax
  char v39; // dl
  int v40; // esi
  int v41; // esi
  char v42; // cl
  __int64 v43; // rax
  int v44; // eax
  int v45; // [rsp+38h] [rbp-69h]
  int v46; // [rsp+38h] [rbp-69h]
  int v47; // [rsp+48h] [rbp-59h]
  int v48; // [rsp+48h] [rbp-59h]
  __int64 v49; // [rsp+50h] [rbp-51h]
  __m128i v50; // [rsp+58h] [rbp-49h] BYREF
  __int64 v51; // [rsp+68h] [rbp-39h]
  __int64 v52; // [rsp+78h] [rbp-29h]
  __int128 v53; // [rsp+88h] [rbp-19h] BYREF
  __int64 v54; // [rsp+98h] [rbp-9h]
  __int64 v55; // [rsp+A0h] [rbp-1h]
  __int64 v56; // [rsp+A8h] [rbp+7h]
  __m128i v57; // [rsp+B8h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 40);
  v54 = a1;
  v4 = 3;
  v5 = *(_DWORD *)(v2 + 288);
  v53 = 0LL;
  v50 = 0LL;
  if ( (v5 & 0xF) == 3 )
  {
    WindowDpiLastNotify = (v5 >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v5 & 0xF) == 0
         && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 488LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 272LL);
  }
  v7 = (__int16)a2;
  HIDWORD(v49) = SHIWORD(a2);
  LODWORD(v49) = (__int16)a2;
  if ( !(unsigned int)PtInRect(v2 + 88, v49) )
    return 0LL;
  v11 = 2;
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
  {
    v19 = v8[2] - 4;
    v20 = v8[1] + 4;
    v46 = *v8 + 4;
    if ( v9 >= v8[3] - 4 || v7 >= v19 || v9 < v20 || v7 < *v8 + 4 )
      return v11;
    goto LABEL_26;
  }
  v12 = *(__m128i *)(v10 + 104);
  v13 = *(_QWORD *)(v10 + 112);
  v55 = v13;
  v57 = v12;
  v14 = v12.m128i_i64[0];
  v52 = v12.m128i_i64[0];
  if ( v7 < (int)v13 && v7 >= v12.m128i_i32[0] )
  {
    if ( v9 >= v12.m128i_i32[1] && v9 < SHIDWORD(v13) )
      return 1LL;
    v14 = v52;
  }
  v17 = *(_BYTE *)(v10 + 25);
  if ( (v17 & 2) != 0 )
  {
    v45 = v14 - 2;
    v18 = HIDWORD(v13) + 2;
    v50.m128i_i32[0] = v14 - 2;
    v50.m128i_i32[3] = HIDWORD(v13) + 2;
    v47 = v13 + 2;
    v50.m128i_i32[2] = v13 + 2;
    v51 = (unsigned int)(HIDWORD(v14) - 2);
    v50.m128i_i32[1] = HIDWORD(v14) - 2;
  }
  else
  {
    v50 = v12;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    LODWORD(v51) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
    v47 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
    v45 = _mm_cvtsi128_si32(v12);
  }
  if ( (*(_BYTE *)(v10 + 16) & 2) != 0 )
  {
    if ( ((v17 ^ *(_BYTE *)(v10 + 26)) & 0x40) != 0 )
    {
      v45 -= GetDpiDependentMetric(0, WindowDpiLastNotify);
      v50.m128i_i32[0] = v45;
    }
    else
    {
      v47 += GetDpiDependentMetric(0, WindowDpiLastNotify);
      v50.m128i_i32[2] = v47;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
  {
    v18 += GetDpiDependentMetric(1, WindowDpiLastNotify);
    v50.m128i_i32[3] = v18;
  }
  v56 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)PtInRect(&v50, v49) )
  {
    if ( (*(_BYTE *)(v26 + 25) & 2) != 0 )
    {
      v50.m128i_i32[0] = v45 + 2;
      v50.m128i_i32[3] = v18 - 2;
      v50.m128i_i32[2] = v47 - 2;
      v50.m128i_i32[1] = v51 + 2;
      if ( !(unsigned int)PtInRect(&v50, v49) )
        return 18LL;
    }
    v42 = *(_BYTE *)(v26 + 16);
    if ( (v42 & 4) == 0 || SHIDWORD(v49) < v57.m128i_i32[3] )
      return 7LL;
    if ( (v42 & 2) != 0 )
    {
      v43 = SizeBoxHwnd(a1, v25, v26, v27);
      if ( v7 >= (int)v55 )
      {
        v44 = v43 != 0 ? 0xD : 0;
        return (unsigned int)(v44 + 4);
      }
      if ( (*(_BYTE *)(v56 + 26) & 0x40) != 0 && v7 < (int)v52 )
      {
        v44 = v43 != 0 ? 0xC : 0;
        return (unsigned int)(v44 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v26 + 28),
                          *(_DWORD *)(v26 + 24),
                          v26,
                          v27,
                          WindowDpiLastNotify);
  v29 = *(_DWORD **)(a1 + 40);
  v30 = v29[23];
  v19 = v29[24] - WindowBordersForDpi;
  LODWORD(v53) = WindowBordersForDpi + v29[22];
  v20 = WindowBordersForDpi + v30;
  v46 = v53;
  HIDWORD(v53) = v29[25] - WindowBordersForDpi;
  v48 = HIDWORD(v53);
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v19, v20);
  if ( (unsigned int)PtInRect(&v53, v49) )
  {
    v9 = HIDWORD(v49);
    if ( SHIDWORD(v49) < (int)v51 )
    {
      if ( (v31[30] & 0xC0) != 0xC0 )
        return (v31[16] & 1) != 0 ? 5 : 0;
LABEL_26:
      v21 = v54;
      v22 = *(_QWORD *)(v54 + 40);
      if ( (*(_BYTE *)(v22 + 26) & 0x40) != 0 )
        v7 = *(_DWORD *)(v22 + 88) + *(_DWORD *)(v22 + 96) - v7;
      if ( v9 >= v20 )
      {
        if ( *(char *)(v22 + 24) >= 0 )
        {
          DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
          v24 = 12;
        }
        else
        {
          DpiDependentMetric = GetDpiDependentMetric(22, WindowDpiLastNotify);
          v24 = 23;
        }
        v36 = DpiDependentMetric + v20;
        v37 = GetDpiDependentMetric(v24, WindowDpiLastNotify);
        if ( SHIDWORD(v49) >= v36 && (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 16LL) & 1) != 0 )
          return 5LL;
        if ( v7 >= v46 && v7 < v19 && SHIDWORD(v49) < v36 )
        {
          v38 = *(char **)(v21 + 40);
          v39 = v38[30];
          if ( (v39 & 8) != 0 )
          {
            if ( v7 >= v37 + v46 )
            {
              v40 = v19 - v37;
              if ( v7 >= v40 )
                return 20LL;
              if ( v38[24] >= 0 )
              {
                if ( (v39 & 3) != 0 )
                {
                  v41 = v40 - v37;
                  if ( v7 >= v41 )
                    return 9LL;
                  if ( v7 >= v41 - v37 )
                    return 8;
                }
                else if ( (v38[25] & 4) != 0 && v7 >= v40 - v37 )
                {
                  return 21;
                }
              }
            }
            else if ( (unsigned int)HasCaptionIcon(v21) )
            {
              return 3LL;
            }
          }
        }
      }
      return v11;
    }
    return 0LL;
  }
  if ( (v31[30] & 4) == 0 )
    return 18LL;
  if ( (char)v31[24] >= 0 )
  {
    v32 = GetDpiDependentMetric(13, WindowDpiLastNotify);
    v33 = 12;
  }
  else
  {
    v32 = GetDpiDependentMetric(24, WindowDpiLastNotify);
    v33 = 23;
  }
  v34 = -v32;
  v35 = -(int)GetDpiDependentMetric(v33, WindowDpiLastNotify);
  if ( SHIDWORD(v49) >= v20 - v34 )
  {
    v4 = 0;
    if ( SHIDWORD(v49) >= v34 + v48 )
      v4 = 6;
  }
  if ( v7 >= v46 - v35 )
  {
    if ( v7 >= v19 + v35 )
      v4 += 2;
  }
  else
  {
    ++v4;
  }
  return (unsigned int)(v4 + 9);
}
