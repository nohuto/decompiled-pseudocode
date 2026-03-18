/*
 * XREFs of D3DXVec4Transform @ 0x1401AC668
 * Callers:
 *     GetInertiaRegionInVirtualizedScreen @ 0x1402CBCB0 (GetInertiaRegionInVirtualizedScreen.c)
 * Callees:
 *     <none>
 */

float *__fastcall D3DXVec4Transform(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm2_4

  result = a1;
  v4 = a2[1];
  v5 = (float)((float)((float)(v4 * a3[5]) + (float)(*a2 * a3[1])) + (float)(a2[2] * a3[9])) + (float)(a2[3] * a3[13]);
  v6 = a2[2];
  v7 = (float)((float)((float)(v4 * a3[6]) + (float)(*a2 * a3[2])) + (float)(v6 * a3[10])) + (float)(a2[3] * a3[14]);
  v8 = a2[3];
  v9 = (float)((float)((float)(v4 * a3[7]) + (float)(*a2 * a3[3])) + (float)(v6 * a3[11])) + (float)(v8 * a3[15]);
  *a1 = (float)((float)((float)(v4 * a3[4]) + (float)(*a2 * *a3)) + (float)(v6 * a3[8])) + (float)(v8 * a3[12]);
  a1[1] = v5;
  a1[2] = v7;
  a1[3] = v9;
  return result;
}
