/*
 * XREFs of ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x18009BE2C
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800948A0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NOD.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x18009BFE4 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 * Callees:
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18009C544 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 *     ??$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z @ 0x18009C878 (--$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z.c)
 */

__int64 __fastcall ST::SE3_log<float>(__int64 a1, float *a2)
{
  float v4; // xmm7_4
  float v5; // xmm10_4
  float v6; // xmm9_4
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  float v10; // xmm1_4
  float v11; // xmm8_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  __int64 result; // rax
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // [rsp+A0h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+10h] BYREF
  int v23; // [rsp+B0h] [rbp+18h] BYREF

  ST::SO3_log_with_exp_coefs<float>(a1 + 12, (_DWORD)a2, (unsigned int)&v23, (unsigned int)&v22, (__int64)&v21);
  v4 = *(float *)(a1 + 16);
  v5 = *(float *)(a1 + 12);
  v6 = *(float *)(a1 + 20);
  ST::SO3_compute_exp_diff_inv_coef<float>((unsigned int)&v21, v7, v8, v9, LODWORD(v21));
  v10 = a2[9];
  v11 = a2[10];
  v12 = a2[11];
  v13 = v11 * v6;
  *(float *)a1 = v10;
  *(float *)(a1 + 4) = a2[10];
  result = *((unsigned int *)a2 + 11);
  *(_DWORD *)(a1 + 8) = result;
  v15 = (float)(v10 * v6) - (float)(v12 * v5);
  v16 = (float)(v11 * v5) - (float)(v10 * v4);
  v17 = (float)(v12 * v4) - v13;
  v18 = v6 * v15;
  v19 = (float)((float)(v6 * v17) - (float)(v5 * v16)) * v21;
  v20 = (float)((float)(v5 * v15) - (float)(v4 * v17)) * v21;
  *(float *)a1 = (float)(*(float *)a1 - (float)(v17 * 0.5)) + (float)((float)((float)(v4 * v16) - v18) * v21);
  *(float *)(a1 + 4) = (float)(*(float *)(a1 + 4) - (float)(v15 * 0.5)) + v19;
  *(float *)(a1 + 8) = (float)(*(float *)(a1 + 8) - (float)(v16 * 0.5)) + v20;
  return result;
}
