/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$00$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801986E0
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001B9C0 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x180198EA8 (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDU.c)
 */

__int64 __fastcall CVertexTransfer2<CScale3DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0>,1,0,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 *a1,
        float *a2,
        CMILMatrix *a3)
{
  __int64 v3; // r13
  struct D2D_POINT_2F *v4; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  CMILMatrix *v8; // r8
  CMILMatrix *v9; // r9
  __int64 v10; // r10
  float v11; // xmm6_4
  __int64 v12; // rdi
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 result; // rax
  __int128 v17; // [rsp+38h] [rbp-A9h] BYREF
  _OWORD v18[4]; // [rsp+48h] [rbp-99h] BYREF
  int v19; // [rsp+88h] [rbp-59h]
  _BYTE v20[72]; // [rsp+98h] [rbp-49h] BYREF

  v3 = a1[3];
  v4 = (struct D2D_POINT_2F *)a1[2];
  v6 = *a1;
  v7 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)v20, a2);
  v11 = *(float *)(v10 + 32);
  v12 = *(unsigned int *)(v10 + 36);
  v13 = *(_OWORD *)(v7 + 16);
  v18[0] = *(_OWORD *)v7;
  v18[1] = v13;
  v14 = *(_OWORD *)(v7 + 32);
  v15 = *(_OWORD *)(v7 + 48);
  result = *(unsigned int *)(v7 + 64);
  v18[2] = v14;
  v18[3] = v15;
  v19 = result;
  v17 = _xmm;
  if ( v8 )
  {
    result = CalculateTBNFrame((__int64)&v17, v4, (const struct D2D_POINT_2F *)v6, v8, v9);
    v17 = *(_OWORD *)result;
  }
  if ( (_DWORD)v12 )
  {
    do
    {
      CScale3DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0>::Transform((CMILMatrix *)v18, v3);
      *(_DWORD *)(v3 + 12) = (int)(float)((float)(unsigned __int8)*(_DWORD *)(v6 + 12) * v11) | (((int)(float)((float)(unsigned __int8)BYTE1(*(_DWORD *)(v6 + 12)) * v11) | (((int)(float)((float)(unsigned __int8)BYTE2(*(_DWORD *)(v6 + 12)) * v11) | ((int)(float)((float)HIBYTE(*(_DWORD *)(v6 + 12)) * v11) << 8)) << 8)) << 8);
      result = TransformLightSpacePositionAndNormal<CVertexXYWColorDUV2_XYZ_Tangent>(v4, a3, (__int64)&v17, v3);
      v3 += 64LL;
      ++v4;
      v6 += 32LL;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
