/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0201B98
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FEFF8 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 */

__int64 __fastcall xxxSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  __m128i v11; // xmm1
  int v12; // edi
  int v13; // edi
  __int32 v14; // ecx
  int v15; // eax
  __int32 v16; // r8d
  __int32 v17; // edx
  __int32 v18; // r9d
  __int32 v19; // r8d
  __int32 v20; // edx
  __int32 v21; // ecx
  __int32 v22; // eax
  __int32 v23; // edx
  __int32 v24; // ecx
  __int32 v25; // eax
  __int32 v26; // ecx
  __int32 v27; // ecx
  __int32 v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  __m128i v38; // [rsp+20h] [rbp-20h] BYREF

  result = xxxGetSizeRectFromShell(a1, a2, a3, v38.m128i_i32);
  if ( (_DWORD)result )
    goto LABEL_48;
  v7 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF) == 0
    && (v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 244LL) & 1) != 0 )
  {
    result = a2 + 92;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF) != 1
         || (v9 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 408LL)) == 0
         || (v10 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 244LL), result = a2 + 108, (v10 & 1) == 0) )
  {
    result = a2 + 76;
  }
  v11 = *(__m128i *)result;
  v38 = *(__m128i *)result;
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v14 = *(_DWORD *)(a1 + 88);
          v15 = _mm_cvtsi128_si32(v11);
          v38.m128i_i32[0] = v15;
          v38.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
          v16 = v38.m128i_i32[2] - v15;
          if ( v38.m128i_i32[2] - v15 < v14 )
            v38.m128i_i32[2] = v14 + v15;
          v17 = *(_DWORD *)(a1 + 100);
          if ( v16 < v17 )
          {
            result = v38.m128i_u32[1];
          }
          else
          {
            result = (unsigned int)(v38.m128i_i32[3] - v17);
            v38.m128i_i32[1] = v38.m128i_i32[3] - v17;
          }
          v18 = *(_DWORD *)(a1 + 92);
          v19 = v38.m128i_i32[3] - result;
          if ( v38.m128i_i32[3] - (int)result < v18 )
          {
            result = (unsigned int)(v38.m128i_i32[3] - v18);
            v38.m128i_i32[1] = v38.m128i_i32[3] - v18;
          }
          if ( v19 >= v17 )
            v38.m128i_i32[1] = v38.m128i_i32[3] - v17;
        }
        goto LABEL_48;
      }
      v20 = (v38.m128i_i32[2] - v38.m128i_i32[0]) / 2;
      v38.m128i_i32[0] = v38.m128i_i32[2] - v20;
      v21 = *(_DWORD *)(a1 + 88);
      if ( v20 < v21 )
        v38.m128i_i32[0] = v38.m128i_i32[2] - v21;
      v22 = *(_DWORD *)(a1 + 96);
      if ( v20 >= v22 )
        v38.m128i_i32[0] = v38.m128i_i32[2] - v22;
      v23 = v38.m128i_i32[3] - v38.m128i_i32[1];
      if ( v38.m128i_i32[3] - v38.m128i_i32[1] < *(_DWORD *)(a1 + 92) )
        v38.m128i_i32[3] = v38.m128i_i32[1] + *(_DWORD *)(a1 + 100);
      result = *(unsigned int *)(a1 + 100);
      if ( v23 >= (int)result )
      {
        result = (unsigned int)(v38.m128i_i32[1] + result);
LABEL_47:
        v38.m128i_i32[3] = result;
      }
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 88);
      v38.m128i_i32[2] = v38.m128i_i32[0] + (v38.m128i_i32[2] - v38.m128i_i32[0]) / 2;
      v25 = v38.m128i_i32[2] - v38.m128i_i32[0];
      if ( v38.m128i_i32[2] - v38.m128i_i32[0] < v24 )
        v38.m128i_i32[2] = v38.m128i_i32[0] + v24;
      v26 = *(_DWORD *)(a1 + 96);
      if ( v25 >= v26 )
        v38.m128i_i32[2] = v26 + v38.m128i_i32[0];
      v27 = v38.m128i_i32[3] - v38.m128i_i32[1];
      v28 = *(_DWORD *)(a1 + 92);
      if ( v38.m128i_i32[3] - v38.m128i_i32[1] < v28 )
        v38.m128i_i32[3] = v38.m128i_i32[1] + v28;
      result = *(unsigned int *)(a1 + 100);
      if ( v27 >= (int)result )
      {
        result = (unsigned int)(v38.m128i_i32[1] + result);
        goto LABEL_47;
      }
    }
  }
  else
  {
    v29 = *(_DWORD *)(a1 + 88);
    v30 = _mm_cvtsi128_si32(v38);
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
    v38.m128i_i32[0] = v30;
    v38.m128i_i32[2] = v31;
    v32 = v31 - v30;
    if ( v32 < v29 )
      v38.m128i_i32[2] = v30 + v29;
    v33 = *(_DWORD *)(a1 + 96);
    if ( v32 >= v33 )
      v38.m128i_i32[2] = v30 + v33;
    v34 = *(_DWORD *)(a1 + 92);
    v35 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
    v36 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 12));
    v38.m128i_i32[1] = v35;
    v37 = v36 - v35;
    if ( v37 < v34 )
      v38.m128i_i32[3] = v35 + v34;
    result = *(unsigned int *)(a1 + 100);
    if ( v37 >= (int)result )
    {
      result = (unsigned int)(v35 + result);
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( (*(_DWORD *)(a1 + 180) & 0x2000000) != 0 )
    *(__m128i *)(a1 + 56) = v38;
  else
    *(__m128i *)(a1 + 24) = v38;
  return result;
}
