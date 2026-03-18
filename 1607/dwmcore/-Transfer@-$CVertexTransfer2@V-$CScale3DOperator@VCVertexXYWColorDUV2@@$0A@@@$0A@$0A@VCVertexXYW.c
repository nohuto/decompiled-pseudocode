/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$0A@$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18001A0D0
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001B9C0 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

__int64 __fastcall CVertexTransfer2<CScale3DOperator<CVertexXYWColorDUV2,0>,0,0,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        float *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int128 *v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  float *v13; // rsi
  float *v14; // rdi
  __int64 v15; // r15
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm11_4
  float v19; // xmm9_4
  float v20; // xmm12_4
  float v21; // xmm10_4
  float v22; // xmm13_4
  float v23; // xmm8_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm15_4
  float v34; // xmm6_4
  float v35; // xmm7_4
  float v36; // xmm0_4
  __m128 v37; // xmm4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm8_4
  float v44; // xmm9_4
  float v45; // xmm10_4
  __m128 v46; // xmm3
  __m128 v47; // xmm2
  __m128 v48; // xmm1
  unsigned __int64 v49; // xmm0_8
  __m128 v50; // xmm1
  float v51; // [rsp+28h] [rbp-160h]
  float v52; // [rsp+2Ch] [rbp-15Ch]
  __int128 v53; // [rsp+30h] [rbp-158h]
  float v54[8]; // [rsp+40h] [rbp-148h]
  float v55[8]; // [rsp+60h] [rbp-128h]
  _BYTE v56[80]; // [rsp+80h] [rbp-108h] BYREF

  v2 = a1[3];
  v3 = *a1;
  v5 = (__int128 *)CMILMatrix::ComputeAdjointIgnoreZ(v56, a2, a1);
  v7 = *v5;
  *(_OWORD *)v54 = v5[1];
  v8 = v5[3];
  result = *(unsigned int *)(v9 + 36);
  v53 = v7;
  *(_OWORD *)v55 = v8;
  if ( (_DWORD)result )
  {
    v11 = v2 + 8;
    v12 = (unsigned int)result;
    v13 = (float *)(v3 + 28);
    v14 = (float *)(v6 + 28);
    v15 = v3 - v6;
    do
    {
      v16 = *(float *)((char *)v14 + v15 - 28);
      v17 = *(v13 - 6);
      v18 = a2[4];
      v19 = *a2;
      v20 = a2[5];
      v21 = a2[1];
      v22 = a2[7];
      v23 = a2[3];
      v24 = v21 * v16;
      v25 = *a2 * v16;
      v26 = v23 * v16;
      v27 = *(v14 - 7);
      v28 = (float)(v25 + (float)(v18 * v17)) + a2[12];
      v29 = v24 + (float)(v20 * v17);
      v30 = v22 * v17;
      v31 = *(v14 - 6);
      v32 = (float)(v26 + v30) + a2[15];
      v51 = (float)((float)(*a2 * v27) + (float)(v18 * v31)) + a2[12];
      v52 = (float)((float)(v21 * v27) + (float)(v20 * v31)) + a2[13];
      v33 = (float)((float)(v23 * v27) + (float)(v22 * v31)) + a2[15];
      v34 = (float)(v28 / v32) - (float)(v51 / v33);
      v35 = (float)((float)(v29 + a2[13]) / v32) - (float)(v52 / v33);
      v36 = sqrtf_0((float)(v35 * v35) + (float)(v34 * v34));
      v37 = (__m128)LODWORD(FLOAT_1_0);
      if ( v36 > 0.0 )
      {
        v37 = (__m128)*((unsigned int *)v14 - 5);
        v37.m128_f32[0] = v37.m128_f32[0] / v36;
      }
      v38 = (float)(v34 * v37.m128_f32[0]) + (float)(v51 / v33);
      v39 = (float)(v35 * v37.m128_f32[0]) + (float)(v52 / v33);
      v40 = (float)((float)(v54[3] * v39) + (float)(*((float *)&v53 + 3) * v38)) + v55[3];
      v41 = (float)((float)((float)(v54[0] * v39) + (float)(*(float *)&v53 * v38)) + v55[0]) / v40;
      v42 = (float)((float)((float)(v54[1] * v39) + (float)(*((float *)&v53 + 1) * v38)) + v55[1]) / v40;
      v43 = (float)((float)(v23 * v41) + (float)(v22 * v42)) + a2[15];
      v44 = (float)((float)(v19 * v41) + (float)(v18 * v42)) + a2[12];
      v45 = (float)((float)(v21 * v41) + (float)(v20 * v42)) + a2[13];
      if ( v43 <= 0.0 )
      {
        v44 = v51;
        v43 = v33;
        v45 = v52;
      }
      *(float *)(v11 - 8) = v44;
      v46 = (__m128)LODWORD(FLOAT_1_0);
      *(float *)(v11 - 4) = v45;
      *(float *)v11 = v43;
      v47 = v37;
      v48 = v37;
      v47.m128_f32[0] = (float)(v37.m128_f32[0] * *(v13 - 3)) + (float)((float)(1.0 - v37.m128_f32[0]) * *(v14 - 3));
      v48.m128_f32[0] = (float)(v37.m128_f32[0] * *(v13 - 2)) + (float)((float)(1.0 - v37.m128_f32[0]) * *(v14 - 2));
      v49 = _mm_unpacklo_ps(v47, v48).m128_u64[0];
      v50 = v37;
      *(_QWORD *)(v11 + 8) = v49;
      *(float *)&v49 = (float)(1.0 - v37.m128_f32[0]) * *(v14 - 1);
      v46.m128_f32[0] = (float)(1.0 - v37.m128_f32[0]) * *v14;
      v14 += 8;
      v50.m128_f32[0] = (float)(v37.m128_f32[0] * *(v13 - 1)) + *(float *)&v49;
      v46.m128_f32[0] = v46.m128_f32[0] + (float)(v37.m128_f32[0] * *v13);
      *(_QWORD *)(v11 + 16) = _mm_unpacklo_ps(v50, v46).m128_u64[0];
      result = *((unsigned int *)v13 - 4);
      v13 += 8;
      *(_DWORD *)(v11 + 4) = result;
      v11 += 32LL;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
