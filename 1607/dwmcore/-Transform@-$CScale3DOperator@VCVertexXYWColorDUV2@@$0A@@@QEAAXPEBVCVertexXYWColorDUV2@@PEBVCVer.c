/*
 * XREFs of ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAV2@@Z @ 0x18001535C
 * Callers:
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$00$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180015224 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$00$0A@VCVertexXYWC.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$01$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801985B4 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$01$0A@VCVertexXYWC.c)
 * Callees:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180016020 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

void __fastcall CScale3DOperator<CVertexXYWColorDUV2,0>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        CMILMatrix *a4,
        __int64 a5)
{
  CMILMatrix *v9; // r9
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  unsigned int v16; // r9d
  float v17; // xmm0_4
  __m128 v18; // xmm6
  float v19; // xmm5_4
  unsigned int v20; // r9d
  __m128 v21; // xmm5
  float v22; // xmm4_4
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  unsigned __int64 v25; // xmm0_8
  __m128 v26; // xmm1
  struct D2D_POINT_2F v27; // [rsp+28h] [rbp-81h] BYREF
  float v28; // [rsp+34h] [rbp-75h]
  float v29; // [rsp+38h] [rbp-71h] BYREF
  float v30; // [rsp+3Ch] [rbp-6Dh]
  float v31; // [rsp+44h] [rbp-65h]
  float v32; // [rsp+48h] [rbp-61h] BYREF
  float v33; // [rsp+4Ch] [rbp-5Dh]
  float v34; // [rsp+54h] [rbp-55h]

  CMILMatrix::TransformIgnoreZW(a4, a2, (struct MilPoint4F *)&v27, (unsigned int)a4);
  CMILMatrix::TransformIgnoreZW(v9, a3, (struct MilPoint4F *)&v32, (unsigned int)v9);
  v10 = v32;
  v11 = v33;
  v12 = v32 / v34;
  v13 = v33 / v34;
  v14 = (float)(v27.x / v28) - (float)(v32 / v34);
  v15 = (float)(v27.y / v28) - (float)(v33 / v34);
  v17 = sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
  v18 = (__m128)LODWORD(FLOAT_1_0);
  v19 = FLOAT_1_0;
  if ( v17 > 0.0 )
    v19 = a3[1].x / v17;
  v27.x = (float)(v14 * v19) + v12;
  v27.y = (float)(v15 * v19) + v13;
  CMILMatrix::TransformIgnoreZW(this, &v27, (struct MilPoint4F *)&v29, v16);
  v27.x = v29 / v31;
  v27.y = v30 / v31;
  CMILMatrix::TransformIgnoreZW(a4, &v27, (struct MilPoint4F *)&v29, v20);
  v22 = v31;
  if ( v31 <= 0.0 )
  {
    v22 = v34;
  }
  else
  {
    v10 = v29;
    v11 = v30;
  }
  *(float *)a5 = v10;
  v18.m128_f32[0] = 1.0 - v21.m128_f32[0];
  *(float *)(a5 + 4) = v11;
  v23 = v21;
  *(float *)(a5 + 8) = v22;
  v24 = v18;
  v23.m128_f32[0] = (float)(v21.m128_f32[0] * a2[2].x) + (float)((float)(1.0 - v21.m128_f32[0]) * a3[2].x);
  v24.m128_f32[0] = (float)((float)(1.0 - v21.m128_f32[0]) * a3[2].y) + (float)(v21.m128_f32[0] * a2[2].y);
  v25 = _mm_unpacklo_ps(v23, v24).m128_u64[0];
  v26 = v21;
  *(_QWORD *)(a5 + 16) = v25;
  v26.m128_f32[0] = (float)(v21.m128_f32[0] * a2[3].x) + (float)((float)(1.0 - v21.m128_f32[0]) * a3[3].x);
  v18.m128_f32[0] = (float)((float)(1.0 - v21.m128_f32[0]) * a3[3].y) + (float)(v21.m128_f32[0] * a2[3].y);
  *(_QWORD *)(a5 + 24) = _mm_unpacklo_ps(v26, v18).m128_u64[0];
}
