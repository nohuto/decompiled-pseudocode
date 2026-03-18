/*
 * XREFs of ?IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083E60
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x180020450 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020570 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180023BE8 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@.c)
 *     ?CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z @ 0x180027BE8 (-CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorBrush::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 66) <= 1;
}
