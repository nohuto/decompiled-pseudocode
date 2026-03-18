/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A560
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C02078FC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 */

__int64 __fastcall xxxSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // r8d
  __m128i v9; // xmm1
  int v10; // edi
  int v11; // edi
  __int32 v12; // ecx
  int v13; // eax
  __int32 v14; // r8d
  __int32 v15; // edx
  __int32 v16; // r9d
  __int32 v17; // r8d
  __int32 v18; // edx
  __int32 v19; // ecx
  __int32 v20; // eax
  __int32 v21; // edx
  __int32 v22; // ecx
  __int32 v23; // eax
  __int32 v24; // ecx
  __int32 v25; // ecx
  __int32 v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // edx
  __m128i v36; // [rsp+20h] [rbp-20h] BYREF

  result = xxxGetSizeRectFromShell(a1, a2, a3, v36.m128i_i32);
  if ( (_DWORD)result )
    goto LABEL_46;
  v7 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
  if ( v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v8 != 1
      || (result = a2 + 108, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      result = a2 + 76;
    }
  }
  else
  {
    result = a2 + 92;
  }
  v9 = *(__m128i *)result;
  v36 = *(__m128i *)result;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v12 = *(_DWORD *)(a1 + 88);
          v13 = _mm_cvtsi128_si32(v9);
          v36.m128i_i32[0] = v13;
          v36.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
          v14 = v36.m128i_i32[2] - v13;
          if ( v36.m128i_i32[2] - v13 < v12 )
            v36.m128i_i32[2] = v12 + v13;
          v15 = *(_DWORD *)(a1 + 100);
          if ( v14 < v15 )
          {
            result = v36.m128i_u32[1];
          }
          else
          {
            result = (unsigned int)(v36.m128i_i32[3] - v15);
            v36.m128i_i32[1] = v36.m128i_i32[3] - v15;
          }
          v16 = *(_DWORD *)(a1 + 92);
          v17 = v36.m128i_i32[3] - result;
          if ( v36.m128i_i32[3] - (int)result < v16 )
          {
            result = (unsigned int)(v36.m128i_i32[3] - v16);
            v36.m128i_i32[1] = v36.m128i_i32[3] - v16;
          }
          if ( v17 >= v15 )
            v36.m128i_i32[1] = v36.m128i_i32[3] - v15;
        }
        goto LABEL_46;
      }
      v18 = (v36.m128i_i32[2] - v36.m128i_i32[0]) / 2;
      v36.m128i_i32[0] = v36.m128i_i32[2] - v18;
      v19 = *(_DWORD *)(a1 + 88);
      if ( v18 < v19 )
        v36.m128i_i32[0] = v36.m128i_i32[2] - v19;
      v20 = *(_DWORD *)(a1 + 96);
      if ( v18 >= v20 )
        v36.m128i_i32[0] = v36.m128i_i32[2] - v20;
      v21 = v36.m128i_i32[3] - v36.m128i_i32[1];
      if ( v36.m128i_i32[3] - v36.m128i_i32[1] < *(_DWORD *)(a1 + 92) )
        v36.m128i_i32[3] = v36.m128i_i32[1] + *(_DWORD *)(a1 + 100);
      result = *(unsigned int *)(a1 + 100);
      if ( v21 >= (int)result )
      {
        result = (unsigned int)(v36.m128i_i32[1] + result);
LABEL_45:
        v36.m128i_i32[3] = result;
      }
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 88);
      v36.m128i_i32[2] = v36.m128i_i32[0] + (v36.m128i_i32[2] - v36.m128i_i32[0]) / 2;
      v23 = v36.m128i_i32[2] - v36.m128i_i32[0];
      if ( v36.m128i_i32[2] - v36.m128i_i32[0] < v22 )
        v36.m128i_i32[2] = v36.m128i_i32[0] + v22;
      v24 = *(_DWORD *)(a1 + 96);
      if ( v23 >= v24 )
        v36.m128i_i32[2] = v24 + v36.m128i_i32[0];
      v25 = v36.m128i_i32[3] - v36.m128i_i32[1];
      v26 = *(_DWORD *)(a1 + 92);
      if ( v36.m128i_i32[3] - v36.m128i_i32[1] < v26 )
        v36.m128i_i32[3] = v36.m128i_i32[1] + v26;
      result = *(unsigned int *)(a1 + 100);
      if ( v25 >= (int)result )
      {
        result = (unsigned int)(v36.m128i_i32[1] + result);
        goto LABEL_45;
      }
    }
  }
  else
  {
    v27 = *(_DWORD *)(a1 + 88);
    v28 = _mm_cvtsi128_si32(v36);
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 8));
    v36.m128i_i32[0] = v28;
    v36.m128i_i32[2] = v29;
    v30 = v29 - v28;
    if ( v30 < v27 )
      v36.m128i_i32[2] = v28 + v27;
    v31 = *(_DWORD *)(a1 + 96);
    if ( v30 >= v31 )
      v36.m128i_i32[2] = v28 + v31;
    v32 = *(_DWORD *)(a1 + 92);
    v33 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 4));
    v34 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 12));
    v36.m128i_i32[1] = v33;
    v35 = v34 - v33;
    if ( v35 < v32 )
      v36.m128i_i32[3] = v33 + v32;
    result = *(unsigned int *)(a1 + 100);
    if ( v35 >= (int)result )
    {
      result = (unsigned int)(v33 + result);
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( (*(_DWORD *)(a1 + 180) & 0x2000000) != 0 )
    *(__m128i *)(a1 + 56) = v36;
  else
    *(__m128i *)(a1 + 24) = v36;
  return result;
}
