/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@$0A@@@$0A@$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801984E0
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04 (-Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@.c)
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 */

__int128 *__fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2_XYZ_Tangent,0,0>,0,0,CVertexXYWColorDUV2_XYZ_Tangent>::Transfer(
        __int64 *a1,
        const struct CMILMatrix *a2,
        CMILMatrix *a3,
        CMILMatrix *a4)
{
  __int128 *result; // rax
  __int64 v6; // rbp
  struct D2D_POINT_2F *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  struct D2D_POINT_2F v15; // [rsp+70h] [rbp+8h] BYREF

  result = (__int128 *)&retaddr;
  v6 = a1[3];
  v8 = (struct D2D_POINT_2F *)a1[2];
  v9 = *a1;
  v10 = a1[1];
  v11 = *((unsigned int *)a1 + 9);
  v13 = _xmm;
  if ( a3 )
  {
    result = (__int128 *)CalculateTBNFrame((__int64)&v13, v8, (const struct D2D_POINT_2F *)v9, a3, a4);
    v13 = *result;
  }
  if ( (_DWORD)v11 )
  {
    v12 = v10 - v9;
    do
    {
      Transform2DAndFillPosXYUV2(
        (const struct CVertexXYWColorDUV2 *)v9,
        (const struct CVertexAAFixupData *)(v12 + v9),
        a2,
        (struct CVertexXYWColorDUV2 *)v6,
        &v15);
      *(_DWORD *)(v6 + 8) = 1065353216;
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v9 + 12);
      result = (__int128 *)TransformLightSpacePositionAndNormal<CVertexXYWColorDUV2_XYZ_Tangent>(
                             v8,
                             a3,
                             (__int64)&v13,
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
