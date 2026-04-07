/*
 * XREFs of ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800509BC
 * Callers:
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x18009EE44 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixRotationQuaternion(struct D2DMatrix *a1, const struct D2DQuaternion *a2)
{
  float v2; // xmm8_4
  float v3; // xmm9_4
  float v4; // xmm2_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm10_4
  struct D2DMatrix *result; // rax
  float v12; // xmm3_4
  float v13; // xmm8_4
  float v14; // xmm4_4

  v2 = *((float *)a2 + 3);
  v3 = *((float *)a2 + 2);
  v4 = v3 + v3;
  v5 = *((float *)a2 + 1);
  v6 = *(float *)a2;
  *((_DWORD *)a1 + 15) = 1065353216;
  v7 = v3 * (float)(v3 + v3);
  v8 = v2 * v4;
  *((_DWORD *)a1 + 3) = 0;
  v9 = v5 * (float)(v5 + v5);
  *((_DWORD *)a1 + 7) = 0;
  v10 = v2 * (float)(v6 + v6);
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  result = a1;
  v12 = v6 * (float)(v5 + v5);
  v13 = v2 * (float)(v5 + v5);
  v14 = 1.0 - (float)(v6 * (float)(v6 + v6));
  *(float *)a1 = (float)(1.0 - v9) - v7;
  *((float *)a1 + 8) = (float)(v6 * v4) + v13;
  *((float *)a1 + 2) = (float)(v6 * v4) - v13;
  *((float *)a1 + 1) = v12 + v8;
  *((float *)a1 + 4) = v12 - v8;
  *((float *)a1 + 9) = (float)(v5 * v4) - v10;
  *((float *)a1 + 5) = v14 - v7;
  *((float *)a1 + 6) = (float)(v5 * v4) + v10;
  *((float *)a1 + 10) = v14 - v9;
  return result;
}
