/*
 * XREFs of ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004F290
 * Callers:
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800358A0 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?GetContentAsPrimitiveNoRef@CVisual@@AEBA_NPEAPEAVCPrimitive@@@Z @ 0x180035E10 (-GetContentAsPrimitiveNoRef@CVisual@@AEBA_NPEAPEAVCPrimitive@@@Z.c)
 *     ?GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x180035E9C (-GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z.c)
 *     ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180035F28 (-GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x180035FC0 (-GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004F2B0 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderData::IsOfType(__int64 a1, int a2)
{
  return a2 == 33 || a2 == 73;
}
