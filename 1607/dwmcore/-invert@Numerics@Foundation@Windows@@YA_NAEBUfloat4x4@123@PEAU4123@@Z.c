/*
 * XREFs of ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800ABA00
 * Callers:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180110B1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        __m128 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm15_4
  float v8; // xmm14_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  bool result; // al
  __m128 v35; // xmm0
  float v36; // [rsp+8h] [rbp-100h]
  float v37; // [rsp+Ch] [rbp-FCh]
  float v38; // [rsp+10h] [rbp-F8h]
  float v39; // [rsp+14h] [rbp-F4h]
  float v40; // [rsp+18h] [rbp-F0h]
  float v41; // [rsp+1Ch] [rbp-ECh]
  float v42; // [rsp+20h] [rbp-E8h]
  float v43; // [rsp+24h] [rbp-E4h]
  float v44; // [rsp+28h] [rbp-E0h]
  float v45; // [rsp+2Ch] [rbp-DCh]
  float v46; // [rsp+30h] [rbp-D8h]
  float v47; // [rsp+128h] [rbp+20h]
  float v48; // [rsp+138h] [rbp+30h]
  float v49; // [rsp+140h] [rbp+38h]

  v3 = *((float *)this + 10);
  v4 = *((float *)this + 11);
  v5 = *((float *)this + 9);
  v6 = *((float *)this + 8);
  v36 = *(float *)this;
  v47 = *((float *)this + 1);
  v48 = *((float *)this + 2);
  v49 = *((float *)this + 3);
  v38 = *((float *)this + 7);
  v7 = *((float *)this + 14);
  v8 = *((float *)this + 15);
  v39 = *((float *)this + 12);
  v9 = (float)(v8 * v3) - (float)(v7 * v4);
  v46 = v6;
  v43 = v4;
  v41 = *((float *)this + 13);
  v10 = (float)(v8 * v5) - (float)(v41 * v4);
  v44 = v3;
  v45 = v5;
  v11 = (float)(v7 * v5) - (float)(v41 * v3);
  v42 = *((float *)this + 4);
  v40 = *((float *)this + 5);
  v12 = (float)(v8 * v6) - (float)(v39 * v4);
  v37 = *((float *)this + 6);
  v13 = (float)(v7 * v6) - (float)(v39 * v3);
  v14 = (float)(v41 * v6) - (float)(v39 * v5);
  v15 = (float)((float)(v9 * v40) - (float)(v10 * v37)) + (float)(v11 * v38);
  LODWORD(v16) = COERCE_UNSIGNED_INT((float)((float)(v9 * v42) - (float)(v12 * v37)) + (float)(v13 * v38)) ^ _xmm;
  v17 = (float)((float)(v10 * v42) - (float)(v12 * v40)) + (float)(v14 * v38);
  LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v11 * v42) - (float)(v13 * v40)) + (float)(v14 * v37)) ^ _xmm;
  v19 = (float)((float)((float)(v16 * v47) + (float)(v15 * *(float *)this)) + (float)(v17 * v48)) + (float)(v18 * v49);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
  if ( v20 < 0.00000011920929 )
  {
    result = 0;
    v35 = _mm_shuffle_ps(DirectX::g_XMQNaN, DirectX::g_XMQNaN, 0);
    *a2 = v35;
    a2[1] = v35;
    a2[2] = v35;
    a2[3] = v35;
  }
  else
  {
    v21 = 1.0 / v19;
    a2->m128_f32[0] = (float)(1.0 / v19) * v15;
    a2[1].m128_f32[0] = (float)(1.0 / v19) * v16;
    a2[2].m128_f32[0] = (float)(1.0 / v19) * v17;
    a2[3].m128_f32[0] = (float)(1.0 / v19) * v18;
    a2[1].m128_f32[1] = (float)((float)((float)(v9 * v36) - (float)(v12 * v48)) + (float)(v13 * v49))
                      * (float)(1.0 / v19);
    a2[2].m128_i32[1] = COERCE_UNSIGNED_INT(
                          (float)((float)((float)(v10 * v36) - (float)(v12 * v47)) + (float)(v14 * v49))
                        * (float)(1.0 / v19)) ^ _xmm;
    a2->m128_i32[1] = COERCE_UNSIGNED_INT(
                        (float)((float)((float)(v9 * v47) - (float)(v10 * v48)) + (float)(v11 * v49))
                      * (float)(1.0 / v19)) ^ _xmm;
    v22 = (float)(v8 * v37) - (float)(v7 * v38);
    a2[3].m128_f32[1] = (float)((float)((float)(v11 * v36) - (float)(v13 * v47)) + (float)(v14 * v48))
                      * (float)(1.0 / v19);
    v23 = (float)(v8 * v40) - (float)(v41 * v38);
    v24 = (float)(v7 * v40) - (float)(v41 * v37);
    v25 = (float)(v8 * v42) - (float)(v39 * v38);
    v26 = (float)(v7 * v42) - (float)(v39 * v37);
    v27 = (float)(v41 * v42) - (float)(v39 * v40);
    a2->m128_f32[2] = (float)((float)((float)(v22 * v47) - (float)(v23 * v48)) + (float)(v24 * v49)) * v21;
    a2[1].m128_i32[2] = COERCE_UNSIGNED_INT((float)((float)((float)(v22 * v36) - (float)(v25 * v48)) + (float)(v26 * v49)) * v21) ^ _xmm;
    a2[2].m128_f32[2] = (float)((float)((float)(v23 * v36) - (float)(v25 * v47)) + (float)(v27 * v49)) * v21;
    a2[3].m128_i32[2] = COERCE_UNSIGNED_INT((float)((float)((float)(v24 * v36) - (float)(v26 * v47)) + (float)(v27 * v48)) * v21) ^ _xmm;
    v28 = (float)(v43 * v37) - (float)(v44 * v38);
    v29 = (float)(v43 * v40) - (float)(v45 * v38);
    v30 = (float)(v44 * v40) - (float)(v45 * v37);
    v31 = (float)(v43 * v42) - (float)(v46 * v38);
    v32 = (float)(v44 * v42) - (float)(v46 * v37);
    v33 = (float)(v45 * v42) - (float)(v46 * v40);
    result = 1;
    a2->m128_i32[3] = COERCE_UNSIGNED_INT((float)((float)((float)(v28 * v47) - (float)(v29 * v48)) + (float)(v30 * v49)) * v21) ^ _xmm;
    a2[2].m128_i32[3] = COERCE_UNSIGNED_INT((float)((float)((float)(v29 * v36) - (float)(v31 * v47)) + (float)(v33 * v49)) * v21) ^ _xmm;
    a2[1].m128_f32[3] = (float)((float)((float)(v28 * v36) - (float)(v31 * v48)) + (float)(v32 * v49)) * v21;
    a2[3].m128_f32[3] = (float)((float)((float)(v30 * v36) - (float)(v32 * v47)) + (float)(v33 * v48)) * v21;
  }
  return result;
}
