/*
 * XREFs of ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x180110B50
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18016E08C (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1800233DC (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 */

void __fastcall CMILMatrix::Set2DRotation(CMILMatrix *this, float a2, float a3, float a4)
{
  _OWORD *float4x4_rotation_z; // rax
  __int128 v6; // xmm1
  float v7[3]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+2Ch] [rbp-4Ch] BYREF

  v7[0] = a3;
  v7[1] = a4;
  v7[2] = 0.0;
  float4x4_rotation_z = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_rotation_z((__int64)&v8, a2, v7);
  *(_OWORD *)this = *float4x4_rotation_z;
  *((_OWORD *)this + 1) = float4x4_rotation_z[1];
  *((_OWORD *)this + 2) = float4x4_rotation_z[2];
  v6 = float4x4_rotation_z[3];
  *((_WORD *)this + 32) = 0x4000;
  *((_OWORD *)this + 3) = v6;
}
