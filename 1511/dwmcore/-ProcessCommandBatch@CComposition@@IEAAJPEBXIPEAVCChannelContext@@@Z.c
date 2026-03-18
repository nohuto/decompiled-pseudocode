/*
 * XREFs of ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00
 * Callers:
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009D9E0 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x1800059F4 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z.c)
 *     ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z @ 0x180005A5C (-TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z.c)
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18000655C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 *     ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x1800065D8 (-Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180006648 (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x180009070 (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x180009328 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1800099D4 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x180009AE0 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x18000F2D0 (-ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@.c)
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1800137D8 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENT.c)
 *     ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x18001A124 (-ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18001B468 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETM.c)
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18001B7E0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x18001B810 (-ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFY.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001BEE0 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x18001BFE4 (-ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMAT.c)
 *     ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x18001C074 (-ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z.c)
 *     ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x18001C140 (-ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z.c)
 *     ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x18001C1F8 (-ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z.c)
 *     ?ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z @ 0x18001CA40 (-ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x18001CEE8 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ?ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z @ 0x18001D138 (-ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z.c)
 *     ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x18001D3FC (-ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSME.c)
 *     ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x18001D8A0 (-ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x180025300 (-Release@CAtlasedRects@@UEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180026874 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x180026A60 (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 *     ?IsOfType@CAtlasedRectsMesh@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026D30 (-IsOfType@CAtlasedRectsMesh@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002DEF0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x18002E1C0 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180047E40 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180047E90 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x180047F64 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x180047FB4 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180048004 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800481A4 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180048240 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180048330 (-ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180048380 (-ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180048480 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x18004850C (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180048530 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180048660 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180049D64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18004D3CC (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18004D4B4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?AddRef@CVisual@@UEAAKXZ @ 0x18004DA20 (-AddRef@CVisual@@UEAAKXZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x18004E500 (-ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z.c)
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180058928 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMI.c)
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180059AE8 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18005A950 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18005B684 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18005DFF0 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18005E02C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18005E1CC (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18005E254 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18005E290 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18005E4E8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18005E55C (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSO.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18005E658 (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARG.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x18005E880 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x18005E8A8 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDW.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x18005E8E8 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005EBD0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x180064B20 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180064D50 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180065018 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRES.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180065100 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 *     ?ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z @ 0x18006601C (-ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x180066558 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x1800666F0 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@@Z @ 0x180066D50 (-ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180067ED0 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 *     ?ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z @ 0x1800684BC (-ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180068638 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x180074D40 (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180074DB4 (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18007AF38 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18007B82C (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x180083908 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z @ 0x1800839B0 (-ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z.c)
 *     ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x1800839F0 (-ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@P.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180083A58 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?IsOfType@CAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083B80 (-IsOfType@CAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 *     ?ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z @ 0x180086004 (-ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x1800862E0 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x180086330 (-ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x1800863B0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x18008D9A8 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x18008D9E8 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800911E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800912BC (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x180091434 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18009145C (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x18009167C (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOU.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x1800917A0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180092D18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180092EB4 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800944E8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x1800951F8 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SETCALLBACKID@@@Z @ 0x180095358 (-Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CH.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x1800953E8 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18009546C (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_ROUNDTRIPREQUEST@@@Z @ 0x1800954F0 (-Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_SYNCFLUSH@@@Z @ 0x180095590 (-Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRAN.c)
 *     ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x1800955F0 (-Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x180095664 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800956D8 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x180095720 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800957EC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180095844 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009E610 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EAE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A17AC (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800A5B5C (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A7594 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A7698 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800A7708 (-ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@.c)
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800AB8AC (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800AB9D0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z @ 0x1800AD678 (-ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AE114 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B1D14 (-IsOOM@@YA_NJ@Z.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800B2A38 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800B2C08 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1800B63F0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800B68C8 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1800F3274 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1800F33BC (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1800F3C5C (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETTRANSFORM@@@Z @ 0x1800F3E5C (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDE.c)
 *     ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x1800F3EFC (-ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAP.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800F3F9C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETFILTERLIST@@@Z @ 0x1800F40C0 (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPREND.c)
 *     ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETSLICER@@@Z @ 0x1800F4154 (-ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTA.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x1800F43F0 (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800F4514 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CREATE@@@Z @ 0x1800F466C (-ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CRE.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1800F4704 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x1800F4780 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x1800F48E0 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x1800F4C10 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 *     ?ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z @ 0x1800F4C80 (-ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1800F4E50 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 *     ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x1800F4F40 (-ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z.c)
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x1800F509C (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x1800F5274 (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1800F53EC (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x1800F55EC (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x1800F5850 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@.c)
 *     ?ProcessSetAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETALIGNMENT@@@Z @ 0x1800F5960 (-ProcessSetAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETALIGNMEN.c)
 *     ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x1800F59AC (-ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SET.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800F59F0 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 *     ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x1800F5BC0 (-ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1800F5C60 (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x1800F5D70 (-ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x1800F5EE4 (-ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z.c)
 *     ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z @ 0x1800F5F58 (-ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z.c)
 *     ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z @ 0x1800F6044 (-ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z.c)
 *     ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z @ 0x1800F60D0 (-ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z.c)
 *     ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z @ 0x1800F6128 (-ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z.c)
 *     ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x1800F61F4 (-ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z.c)
 *     ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x1800F6258 (-ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1800F638C (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x1800F64BC (-ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z.c)
 *     ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z @ 0x1800F6560 (-ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z.c)
 *     ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x1800F65B8 (-ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSI.c)
 *     ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x1800F6630 (-ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEF.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1800F66E0 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM@@@Z @ 0x1800F6970 (-ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM.c)
 *     ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C (-ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSF.c)
 *     ?ProcessUpdate@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D@@@Z @ 0x1800F6B30 (-ProcessUpdate@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D@@.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x1800F6C5C (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x1800F6DD8 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 *     ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x1800F6E20 (-ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1800F6E6C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x1800F6F20 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1800F6F88 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800F7594 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1800F7630 (-ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1800F76F8 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1800F7744 (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONM.c)
 *     ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x1800F77AC (-ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERE.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800F7B14 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x1800F83E0 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEA.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x1800F8580 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800F863C (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800F8828 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x1800F8A54 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_S.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1800F8AE8 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1800F9040 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x1800F9248 (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z.c)
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x1800F92E8 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x1800F9340 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 *     ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x1800F93D4 (-ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_.c)
 *     ?ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY@@@Z @ 0x1800F945C (-ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY@@@Z @ 0x1800F94EC (-ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY@@@Z @ 0x1800F95A4 (-ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY@@@Z @ 0x1800F9648 (-ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_S.c)
 *     ?ProcessSetQuaternionProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETQUATERNIONPROPERTY@@@Z @ 0x1800F96E8 (-ProcessSetQuaternionProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGB.c)
 *     ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x1800F976C (-ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x1800F9824 (-ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY@@@Z @ 0x1800F98E0 (-ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSI.c)
 *     ?ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CREATE@@@Z @ 0x1800F992C (-ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CRE.c)
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1800F9998 (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800FAD40 (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800FADE4 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800FB0C4 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x1800FB244 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1800FB274 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x1800FB328 (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800FB450 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z @ 0x18010153C (-RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z.c)
 *     Template_qxqx @ 0x18010191C (Template_qxqx.c)
 *     ?ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING@@@Z @ 0x180107318 (-ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOP.c)
 *     ?ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET@@@Z @ 0x180107410 (-ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPREND.c)
 *     ?ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS@@@Z @ 0x18011FE7C (-ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGA.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180120E48 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x180121184 (-SetColor@CColorBrush@@AEAAXMMMM@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801295C0 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B928 (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x18013D6AC (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x18013D7C4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 */

