/*
 * XREFs of ?IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180085BE0
 * Callers:
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020570 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180023BE8 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@.c)
 *     ?CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z @ 0x180027BE8 (-CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CImageBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 66) & 0xFFFFFFFA) == 0 && a2 != 67;
}
