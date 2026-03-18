/*
 * XREFs of ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800358A0 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x180035FC0 (-GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 *     ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x1800361C0 (-HasAtlasedContent@CVisual@@MEBA_NXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180036A70 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPrimitiveGroup::IsOfType(__int64 a1, int a2)
{
  return a2 == 84 || a2 == 73;
}
