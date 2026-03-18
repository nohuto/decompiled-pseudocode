/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800232D0
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1800233DC (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     fmod_0 @ 0x1800BF61A (fmod_0.c)
 */

void __fastcall CRotateTransform::GetRealization(
        CRotateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  double v6; // xmm0_8
  __int64 v7; // rdx
  _OWORD *float4x4_rotation_z; // rax
  __int128 v9; // xmm1
  _DWORD v10[3]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[76]; // [rsp+2Ch] [rbp-4Ch] BYREF

  v4 = *((double *)this + 28);
  v5 = *((double *)this + 29);
  *(float *)v10 = v4;
  v10[2] = 0;
  v6 = *((double *)this + 27);
  *(float *)&v10[1] = v5;
  fmod_0(v6, 360.0);
  float4x4_rotation_z = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_rotation_z(v11, v7, v10);
  *(_OWORD *)a3 = *float4x4_rotation_z;
  *((_OWORD *)a3 + 1) = float4x4_rotation_z[1];
  *((_OWORD *)a3 + 2) = float4x4_rotation_z[2];
  v9 = float4x4_rotation_z[3];
  *((_WORD *)a3 + 32) = 0x4000;
  *((_OWORD *)a3 + 3) = v9;
}
