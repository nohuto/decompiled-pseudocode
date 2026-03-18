/*
 * XREFs of ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180003680
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ?TransformIgnoreZW@CBaseMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180004150 (-TransformIgnoreZW@CBaseMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180004208 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

void __fastcall TransferVertices3D_Internal(const struct CCommonTransferParameters *a1, const struct CMILMatrix *a2)
{
  __int64 v2; // r15
  __int64 v4; // rdi
  __int64 v6; // r14
  unsigned int v7; // r9d
  unsigned int v8; // eax
  __int64 v9; // r15
  float *v10; // r13
  __int64 v11; // rdi
  float *v12; // rbx
  __int64 v13; // r14
  CBaseMatrix *v14; // rcx
  unsigned int v15; // r9d
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  unsigned int v22; // r9d
  float v23; // xmm0_4
  __m128 v24; // xmm8
  unsigned int v25; // r9d
  float v26; // xmm5_4
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  unsigned __int64 v30; // xmm0_8
  __m128 v31; // xmm1
  float v32; // xmm8_4
  float v33; // [rsp+28h] [rbp-E0h]
  D2D_POINT_2F v34; // [rsp+30h] [rbp-D8h] BYREF
  struct D2D_POINT_2F v35; // [rsp+38h] [rbp-D0h] BYREF
  float v36; // [rsp+40h] [rbp-C8h] BYREF
  float v37; // [rsp+44h] [rbp-C4h]
  float v38; // [rsp+4Ch] [rbp-BCh]
  float v39[3]; // [rsp+50h] [rbp-B8h] BYREF
  float v40; // [rsp+5Ch] [rbp-ACh]
  float v41[3]; // [rsp+60h] [rbp-A8h] BYREF
  float v42; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v43[3]; // [rsp+70h] [rbp-98h] BYREF
  float v44; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v45[64]; // [rsp+88h] [rbp-80h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)a1;
  v6 = *((_QWORD *)a1 + 1);
  CMILMatrix::ComputeAdjointIgnoreZ(v45);
  v8 = *((_DWORD *)a1 + 7);
  v33 = *((float *)a1 + 6);
  if ( v8 )
  {
    v9 = v2 + 8;
    v10 = (float *)(v4 + 28);
    v11 = v4 - v6;
    v12 = (float *)(v6 + 28);
    v13 = v8;
    do
    {
      CBaseMatrix::TransformIgnoreZW(
        a2,
        (const struct D2D_POINT_2F *)((char *)v12 + v11 - 28),
        (struct MilPoint4F *)v41,
        v7);
      CBaseMatrix::TransformIgnoreZW(v14, (const struct D2D_POINT_2F *)(v12 - 7), (struct MilPoint4F *)&v36, v15);
      v16 = v36;
      v17 = v37;
      v18 = v36 / v38;
      v19 = v37 / v38;
      v20 = (float)(v41[0] / v42) - (float)(v36 / v38);
      v21 = (float)(v41[1] / v42) - (float)(v37 / v38);
      v23 = sqrtf_0((float)(v21 * v21) + (float)(v20 * v20));
      v24 = (__m128)LODWORD(FLOAT_1_0);
      if ( v23 > 0.0 )
      {
        v24 = (__m128)*((unsigned int *)v12 - 5);
        v24.m128_f32[0] = v24.m128_f32[0] / v23;
      }
      v34.x = (float)(v20 * v24.m128_f32[0]) + v18;
      v34.y = (float)(v21 * v24.m128_f32[0]) + v19;
      CBaseMatrix::TransformIgnoreZW((CBaseMatrix *)v45, &v34, (struct MilPoint4F *)v39, v22);
      v35.y = v39[1] / v40;
      v35.x = v39[0] / v40;
      CBaseMatrix::TransformIgnoreZW(a2, &v35, (struct MilPoint4F *)v43, v25);
      v26 = v44;
      if ( v44 <= 0.0 )
      {
        v26 = v38;
      }
      else
      {
        v16 = *(float *)v43;
        v17 = *(float *)&v43[1];
      }
      *(float *)(v9 - 8) = v16;
      *(float *)(v9 - 4) = v17;
      *(float *)v9 = v26;
      v27 = v24;
      v28 = v24;
      v29 = (__m128)LODWORD(FLOAT_1_0);
      *(_DWORD *)(v9 + 4) = (int)(float)((float)(unsigned __int8)*((_DWORD *)v10 - 4) * v33) | (((int)(float)((float)(unsigned __int8)BYTE1(*((_DWORD *)v10 - 4)) * v33) | (((int)(float)((float)(unsigned __int8)BYTE2(*((_DWORD *)v10 - 4)) * v33) | ((int)(float)((float)HIBYTE(*((_DWORD *)v10 - 4)) * v33) << 8)) << 8)) << 8);
      v28.m128_f32[0] = (float)(v24.m128_f32[0] * *(v10 - 3)) + (float)((float)(1.0 - v24.m128_f32[0]) * *(v12 - 3));
      v27.m128_f32[0] = (float)(v24.m128_f32[0] * *(v10 - 2)) + (float)((float)(1.0 - v24.m128_f32[0]) * *(v12 - 2));
      v30 = _mm_unpacklo_ps(v28, v27).m128_u64[0];
      v31 = v24;
      *(_QWORD *)(v9 + 8) = v30;
      *(float *)&v30 = (float)(1.0 - v24.m128_f32[0]) * *(v12 - 1);
      v31.m128_f32[0] = v24.m128_f32[0] * *(v10 - 1);
      v29.m128_f32[0] = (float)(1.0 - v24.m128_f32[0]) * *v12;
      v12 += 8;
      v32 = v24.m128_f32[0] * *v10;
      v31.m128_f32[0] = v31.m128_f32[0] + *(float *)&v30;
      v10 += 8;
      v29.m128_f32[0] = v29.m128_f32[0] + v32;
      *(_QWORD *)(v9 + 16) = _mm_unpacklo_ps(v31, v29).m128_u64[0];
      v9 += 32LL;
      --v13;
    }
    while ( v13 );
  }
}
