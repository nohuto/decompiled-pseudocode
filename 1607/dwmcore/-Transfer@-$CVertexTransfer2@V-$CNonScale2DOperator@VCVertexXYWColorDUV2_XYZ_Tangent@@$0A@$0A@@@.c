/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$0A@@@$0A@$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197480
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 */

_OWORD *__fastcall CVertexTransfer2<CNonScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0,0>,0,0,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 a1,
        float *a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  _OWORD *result; // rax
  __int64 v6; // r14
  struct D2D_POINT_2F *v8; // rbp
  const struct D2D_POINT_2F *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r14
  FLOAT *p_y; // rdi
  float v13; // xmm2_4
  _OWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = *(struct D2D_POINT_2F **)(a1 + 16);
  v9 = *(const struct D2D_POINT_2F **)a1;
  v10 = *(unsigned int *)(a1 + 36);
  v14[0] = _xmm;
  if ( a3 )
  {
    result = (_OWORD *)CalculateTBNFrame((__int64)v14, v8, v9, a3, a4);
    v14[0] = *result;
  }
  if ( (_DWORD)v10 )
  {
    v11 = v6 + 8;
    p_y = &v9->y;
    do
    {
      *(float *)(v11 - 8) = (float)((float)(*a2 * *(p_y - 1)) + (float)(a2[4] * *p_y)) + a2[12];
      v13 = (float)((float)(*p_y * a2[5]) + (float)(a2[1] * *(p_y - 1))) + a2[13];
      *(_DWORD *)v11 = 1065353216;
      *(float *)(v11 - 4) = v13;
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(p_y + 3);
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(p_y + 5);
      *(FLOAT *)(v11 + 4) = p_y[2];
      result = (_OWORD *)TransformLightSpacePositionAndNormal<CVertexXYWColorDUV2_XYZ_Tangent>(
                           v8,
                           a3,
                           (__int64)v14,
                           v11 - 8);
      v11 += 64LL;
      ++v8;
      p_y += 8;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
