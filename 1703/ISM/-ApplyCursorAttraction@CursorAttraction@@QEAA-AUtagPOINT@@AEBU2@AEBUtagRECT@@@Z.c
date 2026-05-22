/*
 * XREFs of ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x180035CCC
 * Callers:
 *     _lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_ @ 0x180032170 (_lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x180035F94 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?ComputeAverageCursorVelocity@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@XZ @ 0x180036098 (-ComputeAverageCursorVelocity@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@XZ.c)
 */

struct tagPOINT __fastcall CursorAttraction::ApplyCursorAttraction(
        CursorAttraction *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        _DWORD *a4)
{
  bool v4; // zf
  struct tagPOINT v6; // rcx
  __int128 v9; // xmm1
  int v10; // r8d
  int v11; // ecx
  LONG x; // ecx
  LONG y; // eax
  bool v14; // r9
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  int v19; // edx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  float v23; // xmm4_4
  float v24; // xmm5_4
  __m128 v25; // xmm6
  float v26; // xmm6_4
  unsigned int v27; // ecx
  unsigned int v28; // r11d
  unsigned int v29; // r8d
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int128 v33; // [rsp+20h] [rbp-20h]
  __int64 v34; // [rsp+68h] [rbp+28h]
  unsigned int v35; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v36; // [rsp+74h] [rbp+34h]

  v4 = *a4 == 0;
  v6 = *a3;
  *a2 = *a3;
  if ( !v4 || a4[1] || a4[2] || a4[3] )
  {
    *(struct tagPOINT *)((char *)this + 8 * *((unsigned int *)this + 12) + 52) = v6;
    v9 = *(_OWORD *)this;
    v10 = *((_DWORD *)this + 11);
    v11 = v10;
    v33 = *(_OWORD *)this;
    *(_OWORD *)this = *(_OWORD *)a4;
    if ( v10 >= (a4[2] - *a4) / 2 )
      v11 = (a4[2] - *a4) / 2;
    if ( v10 >= (a4[3] - a4[1]) / 2 )
      v10 = (a4[3] - a4[1]) / 2;
    *(_DWORD *)this += v11;
    *((_DWORD *)this + 2) -= v11;
    *((_DWORD *)this + 1) += v10;
    *((_DWORD *)this + 3) -= v10;
    if ( (_DWORD)v9 != *(_DWORD *)this
      || __PAIR64__(DWORD2(v33), DWORD1(v9)) != *(_QWORD *)((char *)this + 4)
      || HIDWORD(v33) != *((_DWORD *)this + 3) )
    {
      *((_BYTE *)this + 32) = 0;
    }
    CursorAttraction::UpdateAttractionParameters(this, a3);
    x = a3->x;
    v14 = 0;
    if ( a3->x >= *(_DWORD *)this && x <= *((_DWORD *)this + 2) )
    {
      y = a3->y;
      if ( y >= *((_DWORD *)this + 1) && y <= *((_DWORD *)this + 3) )
        v14 = 1;
    }
    v15 = *((float *)this + 10) * *((float *)this + 10);
    v16 = (float)(a3->y - *((_DWORD *)this + 5));
    v17 = (float)(v16 * v16) + (float)((float)(x - *((_DWORD *)this + 4)) * (float)(x - *((_DWORD *)this + 4)));
    if ( v14 || v15 < v17 )
    {
      if ( *((_BYTE *)this + 32) )
      {
        if ( v15 < v17 )
          *((_BYTE *)this + 32) = 0;
      }
      else
      {
        v27 = (*((_DWORD *)this + 12) + 1) % 0xAu;
        v28 = -1 - v27;
        v29 = v27 + 1;
        while ( 1 )
        {
          v30 = (v29 - 1) % 0xA;
          v31 = v29 % 0xA;
          if ( *((_DWORD *)this + 2 * v31 + 13) != *((_DWORD *)this + 2 * v30 + 13)
            || *((_DWORD *)this + 2 * v31 + 14) != *((_DWORD *)this + 2 * v30 + 14) )
          {
            break;
          }
          ++v29;
          if ( v28 + v29 >= 9 )
          {
            if ( v14 )
              *((_BYTE *)this + 32) = 1;
            break;
          }
        }
      }
    }
    else
    {
      v34 = *((_QWORD *)this + 3);
      v18 = *((float *)&v34 + 1);
      v19 = x + (int)*(float *)&v34;
      v20 = (unsigned int)(a3->y + (int)*((float *)&v34 + 1));
      if ( *(float *)&v34 < 0.0 && (v21 = *((_DWORD *)this + 4), v19 <= v21)
        || COERCE_FLOAT(*((_QWORD *)this + 3)) > 0.0 && (v21 = *((_DWORD *)this + 4), v19 >= v21) )
      {
        *(float *)&v34 = (float)(v21 - x);
      }
      if ( *((float *)&v34 + 1) < 0.0 && (v22 = *((_DWORD *)this + 5), (int)v20 <= v22)
        || *((float *)&v34 + 1) > 0.0 && (v22 = *((_DWORD *)this + 5), (int)v20 >= v22) )
      {
        v18 = (float)(v22 - a3->y);
        *((float *)&v34 + 1) = v18;
      }
      CursorAttraction::ComputeAverageCursorVelocity(this, &v35, v20);
      v25 = _mm_mul_ps(
              _mm_unpacklo_ps((__m128)v35, (__m128)v36),
              _mm_unpacklo_ps((__m128)(unsigned int)v34, (__m128)HIDWORD(v34)));
      v26 = v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
      if ( !*((_BYTE *)this + 32) || v26 > v24 )
      {
        a2->x += (int)v23;
        a2->y += (int)v18;
      }
    }
    *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) % 0xAu;
  }
  return (struct tagPOINT)a2;
}
