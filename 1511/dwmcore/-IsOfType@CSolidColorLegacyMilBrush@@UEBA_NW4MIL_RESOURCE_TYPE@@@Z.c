/*
 * XREFs of ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180058BC0
 * Callers:
 *     ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x18003C4C8 (-RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180056280 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800563C0 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$GetTypeSpecificResource@VCLegacyMilBrush@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAVCLegacyMilBrush@@@Z @ 0x18005D8B0 (--$GetTypeSpecificResource@VCLegacyMilBrush@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAVCLe.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 70) <= 1;
}
