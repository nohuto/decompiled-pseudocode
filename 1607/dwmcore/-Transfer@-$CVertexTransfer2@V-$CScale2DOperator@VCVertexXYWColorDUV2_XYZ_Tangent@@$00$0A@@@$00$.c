/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$00$0A@@@$00$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197CBC
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04 (-Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@.c)
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 */

__int128 *__fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,1,0>,1,0,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        float *a1,
        const struct CMILMatrix *a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  __int128 *result; // rax
  __int64 v6; // r15
  struct D2D_POINT_2F *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  float v12; // xmm6_4
  __int64 v13; // rsi
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  struct D2D_POINT_2F v15; // [rsp+40h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  v6 = *((_QWORD *)a1 + 3);
  v8 = (struct D2D_POINT_2F *)*((_QWORD *)a1 + 2);
  v9 = *(_QWORD *)a1;
  v10 = *((_QWORD *)a1 + 1);
  v11 = *((unsigned int *)a1 + 9);
  v12 = a1[8];
  v14 = _xmm;
  if ( a3 )
  {
    result = (__int128 *)CalculateTBNFrame((__int64)&v14, v8, (const struct D2D_POINT_2F *)v9, a3, a4);
    v14 = *result;
  }
  if ( (_DWORD)v11 )
  {
    v13 = v10 - v9;
    do
    {
      Transform2DAndFillPosXYUV2(
        (const struct CVertexXYWColorDUV2 *)v9,
        (const struct CVertexAAFixupData *)(v13 + v9),
        a2,
        (struct CVertexXYWColorDUV2 *)v6,
        &v15);
      *(_DWORD *)(v6 + 8) = 1065353216;
      *(_DWORD *)(v6 + 12) = (int)(float)((float)(unsigned __int8)*(_DWORD *)(v9 + 12) * v12) | (((int)(float)((float)(unsigned __int8)BYTE1(*(_DWORD *)(v9 + 12)) * v12) | (((int)(float)((float)(unsigned __int8)BYTE2(*(_DWORD *)(v9 + 12)) * v12) | ((int)(float)((float)HIBYTE(*(_DWORD *)(v9 + 12)) * v12) << 8)) << 8)) << 8);
      result = (__int128 *)TransformLightSpacePositionAndNormal<CVertexXYWColorDUV2_XYZ_Tangent>(
                             v8,
                             a3,
                             (__int64)&v14,
                             v6);
      v6 += 64LL;
      ++v8;
      v9 += 32LL;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
