/*
 * XREFs of ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x1800C0C3C
 * Callers:
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x180162594 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_from_quaternion(__int64 a1, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm10_4
  float v6; // xmm9_4
  float v7; // xmm6_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  __int64 result; // rax
  float v12; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm11_4

  v2 = a2[1];
  v3 = v2 * *a2;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v4 = a2[3];
  v5 = a2[2];
  v6 = v4 * *a2;
  v7 = v5 * *a2;
  *(_DWORD *)(a1 + 12) = 0;
  v8 = *a2;
  *(_DWORD *)(a1 + 28) = 0;
  v9 = v4 * v2;
  *(_QWORD *)(a1 + 44) = 0LL;
  v10 = v5 * v5;
  *(_QWORD *)(a1 + 52) = 0LL;
  result = a1;
  v12 = v4 * v5;
  v13 = v5 * v2;
  v14 = v8 * v8;
  *(float *)a1 = 1.0 - (float)((float)(v10 + (float)(v2 * v2)) * 2.0);
  *(float *)(a1 + 4) = (float)(v12 + v3) * 2.0;
  *(float *)(a1 + 8) = (float)(v7 - v9) * 2.0;
  *(float *)(a1 + 32) = (float)(v9 + v7) * 2.0;
  *(float *)(a1 + 36) = (float)(v13 - v6) * 2.0;
  *(float *)(a1 + 16) = (float)(v3 - v12) * 2.0;
  *(float *)(a1 + 20) = 1.0 - (float)((float)(v10 + v14) * 2.0);
  *(float *)(a1 + 24) = (float)(v6 + v13) * 2.0;
  *(float *)(a1 + 40) = 1.0 - (float)((float)((float)(v2 * v2) + v14) * 2.0);
  return result;
}
