/*
 * XREFs of ?GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV4@2PEAH@Z @ 0x18005CA78
 * Callers:
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x18005D9C8 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?AdjustRelativeRectangle@@YAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV1@@Z @ 0x18005C9A8 (-AdjustRelativeRectangle@@YAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 */

bool __fastcall CTileBrushUtils::GetAbsoluteViewRectangles(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // r11d
  bool result; // al
  float *v9; // rdx
  _DWORD *v10; // r10

  v7 = a2;
  *a7 = 0;
  if ( a1 == 1 )
    AdjustRelativeRectangle(a3);
  if ( v7 == 1 )
    AdjustRelativeRectangle(a4);
  result = IsRectEmptyOrInvalid(a5);
  if ( result || (result = IsRectEmptyOrInvalid(v9)) )
    *v10 = 1;
  return result;
}
