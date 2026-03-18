/*
 * XREFs of ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EAE0
 * Callers:
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180048240 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@AEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18004882C (-GetContentAsSpriteNoRef@CVisual@@AEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x1800488B8 (-GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z.c)
 *     ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180048944 (-GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x1800489DC (-GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009EB00 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderData::IsOfType(__int64 a1, int a2)
{
  return a2 == 34 || a2 == 81;
}
