/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$01$0A@@@$01$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801970A8
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 */

__int128 *__fastcall CVertexTransfer2<CNonScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,2,0>,2,0,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 a1,
        float *a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  __int128 *result; // rax
  __int64 v6; // r14
  struct D2D_POINT_2F *v8; // rbp
  const struct D2D_POINT_2F *v9; // rdi
  __int64 v10; // rbx
  float v11; // xmm6_4
  __int64 v12; // r14
  FLOAT *p_y; // rdi
  float v14; // xmm2_4
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = *(struct D2D_POINT_2F **)(a1 + 16);
  v9 = *(const struct D2D_POINT_2F **)a1;
  v10 = *(unsigned int *)(a1 + 36);
  v11 = *(float *)(a1 + 32);
  v15 = _xmm;
  if ( a3 )
  {
    result = (__int128 *)CalculateTBNFrame((__int64)&v15, v8, v9, a3, a4);
    v15 = *result;
  }
  if ( (_DWORD)v10 )
  {
    v12 = v6 + 8;
    p_y = &v9->y;
    do
    {
      *(float *)(v12 - 8) = (float)((float)(*p_y * a2[4]) + (float)(*(p_y - 1) * *a2)) + a2[12];
      v14 = (float)((float)(a2[1] * *(p_y - 1)) + (float)(a2[5] * *p_y)) + a2[13];
      *(_DWORD *)v12 = 1065353216;
      *(float *)(v12 - 4) = v14;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(p_y + 3);
      *(_QWORD *)(v12 + 16) = *(_QWORD *)(p_y + 5);
      *(_DWORD *)(v12 + 4) = (int)(float)(unsigned __int8)*((_DWORD *)p_y + 2) | (((int)(float)(unsigned __int8)BYTE1(*((_DWORD *)p_y + 2)) | (((int)(float)(unsigned __int8)BYTE2(*((_DWORD *)p_y + 2)) | ((int)(float)((float)HIBYTE(*((_DWORD *)p_y + 2)) * v11) << 8)) << 8)) << 8);
      result = (__int128 *)TransformLightSpacePositionAndNormal<CVertexXYWColorDUV2_XYZ_Tangent>(
                             v8,
                             a3,
                             (__int64)&v15,
                             v12 - 8);
      v12 += 64LL;
      ++v8;
      p_y += 8;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
