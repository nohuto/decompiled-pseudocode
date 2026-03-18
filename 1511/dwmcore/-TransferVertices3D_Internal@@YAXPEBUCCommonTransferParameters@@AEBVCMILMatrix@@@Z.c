/*
 * XREFs of ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180014F80
 * Callers:
 *     ?TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@MI@Z @ 0x1800330E0 (-TransferVertices@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEAV1@AEBVCMILMatrix@@AEB.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x1800153D4 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

void __fastcall TransferVertices3D_Internal(const struct CCommonTransferParameters *a1, const struct CMILMatrix *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  __int64 v6; // r14
  unsigned int v7; // eax
  float *v8; // rbx
  float *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r14
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm10_4
  float v19; // xmm13_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm14_4
  float v31; // xmm7_4
  float v32; // xmm6_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm8_4
  float v41; // xmm9_4
  float v42; // xmm10_4
  __m128 v43; // xmm3
  __m128 v44; // xmm2
  __m128 v45; // xmm1
  unsigned __int64 v46; // xmm0_8
  __m128 v47; // xmm1
  float v48; // xmm4_4
  float v49; // [rsp+20h] [rbp-128h]
  float v50; // [rsp+28h] [rbp-120h]
  float v51; // [rsp+2Ch] [rbp-11Ch]
  float v52[16]; // [rsp+30h] [rbp-118h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)a1;
  v6 = *((_QWORD *)a1 + 1);
  CMILMatrix::ComputeAdjointIgnoreZ(v52);
  v7 = *((_DWORD *)a1 + 7);
  v50 = *((float *)a1 + 6);
  if ( v7 )
  {
    v8 = (float *)(v6 + 28);
    v9 = (float *)(v4 + 28);
    v10 = v2 + 8;
    v11 = v4 - v6;
    v12 = v7;
    do
    {
      v13 = *(float *)((char *)v8 + v11 - 28);
      v14 = *(v9 - 6);
      v15 = *((float *)a2 + 4);
      v16 = *(float *)a2;
      v17 = *((float *)a2 + 5);
      v18 = *((float *)a2 + 1);
      v19 = *((float *)a2 + 7);
      v20 = *((float *)a2 + 3);
      v21 = *(float *)a2 * v13;
      v22 = v18 * v13;
      v23 = v20 * v13;
      v24 = *(v8 - 7);
      v25 = (float)(v15 * v14) + v21;
      v26 = v22 + (float)(v17 * v14);
      v27 = v19 * v14;
      v28 = *(v8 - 6);
      v29 = (float)(v23 + v27) + *((float *)a2 + 15);
      v51 = (float)((float)(v15 * v28) + (float)(*(float *)a2 * v24)) + *((float *)a2 + 12);
      v49 = (float)((float)(v18 * v24) + (float)(v17 * v28)) + *((float *)a2 + 13);
      v30 = (float)((float)(v20 * v24) + (float)(v19 * v28)) + *((float *)a2 + 15);
      v31 = (float)((float)(v26 + *((float *)a2 + 13)) / v29) - (float)(v49 / v30);
      v32 = (float)((float)(v25 + *((float *)a2 + 12)) / v29) - (float)(v51 / v30);
      v33 = sqrtf_0((float)(v31 * v31) + (float)(v32 * v32));
      v34 = FLOAT_1_0;
      if ( v33 > 0.0 )
        v34 = *(v8 - 5) / v33;
      v35 = (float)(v32 * v34) + (float)(v51 / v30);
      v36 = (float)(v31 * v34) + (float)(v49 / v30);
      v37 = (float)((float)(v52[7] * v36) + (float)(v52[3] * v35)) + v52[15];
      v38 = (float)((float)((float)(v52[4] * v36) + (float)(v52[0] * v35)) + v52[12]) / v37;
      v39 = (float)((float)((float)(v52[5] * v36) + (float)(v52[1] * v35)) + v52[13]) / v37;
      v40 = (float)((float)(v20 * v38) + (float)(v19 * v39)) + *((float *)a2 + 15);
      v41 = (float)((float)(v15 * v39) + (float)(v16 * v38)) + *((float *)a2 + 12);
      v42 = (float)((float)(v18 * v38) + (float)(v17 * v39)) + *((float *)a2 + 13);
      if ( v40 <= 0.0 )
      {
        v41 = v51;
        v40 = v30;
        v42 = v49;
      }
      *(float *)(v10 - 8) = v41;
      *(float *)(v10 - 4) = v42;
      *(float *)v10 = v40;
      v43 = (__m128)LODWORD(FLOAT_1_0);
      v43.m128_f32[0] = 1.0 - v34;
      *(_DWORD *)(v10 + 4) = (int)(float)((float)(unsigned __int8)*((_DWORD *)v9 - 4) * v50) | (((int)(float)((float)(unsigned __int8)BYTE1(*((_DWORD *)v9 - 4)) * v50) | (((int)(float)((float)(unsigned __int8)BYTE2(*((_DWORD *)v9 - 4)) * v50) | ((int)(float)((float)HIBYTE(*((_DWORD *)v9 - 4)) * v50) << 8)) << 8)) << 8);
      v44 = v43;
      v45 = v43;
      v44.m128_f32[0] = (float)((float)(1.0 - v34) * *(v8 - 3)) + (float)(v34 * *(v9 - 3));
      v45.m128_f32[0] = (float)((float)(1.0 - v34) * *(v8 - 2)) + (float)(v34 * *(v9 - 2));
      v46 = _mm_unpacklo_ps(v44, v45).m128_u64[0];
      v47 = v43;
      *(_QWORD *)(v10 + 8) = v46;
      *(float *)&v46 = v34 * *(v9 - 1);
      v47.m128_f32[0] = (float)(1.0 - v34) * *(v8 - 1);
      v43.m128_f32[0] = (float)(1.0 - v34) * *v8;
      v8 += 8;
      v48 = v34 * *v9;
      v47.m128_f32[0] = v47.m128_f32[0] + *(float *)&v46;
      v9 += 8;
      v43.m128_f32[0] = v43.m128_f32[0] + v48;
      *(_QWORD *)(v10 + 16) = _mm_unpacklo_ps(v47, v43).m128_u64[0];
      v10 += 32LL;
      --v12;
    }
    while ( v12 );
  }
}
