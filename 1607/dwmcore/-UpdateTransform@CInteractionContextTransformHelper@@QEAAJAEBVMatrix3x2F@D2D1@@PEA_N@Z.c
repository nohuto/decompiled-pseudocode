/*
 * XREFs of ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180112530
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1800BBDD0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     GetIndividualScales @ 0x18018B62C (GetIndividualScales.c)
 *     GetInverse @ 0x18018B710 (GetInverse.c)
 *     IsEqualMatrix @ 0x18018B89C (IsEqualMatrix.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::UpdateTransform(
        CInteractionContextTransformHelper *this,
        const struct D2D1::Matrix3x2F *a2,
        bool *a3)
{
  int Inverse; // r8d
  unsigned __int64 v6; // xmm1_8
  __int128 v7; // xmm0
  unsigned __int64 v8; // xmm1_8
  __int64 v9; // xmm1_8
  float v10; // xmm6_4
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  unsigned __int64 v13; // xmm7_8
  float v14; // xmm4_4
  __int128 v15; // xmm5
  __int128 v16; // xmm0
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  float v25; // [rsp+28h] [rbp-39h] BYREF
  float v26; // [rsp+2Ch] [rbp-35h] BYREF
  __int128 v27; // [rsp+30h] [rbp-31h] BYREF
  __int64 v28; // [rsp+40h] [rbp-21h]
  __int128 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+58h] [rbp-9h]
  __int128 v31; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp+17h]

  if ( !(unsigned __int8)IsEqualMatrix(a2, this, 0LL) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v31 = *(_OWORD *)a2;
    v32 = v6;
    Inverse = GetInverse(&v31, &v27);
    if ( Inverse >= 0 )
    {
      v7 = *(_OWORD *)a2;
      v26 = 1.0;
      v8 = *((_QWORD *)a2 + 2);
      v31 = v7;
      v25 = 1.0;
      v32 = v8;
      Inverse = GetIndividualScales(&v31, &v26, &v25);
      if ( Inverse >= 0 )
      {
        v9 = *((_QWORD *)a2 + 2);
        v31 = *(_OWORD *)a2;
        v10 = 1.0 / v26;
        v11 = (__m128)(unsigned int)v9;
        *((float *)&v31 + 2) = *((float *)&v31 + 2) * (float)(1.0 / v26);
        *(float *)&v31 = *(float *)&v31 * (float)(1.0 / v26);
        v12 = (__m128)HIDWORD(v9);
        *((float *)&v31 + 1) = *((float *)&v31 + 1) * (float)(1.0 / v25);
        v11.m128_f32[0] = *(float *)&v9 * (float)(1.0 / v26);
        *((float *)&v31 + 3) = *((float *)&v31 + 3) * (float)(1.0 / v25);
        v12.m128_f32[0] = *((float *)&v9 + 1) * (float)(1.0 / v25);
        v13 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        v32 = v13;
        Inverse = GetInverse(&v31, &v29);
        if ( Inverse >= 0 )
        {
          v16 = *(_OWORD *)a2;
          *(_QWORD *)((char *)&v31 + 4) = 0LL;
          v17 = 0LL;
          *(_OWORD *)this = v16;
          v18 = 0LL;
          v19 = v27;
          *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
          v20 = v28;
          *(_OWORD *)((char *)this + 24) = v19;
          v21 = v29;
          *((_QWORD *)this + 5) = v20;
          v22 = v30;
          *(float *)&v31 = v10;
          *((float *)&v31 + 3) = v14;
          *(_OWORD *)((char *)this + 72) = v21;
          v23 = v31;
          *((_QWORD *)this + 11) = v22;
          v18.m128_f32[0] = 0.0 - (float)(v10 * 0.0);
          *((_OWORD *)this + 6) = v23;
          v17.m128_f32[0] = 0.0 - (float)(v14 * 0.0);
          *((_OWORD *)this + 3) = v15;
          *((_QWORD *)this + 8) = v13;
          *((_QWORD *)this + 14) = _mm_unpacklo_ps(v18, v17).m128_u64[0];
        }
      }
    }
  }
  return (unsigned int)Inverse;
}