__int64 __fastcall CComposition::ProcessCommandBatch(
        CComposition *this,
        void *a2,
        unsigned int a3,
        struct CChannelContext *a4)
{
  unsigned int *v4; // rsi
  __int64 v5; // r14
  CComposition *v7; // r15
  int NextItemSafe; // eax
  int v10; // edi
  struct MILCMD_ANIMATION_SETPAUSED *v11; // r12
  unsigned int v12; // ecx
  struct MILCMD_ANIMATION_SETPAUSED *v13; // r13
  unsigned __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  CRenderTargetManager *v19; // rcx
  char v20; // al
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 Resource; // rax
  int v38; // eax
  unsigned int v39; // ebp
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // edi
  CRenderData *v50; // rax
  int v51; // eax
  CTileLegacyMilBrush *v52; // rax
  const struct CResourceTable *v53; // rdx
  int v54; // eax
  CVisual *v55; // rax
  CVisual *v56; // rax
  CVisual *v57; // rax
  unsigned int v58; // edx
  CVisual *v59; // rax
  int v60; // eax
  unsigned int v61; // edx
  CVisual *v62; // rax
  int v63; // eax
  unsigned int v64; // edx
  CVisual *v65; // rax
  int v66; // eax
  unsigned int v67; // edx
  CVisual *v68; // rax
  int v69; // eax
  CVisual *v70; // rax
  struct CResourceTable *v71; // rdx
  int v72; // eax
  CVisual *v73; // rax
  struct CResourceTable *v74; // rdx
  int v75; // eax
  CVisual *v76; // rax
  int v77; // eax
  CVisual *v78; // rax
  unsigned int v79; // edx
  CVisual *v80; // rax
  int v81; // eax
  unsigned int v82; // r8d
  int v83; // r8d
  bool (__fastcall *v84)(__int64, int); // r9
  __int64 v85; // rsi
  __int64 v86; // rdi
  bool (__fastcall *v87)(__int64, int); // rbx
  bool v88; // al
  int v89; // r8d
  bool (__fastcall *v90)(__int64, int); // r9
  __int64 v91; // rsi
  __int64 v92; // rdi
  bool (__fastcall *v93)(__int64, int); // rbx
  bool v94; // al
  CVisual *v95; // rcx
  int inserted; // eax
  unsigned int v97; // edx
  CVisual *v98; // rax
  int v99; // eax
  unsigned int v100; // edx
  CVisual *v101; // rax
  int v102; // eax
  CVisual *v103; // rax
  struct CResourceTable *v104; // rdx
  int v105; // eax
  CVisual *v106; // rax
  struct CResourceTable *v107; // rdx
  const struct MILCMD_VISUAL_SETMODESTODEFAULT *v108; // r8
  int v109; // eax
  CVisual *v110; // rax
  struct CResourceTable *v111; // rdx
  int v112; // eax
  CVisual *v113; // rax
  struct CResourceTable *v114; // rdx
  int v115; // eax
  unsigned int v116; // edx
  __int64 v117; // rax
  CVisual *v118; // rax
  int v119; // eax
  CVisual *v120; // rax
  struct CResourceTable *v121; // rdx
  int v122; // eax
  CVisual *v123; // rax
  CSpriteVisual *v124; // rax
  int v125; // eax
  CColorBrush *v126; // rax
  CSurfaceBrush *v127; // rax
  int v128; // eax
  CSurfaceBrush *v129; // rax
  struct CResourceTable *v130; // rdx
  int v131; // eax
  CSurfaceBrush *v132; // rax
  struct CResourceTable *v133; // rdx
  int v134; // eax
  CEffectBrush *v135; // rax
  int v136; // eax
  CEffectBrush *v137; // rax
  int v138; // eax
  CEffectBrush *v139; // rax
  int v140; // eax
  CWindowNode *v141; // rax
  struct CResourceTable *v142; // rdx
  int v143; // eax
  CWindowNode *v144; // rax
  int v145; // eax
  CWindowNode *v146; // rax
  __int64 v147; // rax
  CWindowNode *v148; // rax
  int v149; // eax
  unsigned int v150; // edi
  CWindowNode *v151; // rax
  struct CResourceTable *v152; // rdx
  int v153; // eax
  __int64 v154; // rcx
  unsigned int v155; // edx
  __int64 v156; // rax
  CWindowNode *v157; // rax
  int v158; // eax
  CWindowNode *v159; // rax
  int v160; // eax
  unsigned int v161; // edx
  __int64 v162; // rax
  CWindowNode *v163; // rax
  int v164; // eax
  unsigned int v165; // edx
  CWindowNode *v166; // rax
  int v167; // eax
  unsigned int v168; // edx
  CWindowNode *v169; // rax
  int v170; // eax
  CWindowNode *v171; // rax
  struct CResourceTable *v172; // rdx
  int v173; // eax
  CWindowNode *v174; // rax
  struct CResourceTable *v175; // rdx
  int v176; // eax
  __int64 v177; // rcx
  unsigned int v178; // edx
  CWindowNode *v179; // rax
  int v180; // eax
  CWindowNode *v181; // rax
  struct CResourceTable *v182; // rdx
  int v183; // eax
  CWindowNode *v184; // rax
  struct CResourceTable *v185; // rdx
  const struct MILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE *v186; // r8
  int v187; // eax
  CWindowNode *v188; // rax
  struct CResourceTable *v189; // rdx
  int v190; // eax
  CWindowNode *v191; // rax
  struct CResourceTable *v192; // rdx
  int v193; // eax
  CWindowNode *v194; // rax
  struct CResourceTable *v195; // rdx
  int v196; // eax
  unsigned int v197; // edx
  __int64 v198; // rax
  CWindowNode *v199; // rax
  int v200; // eax
  CWindowNode *v201; // rax
  struct CResourceTable *v202; // rdx
  int v203; // eax
  CWindowNode *v204; // rax
  struct CResourceTable *v205; // rdx
  int v206; // eax
  unsigned int v207; // edi
  CVisualGroup *v208; // rax
  int v209; // eax
  CGeometry *v210; // rax
  struct CResourceTable *v211; // rdx
  int v212; // eax
  CRectangleGeometry *v213; // rax
  struct CResourceTable *v214; // rdx
  int v215; // eax
  CDesktopRenderTarget *v216; // rax
  struct CResourceTable *v217; // rdx
  int v218; // eax
  CDesktopRenderTarget *v219; // rax
  struct CResourceTable *v220; // rdx
  const struct MILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET *v221; // r8
  int v222; // eax
  CDesktopRenderTarget *v223; // rax
  struct CResourceTable *v224; // rdx
  const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *v225; // r8
  int updated; // eax
  CDesktopRenderTarget *v227; // rax
  struct CResourceTable *v228; // rdx
  int v229; // eax
  unsigned int v230; // edx
  struct CResource **v231; // rax
  int v232; // eax
  CDcompRenderTarget *v233; // rax
  struct CResourceTable *v234; // rdx
  int v235; // eax
  unsigned int v236; // edx
  __int64 v237; // rax
  int v238; // eax
  __int64 v239; // rax
  int v240; // eax
  __int64 v241; // rax
  int v242; // eax
  __int64 v243; // rax
  int v244; // eax
  int v245; // eax
  int v246; // eax
  int v247; // eax
  unsigned int v248; // edx
  CMagnifierRenderTarget *v249; // rax
  int v250; // eax
  unsigned int v251; // edx
  CMagnifierRenderTarget *v252; // rax
  int v253; // eax
  CMagnifierRenderTarget *v254; // rax
  struct CResourceTable *v255; // rdx
  int v256; // eax
  unsigned int v257; // edx
  CMagnifierRenderTarget *v258; // rax
  int v259; // eax
  CMagnifierRenderTarget *v260; // rax
  struct CResourceTable *v261; // rdx
  int v262; // eax
  unsigned int v263; // edx
  CIndirectSwapchainRenderTarget *v264; // rax
  int v265; // eax
  CIndirectSwapchainRenderTarget *v266; // rax
  struct CResourceTable *v267; // rdx
  int v268; // eax
  CIndirectSwapchainRenderTarget *v269; // rax
  struct CResourceTable *v270; // rdx
  CAnalogCompositor *v271; // rcx
  int v272; // eax
  CAnalogCompositorClient *v273; // rcx
  CAnalogExclusiveView *v274; // rax
  struct CResourceTable *v275; // rdx
  int v276; // eax
  CAnalogExclusiveView *v277; // rax
  int v278; // eax
  CAnalogTextureTarget *v279; // rax
  struct CResourceTable *v280; // rdx
  int v281; // eax
  CBaseAnimation *v282; // rax
  int v283; // eax
  CBaseAnimation *v284; // rax
  int v285; // eax
  __int64 v286; // rcx
  __int64 v287; // rax
  unsigned int v288; // edi
  CAnimation *v289; // rax
  struct CResourceTable *v290; // rdx
  int v291; // eax
  CAnimation *v292; // rax
  int v293; // eax
  CAnimation *v294; // rax
  struct CResourceTable *v295; // rdx
  int v296; // eax
  CAnimation *v297; // rax
  int v298; // eax
  CAnimation *v299; // rax
  int v300; // eax
  CAnimation *v301; // rax
  struct CResourceTable *v302; // rdx
  int v303; // eax
  CAnimation *v304; // rax
  struct CResourceTable *v305; // rdx
  int v306; // eax
  __int64 v307; // rax
  __int64 v308; // rax
  __int64 v309; // rbx
  unsigned int v310; // edi
  CAnimation *v311; // rax
  struct CResourceTable *v312; // rdx
  const struct MILCMD_ANIMATION_ADDTIMEEVENTS *v313; // r8
  int v314; // eax
  CAnimation *v315; // rax
  int v316; // eax
  CScalar *v317; // rax
  struct CResourceTable *v318; // rdx
  int v319; // eax
  __int64 v320; // rax
  struct CResourceTable *v321; // rdx
  int v322; // eax
  __int64 v323; // rax
  int v324; // eax
  __int64 v325; // rax
  int v326; // eax
  __int64 v327; // rax
  int v328; // eax
  __int64 v329; // rax
  int v330; // eax
  __int64 v331; // rax
  int v332; // eax
  __int64 v333; // rax
  struct CResourceTable *v334; // rdx
  int v335; // eax
  __int64 v336; // rax
  struct CResourceTable *v337; // rdx
  int v338; // eax
  __int64 v339; // rax
  struct CResourceTable *v340; // rdx
  int v341; // eax
  __int64 v342; // rax
  __int64 v343; // rax
  __int64 v344; // rax
  struct CResourceTable *v345; // rdx
  const struct MILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS *v346; // r8
  int v347; // eax
  CCompositionSurfaceBitmap *v348; // rax
  int v349; // eax
  __int64 v350; // rax
  int v351; // eax
  unsigned int v352; // edx
  __int64 v353; // rax
  int v354; // eax
  CSnapshot *v355; // rax
  int v356; // eax
  CMeshGeometry2D *v357; // rax
  struct CResourceTable *v358; // rdx
  int v359; // eax
  CAtlasedRectsMesh *v360; // rax
  struct CResourceTable *v361; // rdx
  int v362; // eax
  CEffectGroup *v363; // rax
  int v364; // eax
  unsigned int v365; // edx
  __int64 v366; // rax
  int v367; // eax
  __int64 v368; // rax
  __int64 v369; // rax
  __int64 v370; // rax
  int v371; // eax
  CPrimitiveGroup *v372; // rax
  int v373; // eax
  CPrimitiveGroup *v374; // rax
  int v375; // eax
  CPrimitiveGroup *v376; // rax
  struct CResourceTable *v377; // rdx
  const struct MILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES *v378; // r8
  int v379; // eax
  CPrimitiveGroup *v380; // rax
  int v381; // eax
  CPrimitiveGroup *v382; // rax
  struct CResourceTable *v383; // rdx
  const struct MILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES *v384; // r8
  int v385; // eax
  unsigned int v386; // edi
  const struct FastRegion::Internal::CRgnData **v387; // rax
  struct CResourceTable *v388; // rdx
  int v389; // eax
  CPrimitiveGroup *v390; // rax
  struct CResourceTable *v391; // rdx
  int v392; // eax
  CAnimationTrigger *v393; // rax
  struct CResourceTable *v394; // rdx
  int v395; // eax
  CYCbCrSurface *v396; // rax
  int v397; // eax
  unsigned int v398; // edi
  __int64 v399; // rax
  struct CResourceTable *v400; // rdx
  int v401; // eax
  __int64 v402; // rax
  struct CResourceTable *v403; // rdx
  int v404; // eax
  __int64 v405; // rax
  __int64 v406; // rax
  struct CResourceTable *v407; // rdx
  int v408; // eax
  __int64 v409; // rax
  struct CResourceTable *v410; // rdx
  int v411; // eax
  CBaseExpression *v412; // rax
  int v413; // eax
  __int64 v414; // rax
  int v415; // eax
  CBaseExpression *v416; // rax
  struct CResourceTable *v417; // rdx
  int v418; // eax
  CExpression *v419; // rax
  int v420; // eax
  CKeyframeAnimation *v421; // rax
  int v422; // eax
  CKeyframeAnimation *v423; // rax
  int v424; // eax
  CKeyframeAnimation *v425; // rax
  struct CResourceTable *v426; // rdx
  int v427; // eax
  CManipulationTransform *v428; // rax
  struct CResourceTable *v429; // rdx
  int v430; // eax
  __int64 v431; // rcx
  CNotificationResource *v432; // rax
  int v433; // eax
  __int64 v434; // rcx
  unsigned int v435; // edi
  CFilterEffect *v436; // rax
  int v437; // eax
  unsigned int v438; // edi
  CTableTransferEffect *v439; // rax
  struct CResourceTable *v440; // rdx
  int v441; // eax
  CInk *v442; // rax
  struct CResourceTable *v443; // rdx
  int v444; // eax
  CInk *v445; // rax
  struct CResourceTable *v446; // rdx
  int started; // eax
  CInk *v448; // rax
  struct CResourceTable *v449; // rdx
  int v450; // eax
  CInk *v451; // rax
  struct CResourceTable *v452; // rdx
  int v453; // eax
  CCompiledEffectTemplate *v454; // rax
  int v455; // eax
  CPropertyBagBase *v456; // rax
  struct CResourceTable *v457; // rdx
  int v458; // eax
  CPropertyBagBase *v459; // rax
  struct CResourceTable *v460; // rdx
  int v461; // eax
  CPropertyBagBase *v462; // rax
  struct CResourceTable *v463; // rdx
  int v464; // eax
  CPropertyBagBase *v465; // rax
  struct CResourceTable *v466; // rdx
  int v467; // eax
  CPropertyBagBase *v468; // rax
  struct CResourceTable *v469; // rdx
  int v470; // eax
  CPropertyBagBase *v471; // rax
  struct CResourceTable *v472; // rdx
  int v473; // eax
  CPropertyBagBase *v474; // rax
  struct CResourceTable *v475; // rdx
  int v476; // eax
  CPropertyBagBase *v477; // rax
  struct CResourceTable *v478; // rdx
  int v479; // eax
  __int64 v480; // rcx
  CComponentTransform3D *v481; // rax
  struct CResourceTable *v482; // rdx
  int v483; // eax
  unsigned int v484; // edi
  CMeshGeometry2D *v485; // rax
  struct CResourceTable *v486; // rdx
  int v487; // eax
  unsigned int v488; // edi
  CGeometry2DGroup *v489; // rax
  int v490; // eax
  unsigned int v491; // edi
  void **v492; // rax
  struct CResourceTable *v493; // rdx
  int v494; // eax
  unsigned int v495; // edi
  CAtlasedRectsGroup *v496; // rax
  int v497; // eax
  CGaussianBlurEffect *v498; // rax
  struct CResourceTable *v499; // rdx
  int v500; // eax
  CBrightnessEffect *v501; // rax
  struct CResourceTable *v502; // rdx
  int v503; // eax
  CColorMatrixEffect *v504; // rax
  struct CResourceTable *v505; // rdx
  int v506; // eax
  CSaturationEffect *v507; // rax
  struct CResourceTable *v508; // rdx
  int v509; // eax
  CShadowEffect *v510; // rax
  struct CResourceTable *v511; // rdx
  int v512; // eax
  CSaturationEffect *v513; // rax
  struct CResourceTable *v514; // rdx
  int v515; // eax
  CTurbulenceEffect *v516; // rax
  struct CResourceTable *v517; // rdx
  int v518; // eax
  CFloodEffect *v519; // rax
  struct CResourceTable *v520; // rdx
  int v521; // eax
  CArithmeticCompositeEffect *v522; // rax
  struct CResourceTable *v523; // rdx
  int v524; // eax
  CLinearTransferEffect *v525; // rax
  struct CResourceTable *v526; // rdx
  int v527; // eax
  CTableTransferEffect *v528; // rax
  struct CResourceTable *v529; // rdx
  int v530; // eax
  CBlendEffect *v531; // rax
  struct CResourceTable *v532; // rdx
  int v533; // eax
  CBlendEffect *v534; // rax
  struct CResourceTable *v535; // rdx
  int v536; // eax
  CAffineTransform2DEffect *v537; // rax
  struct CResourceTable *v538; // rdx
  int v539; // eax
  CTranslateTransform3D *v540; // rax
  struct CResourceTable *v541; // rdx
  int v542; // eax
  CScaleTransform3D *v543; // rax
  struct CResourceTable *v544; // rdx
  int v545; // eax
  CRotateTransform3D *v546; // rax
  struct CResourceTable *v547; // rdx
  int v548; // eax
  CMatrixTransform3D *v549; // rax
  struct CResourceTable *v550; // rdx
  int v551; // eax
  CComponentTransform3D *v552; // rax
  struct CResourceTable *v553; // rdx
  int v554; // eax
  char v555; // di
  CTransform3DGroup *v556; // rax
  int v557; // eax
  unsigned int v558; // edi
  CDcompRenderTargetGroup *v559; // rax
  int v560; // eax
  char v561; // di
  CTransformGroup *v562; // rax
  int v563; // eax
  CTranslateTransform *v564; // rax
  struct CResourceTable *v565; // rdx
  int v566; // eax
  CSkewTransform *v567; // rax
  struct CResourceTable *v568; // rdx
  int v569; // eax
  CTranslateTransform3D *v570; // rax
  struct CResourceTable *v571; // rdx
  int v572; // eax
  CSkewTransform *v573; // rax
  struct CResourceTable *v574; // rdx
  int v575; // eax
  CMatrixTransform *v576; // rax
  struct CResourceTable *v577; // rdx
  int v578; // eax
  CManipulationTransform *v579; // rax
  struct CResourceTable *v580; // rdx
  const struct MILCMD_MANIPULATIONTRANSFORM *v581; // r8
  int v582; // eax
  unsigned int v583; // edi
  CGeometryGroup *v584; // rax
  int v585; // eax
  struct CResource **v586; // rax
  int v587; // eax
  unsigned int v588; // edi
  void **v589; // rax
  struct CResourceTable *v590; // rdx
  int v591; // eax
  CSolidColorLegacyMilBrush *v592; // rax
  int v593; // eax
  unsigned int v594; // edi
  CLinearGradientLegacyMilBrush *v595; // rax
  int v596; // eax
  CImageLegacyMilBrush *v597; // rax
  int v598; // eax
  CSharedSection *v599; // rax
  struct CResourceTable *v600; // rdx
  int v601; // eax
  unsigned int v602; // edx
  __int64 v603; // rax
  __int64 v604; // rsi
  __int64 v605; // rdi
  bool (__fastcall *v606)(__int64, int); // rbx
  char v607; // al
  CVisual *v608; // rcx
  unsigned int v609; // edx
  unsigned int v610; // esi
  __int64 v611; // rax
  __int64 v612; // rbp
  __int64 v613; // rdi
  __int64 (__fastcall *v614)(_QWORD, _QWORD); // rbx
  char v615; // al
  struct CRenderTarget *v616; // rsi
  unsigned int v617; // ecx
  int v618; // edx
  int v619; // eax
  unsigned int v620; // ebp
  __int64 (__fastcall *v621)(struct CRenderTarget *, __int64); // rbx
  char v622; // al
  __int64 (__fastcall *v623)(struct CRenderTarget *, __int64); // rbx
  char v624; // al
  CAnalogCompositorClient *v625; // rcx
  void *v626; // rcx
  __int64 v627; // rax
  __int64 v628; // rsi
  __int64 v629; // rdi
  __int64 (__fastcall *v630)(CCompositionSurfaceBitmap *); // rbx
  int v631; // esi
  CBitmapOfDeviceBitmaps *v632; // r14
  unsigned int v633; // edi
  CResource *v634; // r12
  CResourceTable *v635; // rbp
  __int64 v636; // r15
  int v637; // ebx
  int v638; // eax
  __int64 v639; // rax
  __int64 v640; // rcx
  CResourceTable *v641; // rsi
  int v642; // eax
  unsigned int v643; // edx
  __int64 v644; // rcx
  int v645; // eax
  __int64 (__fastcall *v646)(CBitmapOfDeviceBitmaps *); // rbx
  __int64 (__fastcall *v647)(CCompositionSurfaceBitmap *); // rbx
  unsigned __int64 v648; // rcx
  unsigned __int64 v649; // rax
  int v650; // ecx
  unsigned int v652; // [rsp+20h] [rbp-88h]
  unsigned int v653; // [rsp+20h] [rbp-88h]
  unsigned int v654; // [rsp+20h] [rbp-88h]
  struct CResourceTable *v655; // [rsp+30h] [rbp-78h] BYREF
  CResourceTable *v656; // [rsp+38h] [rbp-70h]
  struct MILCMD_ANIMATION_SETPAUSED *v657; // [rsp+40h] [rbp-68h] BYREF
  const void *v658; // [rsp+48h] [rbp-60h] BYREF
  struct MILCMD_ANIMATION_SETPAUSED *v659; // [rsp+50h] [rbp-58h]
  unsigned int v660; // [rsp+58h] [rbp-50h]
  unsigned int v662; // [rsp+B8h] [rbp+10h]
  unsigned int v663; // [rsp+C0h] [rbp+18h] BYREF
  struct CChannelContext *v664; // [rsp+C8h] [rbp+20h]

  v664 = a4;
  v4 = (unsigned int *)a4;
  v5 = *((_QWORD *)a4 + 3);
  v656 = (CResourceTable *)v5;
  v7 = this;
  v663 = 0;
  v657 = 0LL;
  LODWORD(v655) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, a3);
  v658 = a2;
  v660 = a3;
  v659 = (struct MILCMD_ANIMATION_SETPAUSED *)a2;
  NextItemSafe = CDataStreamReader::GetNextItemSafe(
                   (CDataStreamReader *)&v658,
                   &v663,
                   (void **)&v657,
                   (unsigned int *)&v655);
  v10 = NextItemSafe;
  if ( NextItemSafe < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NextItemSafe, 0x273u);
    goto LABEL_1644;
  }
  v11 = v659;
  v12 = v663;
  v13 = v657;
  v14 = (unsigned int)v655;
  v657 = v659;
  v662 = v663;
LABEL_6:
  v663 = v14;
  while ( 1 )
  {
    if ( v10 == 1 )
      return 0LL;
    if ( v12 == 21 )
      break;
    if ( v12 == 22 )
    {
      if ( (_DWORD)v14 == 12 )
      {
        v609 = *((_DWORD *)v13 + 1);
        v610 = *((_DWORD *)v13 + 2);
        if ( !v609 )
          goto LABEL_1637;
        if ( v609 >= *(_DWORD *)(v5 + 28) )
          goto LABEL_1637;
        v611 = *(_QWORD *)(v5 + 40);
        if ( !*(_DWORD *)(v609 * *(_DWORD *)(v5 + 24) + v611) )
          goto LABEL_1637;
        v612 = v611 + v609 * *(_DWORD *)(v5 + 24);
        v613 = *(_QWORD *)(v612 + 8);
        if ( !v613 )
          goto LABEL_1637;
        v614 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v613 + 48LL);
        if ( (char *)v614 == (char *)CVisual::IsOfType )
        {
          v615 = CVisual::IsOfType(*(_QWORD *)(v612 + 8), v610);
        }
        else if ( (char *)v614 == (char *)CRgnGeometry::IsOfType )
        {
          v615 = CRgnGeometry::IsOfType(*(_QWORD *)(v612 + 8), v610);
        }
        else if ( (char *)v614 == (char *)CAnimation::IsOfType )
        {
          v615 = CAnimation::IsOfType(*(_QWORD *)(v612 + 8), v610);
        }
        else if ( (char *)v614 == (char *)CAtlasedRectsMesh::IsOfType )
        {
          v615 = CAtlasedRectsMesh::IsOfType(*(_QWORD *)(v612 + 8), v610);
        }
        else
        {
          v615 = v614 == CRenderData::IsOfType
               ? CRenderData::IsOfType(*(_QWORD *)(v612 + 8), v610)
               : ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, bool (__fastcall *)(__int64, int)))v614)(
                   *(_QWORD *)(v612 + 8),
                   v610,
                   v14,
                   CVisual::IsOfType);
        }
        if ( !v615 )
          goto LABEL_1637;
        v616 = *(struct CRenderTarget **)(v612 + 8);
        if ( !v616 )
          goto LABEL_1637;
        v617 = *((_DWORD *)v13 + 1);
        if ( v617 && v617 < *(_DWORD *)(v5 + 28) )
          v618 = *(_DWORD *)(*(_DWORD *)(v5 + 24) * v617 + *(_QWORD *)(v5 + 40));
        else
          v618 = 0;
        v619 = *((_DWORD *)v13 + 2);
        if ( v618 != v619 )
        {
LABEL_1637:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA4Cu);
          v10 = -2003303421;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1B2u);
          goto LABEL_1644;
        }
        if ( v619 == 38 )
        {
          CComposition::RemoveDesktopRenderTarget(v7, *(struct CDesktopRenderTarget **)(v612 + 8));
          CDesktopRenderTarget::ReleaseResourcesForDisplayChange((struct CRenderTarget *)((char *)v616 + 40));
        }
        else if ( ((v619 - 37) & 0xFFFFFFEF) == 0 )
        {
          CRenderTargetManager::RemoveRenderTarget(
            *((CRenderTargetManager **)v7 + 4),
            *(struct CRenderTarget **)(v612 + 8));
        }
        v620 = *((_DWORD *)v13 + 1);
        v621 = *(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v616 + 48LL);
        if ( (char *)v621 == (char *)CVisual::IsOfType )
        {
          v622 = CVisual::IsOfType((__int64)v616, 44);
        }
        else if ( (char *)v621 == (char *)CRgnGeometry::IsOfType )
        {
          v622 = CRgnGeometry::IsOfType((__int64)v616, 44);
        }
        else if ( (char *)v621 == (char *)CAnimation::IsOfType )
        {
          v622 = CAnimation::IsOfType((__int64)v616, 44);
        }
        else if ( (char *)v621 == (char *)CAtlasedRectsMesh::IsOfType )
        {
          v622 = CAtlasedRectsMesh::IsOfType((__int64)v616, 44);
        }
        else if ( (char *)v621 == (char *)CRenderData::IsOfType )
        {
          v622 = CRenderData::IsOfType(v616, 44LL);
        }
        else
        {
          v622 = v621(v616, 44LL);
        }
        if ( v622 )
        {
          (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v616 + 5) + 144LL))((_QWORD *)v616 + 5);
          CRenderTargetManager::RemoveRenderTarget(*((CRenderTargetManager **)v7 + 4), v616);
        }
        else
        {
          v623 = *(__int64 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v616 + 48LL);
          if ( (char *)v623 == (char *)CVisual::IsOfType )
          {
            v624 = CVisual::IsOfType((__int64)v616, 43);
          }
          else if ( (char *)v623 == (char *)CRgnGeometry::IsOfType )
          {
            v624 = CRgnGeometry::IsOfType((__int64)v616, 43);
          }
          else if ( (char *)v623 == (char *)CAnimation::IsOfType )
          {
            v624 = CAnimation::IsOfType((__int64)v616, 43);
          }
          else if ( (char *)v623 == (char *)CAtlasedRectsMesh::IsOfType )
          {
            v624 = CAtlasedRectsMesh::IsOfType((__int64)v616, 43);
          }
          else if ( (char *)v623 == (char *)CRenderData::IsOfType )
          {
            v624 = CRenderData::IsOfType(v616, 43LL);
          }
          else
          {
            v624 = v623(v616, 43LL);
          }
          if ( v624 )
          {
            CAnalogExclusiveView::DeactivateSwapChain(v616);
            CAnalogExclusiveView::ReleaseSwapChain(v616);
            CAnalogCompositorClient::UnregisterExclusiveView(v625, v616);
            v626 = (void *)*((_QWORD *)v616 + 11);
            if ( v626 )
            {
              CloseHandle(v626);
              *((_QWORD *)v616 + 11) = 0LL;
            }
          }
        }
        v10 = -2147024890;
        if ( !v620
          || v620 >= *(_DWORD *)(v5 + 28)
          || (v627 = *(_QWORD *)(v5 + 40), !*(_DWORD *)(v620 * *(_DWORD *)(v5 + 24) + v627))
          || (v628 = v627 + v620 * *(_DWORD *)(v5 + 24)) == 0
          || !*(_DWORD *)v628 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x112Eu);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0xA63u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x1B2u);
          goto LABEL_1644;
        }
        v629 = *(_QWORD *)(v628 + 8);
        if ( v629 )
        {
          v630 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v629 + 16LL);
          if ( v630 == CResource::Release )
          {
            CResource::Release(*(CResource **)(v628 + 8));
          }
          else if ( v630 == CVisual::Release )
          {
            CVisual::Release(*(CVisual **)(v628 + 8));
          }
          else if ( v630 == CAtlasedRects::Release )
          {
            CAtlasedRects::Release(*(CAtlasedRects **)(v628 + 8));
          }
          else if ( v630 == CPrimitiveGroup::Release )
          {
            CPrimitiveGroup::Release(*(CPrimitiveGroup **)(v628 + 8));
          }
          else if ( v630 == CCompositionSurfaceBitmap::Release )
          {
            CCompositionSurfaceBitmap::Release(*(CCompositionSurfaceBitmap **)(v628 + 8));
          }
          else
          {
            v630(*(CCompositionSurfaceBitmap **)(v628 + 8));
          }
          *(_QWORD *)(v628 + 8) = 0LL;
        }
        memset_0((void *)(*(_QWORD *)(v5 + 40) + v620 * *(_DWORD *)(v5 + 24)), 0, *(unsigned int *)(v5 + 24));
        v4 = (unsigned int *)v664;
        goto LABEL_1145;
      }
      v653 = 423;
