/*
 * XREFs of ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180012410
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066290 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18011C6EC (-Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18012EE40 (-GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800125A4 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     cosf_0 @ 0x1800BC866 (cosf_0.c)
 *     sinf_0 @ 0x1800BC8F6 (sinf_0.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationAxis(struct D2DMatrix *a1, const struct D2DVector3 *a2, float a3)
{
  float v5; // xmm9_4
  float v6; // xmm0_4
  float v7; // eax
  float v8; // xmm11_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm4_4
  float v15; // xmm6_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  struct D2DMatrix *result; // rax
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  float v26; // [rsp+28h] [rbp-70h]

  v5 = sinf_0(a3);
  v6 = cosf_0(a3);
  v7 = *((float *)a2 + 2);
  v8 = v6;
  v9 = 1.0 - v6;
  v25 = *(_QWORD *)a2;
  v26 = v7;
  D3DXVec3Normalize((struct D2DVector3 *)&v25, (const struct D2DVector3 *)&v25);
  v10 = *(float *)&v25;
  v11 = v26;
  v12 = *((float *)&v25 + 1);
  v13 = v26;
  v14 = v26;
  v15 = v26;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((_DWORD *)a1 + 3) = 0;
  v16 = v12 * v10;
  *((_DWORD *)a1 + 7) = 0;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  v17 = v14 * v10;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  result = a1;
  v19 = (float)((float)(v10 * v10) * (float)(1.0 - v6)) + v6;
  v20 = v10 * v5;
  v21 = (float)(v15 * v12) * v9;
  *(float *)a1 = v19;
  v22 = v13 * v5;
  v23 = v16 * v9;
  v24 = v17 * v9;
  *((float *)a1 + 1) = v22 + v23;
  *((float *)a1 + 4) = v23 - v22;
  *((float *)a1 + 2) = v24 - (float)(v12 * v5);
  *((float *)a1 + 10) = (float)((float)(v11 * v11) * v9) + v8;
  *((float *)a1 + 5) = (float)((float)(v12 * v12) * v9) + v8;
  *((float *)a1 + 6) = v20 + v21;
  *((float *)a1 + 9) = v21 - v20;
  *((float *)a1 + 8) = (float)(v12 * v5) + v24;
  return result;
}
