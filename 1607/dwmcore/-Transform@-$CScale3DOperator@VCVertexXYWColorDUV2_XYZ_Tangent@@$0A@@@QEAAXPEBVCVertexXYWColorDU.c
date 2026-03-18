/*
 * XREFs of ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x180198EA8
 * Callers:
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$00$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801986E0 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$00$0A@.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$01$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180198860 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$01$0A@.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$0A@$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801989D4 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$0A@$0A.c)
 * Callees:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180016020 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

void __fastcall CScale3DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0>::Transform(
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
  float v16; // xmm0_4
  __m128 v17; // xmm6
  float v18; // xmm5_4
  __m128 v19; // xmm5
  float v20; // xmm4_4
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  unsigned __int64 v23; // xmm0_8
  __m128 v24; // xmm1
  struct D2D_POINT_2F v25; // [rsp+28h] [rbp-81h] BYREF
  float v26; // [rsp+34h] [rbp-75h]
  float v27; // [rsp+38h] [rbp-71h] BYREF
  float v28; // [rsp+3Ch] [rbp-6Dh]
  float v29; // [rsp+44h] [rbp-65h]
  float v30; // [rsp+48h] [rbp-61h] BYREF
  float v31; // [rsp+4Ch] [rbp-5Dh]
  float v32; // [rsp+54h] [rbp-55h]

  CMILMatrix::TransformIgnoreZW(a4, a2, (struct MilPoint4F *)&v25);
  CMILMatrix::TransformIgnoreZW(v9, a3, (struct MilPoint4F *)&v30);
  v10 = v30;
  v11 = v31;
  v12 = v30 / v32;
  v13 = v31 / v32;
  v14 = (float)(v25.x / v26) - (float)(v30 / v32);
  v15 = (float)(v25.y / v26) - (float)(v31 / v32);
  v16 = sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
  v17 = (__m128)LODWORD(FLOAT_1_0);
  v18 = FLOAT_1_0;
  if ( v16 > 0.0 )
    v18 = a3[1].x / v16;
  v25.x = (float)(v14 * v18) + v12;
  v25.y = (float)(v15 * v18) + v13;
  CMILMatrix::TransformIgnoreZW(this, &v25, (struct MilPoint4F *)&v27);
  v25.x = v27 / v29;
  v25.y = v28 / v29;
  CMILMatrix::TransformIgnoreZW(a4, &v25, (struct MilPoint4F *)&v27);
  v20 = v29;
  if ( v29 <= 0.0 )
  {
    v20 = v32;
  }
  else
  {
    v10 = v27;
    v11 = v28;
  }
  *(float *)a5 = v10;
  v17.m128_f32[0] = 1.0 - v19.m128_f32[0];
  *(float *)(a5 + 4) = v11;
  v21 = v19;
  *(float *)(a5 + 8) = v20;
  v22 = v17;
  v21.m128_f32[0] = (float)(v19.m128_f32[0] * a2[2].x) + (float)((float)(1.0 - v19.m128_f32[0]) * a3[2].x);
  v22.m128_f32[0] = (float)((float)(1.0 - v19.m128_f32[0]) * a3[2].y) + (float)(v19.m128_f32[0] * a2[2].y);
  v23 = _mm_unpacklo_ps(v21, v22).m128_u64[0];
  v24 = v19;
  *(_QWORD *)(a5 + 16) = v23;
  v24.m128_f32[0] = (float)(v19.m128_f32[0] * a2[3].x) + (float)((float)(1.0 - v19.m128_f32[0]) * a3[3].x);
  v17.m128_f32[0] = (float)((float)(1.0 - v19.m128_f32[0]) * a3[3].y) + (float)(v19.m128_f32[0] * a2[3].y);
  *(_QWORD *)(a5 + 24) = _mm_unpacklo_ps(v24, v17).m128_u64[0];
}
