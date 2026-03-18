/*
 * XREFs of ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180016020
 * Callers:
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAV2@@Z @ 0x18001535C (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVer.c)
 *     ??$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@@PEBVCMILMatrix@@AEBUD2DQuaternion@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x1801963C0 (--$TransformLightSpacePositionAndNormal@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBUD2D_POINT_2F@.c)
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@@Z @ 0x180198EA8 (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@QEAAXPEBVCVertexXYWColorDU.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::TransformIgnoreZW(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct MilPoint4F *a3)
{
  float x; // xmm2_4
  float *v4; // rax
  float y; // xmm3_4
  __int64 v6; // r8
  __int64 v7; // rcx

  x = a2->x;
  v4 = (float *)((char *)this + 48);
  y = a2->y;
  v6 = a3 - this;
  v7 = 4LL;
  do
  {
    *(float *)((char *)v4 + v6 - 48) = (float)((float)(y * *(v4 - 8)) + (float)(x * *(v4 - 12))) + *v4;
    ++v4;
    --v7;
  }
  while ( v7 );
}
