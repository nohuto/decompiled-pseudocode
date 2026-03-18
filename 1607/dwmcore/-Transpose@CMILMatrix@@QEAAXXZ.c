/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180162788
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x1801627CC (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

void __fastcall CMILMatrix::Transpose(CMILMatrix *this, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm1
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_OWORD *)Windows::Foundation::Numerics::transpose(v6, this, a3);
  *(_OWORD *)v4 = *v3;
  *(_OWORD *)(v4 + 16) = v3[1];
  *(_OWORD *)(v4 + 32) = v3[2];
  v5 = v3[3];
  *(_BYTE *)(v4 + 64) &= 3u;
  *(_BYTE *)(v4 + 65) = 0;
  *(_OWORD *)(v4 + 48) = v5;
}