LABEL_1642:
      v10 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v653);
      goto LABEL_1644;
    }
    if ( v12 == 42 )
    {
      if ( (_DWORD)v14 != 32 )
      {
        v653 = 921;
        goto LABEL_1642;
      }
      v602 = *((_DWORD *)v13 + 1);
      if ( !v602
        || v602 >= *(_DWORD *)(v5 + 28)
        || (v603 = *(_QWORD *)(v5 + 40), !*(_DWORD *)(v602 * *(_DWORD *)(v5 + 24) + v603))
        || (v604 = v603 + v602 * *(_DWORD *)(v5 + 24), (v605 = *(_QWORD *)(v604 + 8)) == 0)
        || ((v606 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v605 + 48LL), v606 != CWindowNode::IsOfType)
          ? (v606 != CVisual::IsOfType
           ? (v607 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, bool (__fastcall *)(__int64, int)))v606)(
                       *(_QWORD *)(v604 + 8),
                       31LL,
                       v14,
                       CVisual::IsOfType))
           : (v607 = CVisual::IsOfType(*(_QWORD *)(v604 + 8), 31)))
          : (v607 = CWindowNode::IsOfType(*(_QWORD *)(v604 + 8), 31)),
            !v607 || (v608 = *(CVisual **)(v604 + 8)) == 0LL) )
      {
        v653 = 936;
        goto LABEL_1642;
      }
      CVisual::SetOffset(v608, *((double *)v13 + 1), *((double *)v13 + 2), *((double *)v13 + 3));
      v4 = (unsigned int *)v664;
    }
    else
    {
      switch ( v12 )
      {
        case 1u:
          if ( (_DWORD)v14 == 4 )
          {
            v15 = CComposition::Transport_SyncFlush(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    (const struct MILCMD_TRANSPORT_SYNCFLUSH *)CVisual::IsOfType);
            v10 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1Au);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 15;
          goto LABEL_1642;
        case 2u:
          if ( (_DWORD)v14 == 8 )
          {
            v16 = CComposition::Transport_RoundTripRequest(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2Du);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 34;
          goto LABEL_1642;
        case 3u:
          if ( (_DWORD)v14 == 12 )
          {
            v17 = CLegacySurfaceManager::AddAsyncFlushResponse(
                    (CLegacySurfaceManager *)(*((_QWORD *)v7 + 5) + 96LL),
                    (struct CChannelContext *)v4,
                    *((_DWORD *)v13 + 1),
                    *((_DWORD *)v13 + 2));
            v10 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x40u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 53;
          goto LABEL_1642;
        case 4u:
          if ( (_DWORD)v14 == 8 )
          {
            v18 = CComposition::Partition_RegisterForNotifications(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x53u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 72;
          goto LABEL_1642;
        case 5u:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 91;
            goto LABEL_1642;
          }
          v19 = (CRenderTargetManager *)*((_QWORD *)v7 + 4);
          v20 = *((_DWORD *)v13 + 1) != 0;
          if ( *((_BYTE *)v19 + 111) == v20 )
            goto LABEL_1146;
          *((_BYTE *)v19 + 111) = v20;
          *((_BYTE *)v19 + 110) = 1;
          CRenderTargetManager::ForceFullRender(v19);
          break;
        case 6u:
          if ( (_DWORD)v14 == 16 )
          {
            v21 = CComposition::Partition_ForceRender(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x79u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 110;
          goto LABEL_1642;
        case 7u:
          if ( (_DWORD)v14 == 148 )
          {
            v22 = CComposition::Partition_SetCurrentMmTask(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x8Cu);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 129;
          goto LABEL_1642;
        case 8u:
          if ( (unsigned int)v14 >= 4 )
          {
            v23 = CComposition::Partition_TelemetryTouchInteractionBegin(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    (const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *)CVisual::IsOfType,
                    (struct MILCMD_ANIMATION_SETPAUSED *)((char *)v13 + 4),
                    (int)v14 - 4);
            v10 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xA2u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 148;
          goto LABEL_1642;
        case 9u:
          if ( (_DWORD)v14 == 52 )
          {
            v24 = CComposition::Partition_TelemetryTouchInteractionUpdate(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xB5u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 170;
          goto LABEL_1642;
        case 0xAu:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 189;
            goto LABEL_1642;
          }
          CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(
            *((CPartitionVerticalBlankScheduler **)v7 + 63),
            *(_QWORD *)((char *)v13 + 4));
          break;
        case 0xBu:
          if ( (_DWORD)v14 != 16 )
          {
            v653 = 208;
            goto LABEL_1642;
          }
          CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
            *((CPartitionVerticalBlankScheduler **)v7 + 63),
            *((_DWORD *)v13 + 1),
            *((const GUID **)v13 + 1));
          break;
        case 0xCu:
          if ( (unsigned int)v14 >= 4 )
          {
            v25 = CComposition::Partition_TelemetrySetApplicationId(
                    (struct MILCMD_ANIMATION_SETPAUSED *)((char *)v13 + 4),
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    (const struct MILCMD_PARTITION_TELEMETRYSETAPPLICATIONID *)CVisual::IsOfType,
                    (const unsigned __int16 *)v13 + 2,
                    (int)v14 - 4);
            v10 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xF1u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 227;
          goto LABEL_1642;
        case 0xDu:
          if ( (unsigned int)v14 >= 4 )
          {
            v26 = CComposition::Partition_TelemetryAnimationScenarioBegin(
                    (CPartitionVerticalBlankScheduler **)v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    (const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *)CVisual::IsOfType,
                    (_WORD *)v13 + 2,
                    (int)v14 - 4);
            v10 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x107u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 249;
          goto LABEL_1642;
        case 0xEu:
          if ( (_DWORD)v14 != 28 )
          {
            v653 = 271;
            goto LABEL_1642;
          }
          CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(
            *((CPartitionVerticalBlankScheduler **)v7 + 63),
            v4[4],
            *(_QWORD *)((char *)v13 + 20),
            (const struct _GUID *)((char *)v13 + 4));
          break;
        case 0xFu:
          if ( (_DWORD)v14 != 28 )
          {
            v653 = 290;
            goto LABEL_1642;
          }
          CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
            *((CPartitionVerticalBlankScheduler **)v7 + 63),
            v4[4],
            *(_QWORD *)((char *)v13 + 20),
            (const struct _GUID *)((char *)v13 + 4));
          break;
        case 0x10u:
          if ( (_DWORD)v14 == 12 )
          {
            v27 = CComposition::Partition_SwitchRemotingMode(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x140u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 309;
          goto LABEL_1642;
        case 0x11u:
          if ( (_DWORD)v14 == 48 )
          {
            v28 = CComposition::Partition_DesktopCaptureBits(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x153u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 328;
          goto LABEL_1642;
        case 0x12u:
          if ( (_DWORD)v14 == 16 )
          {
            v29 = CComposition::Partition_Synchronize(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x166u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 347;
          goto LABEL_1642;
        case 0x13u:
          if ( (_DWORD)v14 == 12 )
          {
            v30 = CComposition::Partition_SetCursor(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v5,
                    v13);
            v10 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x179u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 366;
          goto LABEL_1642;
        case 0x14u:
          if ( (_DWORD)v14 == 12 )
          {
            v31 = CComposition::Partition_SetMagnifier(
                    v7,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v5,
                    v13);
            v10 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x18Cu);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 385;
          goto LABEL_1642;
        case 0x17u:
          if ( (_DWORD)v14 == 16 )
          {
            v32 = CComposition::Channel_DuplicateHandleOnSource(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x1C5u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 442;
          goto LABEL_1642;
        case 0x18u:
          if ( (_DWORD)v14 == 16 )
          {
            v33 = CComposition::Channel_DuplicateHandleOnTarget(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x1D8u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 461;
          goto LABEL_1642;
        case 0x19u:
          if ( (_DWORD)v14 == 8 )
          {
            v34 = CComposition::Channel_EnableDebugCounter(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1EBu);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 480;
          goto LABEL_1642;
        case 0x1Au:
          if ( (_DWORD)v14 == 20 )
          {
            v35 = CComposition::Channel_SetCallbackId(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v14,
                    v13);
            v10 = v35;
            if ( v35 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x1FEu);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 499;
          goto LABEL_1642;
        case 0x1Bu:
          if ( (_DWORD)v14 == 44 )
          {
            v36 = CComposition::Channel_VisualCaptureBits(
                    v7,
                    (struct CChannelContext *)v4,
                    (struct CResourceTable *)v5,
                    v13);
            v10 = v36;
            if ( v36 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x211u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 518;
          goto LABEL_1642;
        case 0x1Cu:
          if ( (_DWORD)v14 == 16 )
          {
            Resource = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x55u);
            if ( Resource && Resource != 16 )
            {
              v38 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *))(*(_QWORD *)(Resource - 16) + 64LL))(
                      Resource - 16,
                      v5,
                      v13);
              v10 = v38;
              if ( v38 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x22Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 552;
          }
          else
          {
            v653 = 537;
          }
          goto LABEL_1642;
        case 0x1Du:
          if ( (unsigned int)v14 < 0x18 )
          {
            v653 = 564;
          }
          else
          {
            v39 = v14 - 24;
            v40 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x55u);
            if ( v40 && v40 != 16 )
            {
              v652 = v39;
              v41 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *, __int64))(*(_QWORD *)(v40 - 16) + 56LL))(
                      v40 - 16,
                      v5,
                      v13,
                      (__int64)v13 + 24);
              v10 = v41;
              if ( v41 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x24Au);
                goto LABEL_1644;
              }
              v4 = (unsigned int *)v664;
              break;
            }
            v653 = 582;
          }
          goto LABEL_1642;
        case 0x1Eu:
          if ( (_DWORD)v14 == 16 )
          {
            v42 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x55u);
            if ( v42 && v42 != 16 )
            {
              v43 = CBitmapResource::ProcessRealize((CBitmapResource *)(v42 - 16), (struct CResourceTable *)v5, v13);
              v10 = v43;
              if ( v43 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x265u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 609;
          }
          else
          {
            v653 = 594;
          }
          goto LABEL_1642;
        case 0x1Fu:
          if ( (_DWORD)v14 != 16 )
          {
            v653 = 621;
            goto LABEL_1642;
          }
          v44 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x2Du);
          if ( !v44 )
          {
            v653 = 636;
            goto LABEL_1642;
          }
          *(_QWORD *)(v44 + 40) = *((_QWORD *)v13 + 1);
          CResource::NotifyOnChanged((_DWORD *)v44, 0, 0LL);
          break;
        case 0x20u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 648;
            goto LABEL_1642;
          }
          v45 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x2Eu);
          if ( !v45 )
          {
            v653 = 663;
            goto LABEL_1642;
          }
          goto LABEL_103;
        case 0x21u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 675;
            goto LABEL_1642;
          }
          v45 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x2Fu);
          if ( !v45 )
          {
            v653 = 690;
            goto LABEL_1642;
          }
          goto LABEL_103;
        case 0x22u:
          if ( (_DWORD)v14 != 40 )
          {
            v653 = 702;
            goto LABEL_1642;
          }
          v46 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x30u);
          if ( !v46 )
          {
            v653 = 717;
            goto LABEL_1642;
          }
          *(_OWORD *)(v46 + 40) = *(_OWORD *)((char *)v13 + 8);
          *(_OWORD *)(v46 + 56) = *(_OWORD *)((char *)v13 + 24);
          CResource::NotifyOnChanged((_DWORD *)v46, 0, 0LL);
          break;
        case 0x23u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 729;
            goto LABEL_1642;
          }
          v45 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x31u);
          if ( !v45 )
          {
            v653 = 744;
            goto LABEL_1642;
          }
          goto LABEL_103;
        case 0x24u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 756;
            goto LABEL_1642;
          }
          v45 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x32u);
          if ( !v45 )
          {
            v653 = 771;
            goto LABEL_1642;
          }
LABEL_103:
          *(_OWORD *)(v45 + 40) = *(_OWORD *)((char *)v13 + 8);
          CResource::NotifyOnChanged((_DWORD *)v45, 0, 0LL);
          break;
        case 0x25u:
          if ( (_DWORD)v14 != 56 )
          {
            v653 = 783;
            goto LABEL_1642;
          }
          v47 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x33u);
          if ( !v47 )
          {
            v653 = 798;
            goto LABEL_1642;
          }
          *(_OWORD *)(v47 + 40) = *(_OWORD *)((char *)v13 + 8);
          *(_OWORD *)(v47 + 56) = *(_OWORD *)((char *)v13 + 24);
          *(_OWORD *)(v47 + 72) = *(_OWORD *)((char *)v13 + 40);
          CResource::NotifyOnChanged((_DWORD *)v47, 0, 0LL);
          break;
        case 0x26u:
          if ( (_DWORD)v14 != 108 )
          {
            v653 = 810;
            goto LABEL_1642;
          }
          v48 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x34u);
          if ( !v48 )
          {
            v653 = 825;
            goto LABEL_1642;
          }
          *(_OWORD *)(v48 + 40) = *(_OWORD *)((char *)v13 + 8);
          *(_OWORD *)(v48 + 56) = *(_OWORD *)((char *)v13 + 24);
          *(_OWORD *)(v48 + 72) = *(_OWORD *)((char *)v13 + 40);
          *(_OWORD *)(v48 + 88) = *(_OWORD *)((char *)v13 + 56);
          *(_OWORD *)(v48 + 104) = *(_OWORD *)((char *)v13 + 72);
          *(_OWORD *)(v48 + 120) = *(_OWORD *)((char *)v13 + 88);
          *(_DWORD *)(v48 + 136) = *((_DWORD *)v13 + 26);
          CResource::NotifyOnChanged((_DWORD *)v48, 0, 0LL);
          break;
        case 0x27u:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 837;
          }
          else
          {
            v49 = v14 - 12;
            v50 = (CRenderData *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x22u);
            if ( v50 )
            {
              v51 = CRenderData::ProcessUpdate(v50, (struct CResourceTable *)v5, v13, (char *)v13 + 12, v49);
              v10 = v51;
              if ( v51 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x35Bu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 855;
          }
          goto LABEL_1642;
        case 0x28u:
          if ( (_DWORD)v14 == 20 )
          {
            v52 = (CTileLegacyMilBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Au);
            if ( v52 )
            {
              v54 = CTileLegacyMilBrush::ProcessSetSourceModifications(v52, v53, v13);
              v10 = v54;
              if ( v54 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x376u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 882;
          }
          else
          {
            v653 = 867;
          }
          goto LABEL_1642;
        case 0x29u:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 894;
            goto LABEL_1642;
          }
          if ( CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu) )
          {
            v10 = -2147418113;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x391u);
          }
          else
          {
            v10 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x38Du);
          }
          goto LABEL_1644;
        case 0x2Bu:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 948;
            goto LABEL_1642;
          }
          v55 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
          if ( !v55 )
          {
            v653 = 963;
            goto LABEL_1642;
          }
          CVisual::SetRelativeOffset(v55, *((double *)v13 + 1), *((double *)v13 + 2));
          break;
        case 0x2Cu:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 975;
            goto LABEL_1642;
          }
          v56 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
          if ( !v56 )
          {
            v653 = 990;
            goto LABEL_1642;
          }
          CVisual::SetSize(v56, *((double *)v13 + 1), *((double *)v13 + 2));
          break;
        case 0x2Du:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 1002;
            goto LABEL_1642;
          }
          v57 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
          if ( !v57 )
          {
            v653 = 1017;
            goto LABEL_1642;
          }
          CVisual::SetRelativeSize(v57, *((double *)v13 + 1), *((double *)v13 + 2));
          break;
        case 0x2Eu:
          if ( (_DWORD)v14 == 12 )
          {
            v58 = *((_DWORD *)v13 + 2);
            if ( v58 && !CResourceTable::GetResource(v5, v58, 0x18u) )
            {
              v653 = 1046;
            }
            else
            {
              v59 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v59 )
              {
                v60 = CVisual::ProcessSetTransform(v59, (const struct CResourceTable *)v5, v13);
                v10 = v60;
                if ( v60 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x427u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1059;
            }
          }
          else
          {
            v653 = 1029;
          }
          goto LABEL_1642;
        case 0x2Fu:
          if ( (_DWORD)v14 == 12 )
          {
            v61 = *((_DWORD *)v13 + 2);
            if ( v61 && !CResourceTable::GetResource(v5, v61, 0x1Fu) )
            {
              v653 = 1088;
            }
            else
            {
              v62 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v62 )
              {
                v63 = CVisual::ProcessSetTransformParent(v62, (const struct CResourceTable *)v5, v13);
                v10 = v63;
                if ( v63 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x451u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1101;
            }
          }
          else
          {
            v653 = 1071;
          }
          goto LABEL_1642;
        case 0x30u:
          if ( (_DWORD)v14 == 12 )
          {
            v64 = *((_DWORD *)v13 + 2);
            if ( v64 && !CResourceTable::GetResource(v5, v64, 7u) )
            {
              v653 = 1130;
            }
            else
            {
              v65 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v65 )
              {
                v66 = CVisual::ProcessSetEffect(v65, (const struct CResourceTable *)v5, v13);
                v10 = v66;
                if ( v66 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x47Bu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1143;
            }
          }
          else
          {
            v653 = 1113;
          }
          goto LABEL_1642;
        case 0x31u:
          if ( (_DWORD)v14 == 12 )
          {
            v67 = *((_DWORD *)v13 + 2);
            if ( v67 && !CResourceTable::GetResource(v5, v67, 0x41u) )
            {
              v653 = 1172;
            }
            else
            {
              v68 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v68 )
              {
                v69 = CVisual::ProcessSetClip(v68, (struct CResourceTable *)v5, v13);
                v10 = v69;
                if ( v69 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x4A5u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1185;
            }
          }
          else
          {
            v653 = 1155;
          }
          goto LABEL_1642;
        case 0x32u:
          if ( (_DWORD)v14 == 52 )
          {
            v70 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v70 )
            {
              v72 = CVisual::ProcessSetRenderOptions(v70, v71, v13);
              v10 = v72;
              if ( v72 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x4C0u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1212;
          }
          else
          {
            v653 = 1197;
          }
          goto LABEL_1642;
        case 0x33u:
          if ( (_DWORD)v14 == 16 )
          {
            v73 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v73 )
            {
              v75 = CVisual::ProcessSetOptions(v73, v74, v13);
              v10 = v75;
              if ( v75 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x4DBu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1239;
          }
          else
          {
            v653 = 1224;
          }
          goto LABEL_1642;
        case 0x34u:
          if ( (_DWORD)v14 == 12 )
          {
            v76 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v76 )
            {
              v77 = CVisual::ProcessSetContent(v76, (const struct CResourceTable *)v5, v13);
              v10 = v77;
              if ( v77 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x4F6u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1266;
          }
          else
          {
            v653 = 1251;
          }
          goto LABEL_1642;
        case 0x35u:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 1278;
            goto LABEL_1642;
          }
          v78 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
          if ( !v78 )
          {
            v653 = 1293;
            goto LABEL_1642;
          }
          CVisual::RemoveAllChildren(v78);
          break;
        case 0x36u:
          if ( (_DWORD)v14 == 12 )
          {
            v79 = *((_DWORD *)v13 + 2);
            if ( v79 && !CResourceTable::GetResource(v5, v79, 0x1Fu) )
            {
              v653 = 1322;
            }
            else
            {
              v80 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v80 )
              {
                v81 = CVisual::ProcessRemoveChild(v80, (const struct CResourceTable *)v5, v13);
                v10 = v81;
                if ( v81 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x53Bu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1335;
            }
          }
          else
          {
            v653 = 1305;
          }
          goto LABEL_1642;
        case 0x37u:
          if ( (_DWORD)v14 == 16 )
          {
            v82 = *((_DWORD *)v13 + 2);
            if ( !v82
              || HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v5 + 16), v82)
              && (v85 = *(_QWORD *)(v5 + 40) + (unsigned int)(v83 * *(_DWORD *)(v5 + 24)),
                  (v86 = *(_QWORD *)(v85 + 8)) != 0)
              && ((v87 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v86 + 48LL), v87 != v84)
                ? (v87 != CWindowNode::IsOfType
                 ? (v88 = v87(*(_QWORD *)(v85 + 8), 31))
                 : (v88 = CWindowNode::IsOfType(*(_QWORD *)(v85 + 8), 31)))
                : (v88 = CVisual::IsOfType(*(_QWORD *)(v85 + 8), 31)),
                  v88 && *(_QWORD *)(v85 + 8)) )
            {
              if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v5 + 16), *((_DWORD *)v13 + 1)) )
              {
                v91 = *(_QWORD *)(v5 + 40) + (unsigned int)(v89 * *(_DWORD *)(v5 + 24));
                v92 = *(_QWORD *)(v91 + 8);
                if ( v92 )
                {
                  v93 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v92 + 48LL);
                  if ( v93 == v90 )
                    v94 = CVisual::IsOfType(*(_QWORD *)(v91 + 8), 31);
                  else
                    v94 = v93 == CWindowNode::IsOfType
                        ? CWindowNode::IsOfType(*(_QWORD *)(v91 + 8), 31)
                        : v93(*(_QWORD *)(v91 + 8), 31);
                  if ( v94 )
                  {
                    v95 = *(CVisual **)(v91 + 8);
                    if ( v95 )
                    {
                      inserted = CVisual::ProcessInsertChildAt(v95, (const struct CResourceTable *)v5, v13);
                      v10 = inserted;
                      if ( inserted < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x565u);
                        goto LABEL_1644;
                      }
                      v4 = (unsigned int *)v664;
                      break;
                    }
                  }
                }
              }
              v653 = 1377;
            }
            else
            {
              v653 = 1364;
            }
          }
          else
          {
            v653 = 1347;
          }
          goto LABEL_1642;
        case 0x38u:
          if ( (_DWORD)v14 == 16 )
          {
            v97 = *((_DWORD *)v13 + 2);
            if ( v97 && !CResourceTable::GetResource(v5, v97, 0x1Fu) )
            {
              v653 = 1406;
            }
            else
            {
              v98 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v98 )
              {
                v99 = CVisual::ProcessMoveChild(v98, (const struct CResourceTable *)v5, v13);
                v10 = v99;
                if ( v99 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x58Fu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1419;
            }
          }
          else
          {
            v653 = 1389;
          }
          goto LABEL_1642;
        case 0x39u:
          if ( (_DWORD)v14 == 12 )
          {
            v100 = *((_DWORD *)v13 + 2);
            if ( v100 && !CResourceTable::GetResource(v5, v100, 0x34u) )
            {
              v653 = 1448;
            }
            else
            {
              v101 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v101 )
              {
                v102 = CVisual::ProcessSetColorTransform(v101, (struct CResourceTable *)v5, v13);
                v10 = v102;
                if ( v102 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0x5B9u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1461;
            }
          }
          else
          {
            v653 = 1431;
          }
          goto LABEL_1642;
        case 0x3Au:
          if ( (_DWORD)v14 == 20 )
          {
            v103 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v103 )
            {
              v105 = CVisual::ProcessTopLevelNode(v103, v104, v13);
              v10 = v105;
              if ( v105 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x5D4u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1488;
          }
          else
          {
            v653 = 1473;
          }
          goto LABEL_1642;
        case 0x3Bu:
          if ( (_DWORD)v14 == 8 )
          {
            v106 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v106 )
            {
              v109 = CVisual::ProcessSetModesToDefault(v106, v107, v108);
              v10 = v109;
              if ( v109 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v109, 0x5EFu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1515;
          }
          else
          {
            v653 = 1500;
          }
          goto LABEL_1642;
        case 0x3Cu:
          if ( (_DWORD)v14 == 28 )
          {
            v110 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v110 )
            {
              v112 = CVisual::ProcessSetHeatMapMode(v110, v111, v13);
              v10 = v112;
              if ( v112 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0x60Au);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1542;
          }
          else
          {
            v653 = 1527;
          }
          goto LABEL_1642;
        case 0x3Du:
          if ( (_DWORD)v14 == 12 )
          {
            v113 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v113 )
            {
              v115 = CVisual::ProcessSetRedrawRegionMode(v113, v114, v13);
              v10 = v115;
              if ( v115 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v115, 0x625u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1569;
          }
          else
          {
            v653 = 1554;
          }
          goto LABEL_1642;
        case 0x3Eu:
          if ( (_DWORD)v14 == 12 )
          {
            v116 = *((_DWORD *)v13 + 2);
            if ( v116 && ((v117 = CResourceTable::GetResource(v5, v116, 0x60u)) == 0 || v117 == 8) )
            {
              v653 = 1598;
            }
            else
            {
              v118 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
              if ( v118 )
              {
                v119 = CVisual::ProcessSetInteraction(v118, (struct CResourceTable *)v5, v13);
                v10 = v119;
                if ( v119 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v119, 0x64Fu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 1611;
            }
          }
          else
          {
            v653 = 1581;
          }
          goto LABEL_1642;
        case 0x3Fu:
          if ( (_DWORD)v14 == 16 )
          {
            v120 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
            if ( v120 )
            {
              v122 = CVisual::ProcessExposeToCoRenderer(v120, v121, v13);
              v10 = v122;
              if ( v122 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v122, 0x66Au);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1638;
          }
          else
          {
            v653 = 1623;
          }
          goto LABEL_1642;
        case 0x40u:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 1650;
            goto LABEL_1642;
          }
          v123 = (CVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Fu);
          if ( !v123 )
          {
            v653 = 1665;
            goto LABEL_1642;
          }
          CVisual::SetOpacity(v123, *((float *)v13 + 2));
          break;
        case 0x41u:
          if ( (_DWORD)v14 == 12 )
          {
            v124 = (CSpriteVisual *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x20u);
            if ( v124 )
            {
              v125 = CSpriteVisual::ProcessSetBrush(v124, (struct CResourceTable *)v5, v13);
              v10 = v125;
              if ( v125 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v125, 0x6A0u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1692;
          }
          else
          {
            v653 = 1677;
          }
          goto LABEL_1642;
        case 0x42u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 1704;
            goto LABEL_1642;
          }
          v126 = (CColorBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Du);
          if ( !v126 )
          {
            v653 = 1719;
            goto LABEL_1642;
          }
          CColorBrush::SetColor(
            v126,
            *((float *)v13 + 2),
            *((float *)v13 + 3),
            *((float *)v13 + 4),
            *((float *)v13 + 5));
          break;
        case 0x43u:
          if ( (_DWORD)v14 == 28 )
          {
            v127 = (CSurfaceBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Eu);
            if ( v127 )
            {
              v128 = CSurfaceBrush::ProcessSetSurface(v127, (struct CResourceTable *)v5, v13);
              v10 = v128;
              if ( v128 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v128, 0x6D6u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1746;
          }
          else
          {
            v653 = 1731;
          }
          goto LABEL_1642;
        case 0x44u:
          if ( (_DWORD)v14 == 20 )
          {
            v129 = (CSurfaceBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Eu);
            if ( v129 )
            {
              v131 = CSurfaceBrush::ProcessSetAlignment(v129, v130, v13);
              v10 = v131;
              if ( v131 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0x6F1u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1773;
          }
          else
          {
            v653 = 1758;
          }
          goto LABEL_1642;
        case 0x45u:
          if ( (_DWORD)v14 == 12 )
          {
            v132 = (CSurfaceBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Eu);
            if ( v132 )
            {
              v134 = CSurfaceBrush::ProcessSetInterpolationMode(v132, v133, v13);
              v10 = v134;
              if ( v134 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v134, 0x70Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1800;
          }
          else
          {
            v653 = 1785;
          }
          goto LABEL_1642;
        case 0x46u:
          if ( (_DWORD)v14 == 12 )
          {
            v135 = (CEffectBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Fu);
            if ( v135 )
            {
              v136 = CEffectBrush::ProcessSetTemplate(v135, (struct CResourceTable *)v5, v13);
              v10 = v136;
              if ( v136 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v136, 0x727u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1827;
          }
          else
          {
            v653 = 1812;
          }
          goto LABEL_1642;
        case 0x47u:
          if ( (_DWORD)v14 == 12 )
          {
            v137 = (CEffectBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Fu);
            if ( v137 )
            {
              v138 = CEffectBrush::ProcessSetPropertyBag(v137, (struct CResourceTable *)v5, v13);
              v10 = v138;
              if ( v138 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v138, 0x742u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1854;
          }
          else
          {
            v653 = 1839;
          }
          goto LABEL_1642;
        case 0x48u:
          if ( (_DWORD)v14 == 16 )
          {
            v139 = (CEffectBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Fu);
            if ( v139 )
            {
              v140 = CEffectBrush::ProcessSetInput(v139, (struct CResourceTable *)v5, v13);
              v10 = v140;
              if ( v140 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v140, 0x75Du);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1881;
          }
          else
          {
            v653 = 1866;
          }
          goto LABEL_1642;
        case 0x49u:
          if ( (_DWORD)v14 == 24 )
          {
            v141 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v141 )
            {
              v143 = CWindowNode::ProcessCreate(v141, v142, v13);
              v10 = v143;
              if ( v143 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v143, 0x778u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1908;
          }
          else
          {
            v653 = 1893;
          }
          goto LABEL_1642;
        case 0x4Au:
          if ( (_DWORD)v14 == 8 )
          {
            v144 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v144 )
            {
              v145 = CWindowNode::Detach(v144);
              v10 = v145;
              if ( v145 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v145, 0x793u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 1935;
          }
          else
          {
            v653 = 1920;
          }
          goto LABEL_1642;
        case 0x4Bu:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 1947;
            goto LABEL_1642;
          }
          v146 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
          if ( !v146 )
          {
            v653 = 1962;
            goto LABEL_1642;
          }
          CWindowNode::FlushVistaBltTokens(v146);
          break;
        case 0x4Cu:
          if ( (_DWORD)v14 != 40 )
          {
            v653 = 1974;
            goto LABEL_1642;
          }
          v147 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
          if ( !v147 )
          {
            v653 = 1989;
            goto LABEL_1642;
          }
          *(_OWORD *)(v147 + 872) = *(_OWORD *)((char *)v13 + 8);
          *(_OWORD *)(v147 + 856) = *(_OWORD *)((char *)v13 + 24);
          break;
        case 0x4Du:
          if ( (_DWORD)v14 == 56 )
          {
            v148 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v148 )
            {
              v149 = CWindowNode::ProcessSetBounds(v148, (struct CResourceTable *)v5, v13);
              v10 = v149;
              if ( v149 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v149, 0x7E4u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2016;
          }
          else
          {
            v653 = 2001;
          }
          goto LABEL_1642;
        case 0x4Eu:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 2028;
          }
          else
          {
            v150 = v14 - 12;
            v151 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v151 )
            {
              v153 = CWindowNode::ProcessAddDirtyRegion(v151, v152, v13, (char *)v13 + 12, v150);
              v10 = v153;
              if ( v153 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0x802u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2046;
          }
          goto LABEL_1642;
        case 0x4Fu:
          if ( (_DWORD)v14 != 16 )
          {
            v653 = 2058;
            goto LABEL_1642;
          }
          v154 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
          if ( !v154 )
          {
            v653 = 2073;
            goto LABEL_1642;
          }
          *(_QWORD *)(v154 + 832) = *((_QWORD *)v13 + 1);
          break;
        case 0x50u:
          if ( (_DWORD)v14 == 64 )
          {
            v155 = *((_DWORD *)v13 + 2);
            if ( v155 && ((v156 = CResourceTable::GetResource(v5, v155, 0x56u)) == 0 || v156 == 16) )
            {
              v653 = 2102;
            }
            else
            {
              v157 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
              if ( v157 )
              {
                v158 = CWindowNode::ProcessNotifyDxUpdate(v157, (struct CResourceTable *)v5, v13);
                v10 = v158;
                if ( v158 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v158, 0x847u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2115;
            }
          }
          else
          {
            v653 = 2085;
          }
          goto LABEL_1642;
        case 0x51u:
          if ( (_DWORD)v14 == 12 )
          {
            v159 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v159 )
            {
              v160 = CWindowNode::ProcessSetSpriteImage(v159, (struct CResourceTable *)v5, v13);
              v10 = v160;
              if ( v160 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0x862u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2142;
          }
          else
          {
            v653 = 2127;
          }
          goto LABEL_1642;
        case 0x52u:
          if ( (_DWORD)v14 == 12 )
          {
            v161 = *((_DWORD *)v13 + 2);
            if ( v161 && ((v162 = CResourceTable::GetResource(v5, v161, 0x56u)) == 0 || v162 == 16) )
            {
              v653 = 2171;
            }
            else
            {
              v163 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
              if ( v163 )
              {
                v164 = CWindowNode::ProcessSetDxImage(v163, (struct CResourceTable *)v5, v13);
                v10 = v164;
                if ( v164 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v164, 0x88Cu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2184;
            }
          }
          else
          {
            v653 = 2154;
          }
          goto LABEL_1642;
        case 0x53u:
          if ( (_DWORD)v14 == 16 )
          {
            v165 = *((_DWORD *)v13 + 3);
            if ( v165 && !CResourceTable::GetResource(v5, v165, 0x45u) )
            {
              v653 = 2213;
            }
            else
            {
              v166 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
              if ( v166 )
              {
                v167 = CWindowNode::ProcessSetSpriteClip(v166, (struct CResourceTable *)v5, v13);
                v10 = v167;
                if ( v167 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v167, 0x8B6u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2226;
            }
          }
          else
          {
            v653 = 2196;
          }
          goto LABEL_1642;
        case 0x54u:
          if ( (_DWORD)v14 == 12 )
          {
            v168 = *((_DWORD *)v13 + 2);
            if ( v168 && !CResourceTable::GetResource(v5, v168, 0x41u) )
            {
              v653 = 2255;
            }
            else
            {
              v169 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
              if ( v169 )
              {
                v170 = CWindowNode::ProcessSetDxClip(v169, (struct CResourceTable *)v5, v13);
                v10 = v170;
                if ( v170 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v170, 0x8E0u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2268;
            }
          }
          else
          {
            v653 = 2238;
          }
          goto LABEL_1642;
        case 0x55u:
          if ( (_DWORD)v14 == 20 )
          {
            v171 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v171 )
            {
              v173 = CWindowNode::ProcessSetSourceModifications(v171, v172, v13);
              v10 = v173;
              if ( v173 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v173, 0x8FBu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2295;
          }
          else
          {
            v653 = 2280;
          }
          goto LABEL_1642;
        case 0x56u:
          if ( (_DWORD)v14 == 24 )
          {
            v174 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v174 )
            {
              v176 = CWindowNode::ProcessSetAlphaMargins(v174, v175, v13);
              v10 = v176;
              if ( v176 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v176, 0x916u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2322;
          }
          else
          {
            v653 = 2307;
          }
          goto LABEL_1642;
        case 0x57u:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 2334;
            goto LABEL_1642;
          }
          v177 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
          if ( !v177 )
          {
            v653 = 2349;
            goto LABEL_1642;
          }
          *(_BYTE *)(v177 + 1196) = *((_DWORD *)v13 + 2) != 0;
          break;
        case 0x58u:
          if ( (_DWORD)v14 == 12 )
          {
            v178 = *((_DWORD *)v13 + 2);
            if ( v178 && !CResourceTable::GetResource(v5, v178, 0x21u) )
            {
              v653 = 2378;
            }
            else
            {
              v179 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
              if ( v179 )
              {
                v180 = CWindowNode::ProcessCopyCompositorOwnedResources(v179, (struct CResourceTable *)v5, v13);
                v10 = v180;
                if ( v180 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v180, 0x95Bu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2391;
            }
          }
          else
          {
            v653 = 2361;
          }
          goto LABEL_1642;
        case 0x59u:
          if ( (_DWORD)v14 == 24 )
          {
            v181 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v181 )
            {
              v183 = CWindowNode::ProcessSetMaximizedClipMargins(v181, v182, v13);
              v10 = v183;
              if ( v183 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v183, 0x976u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2418;
          }
          else
          {
            v653 = 2403;
          }
          goto LABEL_1642;
        case 0x5Au:
          if ( (_DWORD)v14 == 8 )
          {
            v184 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v184 )
            {
              v187 = CWindowNode::ProcessNotifyVisRgnUpdate(v184, v185, v186);
              v10 = v187;
              if ( v187 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v187, 0x991u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2445;
          }
          else
          {
            v653 = 2430;
          }
          goto LABEL_1642;
        case 0x5Bu:
          if ( (_DWORD)v14 == 12 )
          {
            v188 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v188 )
            {
              v190 = CWindowNode::ProcessSetDxAlpha(v188, v189, v13);
              v10 = v190;
              if ( v190 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v190, 0x9ACu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2472;
          }
          else
          {
            v653 = 2457;
          }
          goto LABEL_1642;
        case 0x5Cu:
          if ( (_DWORD)v14 == 16 )
          {
            v191 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v191 )
            {
              v193 = CWindowNode::ProcessSetCompositionSurface(v191, v192, v13);
              v10 = v193;
              if ( v193 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v193, 0x9C7u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2499;
          }
          else
          {
            v653 = 2484;
          }
          goto LABEL_1642;
        case 0x5Du:
          if ( (_DWORD)v14 == 12 )
          {
            v194 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v194 )
            {
              v196 = CWindowNode::ProcessProtectContent(v194, v195, v13);
              v10 = v196;
              if ( v196 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v196, 0x9E2u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2526;
          }
          else
          {
            v653 = 2511;
          }
          goto LABEL_1642;
        case 0x5Eu:
          if ( (_DWORD)v14 == 60 )
          {
            v197 = *((_DWORD *)v13 + 2);
            if ( v197 && ((v198 = CResourceTable::GetResource(v5, v197, 0x56u)) == 0 || v198 == 16) )
            {
              v653 = 2555;
            }
            else
            {
              v199 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
              if ( v199 )
              {
                v200 = CWindowNode::ProcessNotifyDxImmediateUpdate(v199, (struct CResourceTable *)v5, v13);
                v10 = v200;
                if ( v200 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v200, 0xA0Cu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2568;
            }
          }
          else
          {
            v653 = 2538;
          }
          goto LABEL_1642;
        case 0x5Fu:
          if ( (_DWORD)v14 == 12 )
          {
            v201 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v201 )
            {
              v203 = CWindowNode::ProcessSetLayoutRTL(v201, v202, v13);
              v10 = v203;
              if ( v203 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v203, 0xA27u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2595;
          }
          else
          {
            v653 = 2580;
          }
          goto LABEL_1642;
        case 0x60u:
          if ( (_DWORD)v14 == 12 )
          {
            v204 = (CWindowNode *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x21u);
            if ( v204 )
            {
              v206 = CWindowNode::ProcessSetLayeredWindow(v204, v205, v13);
              v10 = v206;
              if ( v206 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v206, 0xA42u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2622;
          }
          else
          {
            v653 = 2607;
          }
          goto LABEL_1642;
        case 0x61u:
          if ( (unsigned int)v14 < 0x10 )
          {
            v653 = 2634;
          }
          else
          {
            v207 = v14 - 16;
            v208 = (CVisualGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x50u);
            if ( v208 )
            {
              v209 = CVisualGroup::ProcessUpdate(v208, (struct CResourceTable *)v5, v13, (char *)v13 + 16, v207);
              v10 = v209;
              if ( v209 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v209, 0xA60u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2652;
          }
          goto LABEL_1642;
        case 0x62u:
          if ( (_DWORD)v14 == 56 )
          {
            v210 = (CGeometry *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x41u);
            if ( v210 )
            {
              v212 = CGeometry::ProcessSetTransform(v210, v211, v13);
              v10 = v212;
              if ( v212 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v212, 0xA7Bu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2679;
          }
          else
          {
            v653 = 2664;
          }
          goto LABEL_1642;
        case 0x63u:
          if ( (_DWORD)v14 == 60 )
          {
            v213 = (CRectangleGeometry *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x43u);
            if ( v213 )
            {
              v215 = CRectangleGeometry::ProcessSetRectangle(v213, v214, v13);
              v10 = v215;
              if ( v215 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v215, 0xA96u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2706;
          }
          else
          {
            v653 = 2691;
          }
          goto LABEL_1642;
        case 0x64u:
          if ( (_DWORD)v14 != 48 )
          {
            v653 = 2718;
            goto LABEL_1642;
          }
          if ( !CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x25u) )
          {
            v653 = 2733;
            goto LABEL_1642;
          }
          break;
        case 0x65u:
          if ( (_DWORD)v14 == 40 )
          {
            v216 = (CDesktopRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x26u);
            if ( v216 )
            {
              v218 = CDesktopRenderTarget::ProcessCreate(v216, v217, v13);
              v10 = v218;
              if ( v218 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v218, 0xACCu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2760;
          }
          else
          {
            v653 = 2745;
          }
          goto LABEL_1642;
        case 0x66u:
          if ( (_DWORD)v14 == 8 )
          {
            v219 = (CDesktopRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x26u);
            if ( v219 )
            {
              v222 = CDesktopRenderTarget::ProcessRecreateDisplaySet(v219, v220, v221);
              v10 = v222;
              if ( v222 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v222, 0xAE7u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2787;
          }
          else
          {
            v653 = 2772;
          }
          goto LABEL_1642;
        case 0x67u:
          if ( (_DWORD)v14 == 8 )
          {
            v223 = (CDesktopRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x26u);
            if ( v223 )
            {
              updated = CDesktopRenderTarget::ProcessUpdateMonitorRotation(v223, v224, v225);
              v10 = updated;
              if ( updated < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xB02u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2814;
          }
          else
          {
            v653 = 2799;
          }
          goto LABEL_1642;
        case 0x68u:
          if ( (_DWORD)v14 == 12 )
          {
            v227 = (CDesktopRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x26u);
            if ( v227 )
            {
              v229 = CDesktopRenderTarget::ProcessDisableStereoRendering(v227, v228, v13);
              v10 = v229;
              if ( v229 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v229, 0xB1Du);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2841;
          }
          else
          {
            v653 = 2826;
          }
          goto LABEL_1642;
        case 0x69u:
          if ( (_DWORD)v14 == 12 )
          {
            v230 = *((_DWORD *)v13 + 2);
            if ( v230 && !CResourceTable::GetResource(v5, v230, 0x28u) )
            {
              v653 = 2870;
            }
            else
            {
              v231 = (struct CResource **)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x26u);
              if ( v231 )
              {
                v232 = CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(v231, (struct CResourceTable *)v5, v13);
                v10 = v232;
                if ( v232 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v232, 0xB47u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2883;
            }
          }
          else
          {
            v653 = 2853;
          }
          goto LABEL_1642;
        case 0x6Au:
          if ( (_DWORD)v14 == 28 )
          {
            v233 = (CDcompRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x27u);
            if ( v233 )
            {
              v235 = CDcompRenderTarget::ProcessCreate(v233, v234, v13);
              v10 = v235;
              if ( v235 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v235, 0xB62u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2910;
          }
          else
          {
            v653 = 2895;
          }
          goto LABEL_1642;
        case 0x6Bu:
          if ( (_DWORD)v14 == 12 )
          {
            v236 = *((_DWORD *)v13 + 2);
            if ( v236 && !CResourceTable::GetResource(v5, v236, 0x1Fu) )
            {
              v653 = 2939;
            }
            else
            {
              v237 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x24u);
              if ( v237 )
              {
                v238 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *))(*(_QWORD *)v237 + 104LL))(
                         v237,
                         v5,
                         v13);
                v10 = v238;
                if ( v238 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v238, 0xB8Cu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 2952;
            }
          }
          else
          {
            v653 = 2922;
          }
          goto LABEL_1642;
        case 0x6Cu:
          if ( (_DWORD)v14 == 24 )
          {
            v239 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x24u);
            if ( v239 )
            {
              v240 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *))(*(_QWORD *)v239 + 112LL))(
                       v239,
                       v5,
                       v13);
              v10 = v240;
              if ( v240 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v240, 0xBA7u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 2979;
          }
          else
          {
            v653 = 2964;
          }
          goto LABEL_1642;
        case 0x6Du:
          if ( (_DWORD)v14 == 12 )
          {
            v241 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x24u);
            if ( v241 )
            {
              v242 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *))(*(_QWORD *)v241 + 120LL))(
                       v241,
                       v5,
                       v13);
              v10 = v242;
              if ( v242 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v242, 0xBC2u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3006;
          }
          else
          {
            v653 = 2991;
          }
          goto LABEL_1642;
        case 0x6Eu:
          if ( (_DWORD)v14 == 12 )
          {
            v243 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x24u);
            if ( v243 )
            {
              v244 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *))(*(_QWORD *)v243 + 128LL))(
                       v243,
                       v5,
                       v13);
              v10 = v244;
              if ( v244 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v244, 0xBDDu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3033;
          }
          else
          {
            v653 = 3018;
          }
          goto LABEL_1642;
        case 0x6Fu:
          if ( (_DWORD)v14 == 52 )
          {
            v245 = CComposition::Target_CaptureBits(
                     (struct CSurfaceManager **)v7,
                     (struct CChannelContext *)v4,
                     (struct CResourceTable *)v5,
                     v13);
            v10 = v245;
            if ( v245 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v245, 0xBF0u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 3045;
          goto LABEL_1642;
        case 0x70u:
          if ( (_DWORD)v14 == 72 )
          {
            v246 = CComposition::MetaBitmapRenderTarget_CaptureBits(
                     v7,
                     (struct CChannelContext *)v4,
                     (struct CResourceTable *)v5,
                     v13);
            v10 = v246;
            if ( v246 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v246, 0xC03u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 3064;
          goto LABEL_1642;
        case 0x71u:
          if ( (_DWORD)v14 == 224 )
          {
            v247 = CComposition::MetaBitmapRenderTarget_Create(
                     v7,
                     (struct CChannelContext *)&_ImageBase,
                     (struct CResourceTable *)v5,
                     v13);
            v10 = v247;
            if ( v247 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v247, 0xC16u);
              goto LABEL_1644;
            }
            break;
          }
          v653 = 3083;
          goto LABEL_1642;
        case 0x72u:
          if ( (_DWORD)v14 == 12 )
          {
            v248 = *((_DWORD *)v13 + 2);
            if ( v248 && !CResourceTable::GetResource(v5, v248, 0x39u) )
            {
              v653 = 3119;
            }
            else
            {
              v249 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x35u);
              if ( v249 )
              {
                v250 = CMagnifierRenderTarget::ProcessSetTransform(v249, (struct CResourceTable *)v5, v13);
                v10 = v250;
                if ( v250 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v250, 0xC40u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 3132;
            }
          }
          else
          {
            v653 = 3102;
          }
          goto LABEL_1642;
        case 0x73u:
          if ( (_DWORD)v14 == 12 )
          {
            v251 = *((_DWORD *)v13 + 2);
            if ( v251 && !CResourceTable::GetResource(v5, v251, 0x34u) )
            {
              v653 = 3161;
            }
            else
            {
              v252 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x35u);
              if ( v252 )
              {
                v253 = CMagnifierRenderTarget::ProcessSetColorTransform(v252, (struct CResourceTable *)v5, v13);
                v10 = v253;
                if ( v253 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v253, 0xC6Au);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 3174;
            }
          }
          else
          {
            v653 = 3144;
          }
          goto LABEL_1642;
        case 0x74u:
          if ( (_DWORD)v14 == 216 )
          {
            v254 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x35u);
            if ( v254 )
            {
              v256 = CMagnifierRenderTarget::ProcessUpdate(v254, v255, v13);
              v10 = v256;
              if ( v256 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v256, 0xC85u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3201;
          }
          else
          {
            v653 = 3186;
          }
          goto LABEL_1642;
        case 0x75u:
          if ( (_DWORD)v14 == 12 )
          {
            v257 = *((_DWORD *)v13 + 2);
            if ( v257 && !CResourceTable::GetResource(v5, v257, 0x50u) )
            {
              v653 = 3230;
            }
            else
            {
              v258 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x35u);
              if ( v258 )
              {
                v259 = CMagnifierRenderTarget::ProcessSetFilterList(v258, (struct CResourceTable *)v5, v13);
                v10 = v259;
                if ( v259 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v259, 0xCAFu);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 3243;
            }
          }
          else
          {
            v653 = 3213;
          }
          goto LABEL_1642;
        case 0x76u:
          if ( (_DWORD)v14 == 32 )
          {
            v260 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x35u);
            if ( v260 )
            {
              v262 = CMagnifierRenderTarget::ProcessSetSlicer(v260, v261, v13);
              v10 = v262;
              if ( v262 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v262, 0xCCAu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3270;
          }
          else
          {
            v653 = 3255;
          }
          goto LABEL_1642;
        case 0x77u:
          if ( (_DWORD)v14 == 28 )
          {
            v263 = *((_DWORD *)v13 + 6);
            if ( v263 && !CResourceTable::GetResource(v5, v263, 0x1Fu) )
            {
              v653 = 3299;
            }
            else
            {
              v264 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x36u);
              if ( v264 )
              {
                v265 = CIndirectSwapchainRenderTarget::ProcessCreate(v264, (struct CResourceTable *)v5, v13);
                v10 = v265;
                if ( v265 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v265, 0xCF4u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 3312;
            }
          }
          else
          {
            v653 = 3282;
          }
          goto LABEL_1642;
        case 0x78u:
          if ( (_DWORD)v14 == 24 )
          {
            v266 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x36u);
            if ( v266 )
            {
              v268 = CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(v266, v267, v13);
              v10 = v268;
              if ( v268 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v268, 0xD0Fu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3339;
          }
          else
          {
            v653 = 3324;
          }
          goto LABEL_1642;
        case 0x79u:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 3351;
            goto LABEL_1642;
          }
          v269 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x36u);
          if ( !v269 )
          {
            v653 = 3366;
            goto LABEL_1642;
          }
          CIndirectSwapchainRenderTarget::Unregister(v269);
          break;
        case 0x7Au:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 3378;
            goto LABEL_1642;
          }
          if ( !CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x29u) )
          {
            v653 = 3393;
            goto LABEL_1642;
          }
          break;
        case 0x7Bu:
          if ( (_DWORD)v14 == 12 )
          {
            if ( CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x29u) )
            {
              v272 = CAnalogCompositor::ProcessSetExclusiveOpacity(v271, v270, v13);
              v10 = v272;
              if ( v272 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v272, 0xD60u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3420;
          }
          else
          {
            v653 = 3405;
          }
          goto LABEL_1642;
        case 0x7Cu:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 3432;
            goto LABEL_1642;
          }
          if ( !CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x29u) )
          {
            v653 = 3447;
            goto LABEL_1642;
          }
          CAnalogCompositorClient::SetActiveExclusiveView(v273, *((_DWORD *)v13 + 2));
          break;
        case 0x7Du:
          if ( (_DWORD)v14 == 24 )
          {
            v274 = (CAnalogExclusiveView *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x2Bu);
            if ( v274 )
            {
              v276 = CAnalogExclusiveView::ProcessCreate(v274, v275, v13);
              v10 = v276;
              if ( v276 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v276, 0xD96u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3474;
          }
          else
          {
            v653 = 3459;
          }
          goto LABEL_1642;
        case 0x7Eu:
          if ( (_DWORD)v14 == 12 )
          {
            v277 = (CAnalogExclusiveView *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x2Bu);
            if ( v277 )
            {
              v278 = CAnalogExclusiveView::ProcessSetSwapChain(v277, (struct CResourceTable *)v5, v13);
              v10 = v278;
              if ( v278 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v278, 0xDB1u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3501;
          }
          else
          {
            v653 = 3486;
          }
          goto LABEL_1642;
        case 0x7Fu:
          if ( (_DWORD)v14 == 20 )
          {
            v279 = (CAnalogTextureTarget *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x2Cu);
            if ( v279 )
            {
              v281 = CAnalogTextureTarget::ProcessCreate(v279, v280, v13);
              v10 = v281;
              if ( v281 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v281, 0xDCCu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3528;
          }
          else
          {
            v653 = 3513;
          }
          goto LABEL_1642;
        case 0x80u:
          if ( (_DWORD)v14 == 16 )
          {
            v282 = (CBaseAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x52u);
            if ( v282 )
            {
              v283 = CBaseAnimation::ProcessAddBinding(v282, (struct CResourceTable *)v5, v13);
              v10 = v283;
              if ( v283 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v283, 0xDE7u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3555;
          }
          else
          {
            v653 = 3540;
          }
          goto LABEL_1642;
        case 0x81u:
          if ( (_DWORD)v14 == 16 )
          {
            v284 = (CBaseAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x52u);
            if ( v284 )
            {
              v285 = CBaseAnimation::ProcessRemoveBinding(v284, (struct CResourceTable *)v5, v13);
              v10 = v285;
              if ( v285 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v285, 0xE02u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3582;
          }
          else
          {
            v653 = 3567;
          }
          goto LABEL_1642;
        case 0x82u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 3594;
            goto LABEL_1642;
          }
          v286 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
          if ( !v286 )
          {
            v653 = 3609;
            goto LABEL_1642;
          }
          v287 = *((_QWORD *)v13 + 1);
          *(_QWORD *)(v286 + 120) = v287;
          *(_QWORD *)(v286 + 192) = v287;
          break;
        case 0x83u:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 3621;
          }
          else
          {
            v288 = v14 - 12;
            v289 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v289 )
            {
              v291 = CAnimation::ProcessAppend(v289, v290, v13, (char *)v13 + 12, v288);
              v10 = v291;
              if ( v291 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v291, 0xE3Bu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3639;
          }
          goto LABEL_1642;
        case 0x84u:
          if ( (_DWORD)v14 == 20 )
          {
            v292 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v292 )
            {
              v293 = CAnimation::ProcessSetPrimitives(v292, (struct CResourceTable *)v5, v13);
              v10 = v293;
              if ( v293 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v293, 0xE56u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3666;
          }
          else
          {
            v653 = 3651;
          }
          goto LABEL_1642;
        case 0x85u:
          if ( (_DWORD)v14 == 24 )
          {
            v294 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v294 )
            {
              v296 = CAnimation::ProcessTelemetrySetAnimationScenarioGUID(v294, v295, v13);
              v10 = v296;
              if ( v296 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v296, 0xE71u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3693;
          }
          else
          {
            v653 = 3678;
          }
          goto LABEL_1642;
        case 0x86u:
          if ( (_DWORD)v14 == 12 )
          {
            v297 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v297 )
            {
              v298 = CAnimation::ProcessSetTrigger(v297, (struct CResourceTable *)v5, v13);
              v10 = v298;
              if ( v298 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v298, 0xE8Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3720;
          }
          else
          {
            v653 = 3705;
          }
          goto LABEL_1642;
        case 0x87u:
          if ( (_DWORD)v14 == 48 )
          {
            v299 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v299 )
            {
              v300 = CAnimation::ProcessSetHandoff(v299, (struct CResourceTable *)v5, v13);
              v10 = v300;
              if ( v300 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v300, 0xEA7u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3747;
          }
          else
          {
            v653 = 3732;
          }
          goto LABEL_1642;
        case 0x88u:
          if ( (_DWORD)v14 == 12 )
          {
            v301 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v301 )
            {
              v303 = CAnimation::ProcessSetPaused(v301, v302, v13);
              v10 = v303;
              if ( v303 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v303, 0xEC2u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3774;
          }
          else
          {
            v653 = 3759;
          }
          goto LABEL_1642;
        case 0x89u:
          if ( (_DWORD)v14 == 24 )
          {
            v304 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v304 )
            {
              v306 = CAnimation::ProcessSetSeek(v304, v305, v13);
              v10 = v306;
              if ( v306 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v306, 0xEDDu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3801;
          }
          else
          {
            v653 = 3786;
          }
          goto LABEL_1642;
        case 0x8Au:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 3813;
            goto LABEL_1642;
          }
          v307 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
          if ( !v307 )
          {
            v653 = 3828;
            goto LABEL_1642;
          }
          *(_BYTE *)(v307 + 96) |= 8u;
          break;
        case 0x8Bu:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 3840;
            goto LABEL_1642;
          }
          v308 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
          v309 = v308;
          if ( !v308 )
          {
            v653 = 3855;
            goto LABEL_1642;
          }
          *(_DWORD *)(v308 + 160) = 0;
          DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v308 + 136), 0x10u);
          *(_DWORD *)(v309 + 168) = 0;
          break;
        case 0x8Cu:
          if ( (unsigned int)v14 < 8 )
          {
            v653 = 3867;
          }
          else
          {
            v310 = v14 - 8;
            v311 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v311 )
            {
              v314 = CAnimation::ProcessAddTimeEvents(v311, v312, v313, (char *)v13 + 8, v310);
              v10 = v314;
              if ( v314 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v314, 0xF31u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3885;
          }
          goto LABEL_1642;
        case 0x8Du:
          if ( (_DWORD)v14 == 12 )
          {
            v315 = (CAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x53u);
            if ( v315 )
            {
              v316 = CAnimation::ProcessSetCallbackId(v315, (struct CResourceTable *)v5, v13);
              v10 = v316;
              if ( v316 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v316, 0xF4Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3912;
          }
          else
          {
            v653 = 3897;
          }
          goto LABEL_1642;
        case 0x8Eu:
          if ( (_DWORD)v14 == 12 )
          {
            v317 = (CScalar *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x54u);
            if ( v317 )
            {
              v319 = CScalar::ProcessSetValue(v317, v318, v13);
              v10 = v319;
              if ( v319 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v319, 0xF67u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3939;
          }
          else
          {
            v653 = 3924;
          }
          goto LABEL_1642;
        case 0x8Fu:
          if ( (_DWORD)v14 == 24 )
          {
            v320 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Du);
            if ( v320 && v320 != 8 )
            {
              v322 = CPrimitiveColor::ProcessSetValue((CPrimitiveColor *)(v320 - 8), v321, v13);
              v10 = v322;
              if ( v322 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v322, 0xF82u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3966;
          }
          else
          {
            v653 = 3951;
          }
          goto LABEL_1642;
        case 0x90u:
          if ( (_DWORD)v14 == 16 )
          {
            v323 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x58u);
            if ( v323 && v323 != 16 )
            {
              v324 = CGdiSpriteBitmap::ProcessUpdate(
                       (CGdiSpriteBitmap *)(v323 - 16),
                       (const struct CResourceTable *)v5,
                       v13);
              v10 = v324;
              if ( v324 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v324, 0xF9Du);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 3993;
          }
          else
          {
            v653 = 3978;
          }
          goto LABEL_1642;
        case 0x91u:
          if ( (_DWORD)v14 == 24 )
          {
            v325 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x58u);
            if ( v325 && v325 != 16 )
            {
              v326 = CGdiSpriteBitmap::ProcessUpdateMargins(
                       (CGdiSpriteBitmap *)(v325 - 16),
                       (const struct CResourceTable *)v5,
                       v13);
              v10 = v326;
              if ( v326 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v326, 0xFB8u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4020;
          }
          else
          {
            v653 = 4005;
          }
          goto LABEL_1642;
        case 0x92u:
          if ( (_DWORD)v14 == 12 )
          {
            v327 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x58u);
            if ( v327 && v327 != 16 )
            {
              v328 = CGdiSpriteBitmap::ProcessUpdateSurface(
                       (CGdiSpriteBitmap *)(v327 - 16),
                       (const struct CResourceTable *)v5,
                       v13);
              v10 = v328;
              if ( v328 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v328, 0xFD3u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4047;
          }
          else
          {
            v653 = 4032;
          }
          goto LABEL_1642;
        case 0x93u:
          if ( (_DWORD)v14 == 8 )
          {
            v329 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x58u);
            if ( v329 && v329 != 16 )
            {
              v330 = CGdiSpriteBitmap::ProcessUnmapSection(
                       (struct IBitmapSource **)(v329 - 16),
                       (struct CResourceTable *)v5,
                       v13);
              v10 = v330;
              if ( v330 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v330, 0xFEEu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4074;
          }
          else
          {
            v653 = 4059;
          }
          goto LABEL_1642;
        case 0x94u:
          if ( (_DWORD)v14 == 20 )
          {
            v331 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x58u);
            if ( v331 && v331 != 16 )
            {
              v332 = CGdiSpriteBitmap::ProcessNotifyDirty(
                       (CGdiSpriteBitmap *)(v331 - 16),
                       (struct CResourceTable *)v5,
                       v13);
              v10 = v332;
              if ( v332 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v332, 0x1009u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4101;
          }
          else
          {
            v653 = 4086;
          }
          goto LABEL_1642;
        case 0x95u:
          if ( (_DWORD)v14 == 20 )
          {
            v333 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x56u);
            if ( v333 && v333 != 16 )
            {
              v335 = CFlipChain::ProcessCreate((CFlipChain *)(v333 - 16), v334, v13);
              v10 = v335;
              if ( v335 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v335, 0x1024u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4128;
          }
          else
          {
            v653 = 4113;
          }
          goto LABEL_1642;
        case 0x96u:
          if ( (_DWORD)v14 == 64 )
          {
            v336 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x56u);
            if ( v336 && v336 != 16 )
            {
              v338 = CFlipChain::ProcessInitializeSharedDataObjects((CFlipChain *)(v336 - 16), v337, v13);
              v10 = v338;
              if ( v338 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v338, 0x103Fu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4155;
          }
          else
          {
            v653 = 4140;
          }
          goto LABEL_1642;
        case 0x97u:
          if ( (_DWORD)v14 == 28 )
          {
            v339 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x56u);
            if ( v339 && v339 != 16 )
            {
              v341 = CFlipChain::ProcessRequestSharedHandle((CFlipChain *)(v339 - 16), v340, v13);
              v10 = v341;
              if ( v341 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v341, 0x105Au);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4182;
          }
          else
          {
            v653 = 4167;
          }
          goto LABEL_1642;
        case 0x98u:
          if ( (_DWORD)v14 != 24 )
          {
            v653 = 4194;
            goto LABEL_1642;
          }
          v342 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x56u);
          if ( !v342 || (v343 = v342 - 16) == 0 )
          {
            v653 = 4209;
            goto LABEL_1642;
          }
          *(_OWORD *)(v343 + 80) = *(_OWORD *)((char *)v13 + 8);
          break;
        case 0x99u:
          if ( (_DWORD)v14 == 8 )
          {
            v344 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x56u);
            if ( v344 && v344 != 16 )
            {
              v347 = CFlipChain::ProcessResetSourceFrameCounters((CFlipChain *)(v344 - 16), v345, v346);
              v10 = v347;
              if ( v347 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v347, 0x1090u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4236;
          }
          else
          {
            v653 = 4221;
          }
          goto LABEL_1642;
        case 0x9Au:
          if ( (_DWORD)v14 == 20 )
          {
            v348 = (CCompositionSurfaceBitmap *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x57u);
            if ( v348 )
            {
              v349 = CCompositionSurfaceBitmap::ProcessUpdate(v348, (const struct CResourceTable *)v5, v13);
              v10 = v349;
              if ( v349 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v349, 0x10ABu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4263;
          }
          else
          {
            v653 = 4248;
          }
          goto LABEL_1642;
        case 0x9Bu:
          if ( (_DWORD)v14 == 16 )
          {
            v350 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x59u);
            if ( v350 && v350 != 16 )
            {
              v351 = CHwndBitmap::ProcessUpdate((CHwndBitmap *)(v350 - 16), (const struct CResourceTable *)v5, v13);
              v10 = v351;
              if ( v351 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v351, 0x10C6u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4290;
          }
          else
          {
            v653 = 4275;
          }
          goto LABEL_1642;
        case 0x9Cu:
          if ( (_DWORD)v14 == 12 )
          {
            v352 = *((_DWORD *)v13 + 2);
            if ( v352 && !CResourceTable::GetResource(v5, v352, 0x1Fu) )
            {
              v653 = 4319;
            }
            else
            {
              v353 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x59u);
              if ( v353 && v353 != 16 )
              {
                v354 = CHwndBitmap::ProcessUpdateVisual(
                         (CHwndBitmap *)(v353 - 16),
                         (const struct CResourceTable *)v5,
                         v13);
                v10 = v354;
                if ( v354 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v354, 0x10F0u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 4332;
            }
          }
          else
          {
            v653 = 4302;
          }
          goto LABEL_1642;
        case 0x9Du:
          if ( (_DWORD)v14 == 20 )
          {
            v355 = (CSnapshot *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Fu);
            if ( v355 )
            {
              v356 = CSnapshot::ProcessUpdate(v355, (const struct CResourceTable *)v5, v13);
              v10 = v356;
              if ( v356 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v356, 0x110Bu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4359;
          }
          else
          {
            v653 = 4344;
          }
          goto LABEL_1642;
        case 0x9Eu:
          if ( (_DWORD)v14 == 20 )
            goto LABEL_1146;
          v653 = 4371;
          goto LABEL_1642;
        case 0x9Fu:
          if ( (_DWORD)v14 == 12 )
          {
            v357 = (CMeshGeometry2D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 2u);
            if ( v357 )
            {
              v359 = CMeshGeometry2D::ProcessSetConstantOpacity(v357, v358, v13);
              v10 = v359;
              if ( v359 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v359, 0x1139u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4405;
          }
          else
          {
            v653 = 4390;
          }
          goto LABEL_1642;
        case 0xA0u:
          if ( (_DWORD)v14 == 12 )
          {
            v360 = (CAtlasedRectsMesh *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 5u);
            if ( v360 )
            {
              v362 = CAtlasedRectsMesh::ProcessSetConstantOpacity(v360, v361, v13);
              v10 = v362;
              if ( v362 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v362, 0x1154u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4432;
          }
          else
          {
            v653 = 4417;
          }
          goto LABEL_1642;
        case 0xA1u:
          if ( (_DWORD)v14 == 24 )
          {
            v363 = (CEffectGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 8u);
            if ( v363 )
            {
              v364 = CEffectGroup::ProcessUpdate(v363, (struct CResourceTable *)v5, v13);
              v10 = v364;
              if ( v364 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v364, 0x116Fu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4459;
          }
          else
          {
            v653 = 4444;
          }
          goto LABEL_1642;
        case 0xA2u:
          if ( (_DWORD)v14 == 68 )
          {
            v365 = *((_DWORD *)v13 + 12);
            if ( v365 && !CResourceTable::GetResource(v5, v365, 0x1Fu) )
            {
              v653 = 4488;
            }
            else
            {
              v366 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x38u);
              if ( v366 && v366 != 16 )
              {
                v367 = CCachedVisualImage::ProcessUpdate(
                         (CCachedVisualImage *)(v366 - 16),
                         (struct CResourceTable *)v5,
                         v13);
                v10 = v367;
                if ( v367 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v367, 0x1199u);
                  goto LABEL_1644;
                }
                break;
              }
              v653 = 4501;
            }
          }
          else
          {
            v653 = 4471;
          }
          goto LABEL_1642;
        case 0xA3u:
          if ( (_DWORD)v14 != 8 )
          {
            v653 = 4513;
            goto LABEL_1642;
          }
          v368 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x38u);
          if ( !v368 || (v369 = v368 - 16) == 0 )
          {
            v653 = 4528;
            goto LABEL_1642;
          }
          *(_BYTE *)(v369 + 280) = 1;
          break;
        case 0xA4u:
          if ( (_DWORD)v14 == 24 )
          {
            v370 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x38u);
            if ( v370 && v370 != 16 )
            {
              v371 = CCachedVisualImage::Snapshot(
                       (CCachedVisualImage *)(v370 - 16),
                       (const struct tagRECT *)((char *)v13 + 8));
              v10 = v371;
              if ( v371 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v371, 0x11CFu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4555;
          }
          else
          {
            v653 = 4540;
          }
          goto LABEL_1642;
        case 0xA5u:
          if ( (_DWORD)v14 == 20 )
          {
            v372 = (CPrimitiveGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Cu);
            if ( v372 )
            {
              v373 = CPrimitiveGroup::ProcessAddPrimitives(v372, (struct CResourceTable *)v5, v13);
              v10 = v373;
              if ( v373 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v373, 0x11EAu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4582;
          }
          else
          {
            v653 = 4567;
          }
          goto LABEL_1642;
        case 0xA6u:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 4594;
          }
          else
          {
            v374 = (CPrimitiveGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Cu);
            if ( v374 )
            {
              v375 = CPrimitiveGroup::ProcessAddSurfaceResources(
                       v374,
                       (struct CResourceTable *)v5,
                       v13,
                       (unsigned int *)v13 + 3);
              v10 = v375;
              if ( v375 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v375, 0x1208u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4612;
          }
          goto LABEL_1642;
        case 0xA7u:
          if ( (_DWORD)v14 == 8 )
          {
            v376 = (CPrimitiveGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Cu);
            if ( v376 )
            {
              v379 = CPrimitiveGroup::ProcessClearSurfaceResources(v376, v377, v378);
              v10 = v379;
              if ( v379 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v379, 0x1223u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4639;
          }
          else
          {
            v653 = 4624;
          }
          goto LABEL_1642;
        case 0xA8u:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 4651;
          }
          else
          {
            v380 = (CPrimitiveGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Cu);
            if ( v380 )
            {
              v381 = CPrimitiveGroup::ProcessAddColorResources(
                       v380,
                       (struct CResourceTable *)v5,
                       v13,
                       (unsigned int *)v13 + 3);
              v10 = v381;
              if ( v381 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v381, 0x1241u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4669;
          }
          goto LABEL_1642;
        case 0xA9u:
          if ( (_DWORD)v14 == 8 )
          {
            v382 = (CPrimitiveGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Cu);
            if ( v382 )
            {
              v385 = CPrimitiveGroup::ProcessClearColorResources(v382, v383, v384);
              v10 = v385;
              if ( v385 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v385, 0x125Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4696;
          }
          else
          {
            v653 = 4681;
          }
          goto LABEL_1642;
        case 0xAAu:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 4708;
          }
          else
          {
            v386 = v14 - 12;
            v387 = (const struct FastRegion::Internal::CRgnData **)CResourceTable::GetResource(
                                                                     v5,
                                                                     *((_DWORD *)v13 + 1),
                                                                     0x5Cu);
            if ( v387 )
            {
              v389 = CPrimitiveGroup::ProcessSetDirtyRect(v387, v388, v13, (_DWORD *)v13 + 3, v386);
              v10 = v389;
              if ( v389 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v389, 0x127Au);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4726;
          }
          goto LABEL_1642;
        case 0xABu:
          if ( (_DWORD)v14 == 24 )
          {
            v390 = (CPrimitiveGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Cu);
            if ( v390 )
            {
              v392 = CPrimitiveGroup::ProcessSetBoundsRect(v390, v391, v13);
              v10 = v392;
              if ( v392 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v392, 0x1295u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4753;
          }
          else
          {
            v653 = 4738;
          }
          goto LABEL_1642;
        case 0xACu:
          if ( (_DWORD)v14 == 16 )
          {
            v393 = (CAnimationTrigger *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Bu);
            if ( v393 )
            {
              v395 = CAnimationTrigger::ProcessTrigger(v393, v394, v13);
              v10 = v395;
              if ( v395 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v395, 0x12B0u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4780;
          }
          else
          {
            v653 = 4765;
          }
          goto LABEL_1642;
        case 0xADu:
          if ( (_DWORD)v14 == 20 )
          {
            v396 = (CYCbCrSurface *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Eu);
            if ( v396 )
            {
              v397 = CYCbCrSurface::ProcessUpdate(v396, (const struct CResourceTable *)v5, v13);
              v10 = v397;
              if ( v397 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v397, 0x12CBu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4807;
          }
          else
          {
            v653 = 4792;
          }
          goto LABEL_1642;
        case 0xAEu:
          if ( (unsigned int)v14 < 0x14 )
          {
            v653 = 4819;
          }
          else
          {
            v398 = v14 - 20;
            v399 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x60u);
            if ( v399 && v399 != 8 )
            {
              v401 = CInteraction::ProcessUpdateConfiguration(
                       (CInteraction *)(v399 - 8),
                       v400,
                       v13,
                       (char *)v13 + 20,
                       v398);
              v10 = v401;
              if ( v401 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v401, 0x12E9u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4837;
          }
          goto LABEL_1642;
        case 0xAFu:
          if ( (_DWORD)v14 == 16 )
          {
            v402 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x60u);
            if ( v402 && v402 != 8 )
            {
              v404 = CInteraction::ProcessSetInputSink((CInteraction *)(v402 - 8), v403, v13);
              v10 = v404;
              if ( v404 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v404, 0x1304u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4864;
          }
          else
          {
            v653 = 4849;
          }
          goto LABEL_1642;
        case 0xB0u:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 4876;
            goto LABEL_1642;
          }
          v405 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x60u);
          if ( !v405 || v405 == 8 )
          {
            v653 = 4891;
            goto LABEL_1642;
          }
          *(_DWORD *)(v405 - 8 + 152) = *((_DWORD *)v13 + 2);
          break;
        case 0xB1u:
          if ( (_DWORD)v14 == 12 )
          {
            v406 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x60u);
            if ( v406 && v406 != 8 )
            {
              v408 = CInteraction::ProcessCapturePointer((CInteraction *)(v406 - 8), v407, v13);
              v10 = v408;
              if ( v408 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v408, 0x133Au);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4918;
          }
          else
          {
            v653 = 4903;
          }
          goto LABEL_1642;
        case 0xB2u:
          if ( (_DWORD)v14 == 24 )
          {
            v409 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x60u);
            if ( v409 && v409 != 8 )
            {
              v411 = CInteraction::ProcessUpdateFlags((CInteraction *)(v409 - 8), v410, v13);
              v10 = v411;
              if ( v411 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v411, 0x1355u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4945;
          }
          else
          {
            v653 = 4930;
          }
          goto LABEL_1642;
        case 0xB3u:
          if ( (_DWORD)v14 == 32 )
          {
            v412 = (CBaseExpression *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x61u);
            if ( v412 )
            {
              v413 = CBaseExpression::ProcessSetTarget(v412, (struct CResourceTable *)v5, v13);
              v10 = v413;
              if ( v413 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v413, 0x1370u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4972;
          }
          else
          {
            v653 = 4957;
          }
          goto LABEL_1642;
        case 0xB4u:
          if ( (_DWORD)v14 == 12 )
          {
            v414 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x61u);
            if ( v414 )
            {
              v415 = (*(__int64 (__fastcall **)(__int64, __int64, struct MILCMD_ANIMATION_SETPAUSED *))(*(_QWORD *)v414 + 104LL))(
                       v414,
                       v5,
                       v13);
              v10 = v415;
              if ( v415 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v415, 0x138Bu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 4999;
          }
          else
          {
            v653 = 4984;
          }
          goto LABEL_1642;
        case 0xB5u:
          if ( (_DWORD)v14 == 12 )
          {
            v416 = (CBaseExpression *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x61u);
            if ( v416 )
            {
              v418 = CBaseExpression::ProcessSetTracingCookie(v416, v417, v13);
              v10 = v418;
              if ( v418 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v418, 0x13A6u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5026;
          }
          else
          {
            v653 = 5011;
          }
          goto LABEL_1642;
        case 0xB6u:
          if ( (_DWORD)v14 == 52 )
          {
            v419 = (CExpression *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x62u);
            if ( v419 )
            {
              v420 = CExpression::ProcessSetNodesInfo(v419, (struct CResourceTable *)v5, v13);
              v10 = v420;
              if ( v420 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v420, 0x13C1u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5053;
          }
          else
          {
            v653 = 5038;
          }
          goto LABEL_1642;
        case 0xB7u:
          if ( (_DWORD)v14 == 44 )
          {
            v421 = (CKeyframeAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x63u);
            if ( v421 )
            {
              v422 = CKeyframeAnimation::ProcessSetKeyframeData(v421, (struct CResourceTable *)v5, v13);
              v10 = v422;
              if ( v422 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v422, 0x13DCu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5080;
          }
          else
          {
            v653 = 5065;
          }
          goto LABEL_1642;
        case 0xB8u:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 5092;
          }
          else
          {
            v423 = (CKeyframeAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x63u);
            if ( v423 )
            {
              v424 = CKeyframeAnimation::ProcessAddExpressionResources(
                       v423,
                       (struct CResourceTable *)v5,
                       v13,
                       (char *)v13 + 12,
                       v652);
              v10 = v424;
              if ( v424 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v424, 0x13FAu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5110;
          }
          goto LABEL_1642;
        case 0xB9u:
          if ( (_DWORD)v14 == 24 )
          {
            v425 = (CKeyframeAnimation *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x63u);
            if ( v425 )
            {
              v427 = CKeyframeAnimation::ProcessUpdatePlaybackState(v425, v426, v13);
              v10 = v427;
              if ( v427 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v427, 0x1415u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5137;
          }
          else
          {
            v653 = 5122;
          }
          goto LABEL_1642;
        case 0xBAu:
          if ( (_DWORD)v14 == 56 )
          {
            v428 = (CManipulationTransform *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x40u);
            if ( v428 )
            {
              v430 = CManipulationTransform::ProcessSetComponents(v428, v429, v13);
              v10 = v430;
              if ( v430 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v430, 0x1430u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5164;
          }
          else
          {
            v653 = 5149;
          }
          goto LABEL_1642;
        case 0xBBu:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 5176;
            goto LABEL_1642;
          }
          v431 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x40u);
          if ( !v431 )
          {
            v653 = 5191;
            goto LABEL_1642;
          }
          *(_DWORD *)(v431 + 236) = *((_DWORD *)v13 + 2);
          break;
        case 0xBCu:
          if ( (_DWORD)v14 == 12 )
          {
            v432 = (CNotificationResource *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x64u);
            if ( v432 )
            {
              v433 = CNotificationResource::ProcessSetCallbackId(v432, (struct CResourceTable *)v5, v13);
              v10 = v433;
              if ( v433 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v433, 0x1466u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5218;
          }
          else
          {
            v653 = 5203;
          }
          goto LABEL_1642;
        case 0xBDu:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 5230;
            goto LABEL_1642;
          }
          v434 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x65u);
          if ( !v434 )
          {
            v653 = 5245;
            goto LABEL_1642;
          }
          *(_DWORD *)(v434 + 48) = *((_DWORD *)v13 + 2);
          break;
        case 0xBEu:
          if ( (unsigned int)v14 < 0x10 )
          {
            v653 = 5257;
          }
          else
          {
            v435 = v14 - 16;
            v436 = (CFilterEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 9u);
            if ( v436 )
            {
              v437 = CFilterEffect::ProcessUpdateInputs(v436, (struct CResourceTable *)v5, v13, (char *)v13 + 16, v435);
              v10 = v437;
              if ( v437 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v437, 0x149Fu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5275;
          }
          goto LABEL_1642;
        case 0xBFu:
          if ( (unsigned int)v14 < 0x10 )
          {
            v653 = 5287;
          }
          else
          {
            v438 = v14 - 16;
            v439 = (CTableTransferEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x14u);
            if ( v439 )
            {
              v441 = CTableTransferEffect::ProcessUpdateTable(v439, v440, v13, (char *)v13 + 16, v438);
              v10 = v441;
              if ( v441 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v441, 0x14BDu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5305;
          }
          goto LABEL_1642;
        case 0xC0u:
          if ( (_DWORD)v14 == 76 )
          {
            v442 = (CInk *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x69u);
            if ( v442 )
            {
              v444 = CInk::ProcessBasicStateUpdate(v442, v443, v13);
              v10 = v444;
              if ( v444 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v444, 0x14D8u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5332;
          }
          else
          {
            v653 = 5317;
          }
          goto LABEL_1642;
        case 0xC1u:
          if ( (_DWORD)v14 == 20 )
          {
            v445 = (CInk *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x69u);
            if ( v445 )
            {
              started = CInk::ProcessStartPointUpdate(v445, v446, v13);
              v10 = started;
              if ( started < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x14F3u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5359;
          }
          else
          {
            v653 = 5344;
          }
          goto LABEL_1642;
        case 0xC2u:
          if ( (_DWORD)v14 == 12 )
          {
            v448 = (CInk *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x69u);
            if ( v448 )
            {
              v450 = CInk::ProcessSegmentCountUpdate(v448, v449, v13);
              v10 = v450;
              if ( v450 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v450, 0x150Eu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5386;
          }
          else
          {
            v653 = 5371;
          }
          goto LABEL_1642;
        case 0xC3u:
          if ( (_DWORD)v14 == 48 )
          {
            v451 = (CInk *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x69u);
            if ( v451 )
            {
              v453 = CInk::ProcessSegmentUpdate(v451, v452, v13);
              v10 = v453;
              if ( v453 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v453, 0x1529u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5413;
          }
          else
          {
            v653 = 5398;
          }
          goto LABEL_1642;
        case 0xC4u:
          if ( (_DWORD)v14 == 20 )
          {
            v454 = (CCompiledEffectTemplate *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x6Au);
            if ( v454 )
            {
              v455 = CCompiledEffectTemplate::ProcessUpdate(v454, (struct CResourceTable *)v5, v13);
              v10 = v455;
              if ( v455 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v455, 0x1544u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5440;
          }
          else
          {
            v653 = 5425;
          }
          goto LABEL_1642;
        case 0xC5u:
          if ( (_DWORD)v14 == 20 )
          {
            v456 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v456 )
            {
              v458 = CPropertyBagBase::ProcessSetScalarProperty(v456, v457, v13);
              v10 = v458;
              if ( v458 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v458, 0x155Fu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5467;
          }
          else
          {
            v653 = 5452;
          }
          goto LABEL_1642;
        case 0xC6u:
          if ( (_DWORD)v14 == 24 )
          {
            v459 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v459 )
            {
              v461 = CPropertyBagBase::ProcessSetVector2Property(v459, v460, v13);
              v10 = v461;
              if ( v461 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v461, 0x157Au);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5494;
          }
          else
          {
            v653 = 5479;
          }
          goto LABEL_1642;
        case 0xC7u:
          if ( (_DWORD)v14 == 28 )
          {
            v462 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v462 )
            {
              v464 = CPropertyBagBase::ProcessSetVector3Property(v462, v463, v13);
              v10 = v464;
              if ( v464 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v464, 0x1595u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5521;
          }
          else
          {
            v653 = 5506;
          }
          goto LABEL_1642;
        case 0xC8u:
          if ( (_DWORD)v14 == 32 )
          {
            v465 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v465 )
            {
              v467 = CPropertyBagBase::ProcessSetVector4Property(v465, v466, v13);
              v10 = v467;
              if ( v467 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v467, 0x15B0u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5548;
          }
          else
          {
            v653 = 5533;
          }
          goto LABEL_1642;
        case 0xC9u:
          if ( (_DWORD)v14 == 32 )
          {
            v468 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v468 )
            {
              v470 = CPropertyBagBase::ProcessSetColorProperty(v468, v469, v13);
              v10 = v470;
              if ( v470 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v470, 0x15CBu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5575;
          }
          else
          {
            v653 = 5560;
          }
          goto LABEL_1642;
        case 0xCAu:
          if ( (_DWORD)v14 == 32 )
          {
            v471 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v471 )
            {
              v473 = CPropertyBagBase::ProcessSetQuaternionProperty(v471, v472, v13);
              v10 = v473;
              if ( v473 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v473, 0x15E6u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5602;
          }
          else
          {
            v653 = 5587;
          }
          goto LABEL_1642;
        case 0xCBu:
          if ( (_DWORD)v14 == 40 )
          {
            v474 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v474 )
            {
              v476 = CPropertyBagBase::ProcessSetMatrix3x2Property(v474, v475, v13);
              v10 = v476;
              if ( v476 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v476, 0x1601u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5629;
          }
          else
          {
            v653 = 5614;
          }
          goto LABEL_1642;
        case 0xCCu:
          if ( (_DWORD)v14 == 80 )
          {
            v477 = (CPropertyBagBase *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
            if ( v477 )
            {
              v479 = CPropertyBagBase::ProcessSetMatrix4x4Property(v477, v478, v13);
              v10 = v479;
              if ( v479 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v479, 0x161Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5656;
          }
          else
          {
            v653 = 5641;
          }
          goto LABEL_1642;
        case 0xCDu:
          if ( (_DWORD)v14 != 12 )
          {
            v653 = 5668;
            goto LABEL_1642;
          }
          v480 = CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x66u);
          if ( !v480 )
          {
            v653 = 5683;
            goto LABEL_1642;
          }
          *(_DWORD *)(v480 + 40) = *((_DWORD *)v13 + 2);
          break;
        case 0xCEu:
          if ( (_DWORD)v14 == 136 )
          {
            v481 = (CComponentTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Du);
            if ( v481 )
            {
              v483 = CComponentTransform3D::ProcessSetComponents(v481, v482, v13);
              v10 = v483;
              if ( v483 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v483, 0x1652u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5710;
          }
          else
          {
            v653 = 5695;
          }
          goto LABEL_1642;
        case 0xDCu:
          if ( (unsigned int)v14 < 0x18 )
          {
            v653 = 5722;
          }
          else
          {
            v484 = v14 - 24;
            v485 = (CMeshGeometry2D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 2u);
            if ( v485 )
            {
              v487 = CMeshGeometry2D::ProcessUpdate(v485, v486, v13, (char *)v13 + 24, v484);
              v10 = v487;
              if ( v487 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v487, 0x1672u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5742;
          }
          goto LABEL_1642;
        case 0xDDu:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 5754;
          }
          else
          {
            v488 = v14 - 12;
            v489 = (CGeometry2DGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 3u);
            if ( v489 )
            {
              v490 = CGeometry2DGroup::ProcessUpdate(v489, (struct CResourceTable *)v5, v13, (char *)v13 + 12, v488);
              v10 = v490;
              if ( v490 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v490, 0x1692u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5774;
          }
          goto LABEL_1642;
        case 0xDEu:
          if ( (unsigned int)v14 < 0x18 )
          {
            v653 = 5786;
          }
          else
          {
            v491 = v14 - 24;
            v492 = (void **)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 5u);
            if ( v492 )
            {
              v494 = CAtlasedRectsMesh::ProcessUpdate(v492, v493, (__m128i *)v13, (char *)v13 + 24, v491);
              v10 = v494;
              if ( v494 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v494, 0x16B2u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5806;
          }
          goto LABEL_1642;
        case 0xDFu:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 5818;
          }
          else
          {
            v495 = v14 - 12;
            v496 = (CAtlasedRectsGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 6u);
            if ( v496 )
            {
              v497 = CAtlasedRectsGroup::ProcessUpdate(v496, (struct CResourceTable *)v5, v13, (char *)v13 + 12, v495);
              v10 = v497;
              if ( v497 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v497, 0x16D2u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5838;
          }
          goto LABEL_1642;
        case 0xE0u:
          if ( (_DWORD)v14 == 20 )
          {
            v498 = (CGaussianBlurEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0xAu);
            if ( v498 )
            {
              v500 = CGaussianBlurEffect::ProcessUpdate(v498, v499, (__m128 *)v13);
              v10 = v500;
              if ( v500 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v500, 0x16EFu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5867;
          }
          else
          {
            v653 = 5850;
          }
          goto LABEL_1642;
        case 0xE1u:
          if ( (_DWORD)v14 == 24 )
          {
            v501 = (CBrightnessEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0xBu);
            if ( v501 )
            {
              v503 = CBrightnessEffect::ProcessUpdate(v501, v502, v13);
              v10 = v503;
              if ( v503 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v503, 0x170Cu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5896;
          }
          else
          {
            v653 = 5879;
          }
          goto LABEL_1642;
        case 0xE2u:
          if ( (_DWORD)v14 == 96 )
          {
            v504 = (CColorMatrixEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0xCu);
            if ( v504 )
            {
              v506 = CColorMatrixEffect::ProcessUpdate(v504, v505, v13);
              v10 = v506;
              if ( v506 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v506, 0x1729u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5925;
          }
          else
          {
            v653 = 5908;
          }
          goto LABEL_1642;
        case 0xE3u:
          if ( (_DWORD)v14 == 12 )
          {
            v507 = (CSaturationEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0xDu);
            if ( v507 )
            {
              v509 = CSaturationEffect::ProcessUpdate(v507, v508, v13);
              v10 = v509;
              if ( v509 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v509, 0x1746u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5954;
          }
          else
          {
            v653 = 5937;
          }
          goto LABEL_1642;
        case 0xE4u:
          if ( (_DWORD)v14 == 32 )
          {
            v510 = (CShadowEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0xEu);
            if ( v510 )
            {
              v512 = CShadowEffect::ProcessUpdate(v510, v511, v13);
              v10 = v512;
              if ( v512 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v512, 0x1763u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 5983;
          }
          else
          {
            v653 = 5966;
          }
          goto LABEL_1642;
        case 0xE5u:
          if ( (_DWORD)v14 == 12 )
          {
            v513 = (CSaturationEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0xFu);
            if ( v513 )
            {
              v515 = CSaturationEffect::ProcessUpdate(v513, v514, v13);
              v10 = v515;
              if ( v515 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v515, 0x1780u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6012;
          }
          else
          {
            v653 = 5995;
          }
          goto LABEL_1642;
        case 0xE6u:
          if ( (_DWORD)v14 == 48 )
          {
            v516 = (CTurbulenceEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x10u);
            if ( v516 )
            {
              v518 = CTurbulenceEffect::ProcessUpdate(v516, v517, v13);
              v10 = v518;
              if ( v518 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v518, 0x179Du);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6041;
          }
          else
          {
            v653 = 6024;
          }
          goto LABEL_1642;
        case 0xE7u:
          if ( (_DWORD)v14 == 24 )
          {
            v519 = (CFloodEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x11u);
            if ( v519 )
            {
              v521 = CFloodEffect::ProcessUpdate(v519, v520, v13);
              v10 = v521;
              if ( v521 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v521, 0x17BAu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6070;
          }
          else
          {
            v653 = 6053;
          }
          goto LABEL_1642;
        case 0xE8u:
          if ( (_DWORD)v14 == 28 )
          {
            v522 = (CArithmeticCompositeEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x12u);
            if ( v522 )
            {
              v524 = CArithmeticCompositeEffect::ProcessUpdate(v522, v523, v13);
              v10 = v524;
              if ( v524 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v524, 0x17D7u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6099;
          }
          else
          {
            v653 = 6082;
          }
          goto LABEL_1642;
        case 0xE9u:
          if ( (_DWORD)v14 == 60 )
          {
            v525 = (CLinearTransferEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x13u);
            if ( v525 )
            {
              v527 = CLinearTransferEffect::ProcessUpdate(v525, v526, v13);
              v10 = v527;
              if ( v527 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v527, 0x17F4u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6128;
          }
          else
          {
            v653 = 6111;
          }
          goto LABEL_1642;
        case 0xEAu:
          if ( (_DWORD)v14 == 28 )
          {
            v528 = (CTableTransferEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x14u);
            if ( v528 )
            {
              v530 = CTableTransferEffect::ProcessUpdate(v528, v529, v13);
              v10 = v530;
              if ( v530 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v530, 0x1811u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6157;
          }
          else
          {
            v653 = 6140;
          }
          goto LABEL_1642;
        case 0xEBu:
          if ( (_DWORD)v14 == 12 )
          {
            v531 = (CBlendEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x15u);
            if ( v531 )
            {
              v533 = CBlendEffect::ProcessUpdate(v531, v532, v13);
              v10 = v533;
              if ( v533 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v533, 0x182Eu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6186;
          }
          else
          {
            v653 = 6169;
          }
          goto LABEL_1642;
        case 0xECu:
          if ( (_DWORD)v14 == 12 )
          {
            v534 = (CBlendEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x16u);
            if ( v534 )
            {
              v536 = CBlendEffect::ProcessUpdate(v534, v535, v13);
              v10 = v536;
              if ( v536 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v536, 0x184Bu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6215;
          }
          else
          {
            v653 = 6198;
          }
          goto LABEL_1642;
        case 0xEDu:
          if ( (_DWORD)v14 == 44 )
          {
            v537 = (CAffineTransform2DEffect *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x17u);
            if ( v537 )
            {
              v539 = CAffineTransform2DEffect::ProcessUpdate(v537, v538, v13);
              v10 = v539;
              if ( v539 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v539, 0x1868u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6244;
          }
          else
          {
            v653 = 6227;
          }
          goto LABEL_1642;
        case 0xEEu:
          if ( (_DWORD)v14 == 32 )
          {
            v540 = (CTranslateTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x19u);
            if ( v540 )
            {
              v542 = CTranslateTransform3D::ProcessUpdate(v540, v541, v13);
              v10 = v542;
              if ( v542 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v542, 0x1885u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6273;
          }
          else
          {
            v653 = 6256;
          }
          goto LABEL_1642;
        case 0xEFu:
          if ( (_DWORD)v14 == 56 )
          {
            v543 = (CScaleTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Au);
            if ( v543 )
            {
              v545 = CScaleTransform3D::ProcessUpdate(v543, v544, v13);
              v10 = v545;
              if ( v545 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v545, 0x18A2u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6302;
          }
          else
          {
            v653 = 6285;
          }
          goto LABEL_1642;
        case 0xF0u:
          if ( (_DWORD)v14 == 64 )
          {
            v546 = (CRotateTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Bu);
            if ( v546 )
            {
              v548 = CRotateTransform3D::ProcessUpdate(v546, v547, v13);
              v10 = v548;
              if ( v548 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v548, 0x18BFu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6331;
          }
          else
          {
            v653 = 6314;
          }
          goto LABEL_1642;
        case 0xF1u:
          if ( (_DWORD)v14 == 72 )
          {
            v549 = (CMatrixTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Cu);
            if ( v549 )
            {
              v551 = CMatrixTransform3D::ProcessUpdate(v549, v550, v13);
              v10 = v551;
              if ( v551 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v551, 0x18DCu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6360;
          }
          else
          {
            v653 = 6343;
          }
          goto LABEL_1642;
        case 0xF2u:
          if ( (_DWORD)v14 == 200 )
          {
            v552 = (CComponentTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Du);
            if ( v552 )
            {
              v554 = CComponentTransform3D::ProcessUpdate(v552, v553, v13);
              v10 = v554;
              if ( v554 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v554, 0x18F9u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6389;
          }
          else
          {
            v653 = 6372;
          }
          goto LABEL_1642;
        case 0xF3u:
          if ( (unsigned int)v14 < 0x10 )
          {
            v653 = 6401;
          }
          else
          {
            v555 = v14 - 16;
            v556 = (CTransform3DGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x1Eu);
            if ( v556 )
            {
              v557 = CTransform3DGroup::ProcessUpdate(
                       v556,
                       (struct CResourceTable *)v5,
                       (__m128i *)v13,
                       (char *)v13 + 16,
                       v555);
              v10 = v557;
              if ( v557 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v557, 0x1919u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6421;
          }
          goto LABEL_1642;
        case 0xF4u:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 6433;
          }
          else
          {
            v558 = v14 - 12;
            v559 = (CDcompRenderTargetGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x28u);
            if ( v559 )
            {
              v560 = CDcompRenderTargetGroup::ProcessUpdate(
                       v559,
                       (struct CResourceTable *)v5,
                       v13,
                       (char *)v13 + 12,
                       v558);
              v10 = v560;
              if ( v560 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v560, 0x1939u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6453;
          }
          goto LABEL_1642;
        case 0xF5u:
          if ( (unsigned int)v14 < 0x10 )
          {
            v653 = 6465;
          }
          else
          {
            v561 = v14 - 16;
            v562 = (CTransformGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x3Au);
            if ( v562 )
            {
              v563 = CTransformGroup::ProcessUpdate(
                       v562,
                       (struct CResourceTable *)v5,
                       (__m128i *)v13,
                       (char *)v13 + 16,
                       v561);
              v10 = v563;
              if ( v563 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v563, 0x1959u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6485;
          }
          goto LABEL_1642;
        case 0xF6u:
          if ( (_DWORD)v14 == 24 )
          {
            v564 = (CTranslateTransform *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x3Bu);
            if ( v564 )
            {
              v566 = CTranslateTransform::ProcessUpdate(v564, v565, v13);
              v10 = v566;
              if ( v566 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v566, 0x1976u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6514;
          }
          else
          {
            v653 = 6497;
          }
          goto LABEL_1642;
        case 0xF7u:
          if ( (_DWORD)v14 == 40 )
          {
            v567 = (CSkewTransform *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x3Cu);
            if ( v567 )
            {
              v569 = CSkewTransform::ProcessUpdate(v567, v568, v13);
              v10 = v569;
              if ( v569 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v569, 0x1993u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6543;
          }
          else
          {
            v653 = 6526;
          }
          goto LABEL_1642;
        case 0xF8u:
          if ( (_DWORD)v14 == 32 )
          {
            v570 = (CTranslateTransform3D *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x3Du);
            if ( v570 )
            {
              v572 = CTranslateTransform3D::ProcessUpdate(v570, v571, v13);
              v10 = v572;
              if ( v572 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v572, 0x19B0u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6572;
          }
          else
          {
            v653 = 6555;
          }
          goto LABEL_1642;
        case 0xF9u:
          if ( (_DWORD)v14 == 40 )
          {
            v573 = (CSkewTransform *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x3Eu);
            if ( v573 )
            {
              v575 = CSkewTransform::ProcessUpdate(v573, v574, v13);
              v10 = v575;
              if ( v575 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v575, 0x19CDu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6601;
          }
          else
          {
            v653 = 6584;
          }
          goto LABEL_1642;
        case 0xFAu:
          if ( (_DWORD)v14 == 56 )
          {
            v576 = (CMatrixTransform *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x3Fu);
            if ( v576 )
            {
              v578 = CMatrixTransform::ProcessUpdate(v576, v577, v13);
              v10 = v578;
              if ( v578 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v578, 0x19EAu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6630;
          }
          else
          {
            v653 = 6613;
          }
          goto LABEL_1642;
        case 0xFBu:
          if ( (_DWORD)v14 == 8 )
          {
            v579 = (CManipulationTransform *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x40u);
            if ( v579 )
            {
              v582 = CManipulationTransform::ProcessUpdate(v579, v580, v581);
              v10 = v582;
              if ( v582 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v582, 0x1A07u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6659;
          }
          else
          {
            v653 = 6642;
          }
          goto LABEL_1642;
        case 0xFCu:
          if ( (unsigned int)v14 < 0x10 )
          {
            v653 = 6671;
          }
          else
          {
            v583 = v14 - 16;
            v584 = (CGeometryGroup *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x42u);
            if ( v584 )
            {
              v585 = CGeometryGroup::ProcessUpdate(v584, (struct CResourceTable *)v5, v13, (char *)v13 + 16, v583);
              v10 = v585;
              if ( v585 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v585, 0x1A27u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6691;
          }
          goto LABEL_1642;
        case 0xFDu:
          if ( (_DWORD)v14 == 20 )
          {
            v586 = (struct CResource **)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x44u);
            if ( v586 )
            {
              v587 = CCombinedGeometry::ProcessUpdate(v586, (struct CResourceTable *)v5, (__m128i *)v13);
              v10 = v587;
              if ( v587 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v587, 0x1A44u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6720;
          }
          else
          {
            v653 = 6703;
          }
          goto LABEL_1642;
        case 0xFEu:
          if ( (unsigned int)v14 < 0xC )
          {
            v653 = 6732;
          }
          else
          {
            v588 = v14 - 12;
            v589 = (void **)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x45u);
            if ( v589 )
            {
              v591 = CRgnGeometry::ProcessUpdate(v589, v590, v13, (char *)v13 + 12, v588);
              v10 = v591;
              if ( v591 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v591, 0x1A64u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6752;
          }
          goto LABEL_1642;
        case 0xFFu:
          if ( (_DWORD)v14 == 44 )
          {
            v592 = (CSolidColorLegacyMilBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x47u);
            if ( v592 )
            {
              v593 = CSolidColorLegacyMilBrush::ProcessUpdate(v592, (struct CResourceTable *)v5, v13);
              v10 = v593;
              if ( v593 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v593, 0x1A81u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6781;
          }
          else
          {
            v653 = 6764;
          }
          goto LABEL_1642;
        case 0x100u:
          if ( (unsigned int)v14 < 0x4C )
          {
            v653 = 6793;
          }
          else
          {
            v594 = v14 - 76;
            v595 = (CLinearGradientLegacyMilBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x49u);
            if ( v595 )
            {
              v596 = CLinearGradientLegacyMilBrush::ProcessUpdate(
                       v595,
                       (struct CResourceTable *)v5,
                       (__m128i *)v13,
                       (char *)v13 + 76,
                       v594);
              v10 = v596;
              if ( v596 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v596, 0x1AA1u);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6813;
          }
          goto LABEL_1642;
        case 0x101u:
          if ( (_DWORD)v14 == 116 )
          {
            v597 = (CImageLegacyMilBrush *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x4Bu);
            if ( v597 )
            {
              v598 = CImageLegacyMilBrush::ProcessUpdate(v597, (struct CResourceTable *)v5, (__m128i *)v13);
              v10 = v598;
              if ( v598 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v598, 0x1ABEu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6842;
          }
          else
          {
            v653 = 6825;
          }
          goto LABEL_1642;
        case 0x102u:
          if ( (_DWORD)v14 == 20 )
          {
            v599 = (CSharedSection *)CResourceTable::GetResource(v5, *((_DWORD *)v13 + 1), 0x5Au);
            if ( v599 )
            {
              v601 = CSharedSection::ProcessUpdate(v599, v600, v13);
              v10 = v601;
              if ( v601 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v601, 0x1ADBu);
                goto LABEL_1644;
              }
              break;
            }
            v653 = 6871;
          }
          else
          {
            v653 = 6854;
          }
          goto LABEL_1642;
        default:
          v653 = 6881;
          goto LABEL_1642;
      }
    }
LABEL_1145:
    v14 = v663;
LABEL_1146:
    v10 = -2147467259;
    v648 = (unsigned __int64)v658 + v660 - (_QWORD)v11;
    if ( !v648 )
    {
      v13 = 0LL;
      v10 = 1;
      v12 = v662;
      v14 = 0LL;
      goto LABEL_6;
    }
    if ( v648 < 8 || (v649 = *(unsigned int *)v11, (unsigned int)v649 < 8) || (v649 & 3) != 0 || v649 > v648 )
    {
      v12 = v662;
    }
    else
    {
      v12 = *((_DWORD *)v11 + 1);
      v13 = (struct MILCMD_ANIMATION_SETPAUSED *)((char *)v11 + 4);
      v11 = (struct MILCMD_ANIMATION_SETPAUSED *)((char *)v11 + v649);
      v662 = v12;
      v14 = (unsigned int)(v649 - 4);
      v657 = v11;
      v10 = 0;
      v663 = v649 - 4;
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x29Du);
      goto LABEL_1644;
    }
  }
  if ( (_DWORD)v14 != 12 )
  {
    v653 = 404;
    goto LABEL_1642;
  }
  v631 = *((_DWORD *)v13 + 2);
  v632 = 0LL;
  v633 = *((_DWORD *)v13 + 1);
  v634 = 0LL;
  v635 = v656;
  v636 = 0LL;
  v637 = 0;
  v655 = 0LL;
  if ( !v631 || !v633 )
  {
    v654 = 400;
    goto LABEL_1120;
  }
  if ( v633 >= *((_DWORD *)v656 + 7) )
  {
    v638 = HANDLE_TABLE::ResizeToFit((CResourceTable *)((char *)v656 + 16), v633);
    v637 = v638;
    if ( v638 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v638, 0x19Du);
      goto LABEL_1095;
    }
  }
  v639 = *((_QWORD *)v635 + 5);
  v640 = v633 * *((_DWORD *)v635 + 6);
  if ( *(_DWORD *)(v640 + v639) )
  {
    v654 = 428;
LABEL_1120:
    v637 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v654);
    v10 = -2147024809;
LABEL_1121:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v637, 0x2Du);
    v641 = v635;
    goto LABEL_1122;
  }
  *(_DWORD *)(v640 + v639) = v631;
LABEL_1095:
  v641 = v635;
  if ( v637 >= 0 )
  {
    v636 = *((_QWORD *)v635 + 5) + v633 * *((_DWORD *)v635 + 6);
    *(_QWORD *)(v636 + 8) = 0LL;
  }
  v10 = v637;
  if ( v637 < 0 )
    goto LABEL_1121;
  v642 = CResourceFactory::Create(this, v635, *((_DWORD *)v13 + 2), &v655);
  v10 = v642;
  if ( v642 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v642, 0x32u);
    v632 = v655;
    goto LABEL_1122;
  }
  v632 = v655;
  if ( *((_DWORD *)v13 + 2) == 83 )
    *((_DWORD *)v655 + 21) = *((_DWORD *)v664 + 4);
  v645 = (*(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v632 + 40LL))(v632);
  v10 = v645;
  if ( v645 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v645, 0x42u);
    goto LABEL_1122;
  }
  v643 = *((_DWORD *)v13 + 1);
  v10 = -2147024890;
  if ( v643 )
  {
    if ( v643 < *((_DWORD *)v635 + 7) )
    {
      v644 = v643 * *((_DWORD *)v635 + 6);
      if ( *(_DWORD *)(v644 + *((_QWORD *)v635 + 5)) )
      {
        v644 = *((_QWORD *)v635 + 5) + v643 * *((_DWORD *)v635 + 6);
        if ( v644 )
        {
          *(_QWORD *)(v644 + 8) = v632;
          v10 = 0;
          v646 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v632 + 8LL);
          if ( v646 == CBitmapOfDeviceBitmaps::AddRef )
          {
            CBitmapOfDeviceBitmaps::AddRef(v632);
LABEL_1110:
            v634 = v632;
            v632 = 0LL;
            v636 = 0LL;
            goto LABEL_1122;
          }
          if ( v646 == CVisual::AddRef )
          {
            CVisual::AddRef(v632);
            v634 = v632;
            v632 = 0LL;
            v636 = 0LL;
            goto LABEL_1122;
          }
          if ( v646 == CBitmapOfDeviceBitmaps::AddRef )
          {
            CBitmapOfDeviceBitmaps::AddRef(v632);
            v634 = v632;
            v632 = 0LL;
            v636 = 0LL;
            goto LABEL_1122;
          }
          v646(v632);
        }
      }
    }
  }
  if ( v10 >= 0 )
    goto LABEL_1110;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x43u);
LABEL_1122:
  if ( v10 < 0 )
  {
    if ( v636 )
      CResourceTable::DeleteHandle(v641, *((_DWORD *)v13 + 1));
    if ( v632 )
      (*(void (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v632 + 16LL))(v632);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA91u);
    goto LABEL_1128;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) == 0 )
  {
LABEL_1128:
    v4 = (unsigned int *)v664;
    goto LABEL_1129;
  }
  v4 = (unsigned int *)v664;
  Template_qxqx(v644, v643, *((_DWORD *)v664 + 4), *((_DWORD *)v13 + 1), *((_DWORD *)v13 + 2), (char)v634);
LABEL_1129:
  if ( v634 )
  {
    v647 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v634 + 16LL);
    if ( v647 == CResource::Release )
    {
      CResource::Release(v634);
    }
    else if ( v647 == CVisual::Release )
    {
      CVisual::Release(v634);
    }
    else if ( v647 == CAtlasedRects::Release )
    {
      CAtlasedRects::Release(v634);
    }
    else if ( v647 == CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(v634);
    }
    else if ( v647 == CCompositionSurfaceBitmap::Release )
    {
      CCompositionSurfaceBitmap::Release(v634);
    }
    else
    {
      v647(v634);
    }
  }
  if ( v10 >= 0 )
  {
    v7 = this;
    v5 = (__int64)v635;
    v11 = v657;
    goto LABEL_1145;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19Fu);
LABEL_1644:
  if ( !IsOOM(v10) )
    MilUnexpectedErrorWithAsimovEvent(v650, L"batch processing error");
  return (unsigned int)v10;
}
