/*
 * XREFs of ?SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x180014CA0
 * Callers:
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x180013E48 (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1800F3600 (-SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushGradient::SetWrapMode(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 > 2 )
    return 2147942487LL;
  *(_DWORD *)(a1 + 104) = a2;
  return result;
}
