/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x18001AB38
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18001A4F0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(DWMInputTarget *this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  int IsImplicit; // eax
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int PointersFromInput; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __m128 v16; // xmm2
  int *v17; // r8
  __m128 v18; // xmm3
  int v19; // eax
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm9_4
  float v25; // xmm8_4
  float v26; // xmm2_4
  float v27; // xmm6_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  unsigned int v31[4]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v32; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-E8h]
  __int128 v34; // [rsp+60h] [rbp-D8h]
  __int128 v35; // [rsp+70h] [rbp-C8h]
  struct Pointer *v36[10]; // [rsp+80h] [rbp-B8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 144) )
  {
LABEL_14:
    v10 = *((_OWORD *)a2 + 35);
    v11 = *((_OWORD *)a2 + 37);
    v33 = *((_OWORD *)a2 + 36);
    v12 = *((_OWORD *)a2 + 38);
    v32 = v10;
    v35 = v12;
    v34 = v11;
    if ( *(float *)&v10 != 1.0
      || *((float *)&v32 + 1) != 0.0
      || *((float *)&v32 + 2) != 0.0
      || *((float *)&v32 + 3) != 0.0
      || *(float *)&v33 != 0.0
      || *((float *)&v33 + 1) != 1.0
      || *((float *)&v33 + 2) != 0.0
      || *((float *)&v33 + 3) != 0.0
      || *(float *)&v34 != 0.0
      || *((float *)&v34 + 1) != 0.0
      || *((float *)&v34 + 2) != 1.0
      || *((float *)&v34 + 3) != 0.0
      || *(float *)&v35 != 0.0
      || *((float *)&v35 + 1) != 0.0
      || *((float *)&v35 + 2) != 0.0
      || *((float *)&v35 + 3) != 1.0 )
    {
      v31[0] = 0;
      PointersFromInput = GetPointersFromInput(a2, (__int64)a2, v36, v31);
      v2 = PointersFromInput;
      if ( PointersFromInput >= 0 )
      {
        v7 = v31[0];
        if ( v31[0] )
        {
          v15 = 0LL;
          while ( 1 )
          {
            v16 = *((__m128 *)a2 + 36);
            v17 = (int *)v36[v15];
            v18 = *((__m128 *)a2 + 35);
            v19 = v17[4];
            v35 = *((_OWORD *)a2 + 38);
            v20 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
            v21 = (float)v17[3];
            v22 = (float)((float)v19 * v20) - _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
            v23 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
            v24 = (float)(v21 * v20) - v16.m128_f32[0];
            v25 = (float)(v21 * v23) - v18.m128_f32[0];
            v26 = (float)((float)v19 * v23) - _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
            if ( (float)(v25 * v22) == (float)(v26 * v24) )
              break;
            v27 = (float)(v25 * v22) - (float)(v26 * v24);
            v28 = (float)(v21 * *((float *)&v35 + 3)) - *(float *)&v35;
            v29 = (float)((float)v19 * *((float *)&v35 + 3)) - *((float *)&v35 + 1);
            v17[5] = (int)(float)((float)((float)(v29 * v24) - (float)(v28 * v22)) / v27);
            v17[6] = (int)(float)((float)((float)(v28 * v26) - (float)(v29 * v25)) / v27);
            v2 = 0;
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= (unsigned int)v7 )
              return v2;
          }
          v2 = -2147418113;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v7, &MinInput_Warning_CheckResult, 3, 704, 255);
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v8 = 800;
              goto LABEL_43;
            }
          }
        }
        else
        {
          v2 = -2147024809;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 788;
            goto LABEL_43;
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v14, &MinInput_Warning_CheckResult, 3, 784, PointersFromInput);
      }
    }
    return v2;
  }
  v31[0] = 0;
  if ( (*(_BYTE *)a2 & 0x28) != 0 )
  {
    v5 = 3LL;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v5 = 4LL;
  }
  else
  {
    v5 = (*(unsigned __int8 *)a2 >> 1) & 1;
  }
  v6 = NtQueryCompositionInputQueueAndTransform(*((_QWORD *)this + 9), v5, &v32, (char *)a2 + 560);
  if ( v6 < 0 )
  {
    v2 = v6 | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 759;
LABEL_43:
      Template_qqq(v7, &MinInput_Warning_CheckResult, 3, v8, v2);
      return v2;
    }
    return v2;
  }
  *((_QWORD *)a2 + 69) = *((_QWORD *)&v32 + 1);
  IsImplicit = NtQueryCompositionInputIsImplicit(*((_QWORD *)this + 9), v31);
  if ( IsImplicit >= 0 )
  {
    *((_DWORD *)a2 + 156) = v31[0];
    goto LABEL_14;
  }
  v2 = IsImplicit | 0x10000000;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 765;
    goto LABEL_43;
  }
  return v2;
}
