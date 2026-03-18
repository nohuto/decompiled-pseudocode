/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$0A@$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801989D4
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001B9C0 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x180198EA8 (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDU.c)
 */

__int64 __fastcall CVertexTransfer2<CScale3DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0>,0,0,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 *a1,
        float *a2,
        CMILMatrix *a3)
{
  __int64 v3; // rdi
  struct D2D_POINT_2F *v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  CMILMatrix *v8; // r8
  CMILMatrix *v9; // r9
  __int64 v10; // r10
  __int64 v11; // r15
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 result; // rax
  __int128 v16; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v17[4]; // [rsp+48h] [rbp-69h] BYREF
  int v18; // [rsp+88h] [rbp-29h]
  _BYTE v19[80]; // [rsp+98h] [rbp-19h] BYREF

  v3 = a1[3];
  v4 = (struct D2D_POINT_2F *)a1[2];
  v6 = *a1;
  v7 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)v19, a2);
  v11 = *(unsigned int *)(v10 + 36);
  v12 = *(_OWORD *)(v7 + 16);
  v17[0] = *(_OWORD *)v7;
  v17[1] = v12;
  v13 = *(_OWORD *)(v7 + 32);
  v14 = *(_OWORD *)(v7 + 48);
  result = *(unsigned int *)(v7 + 64);
  v17[2] = v13;
  v17[3] = v14;
  v18 = result;
  v16 = _xmm;
  if ( v8 )
  {
    result = CalculateTBNFrame((__int64)&v16, v4, (const struct D2D_POINT_2F *)v6, v8, v9);
    v16 = *(_OWORD *)result;
  }
  if ( (_DWORD)v11 )
  {
    do
    {
      CScale3DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0>::Transform((CMILMatrix *)v17, v3);
      *(_DWORD *)(v3 + 12) = *(_DWORD *)(v6 + 12);
      result = TransformLightSpacePositionAndNormal<CVertexXYWColorDUV2_XYZ_Tangent>(v4, a3, (__int64)&v16, v3);
      v3 += 64LL;
      ++v4;
      v6 += 32LL;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
