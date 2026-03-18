/*
 * XREFs of ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180013F00
 * Callers:
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x180013D30 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x1801202B4 (-RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAV3@@Z @ 0x180122018 (-ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 */

__int64 __fastcall CBrushTypeUtils::GetBrushTransform(__int64 a1, const struct D2DMatrix *a2, float *a3, __int64 a4)
{
  const struct D2DMatrix *v4; // r10
  __int64 result; // rax

  v4 = a2;
  result = 0LL;
  if ( a1 && (float)(a3[2] - *a3) != 0.0 && (float)(a3[3] - a3[1]) != 0.0 )
  {
    CBrushTypeUtils::ConvertRelativeTransformToAbsolute(a3, a1, a4);
    result = 1LL;
  }
  if ( v4 )
  {
    if ( (_DWORD)result )
    {
      D2DMatrixMultiply((struct D2DMatrix *)a4, (const struct D2DMatrix *)a4, v4);
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)v4;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)v4 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)v4 + 2);
      *(_OWORD *)(a4 + 48) = *((_OWORD *)v4 + 3);
    }
    result = 1LL;
  }
  if ( !(_DWORD)result )
  {
    result = 1065353216LL;
    *(_QWORD *)(a4 + 52) = 0LL;
    *(_DWORD *)(a4 + 60) = 1065353216;
    *(_DWORD *)(a4 + 40) = 1065353216;
    *(_DWORD *)(a4 + 20) = 1065353216;
    *(_DWORD *)a4 = 1065353216;
    *(_QWORD *)(a4 + 44) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 12) = 0LL;
    *(_QWORD *)(a4 + 4) = 0LL;
  }
  return result;
}
