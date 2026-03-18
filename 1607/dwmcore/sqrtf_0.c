/*
 * XREFs of sqrtf_0 @ 0x1800BF6B6
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180001C74 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAV2@@Z @ 0x18001535C (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVer.c)
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001821C (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001835C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x180018568 (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$0A@$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18001A0D0 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$0A@$0A@VCVertexXYW.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18001AC88 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04 (-Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180057620 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005B910 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090FAC (-GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z.c)
 *     ?EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0BFC (-EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800B7BB4 (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     ?CalculateTBNFrame@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatrix@@2@Z @ 0x180136720 (-CalculateTBNFrame@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@PEBVCVertexXYWColorDUV2@@AEBVCMILMatri.c)
 *     ?EncodeTBNFrameToQuaternion@@YA?AUD2DQuaternion@@AEBUD2D_VECTOR_3F@@00@Z @ 0x180136BA0 (-EncodeTBNFrameToQuaternion@@YA-AUD2DQuaternion@@AEBUD2D_VECTOR_3F@@00@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180150204 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180153694 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x180159D58 (-Distance@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Length@CExpressionValueStack@@QEAAJXZ @ 0x18015A5B8 (-Length@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Sqrt@CExpressionValueStack@@QEAAJXZ @ 0x18015C3F8 (-Sqrt@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180163EF4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18016461C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18018844C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x1801885DC (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x180188794 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18018890C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x180188AE0 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x180188C88 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 *     GetIndividualScales @ 0x18018B62C (GetIndividualScales.c)
 *     ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180194498 (-Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180195110 (-Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801951DC (-Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x180198EA8 (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
