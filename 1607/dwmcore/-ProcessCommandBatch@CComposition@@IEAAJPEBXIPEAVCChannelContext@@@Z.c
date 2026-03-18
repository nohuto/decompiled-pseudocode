/*
 * XREFs of ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0
 * Callers:
 *     ?ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800434E4 (-ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800435F8 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x18000A750 (-ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x18000C12C (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000C3C8 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18000CE44 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x18000CFA4 (-Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x18000CFFC (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x18000D6D8 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z.c)
 *     ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z @ 0x18000D740 (-TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z.c)
 *     ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x18000DA80 (-ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18000F0B8 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x18000F1D4 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x1800146E4 (-ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z.c)
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x180017904 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENT.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x1800196A4 (-ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_S.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019C70 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x18001EE1C (-ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMAT.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001EE94 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x18001EF98 (-ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z.c)
 *     ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x18001F074 (-ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x180020140 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETM.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180020418 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ?ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@@Z @ 0x180020814 (-ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@@Z @ 0x180020844 (-ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x180020874 (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2.c)
 *     ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z @ 0x1800208A4 (-ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 *     ?ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@@Z @ 0x1800208D0 (-ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x180020900 (-ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180021130 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x180021160 (-ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFY.c)
 *     ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x1800212E4 (-ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSME.c)
 *     ?ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z @ 0x1800214AC (-ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z.c)
 *     ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x1800216E0 (-ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180021C50 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z @ 0x180021E9C (-ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180022504 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 *     ?ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z @ 0x180022A28 (-ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z @ 0x180022BB8 (-ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18002314C (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@@Z @ 0x180023398 (-ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@.c)
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180023C90 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z @ 0x180023CB8 (-ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@@Z @ 0x180023CE8 (-ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x180023D20 (-ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z @ 0x180023D64 (-ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 *     ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x180023D90 (-ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRAN.c)
 *     ?ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@@Z @ 0x180023DC8 (-ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x180023E00 (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180023F30 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180024218 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRES.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180024300 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x180024448 (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180025B70 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180025BAC (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180025D4C (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x180025DD8 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x180025E14 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18002601C (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180026090 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSO.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18002618C (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARG.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x1800263DC (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x180026404 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDW.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026450 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180026480 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800268A8 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x18002BD00 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18002BD50 (-ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x18002BDD0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002FC70 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002FC98 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180031B70 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMI.c)
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180032A6C (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x180033F7C (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180037BAC (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180037E18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180037FB4 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800396D4 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x180039768 (-ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z.c)
 *     ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z @ 0x1800397D8 (-ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z.c)
 *     ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x18003981C (-ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@P.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18003988C (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800399D0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18003AD94 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SETCALLBACKID@@@Z @ 0x18003BADC (-Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CH.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18003BB4C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18003BBD0 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_ROUNDTRIPREQUEST@@@Z @ 0x18003BC54 (-Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_SYNCFLUSH@@@Z @ 0x18003BCFC (-Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRAN.c)
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18003BD64 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 *     ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x18003BDC8 (-Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x18003BE3C (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18003BEB0 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18003BF30 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x18003BFFC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18003C058 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x180043EFC (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x180043F3C (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CF6C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004D048 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18004D18C (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROU.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18004D1B4 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x18004D38C (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOU.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004D4C0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18004E39C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004E820 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x18004EFC0 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18004F010 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x18004F240 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x18004F290 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x18004F2E0 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x18004F434 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18004F4E0 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x18004F5C0 (-ProcessRemoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x18004F610 (-ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18004F6E0 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x18004F76C (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x18004F798 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004FDA0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180050434 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800510C8 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180051FB0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180052288 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x180055F58 (-ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x180077F78 (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180077FEC (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180086880 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x180087A30 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x180088F14 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x180088F8C (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008A000 (-IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18008B938 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x18008BAF4 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x18008BBF0 (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENC.c)
 *     ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x18008CA58 (-ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_.c)
 *     ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x18008CAD0 (-ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x18008CB74 (-ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?IsOfType@CPropertyBag@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008DA30 (-IsOfType@CPropertyBag@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x18008DDD0 (-Release@CResource@@UEAAKXZ.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x18008DE90 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180093490 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180093730 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800957F8 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 *     ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z @ 0x1800958E8 (-ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 *     ?ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@@Z @ 0x180095914 (-ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SE.c)
 *     ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z @ 0x180095940 (-ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_.c)
 *     ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z @ 0x18009596C (-ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x18009BC80 (-Release@CAtlasedRects@@UEAAKXZ.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18009CE1C (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x18009D734 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A4A54 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A4B4C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800A4BBC (-ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@.c)
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800A4C78 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800AA714 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z @ 0x1800B00B0 (-ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z.c)
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B01F0 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B02F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800B66EC (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800B6F68 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800B702C (-ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGE.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800BA8EC (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180106DF0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180106F3C (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETTRANSFORM@@@Z @ 0x180107B00 (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDE.c)
 *     ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x180107BAC (-ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAP.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x180107C58 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETFILTERLIST@@@Z @ 0x180107D80 (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPREND.c)
 *     ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETSLICER@@@Z @ 0x180107E14 (-ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTA.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x18010820C (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CREATE@@@Z @ 0x1801082DC (-ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CRE.c)
 *     ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x180108374 (-ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z.c)
 *     ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z @ 0x1801083D8 (-ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z.c)
 *     ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z @ 0x1801084B4 (-ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z.c)
 *     ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z @ 0x180108538 (-ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z.c)
 *     ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z @ 0x180108580 (-ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z.c)
 *     ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x18010863C (-ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z.c)
 *     ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x180108690 (-ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801087B4 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x18010885C (-ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z.c)
 *     ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z @ 0x1801088EC (-ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z.c)
 *     ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x180108930 (-ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSI.c)
 *     ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x180108998 (-ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEF.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180108A44 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM@@@Z @ 0x180108CD0 (-ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM.c)
 *     ?ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z @ 0x180108CEC (-ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGION@@PEBXI@Z @ 0x180108E98 (-ProcessAddDirtyRegion@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_ADDDIRTYREGIO.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x180108FF8 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 *     ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x180109040 (-ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18010908C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x180109140 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x1801091A8 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180109688 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801096F8 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180109A00 (-ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x180109B0C (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x180109BAC (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONM.c)
 *     ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x180109C1C (-ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERE.c)
 *     ?ProcessSetTreeEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTREEEFFECT@@@Z @ 0x180109C44 (-ProcessSetTreeEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTREEEFFECT@@@Z.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18010A290 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18010A390 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSI.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18010A448 (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITI.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18010A500 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIO.c)
 *     ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x18010A5B8 (-ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTA.c)
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x18010A764 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEA.c)
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18010A904 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILC.c)
 *     ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z @ 0x18010AB3C (-ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIO.c)
 *     ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18010ABEC (-ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBU.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18010ACE8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18010AEF0 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18010AF70 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18010AFF4 (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONT.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18010B168 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedPositionDelta@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONDELTA@@@Z @ 0x18010B234 (-ProcessSetRequestedPositionDelta@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18010B310 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18010B3DC (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18010B460 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18010B540 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x18010B75C (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x18010B798 (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x18010B7D4 (-ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IN.c)
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18010B92C (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x18010B98C (-ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_D.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x18010BCB4 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010BD38 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18010BE88 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x18010BED0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 *     ?ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z @ 0x18010BF40 (-ProcessRealize@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_REALIZE@@@Z.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010C0C0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 *     ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x18010C1B0 (-ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMM.c)
 *     ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x18010C200 (-ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z.c)
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x18010C368 (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x18010C52C (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x18010C68C (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x18010C854 (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessBasicStateUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_BASICSTATEUPDATE@@@Z @ 0x18010CAA0 (-ProcessBasicStateUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_BASICSTATEUPDATE@@@.c)
 *     ?ProcessStartPointUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_STARTPOINTUPDATE@@@Z @ 0x18010CC18 (-ProcessStartPointUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_STARTPOINTUPDATE@@@.c)
 *     ?ProcessSegmentCountUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTCOUNTUPDATE@@@Z @ 0x18010CCE4 (-ProcessSegmentCountUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTCOUNTUPDAT.c)
 *     ?ProcessSegmentUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTUPDATE@@@Z @ 0x18010CE1C (-ProcessSegmentUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@@Z @ 0x18010CF90 (-ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH.c)
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x18010D07C (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@.c)
 *     ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x18010D12C (-ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SET.c)
 *     ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x18010D158 (-ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFOR.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18010D234 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 *     ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x18010D43C (-ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x18010D51C (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18010D64C (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x18010D748 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x18010D828 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@.c)
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x18010D908 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETIN.c)
 *     ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x18010D990 (-ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETI.c)
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x18010D9D4 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_S.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18010DA68 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18010E174 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x18010E2E4 (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z.c)
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x18010E368 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 *     ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x18010E3D0 (-ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPUL.c)
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x18010E480 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x18010E520 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 *     ?ProcessSetBooleanProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETBOOLEANPROPERTY@@@Z @ 0x18010E620 (-ProcessSetBooleanProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY@@@Z @ 0x18010E688 (-ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY@@@Z @ 0x18010E6FC (-ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY@@@Z @ 0x18010E798 (-ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY@@@Z @ 0x18010E820 (-ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_S.c)
 *     ?ProcessSetQuaternionProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETQUATERNIONPROPERTY@@@Z @ 0x18010E8A0 (-ProcessSetQuaternionProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGB.c)
 *     ?ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY@@@Z @ 0x18010E904 (-ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSI.c)
 *     ?ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CREATE@@@Z @ 0x18010E91C (-ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CRE.c)
 *     ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18010E98C (-ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVI.c)
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x18010F7B4 (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x18010F858 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18010FB0C (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x18010FC58 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18010FC88 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x18010FD3C (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18010FE54 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Partition_RenderBlack@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_RENDERBLACK@@@Z @ 0x180110030 (-Partition_RenderBlack@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     ?RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z @ 0x180117054 (-RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z.c)
 *     Template_qxqx @ 0x180117294 (Template_qxqx.c)
 *     ?ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING@@@Z @ 0x18011DCD8 (-ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOP.c)
 *     ?ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET@@@Z @ 0x18011DDD8 (-ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPREND.c)
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x18011DEA8 (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18011E000 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS@@@Z @ 0x180137CBC (-ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGA.c)
 *     ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x1801394E0 (-SetColor@CColorBrush@@AEAAXMMMM@Z.c)
 *     ?SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x18013F624 (-SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x18013F700 (-SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x180145BA0 (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESET.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B678 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B7C8 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18014FB68 (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 *     ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x18014FBA8 (-SetColor@CDropShadow@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CDropShadow@@AEAAXMMM@Z @ 0x18014FC98 (-SetOffset@CDropShadow@@AEAAXMMM@Z.c)
 *     ?SetOpacity@CDropShadow@@AEAAXM@Z @ 0x18014FD08 (-SetOpacity@CDropShadow@@AEAAXM@Z.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x1801502A8 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x180150784 (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x180150814 (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x180150BC4 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x180150C08 (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x180150C4C (-SetColor@CCompositionPointLight@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x180150CDC (-SetOffset@CCompositionPointLight@@AEAAXMMM@Z.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015122C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x180151270 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x180151308 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x18015134C (-SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1801513DC (-SetOffset@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x180151450 (-SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x180151494 (-SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x1801676B8 (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 */

__int64 __fastcall CComposition::ProcessCommandBatch(
        CRenderTargetManager **this,
        unsigned int *a2,
        unsigned int a3,
        struct CResourceTable **a4)
{
  struct CResourceTable **v4; // r15
  unsigned __int64 v5; // rdi
  unsigned int *v6; // r14
  unsigned __int64 v7; // r9
  unsigned int v8; // r13d
  unsigned int *v9; // rsi
  CRenderTargetManager **v10; // r10
  __int64 v11; // r12
  struct CResourceTable *v12; // r8
  int v13; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  bool (__fastcall *v18)(__int64, int); // r11
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  bool (__fastcall *v22)(__int64, int); // rax
  char v23; // al
  float *v24; // rbx
  float v25; // xmm7_4
  float v26; // xmm6_4
  unsigned int v28; // edx
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  _BOOL8 (__fastcall *v33)(__int64, int); // rax
  char v34; // al
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned int v37; // ecx
  int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // ebp
  void (__fastcall *v41)(__int64, struct CResourceTable **, _QWORD); // rax
  struct CResourceTable *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdi
  CResource *v45; // rcx
  void (*v46)(void); // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  CResource *v49; // r14
  CResourceTable *v50; // rdx
  CResource *v51; // r12
  __int64 v52; // r15
  int v53; // esi
  unsigned int v54; // edi
  unsigned int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned int *v58; // rdi
  int v59; // eax
  int v60; // eax
  __int64 v61; // rcx
  unsigned int v62; // edx
  CResourceTable *v63; // rsi
  unsigned int (__fastcall *v64)(CResource *__hidden); // rax
  unsigned int (__fastcall *v65)(CVisual *__hidden); // rax
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rcx
  bool (__fastcall *v70)(__int64, int); // rax
  char v71; // al
  CVisual *v72; // rcx
  int v73; // r8d
  int v74; // r9d
  char (__fastcall *v75)(__int64, int); // r11
  __int64 v76; // rbx
  __int64 v77; // rcx
  char (__fastcall *v78)(__int64, int); // rax
  char v79; // al
  unsigned int v80; // r8d
  int v81; // r8d
  int v82; // r9d
  bool (__fastcall *v83)(__int64, int); // r11
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  bool (__fastcall *v87)(__int64, int); // rax
  char v88; // al
  int v89; // r8d
  bool (__fastcall *v90)(__int64, int); // r11
  __int64 v91; // rbx
  __int64 v92; // rcx
  bool (__fastcall *v93)(__int64, int); // rax
  char v94; // al
  CVisual *v95; // rcx
  int inserted; // eax
  CNotificationResource *v97; // rcx
  int v98; // eax
  unsigned int v99; // edi
  CAtlasedRectsMesh *v100; // rax
  struct CResourceTable *v101; // rdx
  int v102; // eax
  CPropertyBagBase *v103; // rax
  struct CResourceTable *v104; // rdx
  int v105; // eax
  CBaseExpression *v106; // rax
  int v107; // eax
  CBaseExpression *v108; // rax
  struct CResourceTable *v109; // rdx
  int v110; // eax
  CPropertyBagBase *v111; // rax
  struct CResourceTable *v112; // rdx
  int v113; // eax
  CWindowNode *v114; // rax
  int v115; // eax
  unsigned int v116; // edx
  CWindowNode *v117; // rax
  int v118; // eax
  CWindowNode *v119; // rax
  struct CResourceTable *v120; // rdx
  int v121; // eax
  CWindowNode *v122; // rax
  struct CResourceTable *v123; // rdx
  int v124; // eax
  CPrimitiveGroup *v125; // rax
  int v126; // eax
  CExpression *v127; // rax
  struct CResourceTable *v128; // rdx
  int v129; // eax
  CExpression *v130; // rax
  int v131; // eax
  CExpression *v132; // rax
  int v133; // eax
  unsigned int v134; // edi
  CRgnGeometry *v135; // rax
  struct CResourceTable *v136; // rdx
  int v137; // eax
  CVisual *v138; // rax
  int v139; // eax
  __int64 v140; // rax
  CBaseExpression *v141; // rcx
  __int64 (__fastcall *v142)(CKeyframeAnimation *, struct CResourceTable *, const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *); // rax
  int v143; // eax
  unsigned int v144; // edx
  CVisual *v145; // rax
  int v146; // eax
  CComponentTransform3D *v147; // rax
  struct CResourceTable *v148; // rdx
  int v149; // eax
  unsigned int v150; // edi
  CPrimitiveGroup *v151; // rax
  struct CResourceTable *v152; // rdx
  int v153; // eax
  unsigned int v154; // edi
  CRenderData *v155; // rax
  int v156; // eax
  CVisual *v157; // rax
  unsigned int v158; // edx
  CVisual *v159; // rax
  int v160; // eax
  CPropertyBagBase *v161; // rax
  struct CResourceTable *v162; // rdx
  int v163; // eax
  CPrimitiveGroup *v164; // rax
  int v165; // eax
  int v166; // eax
  CKeyframeAnimation *v167; // rax
  struct CResourceTable *v168; // rdx
  int v169; // eax
  CPrimitiveGroup *v170; // rax
  struct CResourceTable *v171; // rdx
  int v172; // eax
  CPrimitiveGroup *v173; // rax
  struct CResourceTable *v174; // rdx
  const struct MILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES *v175; // r8
  int v176; // eax
  CRectangleGeometry *v177; // rax
  struct CResourceTable *v178; // rdx
  int v179; // eax
  CRectangleGeometry *v180; // rax
  struct CResourceTable *v181; // rdx
  int v182; // eax
  unsigned int v183; // edx
  CVisual *v184; // rax
  int v185; // eax
  CRectangleGeometry *v186; // rax
  struct CResourceTable *v187; // rdx
  int v188; // eax
  CRectangleGeometry *v189; // rax
  struct CResourceTable *v190; // rdx
  int v191; // eax
  CVisual *v192; // rax
  unsigned int v193; // edx
  CVisual *v194; // rax
  int v195; // eax
  CMatrixTransform *v196; // rax
  struct CResourceTable *v197; // rdx
  int v198; // eax
  CEffectGroup *v199; // rax
  int v200; // eax
  CKeyframeAnimation *v201; // rax
  int v202; // eax
  CComponentTransform3D *v203; // rax
  struct CResourceTable *v204; // rdx
  int v205; // eax
  CComponentTransform3D *v206; // rax
  struct CResourceTable *v207; // rdx
  int v208; // eax
  CComponentTransform3D *v209; // rax
  struct CResourceTable *v210; // rdx
  int v211; // eax
  CComponentTransform3D *v212; // rax
  struct CResourceTable *v213; // rdx
  int v214; // eax
  CComponentTransform3D *v215; // rax
  struct CResourceTable *v216; // rdx
  int v217; // eax
  CComponentTransform3D *v218; // rax
  struct CResourceTable *v219; // rdx
  int v220; // eax
  unsigned int v221; // edx
  CWindowNode *v222; // rax
  int v223; // eax
  unsigned int v224; // edx
  CWindowNode *v225; // rax
  int v226; // eax
  CAnimation *v227; // rax
  int v228; // eax
  CBaseAnimation *v229; // rax
  int v230; // eax
  __int64 v231; // rax
  int v232; // eax
  CWindowNode *v233; // rax
  struct CResourceTable *v234; // rdx
  int v235; // eax
  CRectangleGeometry *v236; // rax
  struct CResourceTable *v237; // rdx
  int v238; // eax
  CCompositionSurfaceBitmap *v239; // rax
  int v240; // eax
  CManipulationTransform *v241; // rax
  struct CResourceTable *v242; // rdx
  int v243; // eax
  int v244; // eax
  int v245; // eax
  CWindowNode *v246; // rax
  struct CResourceTable *v247; // rdx
  int v248; // eax
  CKeyframeAnimation *v249; // rax
  struct CResourceTable *v250; // rdx
  int v251; // eax
  __int64 v252; // rax
  CVisual *v253; // rax
  struct CResourceTable *v254; // rdx
  int v255; // eax
  __int64 v256; // rax
  CBaseAnimation *v257; // rax
  int v258; // eax
  unsigned int v259; // edi
  __int64 v260; // rax
  struct CResourceTable *v261; // rdx
  int v262; // eax
  CSkewTransform *v263; // rax
  struct CResourceTable *v264; // rdx
  int v265; // eax
  CAnimation *v266; // rax
  struct CResourceTable *v267; // rdx
  int v268; // eax
  int v269; // eax
  CTranslateTransform *v270; // rax
  struct CResourceTable *v271; // rdx
  int v272; // eax
  unsigned int v273; // edx
  CVisual *v274; // rax
  int v275; // eax
  unsigned int v276; // edi
  CAtlasedRectsGroup *v277; // rax
  int v278; // eax
  CAnimation *v279; // rax
  struct CResourceTable *v280; // rdx
  int v281; // eax
  CVisual *v282; // rax
  struct CResourceTable *v283; // rdx
  int v284; // eax
  CWindowNode *v285; // rax
  int v286; // eax
  int v287; // edi
  CTransformGroup *v288; // rax
  int v289; // eax
  unsigned int v290; // edx
  CWindowNode *v291; // rax
  int v292; // eax
  struct CResource **v293; // rax
  int v294; // eax
  CWindowNode *v295; // rax
  int v296; // eax
  CWindowNode *v297; // rax
  struct CResourceTable *v298; // rdx
  int v299; // eax
  __int64 v300; // rcx
  __int64 v301; // rax
  int v302; // eax
  __int64 v303; // rax
  int v304; // eax
  unsigned int v305; // edx
  __int64 v306; // rax
  int v307; // eax
  __int64 Resource; // rax
  int v309; // eax
  unsigned int v310; // edx
  CVisual *v311; // rax
  int v312; // eax
  CImageLegacyMilBrush *v313; // rax
  int v314; // eax
  CAnimation *v315; // rax
  int v316; // eax
  __int64 v317; // rcx
  unsigned int v318; // edi
  CAnimation *v319; // rax
  struct CResourceTable *v320; // rdx
  const struct MILCMD_ANIMATION_ADDTIMEEVENTS *v321; // r8
  int v322; // eax
  CSharedSection *v323; // rax
  struct CResourceTable *v324; // rdx
  int v325; // eax
  unsigned int v326; // edx
  __int64 v327; // rax
  int v328; // eax
  CWindowNode *v329; // rax
  struct CResourceTable *v330; // rdx
  int v331; // eax
  __int64 v332; // rax
  struct CResourceTable *v333; // rdx
  int v334; // eax
  CVisual *v335; // rax
  struct CResourceTable *v336; // rdx
  int v337; // eax
  __int64 v338; // rax
  __int64 v339; // rax
  struct CResourceTable *v340; // rdx
  int v341; // eax
  __int64 v342; // rax
  struct CResourceTable *v343; // rdx
  int v344; // eax
  int v345; // eax
  __int64 v346; // rax
  CAnimation *v347; // rax
  struct CResourceTable *v348; // rdx
  int v349; // eax
  unsigned int v350; // edx
  __int64 v351; // rax
  CVisual *v352; // rax
  int v353; // eax
  CVisual *v354; // rax
  int v355; // eax
  CVisual *v356; // rax
  struct CResourceTable *v357; // rdx
  const struct MILCMD_VISUAL_SETMODESTODEFAULT *v358; // r8
  int v359; // eax
  int v360; // eax
  __int64 v361; // rcx
  __int64 v362; // rax
  __int64 v363; // rax
  __int64 v364; // rax
  int v365; // eax
  int v366; // eax
  CVisual *v367; // rax
  int v368; // eax
  int v369; // eax
  __int64 v370; // rax
  int v371; // eax
  int v372; // eax
  int v373; // eax
  int v374; // eax
  struct CResource **v375; // rax
  int v376; // eax
  CTranslateTransform3D *v377; // rax
  struct CResourceTable *v378; // rdx
  int v379; // eax
  int v380; // eax
  unsigned int v381; // edx
  CDesktopRenderTarget *v382; // rax
  int v383; // eax
  CDcompRenderTarget *v384; // rax
  struct CResourceTable *v385; // rdx
  int v386; // eax
  unsigned int v387; // edi
  CDcompRenderTargetGroup *v388; // rax
  int v389; // eax
  unsigned int v390; // edi
  CLinearGradientLegacyMilBrush *v391; // rax
  int v392; // eax
  int v393; // eax
  CAtlasedRectsMesh *v394; // rax
  struct CResourceTable *v395; // rdx
  int v396; // eax
  __int64 v397; // rax
  unsigned int v398; // edi
  CAnimation *v399; // rax
  struct CResourceTable *v400; // rdx
  int v401; // eax
  CAnimation *v402; // rax
  int v403; // eax
  __int64 v404; // rax
  __int64 v405; // rbx
  __int64 v406; // rax
  int v407; // eax
  CAnimation *v408; // rax
  int v409; // eax
  unsigned int v410; // edx
  struct CResource **v411; // rax
  int v412; // eax
  CPrimitiveGroup *v413; // rax
  int v414; // eax
  CGaussianBlurEffect *v415; // rax
  struct CResourceTable *v416; // rdx
  int v417; // eax
  CPrimitiveGroup *v418; // rax
  struct CResourceTable *v419; // rdx
  const struct MILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES *v420; // r8
  int v421; // eax
  CDcompRenderTarget *v422; // rax
  struct CResourceTable *v423; // rdx
  int v424; // eax
  __int64 v425; // rax
  CAnimationTrigger *v426; // rax
  struct CResourceTable *v427; // rdx
  int v428; // eax
  int v429; // eax
  CDesktopRenderTarget *v430; // rax
  struct CResourceTable *v431; // rdx
  int v432; // eax
  unsigned int v433; // edx
  __int64 v434; // rax
  int v435; // eax
  CComponentTransform2D *v436; // rax
  struct CResourceTable *v437; // rdx
  int v438; // eax
  CComponentTransform2D *v439; // rax
  struct CResourceTable *v440; // rdx
  int v441; // eax
  CComponentTransform2D *v442; // rax
  struct CResourceTable *v443; // rdx
  int v444; // eax
  CComponentTransform2D *v445; // rax
  struct CResourceTable *v446; // rdx
  int v447; // eax
  CComponentTransform2D *v448; // rax
  struct CResourceTable *v449; // rdx
  int v450; // eax
  CComponentTransform2D *v451; // rax
  struct CResourceTable *v452; // rdx
  int v453; // eax
  CRotateTransform3D *v454; // rax
  struct CResourceTable *v455; // rdx
  int v456; // eax
  CTranslateTransform3D *v457; // rax
  struct CResourceTable *v458; // rdx
  int v459; // eax
  CMatrixTransform3D *v460; // rax
  struct CResourceTable *v461; // rdx
  int v462; // eax
  int v463; // ecx
  __int64 v464; // rax
  int v465; // eax
  unsigned int v466; // edi
  CTransform3DGroup *v467; // rax
  int v468; // eax
  __int64 v469; // rax
  int v470; // eax
  int v471; // eax
  int v472; // eax
  int v473; // eax
  int v474; // eax
  int v475; // eax
  unsigned int v476; // edi
  __int64 v477; // rax
  int v478; // eax
  __int64 v479; // rax
  int v480; // eax
  __int64 v481; // rcx
  __int64 v482; // rax
  _OWORD *v483; // rax
  __int64 v484; // rax
  CTileLegacyMilBrush *v485; // rax
  const struct CResourceTable *v486; // rdx
  int v487; // eax
  unsigned int v488; // edx
  CVisual *v489; // rax
  int v490; // eax
  CVisual *v491; // rax
  struct CResourceTable *v492; // rdx
  int v493; // eax
  CVisual *v494; // rax
  struct CResourceTable *v495; // rdx
  int v496; // eax
  CVisual *v497; // rax
  struct CResourceTable *v498; // rdx
  int v499; // eax
  CVisual *v500; // rax
  int v501; // eax
  CSpriteVisual *v502; // rax
  int v503; // eax
  CSpriteVisual *v504; // rax
  int v505; // eax
  CColorBrush *v506; // rax
  CSurfaceBrush *v507; // rax
  int v508; // eax
  CSpriteVisualContent *v509; // rcx
  CSpriteVisualContent *v510; // rcx
  CSpriteVisualContent *v511; // rcx
  CSurfaceBrush *v512; // rax
  struct CResourceTable *v513; // rdx
  int v514; // eax
  CSurfaceBrush *v515; // rax
  int v516; // eax
  CEffectBrush *v517; // rax
  int v518; // eax
  CEffectBrush *v519; // rax
  int v520; // eax
  CEffectBrush *v521; // rax
  int v522; // eax
  CMaskBrush *v523; // rax
  int v524; // eax
  CMaskBrush *v525; // rax
  int v526; // eax
  CLinearGradientBrush *v527; // rax
  int v528; // eax
  CLinearGradientBrush *v529; // rax
  CLinearGradientBrush *v530; // rax
  CNineGridBrush *v531; // rax
  int v532; // eax
  CNineGridBrush *v533; // rax
  struct CResourceTable *v534; // rdx
  int v535; // eax
  CNineGridBrush *v536; // rax
  struct CResourceTable *v537; // rdx
  int IsCenterHollow; // eax
  CWindowNode *v539; // rax
  unsigned int v540; // edi
  CWindowNode *v541; // rax
  struct CResourceTable *v542; // rdx
  int v543; // eax
  unsigned int v544; // edx
  __int64 v545; // rax
  CWindowNode *v546; // rax
  int v547; // eax
  CWindowNode *v548; // rax
  struct CResourceTable *v549; // rdx
  const struct MILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE *v550; // r8
  int v551; // eax
  CWindowNode *v552; // rax
  struct CResourceTable *v553; // rdx
  int v554; // eax
  CWindowNode *v555; // rax
  struct CResourceTable *v556; // rdx
  int v557; // eax
  CWindowNode *v558; // rax
  struct CResourceTable *v559; // rdx
  int v560; // eax
  unsigned int v561; // edx
  __int64 v562; // rax
  CWindowNode *v563; // rax
  int v564; // eax
  unsigned int v565; // edi
  CVisualGroup *v566; // rax
  int v567; // eax
  CDesktopRenderTarget *v568; // rax
  struct CResourceTable *v569; // rdx
  const struct MILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET *v570; // r8
  int v571; // eax
  CDesktopRenderTarget *v572; // rax
  struct CResourceTable *v573; // rdx
  int updated; // eax
  CDesktopRenderTarget *v575; // rax
  struct CResourceTable *v576; // rdx
  int v577; // eax
  __int64 v578; // rax
  int v579; // eax
  __int64 v580; // rax
  int v581; // eax
  __int64 v582; // rax
  int v583; // eax
  int v584; // eax
  int v585; // eax
  unsigned int v586; // edx
  CMagnifierRenderTarget *v587; // rax
  int v588; // eax
  unsigned int v589; // edx
  CMagnifierRenderTarget *v590; // rax
  int v591; // eax
  CMagnifierRenderTarget *v592; // rax
  struct CResourceTable *v593; // rdx
  int v594; // eax
  unsigned int v595; // edx
  CMagnifierRenderTarget *v596; // rax
  int v597; // eax
  CMagnifierRenderTarget *v598; // rax
  struct CResourceTable *v599; // rdx
  int v600; // eax
  unsigned int v601; // edx
  CIndirectSwapchainRenderTarget *v602; // rax
  int v603; // eax
  CIndirectSwapchainRenderTarget *v604; // rax
  struct CResourceTable *v605; // rdx
  int v606; // eax
  CIndirectSwapchainRenderTarget *v607; // rax
  CAnalogCompositor *v608; // rax
  struct CResourceTable *v609; // rdx
  int v610; // eax
  CAnalogCompositorClient *v611; // rcx
  CAnalogExclusiveView *v612; // rax
  struct CResourceTable *v613; // rdx
  int v614; // eax
  CAnalogExclusiveView *v615; // rax
  int v616; // eax
  CAnalogTextureTarget *v617; // rax
  struct CResourceTable *v618; // rdx
  int v619; // eax
  CScalar *v620; // rax
  struct CResourceTable *v621; // rdx
  int v622; // eax
  __int64 v623; // rax
  struct CResourceTable *v624; // rdx
  int v625; // eax
  __int64 v626; // rax
  struct CResourceTable *v627; // rdx
  int v628; // eax
  __int64 v629; // rax
  struct CResourceTable *v630; // rdx
  int v631; // eax
  __int64 v632; // rax
  struct CResourceTable *v633; // rdx
  int v634; // eax
  __int64 v635; // rax
  __int64 v636; // rax
  __int64 v637; // rax
  struct CResourceTable *v638; // rdx
  const struct MILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS *v639; // r8
  int v640; // eax
  __int64 v641; // rax
  int v642; // eax
  CSnapshot *v643; // rax
  int v644; // eax
  CSnapshot *v645; // rax
  int v646; // eax
  CMeshGeometry2D *v647; // rax
  struct CResourceTable *v648; // rdx
  int v649; // eax
  CYCbCrSurface *v650; // rax
  int v651; // eax
  unsigned int v652; // edx
  __int64 v653; // rax
  __int64 v654; // rax
  int v655; // eax
  __int64 v656; // rax
  struct CResourceTable *v657; // rdx
  int v658; // eax
  __int64 v659; // rax
  struct CResourceTable *v660; // rdx
  int v661; // eax
  __int64 v662; // rax
  struct CResourceTable *v663; // rdx
  int v664; // eax
  CBaseExpression *v665; // rax
  struct CResourceTable *v666; // rdx
  int v667; // eax
  CKeyframeAnimation *v668; // rax
  int v669; // eax
  CConditionalExpression *v670; // rax
  int v671; // eax
  CConditionalExpression *v672; // rax
  int v673; // eax
  __int64 v674; // rcx
  __int64 v675; // rcx
  CInteractionTracker *v676; // rax
  struct CResourceTable *v677; // rdx
  int v678; // eax
  CInteractionTracker *v679; // rax
  struct CResourceTable *v680; // rdx
  int v681; // eax
  CInteractionTracker *v682; // rax
  struct CResourceTable *v683; // rdx
  int v684; // eax
  _DWORD *v685; // rax
  CInteractionTracker *v686; // rax
  struct CResourceTable *v687; // rdx
  int v688; // eax
  CInteractionTracker *v689; // rax
  struct CResourceTable *v690; // rdx
  int v691; // eax
  unsigned int v692; // edx
  CInteractionTracker *v693; // rax
  int v694; // eax
  CInteractionTracker *v695; // rax
  struct CResourceTable *v696; // rdx
  int v697; // eax
  unsigned int v698; // edx
  CInteractionTracker *v699; // rax
  int v700; // eax
  CInteractionTracker *v701; // rax
  int v702; // eax
  __int64 v703; // rcx
  CInteractionTracker *v704; // rax
  struct CResourceTable *v705; // rdx
  int v706; // eax
  CInteractionTracker *v707; // rax
  struct CResourceTable *v708; // rdx
  int v709; // eax
  CInteractionTracker *v710; // rax
  CInteractionTracker *v711; // rax
  unsigned int v712; // edx
  unsigned int v713; // edi
  CInteractionTracker *v714; // rax
  int v715; // eax
  CInteractionTracker *v716; // rax
  struct CResourceTable *v717; // rdx
  int v718; // eax
  CInteractionTracker *v719; // rax
  int v720; // eax
  unsigned int v721; // edi
  CFilterEffect *v722; // rax
  int v723; // eax
  unsigned int v724; // edi
  CTableTransferEffect *v725; // rax
  struct CResourceTable *v726; // rdx
  int v727; // eax
  CInk *v728; // rax
  struct CResourceTable *v729; // rdx
  int v730; // eax
  CInk *v731; // rax
  struct CResourceTable *v732; // rdx
  int started; // eax
  CInk *v734; // rax
  struct CResourceTable *v735; // rdx
  int v736; // eax
  CInk *v737; // rax
  struct CResourceTable *v738; // rdx
  int v739; // eax
  CPencil *v740; // rax
  int v741; // eax
  CPencil *v742; // rax
  struct CResourceTable *v743; // rdx
  int v744; // eax
  CPencil *v745; // rax
  struct CResourceTable *v746; // rdx
  int v747; // eax
  CPencil *v748; // rax
  struct CResourceTable *v749; // rdx
  int v750; // eax
  CCompiledEffectTemplate *v751; // rax
  int v752; // eax
  CPropertyBagBase *v753; // rax
  struct CResourceTable *v754; // rdx
  int v755; // eax
  CPropertyBagBase *v756; // rax
  struct CResourceTable *v757; // rdx
  int v758; // eax
  CPropertyBagBase *v759; // rax
  struct CResourceTable *v760; // rdx
  int v761; // eax
  CPropertyBagBase *v762; // rax
  struct CResourceTable *v763; // rdx
  int v764; // eax
  CPropertyBagBase *v765; // rax
  struct CResourceTable *v766; // rdx
  int v767; // eax
  CPropertyBagBase *v768; // rax
  struct CResourceTable *v769; // rdx
  int v770; // eax
  __int64 v771; // rcx
  CDropShadow *v772; // rax
  CDropShadow *v773; // rax
  CDropShadow *v774; // rax
  int v775; // eax
  CDropShadow *v776; // rax
  CDropShadow *v777; // rax
  CCompositionLight *v778; // rax
  int v779; // eax
  CCompositionLight *v780; // rax
  CCompositionDistantLight *v781; // rax
  CCompositionDistantLight *v782; // rax
  int v783; // eax
  CCompositionDistantLight *v784; // rax
  CCompositionPointLight *v785; // rax
  CCompositionPointLight *v786; // rax
  CCompositionPointLight *v787; // rax
  CCompositionPointLight *v788; // rax
  CCompositionPointLight *v789; // rax
  int v790; // eax
  CCompositionPointLight *v791; // rax
  CCompositionSpotLight *v792; // rax
  int v793; // eax
  CCompositionSpotLight *v794; // rax
  CCompositionSpotLight *v795; // rax
  CCompositionSpotLight *v796; // rax
  CCompositionSpotLight *v797; // rax
  CCompositionSpotLight *v798; // rax
  CCompositionSpotLight *v799; // rax
  unsigned int v800; // edi
  CMeshGeometry2D *v801; // rax
  struct CResourceTable *v802; // rdx
  int v803; // eax
  unsigned int v804; // edi
  CGeometry2DGroup *v805; // rax
  int v806; // eax
  CBrightnessEffect *v807; // rax
  struct CResourceTable *v808; // rdx
  int v809; // eax
  CColorMatrixEffect *v810; // rax
  struct CResourceTable *v811; // rdx
  int v812; // eax
  CSaturationEffect *v813; // rax
  struct CResourceTable *v814; // rdx
  int v815; // eax
  CShadowEffect *v816; // rax
  struct CResourceTable *v817; // rdx
  int v818; // eax
  CSaturationEffect *v819; // rax
  struct CResourceTable *v820; // rdx
  int v821; // eax
  CTurbulenceEffect *v822; // rax
  struct CResourceTable *v823; // rdx
  int v824; // eax
  CFloodEffect *v825; // rax
  struct CResourceTable *v826; // rdx
  int v827; // eax
  CArithmeticCompositeEffect *v828; // rax
  struct CResourceTable *v829; // rdx
  int v830; // eax
  CLinearTransferEffect *v831; // rax
  struct CResourceTable *v832; // rdx
  int v833; // eax
  CTableTransferEffect *v834; // rax
  struct CResourceTable *v835; // rdx
  int v836; // eax
  CBlendEffect *v837; // rax
  struct CResourceTable *v838; // rdx
  int v839; // eax
  CBlendEffect *v840; // rax
  struct CResourceTable *v841; // rdx
  int v842; // eax
  CAffineTransform2DEffect *v843; // rax
  struct CResourceTable *v844; // rdx
  int v845; // eax
  CScaleTransform3D *v846; // rax
  struct CResourceTable *v847; // rdx
  int v848; // eax
  CSkewTransform *v849; // rax
  struct CResourceTable *v850; // rdx
  int v851; // eax
  CManipulationTransform *v852; // rax
  struct CResourceTable *v853; // rdx
  const struct MILCMD_MANIPULATIONTRANSFORM *v854; // r8
  int v855; // eax
  unsigned int v856; // edi
  CGeometryGroup *v857; // rax
  int v858; // eax
  unsigned int v859; // [rsp+20h] [rbp-B8h]
  unsigned int v860; // [rsp+20h] [rbp-B8h]
  struct CResourceTable *v861; // [rsp+40h] [rbp-98h]
  CResourceTable *v862; // [rsp+48h] [rbp-90h]
  unsigned int *v863; // [rsp+50h] [rbp-88h]
  CBitmapOfDeviceBitmaps *v864; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v865; // [rsp+60h] [rbp-78h]
  _DWORD v866[2]; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v869; // [rsp+F0h] [rbp+18h]

  v4 = a4;
  v5 = a3;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v863 = 0LL;
  v9 = a2;
  v869 = 0;
  ++*((_DWORD *)v4 + 18);
  v10 = this;
  v11 = (__int64)v4[3];
  v862 = (CResourceTable *)v11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, a3);
    v7 = 0LL;
    v10 = this;
  }
  v12 = (struct CResourceTable *)v9;
  v13 = -2147467259;
  v861 = (struct CResourceTable *)v9;
  v14 = v5;
  v865 = v5;
  if ( !(_DWORD)v5 )
  {
    v7 = 0LL;
    v863 = 0LL;
    v869 = 0;
    v13 = 1;
    goto LABEL_10;
  }
  if ( v5 >= 8 )
  {
    v15 = *v9;
    if ( (unsigned int)v15 >= 8 && (v15 & 3) == 0 && v15 <= v5 )
    {
      v8 = v9[1];
      v6 = v9 + 1;
      v7 = (unsigned int)(v15 - 4);
      v863 = v9 + 1;
      v12 = (struct CResourceTable *)((char *)v9 + v15);
      v869 = v15 - 4;
      v861 = (struct CResourceTable *)((char *)v9 + v15);
      v13 = 0;
    }
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x278u);
    goto LABEL_808;
  }
  while ( 1 )
  {
LABEL_10:
    if ( v13 == 1 )
    {
      *((_BYTE *)v10[21] + 384) |= 2u;
      return 0LL;
    }
    if ( v8 == 23 )
      break;
    if ( v8 == 22 )
    {
      if ( (_DWORD)v7 != 12 )
      {
        v860 = 423;
        goto LABEL_807;
      }
      v49 = 0LL;
      v50 = v862;
      v51 = 0LL;
      v52 = 0LL;
      v864 = 0LL;
      v53 = 0;
      v54 = v863[2];
      v55 = v863[1];
      if ( !v54 || !v55 )
      {
        v53 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x190u);
        goto LABEL_80;
      }
      if ( v55 < *((_DWORD *)v862 + 7) )
        goto LABEL_76;
      v355 = HANDLE_TABLE::ResizeToFit((void **)v862 + 2, v55);
      v53 = v355;
      if ( v355 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v355, 0x19Du);
        v50 = v862;
        goto LABEL_78;
      }
      v50 = v862;
LABEL_76:
      v56 = *((_QWORD *)v862 + 5);
      v57 = v55 * *((_DWORD *)v862 + 6);
      if ( *(_DWORD *)(v57 + v56) )
      {
        v53 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1ACu);
        v13 = -2147024809;
      }
      else
      {
        *(_DWORD *)(v57 + v56) = v54;
LABEL_78:
        if ( v53 >= 0 )
        {
          v52 = *((_QWORD *)v50 + 5) + v55 * *((_DWORD *)v50 + 6);
          *(_QWORD *)(v52 + 8) = 0LL;
        }
LABEL_80:
        v13 = v53;
        if ( v53 >= 0 )
        {
          v58 = v863;
          v59 = CResourceFactory::Create((struct CComposition *)this, a4, v863[2], &v864);
          v13 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x32u);
            v49 = v864;
          }
          else
          {
            v49 = v864;
            if ( v863[2] == 88 )
              *((_QWORD *)v864 + 20) = a4;
            v60 = (*(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v49 + 40LL))(v49);
            v13 = v60;
            if ( v60 >= 0 )
            {
              v62 = v863[1];
              v13 = -2147024890;
              v63 = v862;
              if ( v62 )
              {
                if ( v62 < *((_DWORD *)v862 + 7) )
                {
                  v61 = v62 * *((_DWORD *)v862 + 6);
                  if ( *(_DWORD *)(v61 + *((_QWORD *)v862 + 5)) )
                  {
                    v61 = *((_QWORD *)v862 + 5) + v62 * *((_DWORD *)v862 + 6);
                    if ( v61 )
                    {
                      *(_QWORD *)(v61 + 8) = v49;
                      v13 = 0;
                      v64 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v49 + 8LL);
                      if ( v64 == CResource::AddRef )
                      {
                        CResource::AddRef(v49);
                        goto LABEL_91;
                      }
                      if ( (char *)v64 == (char *)CBitmapOfDeviceBitmaps::AddRef )
                      {
                        CBitmapOfDeviceBitmaps::AddRef(v49);
                        goto LABEL_91;
                      }
                      v64(v49);
                    }
                  }
                }
              }
              if ( v13 >= 0 )
              {
LABEL_91:
                v51 = v49;
                v49 = 0LL;
                v52 = 0LL;
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x43u);
              }
LABEL_92:
              if ( v13 < 0 )
              {
                if ( v52 )
                  CResourceTable::DeleteHandle(v63, v58[1]);
                if ( v49 )
                  (*(void (__fastcall **)(CResource *))(*(_QWORD *)v49 + 16LL))(v49);
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x967u);
LABEL_94:
                v4 = a4;
                v6 = v863;
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) == 0 )
                  goto LABEL_94;
                v6 = v863;
                v4 = a4;
                Template_qxqx(v61, v62, *((_DWORD *)a4 + 4), v863[1], v863[2], (char)v51);
              }
              if ( v51 )
              {
                v65 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v51 + 16LL);
                if ( v65 == CResource::Release )
                {
                  CResource::Release(v51);
                }
                else if ( v65 == CVisual::Release )
                {
                  CVisual::Release(v51);
                }
                else if ( v65 == CAtlasedRects::Release )
                {
                  CAtlasedRects::Release(v51);
                }
                else if ( v65 == CPrimitiveGroup::Release )
                {
                  CPrimitiveGroup::Release(v51);
                }
                else if ( v65 == CCompositionSurfaceBitmap::Release )
                {
                  CCompositionSurfaceBitmap::Release(v51);
                }
                else
                {
                  v65(v51);
                }
              }
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1B2u);
                goto LABEL_808;
              }
              v9 = a2;
              v14 = v865;
              v11 = (__int64)v862;
              goto LABEL_62;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x42u);
          }
LABEL_1564:
          v63 = v862;
          goto LABEL_92;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x2Du);
      v58 = v863;
      goto LABEL_1564;
    }
    if ( v8 == 43 )
    {
      if ( (_DWORD)v7 != 32 )
      {
        v860 = 940;
        goto LABEL_807;
      }
      v66 = v6[1];
      if ( !v66
        || v66 >= *(_DWORD *)(v11 + 28)
        || (v67 = *(_QWORD *)(v11 + 40), !*(_DWORD *)(v66 * *(_DWORD *)(v11 + 24) + v67))
        || (v68 = v67 + v66 * *(_DWORD *)(v11 + 24), !*(_QWORD *)(v68 + 8))
        || ((v69 = *(_QWORD *)(v68 + 8),
             v70 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v69 + 48LL),
             v70 != CWindowNode::IsOfType)
          ? ((char *)v70 != (char *)CVisual::IsOfType
           ? (v71 = ((__int64 (__fastcall *)(__int64, _QWORD, struct CResourceTable *))v70)(v69, (unsigned int)v7, v12))
           : (v71 = CVisual::IsOfType(v69, (unsigned int)v7)))
          : (v71 = CWindowNode::IsOfType(v69, 32)),
            !v71 || (v72 = *(CVisual **)(v68 + 8)) == 0LL) )
      {
        v860 = 955;
        goto LABEL_807;
      }
      CVisual::SetOffset(v72, *((double *)v6 + 1), *((double *)v6 + 2), *((double *)v6 + 3));
    }
    else
    {
      switch ( v8 )
      {
        case 1u:
          if ( (_DWORD)v7 == 4 )
          {
            v360 = CComposition::Transport_SyncFlush(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_TRANSPORT_SYNCFLUSH *)v7);
            v13 = v360;
            if ( v360 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v360, 0x1Au);
              goto LABEL_808;
            }
            break;
          }
          v860 = 15;
          goto LABEL_807;
        case 2u:
          if ( (_DWORD)v7 == 8 )
          {
            v345 = CComposition::Transport_RoundTripRequest(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_TRANSPORT_ROUNDTRIPREQUEST *)v6);
            v13 = v345;
            if ( v345 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v345, 0x2Du);
              goto LABEL_808;
            }
            break;
          }
          v860 = 34;
          goto LABEL_807;
        case 3u:
          if ( (_DWORD)v7 == 12 )
          {
            v368 = CLegacySurfaceManager::AddAsyncFlushResponse(
                     (CRenderTargetManager *)((char *)v10[5] + 96),
                     (struct CChannelContext *)v4,
                     v6[1],
                     v6[2]);
            v13 = v368;
            if ( v368 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v368, 0x40u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 53;
          goto LABEL_807;
        case 4u:
          if ( (_DWORD)v7 == 8 )
          {
            v429 = CComposition::Partition_RegisterForNotifications(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_PARTITION_REGISTERFORNOTIFICATIONS *)v6);
            v13 = v429;
            if ( v429 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v429, 0x53u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 72;
          goto LABEL_807;
        case 5u:
          if ( (_DWORD)v7 == 8 )
          {
            v470 = CComposition::Partition_RenderBlack(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_RENDERBLACK *)v6);
            v13 = v470;
            if ( v470 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v470, 0x66u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 91;
          goto LABEL_807;
        case 6u:
          if ( (_DWORD)v7 == 16 )
          {
            v393 = CComposition::Partition_ForceRender(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_FORCERENDER *)v6);
            v13 = v393;
            if ( v393 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v393, 0x79u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 110;
          goto LABEL_807;
        case 7u:
          if ( (_DWORD)v7 == 148 )
          {
            v373 = CComposition::Partition_SetCurrentMmTask(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_SETCURRENTMMTASK *)v6);
            v13 = v373;
            if ( v373 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v373, 0x8Cu);
              goto LABEL_808;
            }
            break;
          }
          v860 = 129;
          goto LABEL_807;
        case 8u:
          if ( (unsigned int)v7 >= 4 )
          {
            v372 = CComposition::Partition_TelemetryTouchInteractionBegin(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *)v7,
                     (struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *)(v6 + 1),
                     (int)v7 - 4);
            v13 = v372;
            if ( v372 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v372, 0xA2u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 148;
          goto LABEL_807;
        case 9u:
          if ( (_DWORD)v7 == 52 )
          {
            v269 = CComposition::Partition_TelemetryTouchInteractionUpdate(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE *)v6);
            v13 = v269;
            if ( v269 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v269, 0xB5u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 170;
          goto LABEL_807;
        case 0xAu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 189;
            goto LABEL_807;
          }
          CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(v10[64], *(_QWORD *)(v6 + 1));
          break;
        case 0xBu:
          if ( (_DWORD)v7 != 16 )
          {
            v860 = 208;
            goto LABEL_807;
          }
          CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(v10[64], v6[1], *((const GUID **)v6 + 1));
          break;
        case 0xCu:
          if ( (unsigned int)v7 >= 4 )
          {
            v369 = CComposition::Partition_TelemetrySetApplicationId(
                     (CComposition *)(v6 + 1),
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_PARTITION_TELEMETRYSETAPPLICATIONID *)v7,
                     (const unsigned __int16 *)v6 + 2,
                     (int)v7 - 4);
            v13 = v369;
            if ( v369 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v369, 0xF1u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 227;
          goto LABEL_807;
        case 0xDu:
          if ( (unsigned int)v7 >= 4 )
          {
            v244 = CComposition::Partition_TelemetryAnimationScenarioBegin(
                     v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *)v7,
                     v6 + 1,
                     (int)v7 - 4);
            v13 = v244;
            if ( v244 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v244, 0x107u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 249;
          goto LABEL_807;
        case 0xEu:
          if ( (_DWORD)v7 != 28 )
          {
            v860 = 271;
            goto LABEL_807;
          }
          CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(
            v10[64],
            *((_DWORD *)v4 + 4),
            *(_QWORD *)(v6 + 5),
            (const struct _GUID *)(v6 + 1));
          break;
        case 0xFu:
          if ( (_DWORD)v7 != 28 )
          {
            v860 = 290;
            goto LABEL_807;
          }
          CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
            v10[64],
            *((_DWORD *)v4 + 4),
            *(_QWORD *)(v6 + 5),
            (const struct _GUID *)(v6 + 1));
          break;
        case 0x10u:
          if ( (_DWORD)v7 == 12 )
          {
            v374 = CComposition::Partition_SwitchRemotingMode(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_SWITCHREMOTINGMODE *)v6);
            v13 = v374;
            if ( v374 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v374, 0x140u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 309;
          goto LABEL_807;
        case 0x11u:
          if ( (_DWORD)v7 == 48 )
          {
            v471 = CComposition::Partition_DesktopCaptureBits(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *)v6);
            v13 = v471;
            if ( v471 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v471, 0x153u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 328;
          goto LABEL_807;
        case 0x12u:
          if ( (_DWORD)v7 == 4 )
          {
            *((_BYTE *)v10 + 1241) = 0;
            goto LABEL_63;
          }
          v860 = 347;
          goto LABEL_807;
        case 0x13u:
          if ( (_DWORD)v7 == 16 )
          {
            v472 = CComposition::Partition_Synchronize(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     v12,
                     (const struct MILCMD_PARTITION_SYNCHRONIZE *)v6);
            v13 = v472;
            if ( v472 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v472, 0x179u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 366;
          goto LABEL_807;
        case 0x14u:
          if ( (_DWORD)v7 == 12 )
          {
            v380 = CComposition::Partition_SetCursor(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     (struct CResourceTable *)v11,
                     (const struct MILCMD_PARTITION_SETCURSOR *)v6);
            v13 = v380;
            if ( v380 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v380, 0x18Cu);
              goto LABEL_808;
            }
            break;
          }
          v860 = 385;
          goto LABEL_807;
        case 0x15u:
          if ( (_DWORD)v7 == 12 )
          {
            v473 = CComposition::Partition_SetMagnifier(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     (struct CResourceTable *)v11,
                     (const struct MILCMD_PARTITION_SETMAGNIFIER *)v6);
            v13 = v473;
            if ( v473 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v473, 0x19Fu);
              goto LABEL_808;
            }
            break;
          }
          v860 = 404;
          goto LABEL_807;
        case 0x18u:
          if ( (_DWORD)v7 == 16 )
          {
            v166 = CComposition::Channel_DuplicateHandleOnSource(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE *)v6);
            v13 = v166;
            if ( v166 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v166, 0x1D8u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 461;
          goto LABEL_807;
        case 0x19u:
          if ( (_DWORD)v7 == 16 )
          {
            v245 = CComposition::Channel_DuplicateHandleOnTarget(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_CHANNEL_DUPLICATEHANDLEONTARGET *)v6);
            v13 = v245;
            if ( v245 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v245, 0x1EBu);
              goto LABEL_808;
            }
            break;
          }
          v860 = 480;
          goto LABEL_807;
        case 0x1Au:
          if ( (_DWORD)v7 == 8 )
          {
            v474 = CComposition::Channel_EnableDebugCounter(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_CHANNEL_ENABLEDEBUGCOUNTER *)v6);
            v13 = v474;
            if ( v474 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v474, 0x1FEu);
              goto LABEL_808;
            }
            break;
          }
          v860 = 499;
          goto LABEL_807;
        case 0x1Bu:
          if ( (_DWORD)v7 == 20 )
          {
            v366 = CComposition::Channel_SetCallbackId(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     v12,
                     (const struct MILCMD_CHANNEL_SETCALLBACKID *)v6);
            v13 = v366;
            if ( v366 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v366, 0x211u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 518;
          goto LABEL_807;
        case 0x1Cu:
          if ( (_DWORD)v7 == 44 )
          {
            v475 = CComposition::Channel_VisualCaptureBits(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     (struct CResourceTable *)v11,
                     (const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *)v6);
            v13 = v475;
            if ( v475 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v475, 0x224u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 537;
          goto LABEL_807;
        case 0x1Du:
          if ( (_DWORD)v7 == 16 )
          {
            Resource = CResourceTable::GetResource(v11, v6[1], 0x5Au);
            if ( Resource && Resource != 16 )
            {
              v309 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)(Resource - 16) + 64LL))(
                       Resource - 16,
                       v11,
                       v6);
              v13 = v309;
              if ( v309 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v309, 0x23Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 571;
          }
          else
          {
            v860 = 556;
          }
          goto LABEL_807;
        case 0x1Eu:
          if ( (unsigned int)v7 < 0x18 )
          {
            v860 = 583;
          }
          else
          {
            v476 = v7 - 24;
            v477 = CResourceTable::GetResource(v11, v6[1], 0x5Au);
            if ( v477 && v477 != 16 )
            {
              v859 = v476;
              v478 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, unsigned int *))(*(_QWORD *)(v477 - 16)
                                                                                                 + 56LL))(
                       v477 - 16,
                       v11,
                       v6,
                       v6 + 6);
              v13 = v478;
              if ( v478 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v478, 0x25Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 601;
          }
          goto LABEL_807;
        case 0x1Fu:
          if ( (_DWORD)v7 == 16 )
          {
            v479 = CResourceTable::GetResource(v11, v6[1], 0x5Au);
            if ( v479 && v479 != 16 )
            {
              v480 = CBitmapResource::ProcessRealize(
                       (CBitmapResource *)(v479 - 16),
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_BITMAP_REALIZE *)v6);
              v13 = v480;
              if ( v480 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v480, 0x278u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 628;
          }
          else
          {
            v860 = 613;
          }
          goto LABEL_807;
        case 0x20u:
          if ( (_DWORD)v7 != 16 )
          {
            v860 = 640;
            goto LABEL_807;
          }
          v481 = CResourceTable::GetResource(v11, v6[1], 0x2Eu);
          if ( !v481 )
          {
            v860 = 655;
            goto LABEL_807;
          }
          *(_QWORD *)(v481 + 112) = *((_QWORD *)v6 + 1);
          CResource::NotifyOnChanged(v481, 0LL, 0LL);
          break;
        case 0x21u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 667;
            goto LABEL_807;
          }
          v346 = CResourceTable::GetResource(v11, v6[1], 0x2Fu);
          if ( !v346 )
          {
            v860 = 682;
            goto LABEL_807;
          }
LABEL_598:
          *(_OWORD *)(v346 + 112) = *(_OWORD *)(v6 + 2);
          CResource::NotifyOnChanged(v346, 0LL, 0LL);
          break;
        case 0x22u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 694;
            goto LABEL_807;
          }
          v346 = CResourceTable::GetResource(v11, v6[1], 0x30u);
          if ( v346 )
            goto LABEL_598;
          v860 = 709;
          goto LABEL_807;
        case 0x23u:
          if ( (_DWORD)v7 != 40 )
          {
            v860 = 721;
            goto LABEL_807;
          }
          v482 = CResourceTable::GetResource(v11, v6[1], 0x31u);
          if ( !v482 )
          {
            v860 = 736;
            goto LABEL_807;
          }
          *(_OWORD *)(v482 + 112) = *(_OWORD *)(v6 + 2);
          *(_OWORD *)(v482 + 128) = *(_OWORD *)(v6 + 6);
          CResource::NotifyOnChanged(v482, 0LL, 0LL);
          break;
        case 0x24u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 748;
            goto LABEL_807;
          }
          v346 = CResourceTable::GetResource(v11, v6[1], 0x32u);
          if ( v346 )
            goto LABEL_598;
          v860 = 763;
          goto LABEL_807;
        case 0x25u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 775;
            goto LABEL_807;
          }
          v346 = CResourceTable::GetResource(v11, v6[1], 0x33u);
          if ( v346 )
            goto LABEL_598;
          v860 = 790;
          goto LABEL_807;
        case 0x26u:
          if ( (_DWORD)v7 != 56 )
          {
            v860 = 802;
            goto LABEL_807;
          }
          v483 = (_OWORD *)CResourceTable::GetResource(v11, v6[1], 0x34u);
          if ( !v483 )
          {
            v860 = 817;
            goto LABEL_807;
          }
          v483[7] = *(_OWORD *)(v6 + 2);
          v483[8] = *(_OWORD *)(v6 + 6);
          v483[9] = *(_OWORD *)(v6 + 10);
          CResource::NotifyOnChanged(v483, 0LL, 0LL);
          break;
        case 0x27u:
          if ( (_DWORD)v7 != 108 )
          {
            v860 = 829;
            goto LABEL_807;
          }
          v484 = CResourceTable::GetResource(v11, v6[1], 0x35u);
          if ( !v484 )
          {
            v860 = 844;
            goto LABEL_807;
          }
          *(_OWORD *)(v484 + 112) = *(_OWORD *)(v6 + 2);
          *(_OWORD *)(v484 + 128) = *(_OWORD *)(v6 + 6);
          *(_OWORD *)(v484 + 144) = *(_OWORD *)(v6 + 10);
          *(_OWORD *)(v484 + 160) = *(_OWORD *)(v6 + 14);
          *(_OWORD *)(v484 + 176) = *(_OWORD *)(v6 + 18);
          *(_OWORD *)(v484 + 192) = *(_OWORD *)(v6 + 22);
          *(_DWORD *)(v484 + 208) = v6[26];
          CResource::NotifyOnChanged(v484, 0LL, 0LL);
          break;
        case 0x28u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 856;
          }
          else
          {
            v154 = v7 - 12;
            v155 = (CRenderData *)CResourceTable::GetResource(v11, v6[1], 0x23u);
            if ( v155 )
            {
              v156 = CRenderData::ProcessUpdate(
                       v155,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_RENDERDATA *)v6,
                       v6 + 3,
                       v154);
              v13 = v156;
              if ( v156 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v156, 0x36Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 874;
          }
          goto LABEL_807;
        case 0x29u:
          if ( (_DWORD)v7 == 20 )
          {
            v485 = (CTileLegacyMilBrush *)CResourceTable::GetResource(v11, v6[1], 0x4Bu);
            if ( v485 )
            {
              v487 = CTileLegacyMilBrush::ProcessSetSourceModifications(
                       v485,
                       v486,
                       (const struct MILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS *)v6);
              v13 = v487;
              if ( v487 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v487, 0x389u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 901;
          }
          else
          {
            v860 = 886;
          }
          goto LABEL_807;
        case 0x2Au:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 913;
            goto LABEL_807;
          }
          if ( CResourceTable::GetResource(v11, v6[1], 0x20u) )
          {
            v13 = -2147418113;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x3A4u);
          }
          else
          {
            v13 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x3A0u);
          }
          goto LABEL_808;
        case 0x2Cu:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 967;
            goto LABEL_807;
          }
          v367 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
          if ( !v367 )
          {
            v860 = 982;
            goto LABEL_807;
          }
          CVisual::SetRelativeOffset(v367, *((double *)v6 + 1), *((double *)v6 + 2));
          break;
        case 0x2Du:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 994;
            goto LABEL_807;
          }
          if ( !HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v11 + 16), v6[1])
            || (v19 = *(_QWORD *)(v11 + 40) + (unsigned int)(v16 * *(_DWORD *)(v11 + 24)), !*(_QWORD *)(v19 + 8))
            || ((v20 = *(_QWORD *)(v19 + 8),
                 v21 = (unsigned int)(v17 + 8),
                 v22 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 48LL),
                 v22 != CWindowNode::IsOfType)
              ? (v22 != v18
               ? (v23 = v22(v20, v21))
               : (v23 = CVisual::IsOfType(v20, v21)))
              : (v23 = CWindowNode::IsOfType(v20, v21)),
                !v23 || (v24 = *(float **)(v19 + 8)) == 0LL) )
          {
            v860 = 1009;
LABEL_807:
            v13 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v860);
            goto LABEL_808;
          }
          v25 = *((double *)v6 + 1);
          v26 = *((double *)v6 + 2);
          if ( v24[46] != v25 || v24[47] != v26 )
          {
            v24[46] = v25;
            v24[47] = v26;
            CVisual::PropagateFlags((struct CVisual *)v24, 1, 1, 0, 0, 0, 0);
            CVisual::OnOuterTransformChanged((CVisual *)v24);
            *(float *)v866 = v25;
            *(float *)&v866[1] = v26;
            CPropertyChangeResource::NotifyVector2PropertyChanged(
              (CPropertyChangeResource *)v24,
              26LL,
              (const struct D2DVector2 *)v866);
            CResource::InvalidateAnimationSources((CResource *)v24, 0x1Au);
          }
          break;
        case 0x2Eu:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 1021;
            goto LABEL_807;
          }
          v354 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
          if ( !v354 )
          {
            v860 = 1036;
            goto LABEL_807;
          }
          CVisual::SetRelativeSize(v354, *((double *)v6 + 1), *((double *)v6 + 2));
          break;
        case 0x2Fu:
          if ( (_DWORD)v7 == 12 )
          {
            v183 = v6[2];
            if ( v183 && !CResourceTable::GetResource(v11, v183, 0x18u) )
            {
              v860 = 1065;
            }
            else
            {
              v184 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v184 )
              {
                v185 = CVisual::ProcessSetTransform(
                         v184,
                         (const struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_SETTRANSFORM *)v6);
                v13 = v185;
                if ( v185 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v185, 0x43Au);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1078;
            }
          }
          else
          {
            v860 = 1048;
          }
          goto LABEL_807;
        case 0x30u:
          if ( (_DWORD)v7 == 16 )
          {
            v310 = v6[2];
            if ( v310 && !CResourceTable::GetResource(v11, v310, 0x20u) )
            {
              v860 = 1107;
            }
            else
            {
              v311 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v311 )
              {
                v312 = CVisual::ProcessSetTransformParent(
                         v311,
                         (const struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_SETTRANSFORMPARENT *)v6);
                v13 = v312;
                if ( v312 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v312, 0x464u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1120;
            }
          }
          else
          {
            v860 = 1090;
          }
          goto LABEL_807;
        case 0x31u:
          if ( (_DWORD)v7 == 12 )
          {
            v193 = v6[2];
            if ( v193 && !CResourceTable::GetResource(v11, v193, 7u) )
            {
              v860 = 1149;
            }
            else
            {
              v194 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v194 )
              {
                v195 = CVisual::ProcessSetEffect(
                         v194,
                         (const struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_SETEFFECT *)v6);
                v13 = v195;
                if ( v195 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v195, 0x48Eu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1162;
            }
          }
          else
          {
            v860 = 1132;
          }
          goto LABEL_807;
        case 0x32u:
          if ( (_DWORD)v7 == 12 )
          {
            v158 = v6[2];
            if ( v158 && !CResourceTable::GetResource(v11, v158, 0x42u) )
            {
              v860 = 1191;
            }
            else
            {
              v159 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v159 )
              {
                v160 = CVisual::ProcessSetClip(
                         v159,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_SETCLIP *)v6);
                v13 = v160;
                if ( v160 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0x4B8u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1204;
            }
          }
          else
          {
            v860 = 1174;
          }
          goto LABEL_807;
        case 0x33u:
          if ( (_DWORD)v7 == 48 )
          {
            v253 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v253 )
            {
              v255 = CVisual::ProcessSetRenderOptions(v253, v254, (const struct MILCMD_VISUAL_SETRENDEROPTIONS *)v6);
              v13 = v255;
              if ( v255 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v255, 0x4D3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1231;
          }
          else
          {
            v860 = 1216;
          }
          goto LABEL_807;
        case 0x34u:
          if ( (_DWORD)v7 == 16 )
          {
            v282 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v282 )
            {
              v284 = CVisual::ProcessSetOptions(v282, v283, (const struct MILCMD_VISUAL_SETOPTIONS *)v6);
              v13 = v284;
              if ( v284 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v284, 0x4EEu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1258;
          }
          else
          {
            v860 = 1243;
          }
          goto LABEL_807;
        case 0x35u:
          if ( (_DWORD)v7 == 12 )
          {
            v138 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v138 )
            {
              v139 = CVisual::ProcessSetContent(
                       v138,
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_VISUAL_SETCONTENT *)v6);
              v13 = v139;
              if ( v139 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v139, 0x509u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1285;
          }
          else
          {
            v860 = 1270;
          }
          goto LABEL_807;
        case 0x36u:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 1297;
            goto LABEL_807;
          }
          v192 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
          if ( !v192 )
          {
            v860 = 1312;
            goto LABEL_807;
          }
          CVisual::RemoveAllChildren(v192);
          break;
        case 0x37u:
          if ( (_DWORD)v7 == 12 )
          {
            v144 = v6[2];
            if ( v144 && !CResourceTable::GetResource(v11, v144, 0x20u) )
            {
              v860 = 1341;
            }
            else
            {
              v145 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v145 )
              {
                v146 = CVisual::ProcessRemoveChild(
                         v145,
                         (const struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_REMOVECHILD *)v6);
                v13 = v146;
                if ( v146 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v146, 0x54Eu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1354;
            }
          }
          else
          {
            v860 = 1324;
          }
          goto LABEL_807;
        case 0x38u:
          if ( (_DWORD)v7 == 16 )
          {
            v80 = v6[2];
            if ( !v80
              || HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v11 + 16), v80)
              && (v84 = *(_QWORD *)(v11 + 40) + (unsigned int)(v81 * *(_DWORD *)(v11 + 24)), *(_QWORD *)(v84 + 8))
              && ((v85 = *(_QWORD *)(v84 + 8),
                   v86 = (unsigned int)(v82 + 16),
                   v87 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v85 + 48LL),
                   v87 != v83)
                ? (v87 != CWindowNode::IsOfType
                 ? (v88 = v87(v85, v86))
                 : (v88 = CWindowNode::IsOfType(v85, v86)))
                : (v88 = CVisual::IsOfType(v85, v86)),
                  v88 && *(_QWORD *)(v84 + 8)) )
            {
              if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v11 + 16), v6[1]) )
              {
                v91 = *(_QWORD *)(v11 + 40) + (unsigned int)(v89 * *(_DWORD *)(v11 + 24));
                if ( *(_QWORD *)(v91 + 8) )
                {
                  v92 = *(_QWORD *)(v91 + 8);
                  v93 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v92 + 48LL);
                  if ( v93 == v90 )
                    v94 = CVisual::IsOfType(v92, 32LL);
                  else
                    v94 = v93 == CWindowNode::IsOfType ? CWindowNode::IsOfType(v92, 32) : v93(v92, 32);
                  if ( v94 )
                  {
                    v95 = *(CVisual **)(v91 + 8);
                    if ( v95 )
                    {
                      inserted = CVisual::ProcessInsertChildAt(
                                   v95,
                                   (const struct CResourceTable *)v11,
                                   (const struct MILCMD_VISUAL_INSERTCHILDAT *)v6);
                      v13 = inserted;
                      if ( inserted < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x578u);
                        goto LABEL_808;
                      }
                      break;
                    }
                  }
                }
              }
              v860 = 1396;
            }
            else
            {
              v860 = 1383;
            }
          }
          else
          {
            v860 = 1366;
          }
          goto LABEL_807;
        case 0x39u:
          if ( (_DWORD)v7 == 16 )
          {
            v273 = v6[2];
            if ( v273 && !CResourceTable::GetResource(v11, v273, 0x20u) )
            {
              v860 = 1425;
            }
            else
            {
              v274 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v274 )
              {
                v275 = CVisual::ProcessMoveChild(
                         v274,
                         (const struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_MOVECHILD *)v6);
                v13 = v275;
                if ( v275 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v275, 0x5A2u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1438;
            }
          }
          else
          {
            v860 = 1408;
          }
          goto LABEL_807;
        case 0x3Au:
          if ( (_DWORD)v7 == 12 )
          {
            v488 = v6[2];
            if ( v488 && !CResourceTable::GetResource(v11, v488, 0x35u) )
            {
              v860 = 1467;
            }
            else
            {
              v489 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v489 )
              {
                v490 = CVisual::ProcessSetColorTransform(
                         v489,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_SETCOLORTRANSFORM *)v6);
                v13 = v490;
                if ( v490 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v490, 0x5CCu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1480;
            }
          }
          else
          {
            v860 = 1450;
          }
          goto LABEL_807;
        case 0x3Bu:
          if ( (_DWORD)v7 == 20 )
          {
            v335 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v335 )
            {
              v337 = CVisual::ProcessTopLevelNode(v335, v336, (const struct MILCMD_VISUAL_TOPLEVELNODE *)v6);
              v13 = v337;
              if ( v337 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v337, 0x5E7u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1507;
          }
          else
          {
            v860 = 1492;
          }
          goto LABEL_807;
        case 0x3Cu:
          if ( (_DWORD)v7 == 8 )
          {
            v356 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v356 )
            {
              v359 = CVisual::ProcessSetModesToDefault(v356, v357, v358);
              v13 = v359;
              if ( v359 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v359, 0x602u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1534;
          }
          else
          {
            v860 = 1519;
          }
          goto LABEL_807;
        case 0x3Du:
          if ( (_DWORD)v7 == 28 )
          {
            v491 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v491 )
            {
              v493 = CVisual::ProcessSetHeatMapMode(v491, v492, (const struct MILCMD_VISUAL_SETHEATMAPMODE *)v6);
              v13 = v493;
              if ( v493 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v493, 0x61Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1561;
          }
          else
          {
            v860 = 1546;
          }
          goto LABEL_807;
        case 0x3Eu:
          if ( (_DWORD)v7 == 12 )
          {
            v494 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v494 )
            {
              v496 = CVisual::ProcessSetRedrawRegionMode(
                       v494,
                       v495,
                       (const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *)v6);
              v13 = v496;
              if ( v496 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v496, 0x638u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1588;
          }
          else
          {
            v860 = 1573;
          }
          goto LABEL_807;
        case 0x3Fu:
          if ( (_DWORD)v7 == 12 )
          {
            v350 = v6[2];
            if ( v350 && ((v351 = CResourceTable::GetResource(v11, v350, 0x66u)) == 0 || v351 == 8) )
            {
              v860 = 1617;
            }
            else
            {
              v352 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
              if ( v352 )
              {
                v353 = CVisual::ProcessSetInteraction(
                         v352,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_VISUAL_SETINTERACTION *)v6);
                v13 = v353;
                if ( v353 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v353, 0x662u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 1630;
            }
          }
          else
          {
            v860 = 1600;
          }
          goto LABEL_807;
        case 0x40u:
          if ( (_DWORD)v7 == 16 )
          {
            v497 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v497 )
            {
              v499 = CVisual::ProcessExposeToCoRenderer(v497, v498, (const struct MILCMD_VISUAL_EXPOSETOCORENDERER *)v6);
              v13 = v499;
              if ( v499 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v499, 0x67Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1657;
          }
          else
          {
            v860 = 1642;
          }
          goto LABEL_807;
        case 0x41u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 1669;
            goto LABEL_807;
          }
          v157 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
          if ( !v157 )
          {
            v860 = 1684;
            goto LABEL_807;
          }
          CVisual::SetOpacity(v157, *((float *)v6 + 2));
          break;
        case 0x42u:
          if ( (_DWORD)v7 == 12 )
          {
            v500 = (CVisual *)CResourceTable::GetResource(v11, v6[1], 0x20u);
            if ( v500 )
            {
              v501 = CVisual::ProcessSetTreeEffect(
                       v500,
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_VISUAL_SETTREEEFFECT *)v6);
              v13 = v501;
              if ( v501 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v501, 0x6B3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1711;
          }
          else
          {
            v860 = 1696;
          }
          goto LABEL_807;
        case 0x43u:
          if ( (_DWORD)v7 == 12 )
          {
            v502 = (CSpriteVisual *)CResourceTable::GetResource(v11, v6[1], 0x21u);
            if ( v502 )
            {
              v503 = CSpriteVisual::ProcessSetBrush(
                       v502,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_SPRITEVISUAL_SETBRUSH *)v6);
              v13 = v503;
              if ( v503 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v503, 0x6CEu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1738;
          }
          else
          {
            v860 = 1723;
          }
          goto LABEL_807;
        case 0x44u:
          if ( (_DWORD)v7 == 12 )
          {
            v504 = (CSpriteVisual *)CResourceTable::GetResource(v11, v6[1], 0x21u);
            if ( v504 )
            {
              v505 = CSpriteVisual::ProcessSetShadow(
                       v504,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_SPRITEVISUAL_SETSHADOW *)v6);
              v13 = v505;
              if ( v505 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v505, 0x6E9u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1765;
          }
          else
          {
            v860 = 1750;
          }
          goto LABEL_807;
        case 0x45u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 1777;
            goto LABEL_807;
          }
          v506 = (CColorBrush *)CResourceTable::GetResource(v11, v6[1], 0x4Eu);
          if ( !v506 )
          {
            v860 = 1792;
            goto LABEL_807;
          }
          CColorBrush::SetColor(v506, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4), *((float *)v6 + 5));
          break;
        case 0x46u:
          if ( (_DWORD)v7 == 28 )
          {
            v507 = (CSurfaceBrush *)CResourceTable::GetResource(v11, v6[1], 0x50u);
            if ( v507 )
            {
              v508 = CSurfaceBrush::ProcessSetSurface(
                       v507,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_SURFACEBRUSH_SETSURFACE *)v6);
              v13 = v508;
              if ( v508 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v508, 0x71Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1819;
          }
          else
          {
            v860 = 1804;
          }
          goto LABEL_807;
        case 0x47u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 1831;
            goto LABEL_807;
          }
          v509 = (CSpriteVisualContent *)CResourceTable::GetResource(v11, v6[1], 0x50u);
          if ( !v509 )
          {
            v860 = 1846;
            goto LABEL_807;
          }
          *((_DWORD *)v509 + 32) = v6[2];
          CSpriteVisualContent::ReleasePrimitiveCaches(v509);
          break;
        case 0x48u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 1858;
            goto LABEL_807;
          }
          v510 = (CSpriteVisualContent *)CResourceTable::GetResource(v11, v6[1], 0x50u);
          if ( !v510 )
          {
            v860 = 1873;
            goto LABEL_807;
          }
          *((_DWORD *)v510 + 33) = v6[2];
          CSpriteVisualContent::ReleasePrimitiveCaches(v510);
          break;
        case 0x49u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 1885;
            goto LABEL_807;
          }
          v511 = (CSpriteVisualContent *)CResourceTable::GetResource(v11, v6[1], 0x50u);
          if ( !v511 )
          {
            v860 = 1900;
            goto LABEL_807;
          }
          *((_DWORD *)v511 + 34) = v6[2];
          CSpriteVisualContent::ReleasePrimitiveCaches(v511);
          break;
        case 0x4Au:
          if ( (_DWORD)v7 == 12 )
          {
            v512 = (CSurfaceBrush *)CResourceTable::GetResource(v11, v6[1], 0x50u);
            if ( v512 )
            {
              v514 = CSurfaceBrush::ProcessSetInterpolationMode(
                       v512,
                       v513,
                       (const struct MILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE *)v6);
              v13 = v514;
              if ( v514 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v514, 0x78Bu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1927;
          }
          else
          {
            v860 = 1912;
          }
          goto LABEL_807;
        case 0x4Bu:
          if ( (_DWORD)v7 == 12 )
          {
            v515 = (CSurfaceBrush *)CResourceTable::GetResource(v11, v6[1], 0x50u);
            if ( v515 )
            {
              v516 = CSurfaceBrush::ProcessSetTransform(
                       v515,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_SURFACEBRUSH_SETTRANSFORM *)v6);
              v13 = v516;
              if ( v516 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v516, 0x7A6u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1954;
          }
          else
          {
            v860 = 1939;
          }
          goto LABEL_807;
        case 0x4Cu:
          if ( (_DWORD)v7 == 12 )
          {
            v517 = (CEffectBrush *)CResourceTable::GetResource(v11, v6[1], 0x51u);
            if ( v517 )
            {
              v518 = CEffectBrush::ProcessSetTemplate(
                       v517,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *)v6);
              v13 = v518;
              if ( v518 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v518, 0x7C1u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 1981;
          }
          else
          {
            v860 = 1966;
          }
          goto LABEL_807;
        case 0x4Du:
          if ( (_DWORD)v7 == 12 )
          {
            v519 = (CEffectBrush *)CResourceTable::GetResource(v11, v6[1], 0x51u);
            if ( v519 )
            {
              v520 = CEffectBrush::ProcessSetPropertyBag(
                       v519,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_EFFECTBRUSH_SETPROPERTYBAG *)v6);
              v13 = v520;
              if ( v520 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v520, 0x7DCu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2008;
          }
          else
          {
            v860 = 1993;
          }
          goto LABEL_807;
        case 0x4Eu:
          if ( (_DWORD)v7 == 16 )
          {
            v521 = (CEffectBrush *)CResourceTable::GetResource(v11, v6[1], 0x51u);
            if ( v521 )
            {
              v522 = CEffectBrush::ProcessSetInput(
                       v521,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_EFFECTBRUSH_SETINPUT *)v6);
              v13 = v522;
              if ( v522 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v522, 0x7F7u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2035;
          }
          else
          {
            v860 = 2020;
          }
          goto LABEL_807;
        case 0x4Fu:
          if ( (_DWORD)v7 == 12 )
          {
            v523 = (CMaskBrush *)CResourceTable::GetResource(v11, v6[1], 0x52u);
            if ( v523 )
            {
              v524 = CMaskBrush::ProcessSetSource(
                       v523,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_MASKBRUSH_SETSOURCE *)v6);
              v13 = v524;
              if ( v524 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v524, 0x812u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2062;
          }
          else
          {
            v860 = 2047;
          }
          goto LABEL_807;
        case 0x50u:
          if ( (_DWORD)v7 == 12 )
          {
            v525 = (CMaskBrush *)CResourceTable::GetResource(v11, v6[1], 0x52u);
            if ( v525 )
            {
              v526 = CMaskBrush::ProcessSetMask(
                       v525,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_MASKBRUSH_SETMASK *)v6);
              v13 = v526;
              if ( v526 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v526, 0x82Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2089;
          }
          else
          {
            v860 = 2074;
          }
          goto LABEL_807;
        case 0x51u:
          if ( (_DWORD)v7 == 36 )
          {
            v527 = (CLinearGradientBrush *)CResourceTable::GetResource(v11, v6[1], 0x53u);
            if ( v527 )
            {
              v528 = CLinearGradientBrush::ProcessSetSurface(
                       v527,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_LINEARGRADIENTBRUSH_SETSURFACE *)v6);
              v13 = v528;
              if ( v528 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v528, 0x848u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2116;
          }
          else
          {
            v860 = 2101;
          }
          goto LABEL_807;
        case 0x52u:
          if ( (_DWORD)v7 != 16 )
          {
            v860 = 2128;
            goto LABEL_807;
          }
          v529 = (CLinearGradientBrush *)CResourceTable::GetResource(v11, v6[1], 0x53u);
          if ( !v529 )
          {
            v860 = 2143;
            goto LABEL_807;
          }
          CLinearGradientBrush::SetStartPoint(v529, (const struct D2D_POINT_2F *)v6 + 1);
          break;
        case 0x53u:
          if ( (_DWORD)v7 != 16 )
          {
            v860 = 2155;
            goto LABEL_807;
          }
          v530 = (CLinearGradientBrush *)CResourceTable::GetResource(v11, v6[1], 0x53u);
          if ( !v530 )
          {
            v860 = 2170;
            goto LABEL_807;
          }
          CLinearGradientBrush::SetEndPoint(v530, (const struct D2D_POINT_2F *)v6 + 1);
          break;
        case 0x54u:
          if ( (_DWORD)v7 == 12 )
          {
            v531 = (CNineGridBrush *)CResourceTable::GetResource(v11, v6[1], 0x54u);
            if ( v531 )
            {
              v532 = CNineGridBrush::ProcessSetSource(
                       v531,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_NINEGRIDBRUSH_SETSOURCE *)v6);
              v13 = v532;
              if ( v532 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v532, 0x899u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2197;
          }
          else
          {
            v860 = 2182;
          }
          goto LABEL_807;
        case 0x55u:
          if ( (_DWORD)v7 == 16 )
          {
            v533 = (CNineGridBrush *)CResourceTable::GetResource(v11, v6[1], 0x54u);
            if ( v533 )
            {
              v535 = CNineGridBrush::ProcessSetInsetProperty(
                       v533,
                       v534,
                       (const struct MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *)v6);
              v13 = v535;
              if ( v535 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v535, 0x8B4u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2224;
          }
          else
          {
            v860 = 2209;
          }
          goto LABEL_807;
        case 0x56u:
          if ( (_DWORD)v7 == 12 )
          {
            v536 = (CNineGridBrush *)CResourceTable::GetResource(v11, v6[1], 0x54u);
            if ( v536 )
            {
              IsCenterHollow = CNineGridBrush::ProcessSetIsCenterHollow(
                                 v536,
                                 v537,
                                 (const struct MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW *)v6);
              v13 = IsCenterHollow;
              if ( IsCenterHollow < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, IsCenterHollow, 0x8CFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2251;
          }
          else
          {
            v860 = 2236;
          }
          goto LABEL_807;
        case 0x57u:
          if ( (_DWORD)v7 == 24 )
          {
            v246 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v246 )
            {
              v248 = CWindowNode::ProcessCreate(v246, v247, (const struct MILCMD_WINDOWNODE_CREATE *)v6);
              v13 = v248;
              if ( v248 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v248, 0x8EAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2278;
          }
          else
          {
            v860 = 2263;
          }
          goto LABEL_807;
        case 0x58u:
          if ( (_DWORD)v7 == 8 )
          {
            v285 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v285 )
            {
              v286 = CWindowNode::Detach(v285);
              v13 = v286;
              if ( v286 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v286, 0x905u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2305;
          }
          else
          {
            v860 = 2290;
          }
          goto LABEL_807;
        case 0x59u:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 2317;
            goto LABEL_807;
          }
          v539 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
          if ( !v539 )
          {
            v860 = 2332;
            goto LABEL_807;
          }
          CWindowNode::FlushVistaBltTokens(v539);
          break;
        case 0x5Au:
          if ( (_DWORD)v7 != 40 )
          {
            v860 = 2344;
            goto LABEL_807;
          }
          v252 = CResourceTable::GetResource(v11, v6[1], 0x22u);
          if ( !v252 )
          {
            v860 = 2359;
            goto LABEL_807;
          }
          *(_OWORD *)(v252 + 680) = *(_OWORD *)(v6 + 2);
          *(_OWORD *)(v252 + 664) = *(_OWORD *)(v6 + 6);
          break;
        case 0x5Bu:
          if ( (_DWORD)v7 == 56 )
          {
            v114 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v114 )
            {
              v115 = CWindowNode::ProcessSetBounds(
                       v114,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_WINDOWNODE_SETBOUNDS *)v6);
              v13 = v115;
              if ( v115 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v115, 0x956u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2386;
          }
          else
          {
            v860 = 2371;
          }
          goto LABEL_807;
        case 0x5Cu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 2398;
          }
          else
          {
            v540 = v7 - 12;
            v541 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v541 )
            {
              v543 = CWindowNode::ProcessAddDirtyRegion(
                       v541,
                       v542,
                       (const struct MILCMD_WINDOWNODE_ADDDIRTYREGION *)v6,
                       v6 + 3,
                       v540);
              v13 = v543;
              if ( v543 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v543, 0x974u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2416;
          }
          goto LABEL_807;
        case 0x5Du:
          if ( (_DWORD)v7 != 16 )
          {
            v860 = 2428;
            goto LABEL_807;
          }
          v300 = CResourceTable::GetResource(v11, v6[1], 0x22u);
          if ( !v300 )
          {
            v860 = 2443;
            goto LABEL_807;
          }
          *(_QWORD *)(v300 + 640) = *((_QWORD *)v6 + 1);
          break;
        case 0x5Eu:
          if ( (_DWORD)v7 == 64 )
          {
            v544 = v6[2];
            if ( v544 && ((v545 = CResourceTable::GetResource(v11, v544, 0x5Bu)) == 0 || v545 == 16) )
            {
              v860 = 2472;
            }
            else
            {
              v546 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
              if ( v546 )
              {
                v547 = CWindowNode::ProcessNotifyDxUpdate(
                         v546,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_WINDOWNODE_NOTIFYDXUPDATE *)v6);
                v13 = v547;
                if ( v547 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v547, 0x9B9u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 2485;
            }
          }
          else
          {
            v860 = 2455;
          }
          goto LABEL_807;
        case 0x5Fu:
          if ( (_DWORD)v7 == 12 )
          {
            v295 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v295 )
            {
              v296 = CWindowNode::ProcessSetSpriteImage(
                       v295,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_WINDOWNODE_SETSPRITEIMAGE *)v6);
              v13 = v296;
              if ( v296 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v296, 0x9D4u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2512;
          }
          else
          {
            v860 = 2497;
          }
          goto LABEL_807;
        case 0x60u:
          if ( (_DWORD)v7 == 12 )
          {
            v224 = v6[2];
            if ( v224 && ((v469 = CResourceTable::GetResource(v11, v224, 0x5Bu)) == 0 || v469 == 16) )
            {
              v860 = 2541;
            }
            else
            {
              v225 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
              if ( v225 )
              {
                v226 = CWindowNode::ProcessSetDxImage(
                         v225,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_WINDOWNODE_SETDXIMAGE *)v6);
                v13 = v226;
                if ( v226 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v226, 0x9FEu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 2554;
            }
          }
          else
          {
            v860 = 2524;
          }
          goto LABEL_807;
        case 0x61u:
          if ( (_DWORD)v7 == 16 )
          {
            v116 = v6[3];
            if ( !v116 || CResourceTable::GetResource(v11, v116, 0x46u) )
            {
              v117 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
              if ( v117 )
              {
                v118 = CWindowNode::ProcessSetSpriteClip(
                         v117,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_WINDOWNODE_SETSPRITECLIP *)v6);
                v13 = v118;
                if ( v118 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0xA28u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 2596;
            }
            else
            {
              v860 = 2583;
            }
          }
          else
          {
            v860 = 2566;
          }
          goto LABEL_807;
        case 0x62u:
          if ( (_DWORD)v7 == 12 )
          {
            v221 = v6[2];
            if ( !v221 || CResourceTable::GetResource(v11, v221, 0x42u) )
            {
              v222 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
              if ( v222 )
              {
                v223 = CWindowNode::ProcessSetDxClip(
                         v222,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_WINDOWNODE_SETDXCLIP *)v6);
                v13 = v223;
                if ( v223 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v223, 0xA52u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 2638;
            }
            else
            {
              v860 = 2625;
            }
          }
          else
          {
            v860 = 2608;
          }
          goto LABEL_807;
        case 0x63u:
          if ( (_DWORD)v7 == 20 )
          {
            v119 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v119 )
            {
              v121 = CWindowNode::ProcessSetSourceModifications(
                       v119,
                       v120,
                       (const struct MILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *)v6);
              v13 = v121;
              if ( v121 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, 0xA6Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2665;
          }
          else
          {
            v860 = 2650;
          }
          goto LABEL_807;
        case 0x64u:
          if ( (_DWORD)v7 == 24 )
          {
            v122 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v122 )
            {
              v124 = CWindowNode::ProcessSetAlphaMargins(
                       v122,
                       v123,
                       (const struct MILCMD_WINDOWNODE_SETALPHAMARGINS *)v6);
              v13 = v124;
              if ( v124 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v124, 0xA88u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2692;
          }
          else
          {
            v860 = 2677;
          }
          goto LABEL_807;
        case 0x65u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 2704;
            goto LABEL_807;
          }
          v397 = CResourceTable::GetResource(v11, v6[1], 0x22u);
          if ( !v397 )
          {
            v860 = 2719;
            goto LABEL_807;
          }
          *(_BYTE *)(v397 + 1004) = v6[2] != 0;
          break;
        case 0x66u:
          if ( (_DWORD)v7 == 12 )
          {
            v290 = v6[2];
            if ( v290 && !CResourceTable::GetResource(v11, v290, 0x22u) )
            {
              v860 = 2748;
            }
            else
            {
              v291 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
              if ( v291 )
              {
                v292 = CWindowNode::ProcessCopyCompositorOwnedResources(
                         v291,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *)v6);
                v13 = v292;
                if ( v292 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v292, 0xACDu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 2761;
            }
          }
          else
          {
            v860 = 2731;
          }
          goto LABEL_807;
        case 0x67u:
          if ( (_DWORD)v7 == 24 )
          {
            v329 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v329 )
            {
              v331 = CWindowNode::ProcessSetMaximizedClipMargins(
                       v329,
                       v330,
                       (const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *)v6);
              v13 = v331;
              if ( v331 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v331, 0xAE8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2788;
          }
          else
          {
            v860 = 2773;
          }
          goto LABEL_807;
        case 0x68u:
          if ( (_DWORD)v7 == 8 )
          {
            v548 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v548 )
            {
              v551 = CWindowNode::ProcessNotifyVisRgnUpdate(v548, v549, v550);
              v13 = v551;
              if ( v551 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v551, 0xB03u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2815;
          }
          else
          {
            v860 = 2800;
          }
          goto LABEL_807;
        case 0x69u:
          if ( (_DWORD)v7 == 12 )
          {
            v552 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v552 )
            {
              v554 = CWindowNode::ProcessSetDxAlpha(v552, v553, (const struct MILCMD_WINDOWNODE_SETDXALPHA *)v6);
              v13 = v554;
              if ( v554 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v554, 0xB1Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2842;
          }
          else
          {
            v860 = 2827;
          }
          goto LABEL_807;
        case 0x6Au:
          if ( (_DWORD)v7 == 16 )
          {
            v555 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v555 )
            {
              v557 = CWindowNode::ProcessSetCompositionSurface(
                       v555,
                       v556,
                       (const struct MILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *)v6);
              v13 = v557;
              if ( v557 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v557, 0xB39u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2869;
          }
          else
          {
            v860 = 2854;
          }
          goto LABEL_807;
        case 0x6Bu:
          if ( (_DWORD)v7 == 12 )
          {
            v558 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v558 )
            {
              v560 = CWindowNode::ProcessProtectContent(v558, v559, (const struct MILCMD_WINDOWNODE_PROTECTCONTENT *)v6);
              v13 = v560;
              if ( v560 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v560, 0xB54u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2896;
          }
          else
          {
            v860 = 2881;
          }
          goto LABEL_807;
        case 0x6Cu:
          if ( (_DWORD)v7 == 60 )
          {
            v561 = v6[2];
            if ( v561 && ((v562 = CResourceTable::GetResource(v11, v561, 0x5Bu)) == 0 || v562 == 16) )
            {
              v860 = 2925;
            }
            else
            {
              v563 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
              if ( v563 )
              {
                v564 = CWindowNode::ProcessNotifyDxImmediateUpdate(
                         v563,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE *)v6);
                v13 = v564;
                if ( v564 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v564, 0xB7Eu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 2938;
            }
          }
          else
          {
            v860 = 2908;
          }
          goto LABEL_807;
        case 0x6Du:
          if ( (_DWORD)v7 == 12 )
          {
            v297 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v297 )
            {
              v299 = CWindowNode::ProcessSetLayoutRTL(v297, v298, (const struct MILCMD_WINDOWNODE_SETLAYOUTRTL *)v6);
              v13 = v299;
              if ( v299 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v299, 0xB99u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2965;
          }
          else
          {
            v860 = 2950;
          }
          goto LABEL_807;
        case 0x6Eu:
          if ( (_DWORD)v7 == 12 )
          {
            v233 = (CWindowNode *)CResourceTable::GetResource(v11, v6[1], 0x22u);
            if ( v233 )
            {
              v235 = CWindowNode::ProcessSetLayeredWindow(
                       v233,
                       v234,
                       (const struct MILCMD_WINDOWNODE_SETLAYEREDWINDOW *)v6);
              v13 = v235;
              if ( v235 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v235, 0xBB4u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 2992;
          }
          else
          {
            v860 = 2977;
          }
          goto LABEL_807;
        case 0x6Fu:
          if ( (unsigned int)v7 < 0x10 )
          {
            v860 = 3004;
          }
          else
          {
            v565 = v7 - 16;
            v566 = (CVisualGroup *)CResourceTable::GetResource(v11, v6[1], 0x55u);
            if ( v566 )
            {
              v567 = CVisualGroup::ProcessUpdate(
                       v566,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_VISUALGROUP *)v6,
                       v6 + 4,
                       v565);
              v13 = v567;
              if ( v567 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v567, 0xBD2u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3022;
          }
          goto LABEL_807;
        case 0x70u:
          if ( (_DWORD)v7 == 12 )
          {
            v410 = v6[2];
            if ( v410 && !CResourceTable::GetResource(v11, v410, 0x1Du) )
            {
              v860 = 3051;
            }
            else
            {
              v411 = (struct CResource **)CResourceTable::GetResource(v11, v6[1], 0x42u);
              if ( v411 )
              {
                v412 = CGeometry::ProcessSetTransform(
                         v411,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_GEOMETRY_SETTRANSFORM *)v6);
                v13 = v412;
                if ( v412 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v412, 0xBFCu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3064;
            }
          }
          else
          {
            v860 = 3034;
          }
          goto LABEL_807;
        case 0x71u:
          if ( (_DWORD)v7 == 44 )
          {
            v236 = (CRectangleGeometry *)CResourceTable::GetResource(v11, v6[1], 0x44u);
            if ( v236 )
            {
              v238 = CRectangleGeometry::ProcessSetRectangle(
                       v236,
                       v237,
                       (const struct MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *)v6);
              v13 = v238;
              if ( v238 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v238, 0xC17u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3091;
          }
          else
          {
            v860 = 3076;
          }
          goto LABEL_807;
        case 0x72u:
          if ( (_DWORD)v7 == 12 )
          {
            v186 = (CRectangleGeometry *)CResourceTable::GetResource(v11, v6[1], 0x44u);
            if ( v186 )
            {
              v188 = CRectangleGeometry::ProcessSetLeftInset(
                       v186,
                       v187,
                       (const struct MILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *)v6);
              v13 = v188;
              if ( v188 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v188, 0xC32u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3118;
          }
          else
          {
            v860 = 3103;
          }
          goto LABEL_807;
        case 0x73u:
          if ( (_DWORD)v7 == 12 )
          {
            v189 = (CRectangleGeometry *)CResourceTable::GetResource(v11, v6[1], 0x44u);
            if ( v189 )
            {
              v191 = CRectangleGeometry::ProcessSetTopInset(
                       v189,
                       v190,
                       (const struct MILCMD_RECTANGLEGEOMETRY_SETTOPINSET *)v6);
              v13 = v191;
              if ( v191 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v191, 0xC4Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3145;
          }
          else
          {
            v860 = 3130;
          }
          goto LABEL_807;
        case 0x74u:
          if ( (_DWORD)v7 == 12 )
          {
            v177 = (CRectangleGeometry *)CResourceTable::GetResource(v11, v6[1], 0x44u);
            if ( v177 )
            {
              v179 = CRectangleGeometry::ProcessSetRightInset(
                       v177,
                       v178,
                       (const struct MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *)v6);
              v13 = v179;
              if ( v179 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v179, 0xC68u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3172;
          }
          else
          {
            v860 = 3157;
          }
          goto LABEL_807;
        case 0x75u:
          if ( (_DWORD)v7 == 12 )
          {
            v180 = (CRectangleGeometry *)CResourceTable::GetResource(v11, v6[1], 0x44u);
            if ( v180 )
            {
              v182 = CRectangleGeometry::ProcessSetBottomInset(
                       v180,
                       v181,
                       (const struct MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET *)v6);
              v13 = v182;
              if ( v182 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v182, 0xC83u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3199;
          }
          else
          {
            v860 = 3184;
          }
          goto LABEL_807;
        case 0x76u:
          if ( (_DWORD)v7 != 48 )
          {
            v860 = 3211;
            goto LABEL_807;
          }
          if ( CResourceTable::GetResource(v11, v6[1], 0x26u) )
            break;
          v860 = 3226;
          goto LABEL_807;
        case 0x77u:
          if ( (_DWORD)v7 == 40 )
          {
            v430 = (CDesktopRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x27u);
            if ( v430 )
            {
              v432 = CDesktopRenderTarget::ProcessCreate(
                       v430,
                       v431,
                       (const struct MILCMD_DESKTOPRENDERTARGET_CREATE *)v6);
              v13 = v432;
              if ( v432 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v432, 0xCB9u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3253;
          }
          else
          {
            v860 = 3238;
          }
          goto LABEL_807;
        case 0x78u:
          if ( (_DWORD)v7 == 8 )
          {
            v568 = (CDesktopRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x27u);
            if ( v568 )
            {
              v571 = CDesktopRenderTarget::ProcessRecreateDisplaySet(v568, v569, v570);
              v13 = v571;
              if ( v571 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v571, 0xCD4u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3280;
          }
          else
          {
            v860 = 3265;
          }
          goto LABEL_807;
        case 0x79u:
          if ( (_DWORD)v7 == 44 )
          {
            v572 = (CDesktopRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x27u);
            if ( v572 )
            {
              updated = CDesktopRenderTarget::ProcessUpdateMonitorRotation(
                          v572,
                          v573,
                          (const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *)v6);
              v13 = updated;
              if ( updated < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xCEFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3307;
          }
          else
          {
            v860 = 3292;
          }
          goto LABEL_807;
        case 0x7Au:
          if ( (_DWORD)v7 == 12 )
          {
            v575 = (CDesktopRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x27u);
            if ( v575 )
            {
              v577 = CDesktopRenderTarget::ProcessDisableStereoRendering(
                       v575,
                       v576,
                       (const struct MILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING *)v6);
              v13 = v577;
              if ( v577 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v577, 0xD0Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3334;
          }
          else
          {
            v860 = 3319;
          }
          goto LABEL_807;
        case 0x7Bu:
          if ( (_DWORD)v7 == 12 )
          {
            v381 = v6[2];
            if ( v381 && !CResourceTable::GetResource(v11, v381, 0x29u) )
            {
              v860 = 3363;
            }
            else
            {
              v382 = (CDesktopRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x27u);
              if ( v382 )
              {
                v383 = CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(
                         v382,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP *)v6);
                v13 = v383;
                if ( v383 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v383, 0xD34u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3376;
            }
          }
          else
          {
            v860 = 3346;
          }
          goto LABEL_807;
        case 0x7Cu:
          if ( (_DWORD)v7 == 36 )
          {
            v422 = (CDcompRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x28u);
            if ( v422 )
            {
              v424 = CDcompRenderTarget::ProcessCreate(v422, v423, (const struct MILCMD_DCOMPRENDERTARGET_CREATE *)v6);
              v13 = v424;
              if ( v424 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v424, 0xD4Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3403;
          }
          else
          {
            v860 = 3388;
          }
          goto LABEL_807;
        case 0x7Du:
          if ( (_DWORD)v7 == 44 )
          {
            v384 = (CDcompRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x28u);
            if ( v384 )
            {
              v386 = CDcompRenderTarget::ProcessUpdateTransform(
                       v384,
                       v385,
                       (const struct MILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM *)v6);
              v13 = v386;
              if ( v386 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v386, 0xD6Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3430;
          }
          else
          {
            v860 = 3415;
          }
          goto LABEL_807;
        case 0x7Eu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 3442;
            goto LABEL_807;
          }
          v425 = CResourceTable::GetResource(v11, v6[1], 0x28u);
          if ( !v425 )
          {
            v860 = 3457;
            goto LABEL_807;
          }
          *(_DWORD *)(*(_QWORD *)(v425 + 112) + 420LL) = v6[2];
          break;
        case 0x7Fu:
          if ( (_DWORD)v7 == 12 )
          {
            v433 = v6[2];
            if ( v433 && !CResourceTable::GetResource(v11, v433, 0x20u) )
            {
              v860 = 3486;
            }
            else
            {
              v434 = CResourceTable::GetResource(v11, v6[1], 0x25u);
              if ( v434 )
              {
                v435 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v434 + 112LL))(
                         v434,
                         v11,
                         v6);
                v13 = v435;
                if ( v435 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v435, 0xDAFu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3499;
            }
          }
          else
          {
            v860 = 3469;
          }
          goto LABEL_807;
        case 0x80u:
          if ( (_DWORD)v7 == 24 )
          {
            v578 = CResourceTable::GetResource(v11, v6[1], 0x25u);
            if ( v578 )
            {
              v579 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v578 + 120LL))(
                       v578,
                       v11,
                       v6);
              v13 = v579;
              if ( v579 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v579, 0xDCAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3526;
          }
          else
          {
            v860 = 3511;
          }
          goto LABEL_807;
        case 0x81u:
          if ( (_DWORD)v7 == 12 )
          {
            v580 = CResourceTable::GetResource(v11, v6[1], 0x25u);
            if ( v580 )
            {
              v581 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v580 + 128LL))(
                       v580,
                       v11,
                       v6);
              v13 = v581;
              if ( v581 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v581, 0xDE5u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3553;
          }
          else
          {
            v860 = 3538;
          }
          goto LABEL_807;
        case 0x82u:
          if ( (_DWORD)v7 == 12 )
          {
            v582 = CResourceTable::GetResource(v11, v6[1], 0x25u);
            if ( v582 )
            {
              v583 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v582 + 136LL))(
                       v582,
                       v11,
                       v6);
              v13 = v583;
              if ( v583 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v583, 0xE00u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3580;
          }
          else
          {
            v860 = 3565;
          }
          goto LABEL_807;
        case 0x83u:
          if ( (_DWORD)v7 == 52 )
          {
            v365 = CComposition::Target_CaptureBits(
                     v10,
                     (struct CChannelContext *)v4,
                     (struct CResourceTable *)v11,
                     (const struct MILCMD_TARGET_CAPTUREBITS *)v6);
            v13 = v365;
            if ( v365 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v365, 0xE13u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 3592;
          goto LABEL_807;
        case 0x84u:
          if ( (_DWORD)v7 == 72 )
          {
            v584 = CComposition::MetaBitmapRenderTarget_CaptureBits(
                     (CComposition *)v10,
                     (struct CChannelContext *)v4,
                     (struct CResourceTable *)v11,
                     (const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *)v6);
            v13 = v584;
            if ( v584 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v584, 0xE26u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 3611;
          goto LABEL_807;
        case 0x85u:
          if ( (_DWORD)v7 == 224 )
          {
            v585 = CComposition::MetaBitmapRenderTarget_Create(
                     (CComposition *)v10,
                     (struct CChannelContext *)&_ImageBase,
                     (struct CResourceTable *)v11,
                     (const struct MILCMD_METABITMAPRENDERTARGET_CREATE *)v6);
            v13 = v585;
            if ( v585 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v585, 0xE39u);
              goto LABEL_808;
            }
            break;
          }
          v860 = 3630;
          goto LABEL_807;
        case 0x86u:
          if ( (_DWORD)v7 == 12 )
          {
            v586 = v6[2];
            if ( v586 && !CResourceTable::GetResource(v11, v586, 0x3Au) )
            {
              v860 = 3666;
            }
            else
            {
              v587 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x36u);
              if ( v587 )
              {
                v588 = CMagnifierRenderTarget::ProcessSetTransform(
                         v587,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_METABITMAPRENDERTARGET_SETTRANSFORM *)v6);
                v13 = v588;
                if ( v588 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v588, 0xE63u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3679;
            }
          }
          else
          {
            v860 = 3649;
          }
          goto LABEL_807;
        case 0x87u:
          if ( (_DWORD)v7 == 12 )
          {
            v589 = v6[2];
            if ( v589 && !CResourceTable::GetResource(v11, v589, 0x35u) )
            {
              v860 = 3708;
            }
            else
            {
              v590 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x36u);
              if ( v590 )
              {
                v591 = CMagnifierRenderTarget::ProcessSetColorTransform(
                         v590,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM *)v6);
                v13 = v591;
                if ( v591 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v591, 0xE8Du);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3721;
            }
          }
          else
          {
            v860 = 3691;
          }
          goto LABEL_807;
        case 0x88u:
          if ( (_DWORD)v7 == 216 )
          {
            v592 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x36u);
            if ( v592 )
            {
              v594 = CMagnifierRenderTarget::ProcessUpdate(v592, v593, (const struct MILCMD_METABITMAPRENDERTARGET *)v6);
              v13 = v594;
              if ( v594 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v594, 0xEA8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3748;
          }
          else
          {
            v860 = 3733;
          }
          goto LABEL_807;
        case 0x89u:
          if ( (_DWORD)v7 == 12 )
          {
            v595 = v6[2];
            if ( v595 && !CResourceTable::GetResource(v11, v595, 0x55u) )
            {
              v860 = 3777;
            }
            else
            {
              v596 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x36u);
              if ( v596 )
              {
                v597 = CMagnifierRenderTarget::ProcessSetFilterList(
                         v596,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_METABITMAPRENDERTARGET_SETFILTERLIST *)v6);
                v13 = v597;
                if ( v597 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v597, 0xED2u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3790;
            }
          }
          else
          {
            v860 = 3760;
          }
          goto LABEL_807;
        case 0x8Au:
          if ( (_DWORD)v7 == 32 )
          {
            v598 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x36u);
            if ( v598 )
            {
              v600 = CMagnifierRenderTarget::ProcessSetSlicer(
                       v598,
                       v599,
                       (const struct MILCMD_METABITMAPRENDERTARGET_SETSLICER *)v6);
              v13 = v600;
              if ( v600 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v600, 0xEEDu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3817;
          }
          else
          {
            v860 = 3802;
          }
          goto LABEL_807;
        case 0x8Bu:
          if ( (_DWORD)v7 == 28 )
          {
            v601 = v6[6];
            if ( v601 && !CResourceTable::GetResource(v11, v601, 0x20u) )
            {
              v860 = 3846;
            }
            else
            {
              v602 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x37u);
              if ( v602 )
              {
                v603 = CIndirectSwapchainRenderTarget::ProcessCreate(
                         v602,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE *)v6);
                v13 = v603;
                if ( v603 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v603, 0xF17u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 3859;
            }
          }
          else
          {
            v860 = 3829;
          }
          goto LABEL_807;
        case 0x8Cu:
          if ( (_DWORD)v7 == 24 )
          {
            v604 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x37u);
            if ( v604 )
            {
              v606 = CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
                       v604,
                       v605,
                       (const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *)v6);
              v13 = v606;
              if ( v606 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v606, 0xF32u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3886;
          }
          else
          {
            v860 = 3871;
          }
          goto LABEL_807;
        case 0x8Du:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 3898;
            goto LABEL_807;
          }
          v607 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v11, v6[1], 0x37u);
          if ( !v607 )
          {
            v860 = 3913;
            goto LABEL_807;
          }
          CIndirectSwapchainRenderTarget::Unregister(v607);
          break;
        case 0x8Eu:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 3925;
            goto LABEL_807;
          }
          if ( CResourceTable::GetResource(v11, v6[1], 0x2Au) )
            break;
          v860 = 3940;
          goto LABEL_807;
        case 0x8Fu:
          if ( (_DWORD)v7 == 12 )
          {
            v608 = (CAnalogCompositor *)CResourceTable::GetResource(v11, v6[1], 0x2Au);
            if ( v608 )
            {
              v610 = CAnalogCompositor::ProcessSetExclusiveOpacity(
                       v608,
                       v609,
                       (const struct MILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY *)v6);
              v13 = v610;
              if ( v610 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v610, 0xF83u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 3967;
          }
          else
          {
            v860 = 3952;
          }
          goto LABEL_807;
        case 0x90u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 3979;
            goto LABEL_807;
          }
          if ( !CResourceTable::GetResource(v11, v6[1], 0x2Au) )
          {
            v860 = 3994;
            goto LABEL_807;
          }
          CAnalogCompositorClient::SetActiveExclusiveView(v611, v6[2]);
          break;
        case 0x91u:
          if ( (_DWORD)v7 == 24 )
          {
            v612 = (CAnalogExclusiveView *)CResourceTable::GetResource(v11, v6[1], 0x2Cu);
            if ( v612 )
            {
              v614 = CAnalogExclusiveView::ProcessCreate(
                       v612,
                       v613,
                       (const struct MILCMD_ANALOGEXCLUSIVEVIEW_CREATE *)v6);
              v13 = v614;
              if ( v614 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v614, 0xFB9u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4021;
          }
          else
          {
            v860 = 4006;
          }
          goto LABEL_807;
        case 0x92u:
          if ( (_DWORD)v7 == 12 )
          {
            v615 = (CAnalogExclusiveView *)CResourceTable::GetResource(v11, v6[1], 0x2Cu);
            if ( v615 )
            {
              v616 = CAnalogExclusiveView::ProcessSetSwapChain(
                       v615,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN *)v6);
              v13 = v616;
              if ( v616 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v616, 0xFD4u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4048;
          }
          else
          {
            v860 = 4033;
          }
          goto LABEL_807;
        case 0x93u:
          if ( (_DWORD)v7 == 20 )
          {
            v617 = (CAnalogTextureTarget *)CResourceTable::GetResource(v11, v6[1], 0x2Du);
            if ( v617 )
            {
              v619 = CAnalogTextureTarget::ProcessCreate(
                       v617,
                       v618,
                       (const struct MILCMD_ANALOGTEXTURETARGET_CREATE *)v6);
              v13 = v619;
              if ( v619 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v619, 0xFEFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4075;
          }
          else
          {
            v860 = 4060;
          }
          goto LABEL_807;
        case 0x94u:
          if ( (_DWORD)v7 == 16 )
          {
            v229 = (CBaseAnimation *)CResourceTable::GetResource(v11, v6[1], 0x57u);
            if ( v229 )
            {
              v230 = CBaseAnimation::ProcessAddBinding(
                       v229,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_BASEANIMATION_ADDBINDING *)v6);
              v13 = v230;
              if ( v230 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v230, 0x100Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4102;
          }
          else
          {
            v860 = 4087;
          }
          goto LABEL_807;
        case 0x95u:
          if ( (_DWORD)v7 == 16 )
          {
            v257 = (CBaseAnimation *)CResourceTable::GetResource(v11, v6[1], 0x57u);
            if ( v257 )
            {
              v258 = CBaseAnimation::ProcessRemoveBinding(
                       v257,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_BASEANIMATION_REMOVEBINDING *)v6);
              v13 = v258;
              if ( v258 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v258, 0x1025u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4129;
          }
          else
          {
            v860 = 4114;
          }
          goto LABEL_807;
        case 0x96u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 4141;
            goto LABEL_807;
          }
          v361 = CResourceTable::GetResource(v11, v6[1], 0x58u);
          if ( !v361 )
          {
            v860 = 4156;
            goto LABEL_807;
          }
          v362 = *((_QWORD *)v6 + 1);
          *(_QWORD *)(v361 + 200) = v362;
          *(_QWORD *)(v361 + 272) = v362;
          break;
        case 0x97u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 4168;
          }
          else
          {
            v398 = v7 - 12;
            v399 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v399 )
            {
              v401 = CAnimation::ProcessAppend(v399, v400, (const struct MILCMD_ANIMATION_APPEND *)v6, v6 + 3, v398);
              v13 = v401;
              if ( v401 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v401, 0x105Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4186;
          }
          goto LABEL_807;
        case 0x98u:
          if ( (_DWORD)v7 == 20 )
          {
            v227 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v227 )
            {
              v228 = CAnimation::ProcessSetPrimitives(
                       v227,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_ANIMATION_SETPRIMITIVES *)v6);
              v13 = v228;
              if ( v228 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v228, 0x1079u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4213;
          }
          else
          {
            v860 = 4198;
          }
          goto LABEL_807;
        case 0x99u:
          if ( (_DWORD)v7 == 24 )
          {
            v347 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v347 )
            {
              v349 = CAnimation::ProcessTelemetrySetAnimationScenarioGUID(
                       v347,
                       v348,
                       (const struct MILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *)v6);
              v13 = v349;
              if ( v349 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v349, 0x1094u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4240;
          }
          else
          {
            v860 = 4225;
          }
          goto LABEL_807;
        case 0x9Au:
          if ( (_DWORD)v7 == 12 )
          {
            v402 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v402 )
            {
              v403 = CAnimation::ProcessSetTrigger(
                       v402,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_ANIMATION_SETTRIGGER *)v6);
              v13 = v403;
              if ( v403 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v403, 0x10AFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4267;
          }
          else
          {
            v860 = 4252;
          }
          goto LABEL_807;
        case 0x9Bu:
          if ( (_DWORD)v7 == 48 )
          {
            v408 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v408 )
            {
              v409 = CAnimation::ProcessSetHandoff(
                       v408,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_ANIMATION_SETHANDOFF *)v6);
              v13 = v409;
              if ( v409 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v409, 0x10CAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4294;
          }
          else
          {
            v860 = 4279;
          }
          goto LABEL_807;
        case 0x9Cu:
          if ( (_DWORD)v7 == 12 )
          {
            v279 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v279 )
            {
              v281 = CAnimation::ProcessSetPaused(v279, v280, (const struct MILCMD_ANIMATION_SETPAUSED *)v6);
              v13 = v281;
              if ( v281 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v281, 0x10E5u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4321;
          }
          else
          {
            v860 = 4306;
          }
          goto LABEL_807;
        case 0x9Du:
          if ( (_DWORD)v7 == 24 )
          {
            v266 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v266 )
            {
              v268 = CAnimation::ProcessSetSeek(v266, v267, (const struct MILCMD_ANIMATION_SETSEEK *)v6);
              v13 = v268;
              if ( v268 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v268, 0x1100u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4348;
          }
          else
          {
            v860 = 4333;
          }
          goto LABEL_807;
        case 0x9Eu:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 4360;
            goto LABEL_807;
          }
          v256 = CResourceTable::GetResource(v11, v6[1], 0x58u);
          if ( !v256 )
          {
            v860 = 4375;
            goto LABEL_807;
          }
          *(_BYTE *)(v256 + 176) |= 8u;
          break;
        case 0x9Fu:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 4387;
            goto LABEL_807;
          }
          v404 = CResourceTable::GetResource(v11, v6[1], 0x58u);
          v405 = v404;
          if ( !v404 )
          {
            v860 = 4402;
            goto LABEL_807;
          }
          *(_DWORD *)(v404 + 240) = 0;
          DynArrayImpl<0>::ShrinkToSize(v404 + 216, 16LL);
          *(_DWORD *)(v405 + 248) = 0;
          break;
        case 0xA0u:
          if ( (unsigned int)v7 < 8 )
          {
            v860 = 4414;
          }
          else
          {
            v318 = v7 - 8;
            v319 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v319 )
            {
              v322 = CAnimation::ProcessAddTimeEvents(v319, v320, v321, v6 + 2, v318);
              v13 = v322;
              if ( v322 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v322, 0x1154u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4432;
          }
          goto LABEL_807;
        case 0xA1u:
          if ( (_DWORD)v7 == 12 )
          {
            v315 = (CAnimation *)CResourceTable::GetResource(v11, v6[1], 0x58u);
            if ( v315 )
            {
              v316 = CAnimation::ProcessSetCallbackId(
                       v315,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_ANIMATION_SETCALLBACKID *)v6);
              v13 = v316;
              if ( v316 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v316, 0x116Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4459;
          }
          else
          {
            v860 = 4444;
          }
          goto LABEL_807;
        case 0xA2u:
          if ( (_DWORD)v7 == 12 )
          {
            v620 = (CScalar *)CResourceTable::GetResource(v11, v6[1], 0x59u);
            if ( v620 )
            {
              v622 = CScalar::ProcessSetValue(v620, v621, (const struct MILCMD_SCALAR_SETVALUE *)v6);
              v13 = v622;
              if ( v622 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v622, 0x118Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4486;
          }
          else
          {
            v860 = 4471;
          }
          goto LABEL_807;
        case 0xA3u:
          if ( (_DWORD)v7 == 24 )
          {
            v623 = CResourceTable::GetResource(v11, v6[1], 0x63u);
            if ( v623 && v623 != 8 )
            {
              v625 = CPrimitiveColor::ProcessSetValue(
                       (CPrimitiveColor *)(v623 - 8),
                       v624,
                       (const struct MILCMD_PRIMITIVECOLOR_SETVALUE *)v6);
              v13 = v625;
              if ( v625 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v625, 0x11A5u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4513;
          }
          else
          {
            v860 = 4498;
          }
          goto LABEL_807;
        case 0xA4u:
          if ( (_DWORD)v7 == 16 )
          {
            v301 = CResourceTable::GetResource(v11, v6[1], 0x5Du);
            if ( v301 && v301 != 16 )
            {
              v302 = CGdiSpriteBitmap::ProcessUpdate(
                       (CGdiSpriteBitmap *)(v301 - 16),
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_GDISPRITEBITMAP *)v6);
              v13 = v302;
              if ( v302 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v302, 0x11C0u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4540;
          }
          else
          {
            v860 = 4525;
          }
          goto LABEL_807;
        case 0xA5u:
          if ( (_DWORD)v7 == 24 )
          {
            v231 = CResourceTable::GetResource(v11, v6[1], 0x5Du);
            if ( v231 && v231 != 16 )
            {
              v232 = CGdiSpriteBitmap::ProcessUpdateMargins(
                       (CGdiSpriteBitmap *)(v231 - 16),
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_GDISPRITEBITMAP_UPDATEMARGINS *)v6);
              v13 = v232;
              if ( v232 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v232, 0x11DBu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4567;
          }
          else
          {
            v860 = 4552;
          }
          goto LABEL_807;
        case 0xA6u:
          if ( (_DWORD)v7 == 12 )
          {
            v303 = CResourceTable::GetResource(v11, v6[1], 0x5Du);
            if ( v303 && v303 != 16 )
            {
              v304 = CGdiSpriteBitmap::ProcessUpdateSurface(
                       (CGdiSpriteBitmap *)(v303 - 16),
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_GDISPRITEBITMAP_UPDATESURFACE *)v6);
              v13 = v304;
              if ( v304 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v304, 0x11F6u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4594;
          }
          else
          {
            v860 = 4579;
          }
          goto LABEL_807;
        case 0xA7u:
          if ( (_DWORD)v7 == 8 )
          {
            v406 = CResourceTable::GetResource(v11, v6[1], 0x5Du);
            if ( v406 && v406 != 16 )
            {
              v407 = CGdiSpriteBitmap::ProcessUnmapSection(
                       (struct IBitmapSource **)(v406 - 16),
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_GDISPRITEBITMAP_UNMAPSECTION *)v6);
              v13 = v407;
              if ( v407 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v407, 0x1211u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4621;
          }
          else
          {
            v860 = 4606;
          }
          goto LABEL_807;
        case 0xA8u:
          if ( (_DWORD)v7 == 20 )
          {
            v464 = CResourceTable::GetResource(v11, v6[1], 0x5Du);
            if ( v464 && v464 != 16 )
            {
              v465 = CGdiSpriteBitmap::ProcessNotifyDirty(
                       (CGdiSpriteBitmap *)(v464 - 16),
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_GDISPRITEBITMAP_NOTIFYDIRTY *)v6);
              v13 = v465;
              if ( v465 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v465, 0x122Cu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4648;
          }
          else
          {
            v860 = 4633;
          }
          goto LABEL_807;
        case 0xA9u:
          if ( (_DWORD)v7 == 20 )
          {
            v626 = CResourceTable::GetResource(v11, v6[1], 0x5Bu);
            if ( v626 && v626 != 16 )
            {
              v628 = CFlipChain::ProcessCreate(
                       (CFlipChain *)(v626 - 16),
                       v627,
                       (const struct MILCMD_FLIPCHAIN_CREATE *)v6);
              v13 = v628;
              if ( v628 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v628, 0x1247u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4675;
          }
          else
          {
            v860 = 4660;
          }
          goto LABEL_807;
        case 0xAAu:
          if ( (_DWORD)v7 == 64 )
          {
            v629 = CResourceTable::GetResource(v11, v6[1], 0x5Bu);
            if ( v629 && v629 != 16 )
            {
              v631 = CFlipChain::ProcessInitializeSharedDataObjects(
                       (CFlipChain *)(v629 - 16),
                       v630,
                       (const struct MILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS *)v6);
              v13 = v631;
              if ( v631 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v631, 0x1262u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4702;
          }
          else
          {
            v860 = 4687;
          }
          goto LABEL_807;
        case 0xABu:
          if ( (_DWORD)v7 == 28 )
          {
            v632 = CResourceTable::GetResource(v11, v6[1], 0x5Bu);
            if ( v632 && v632 != 16 )
            {
              v634 = CFlipChain::ProcessRequestSharedHandle(
                       (CFlipChain *)(v632 - 16),
                       v633,
                       (const struct MILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE *)v6);
              v13 = v634;
              if ( v634 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v634, 0x127Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4729;
          }
          else
          {
            v860 = 4714;
          }
          goto LABEL_807;
        case 0xACu:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 4741;
            goto LABEL_807;
          }
          v635 = CResourceTable::GetResource(v11, v6[1], 0x5Bu);
          if ( !v635 || (v636 = v635 - 16) == 0 )
          {
            v860 = 4756;
            goto LABEL_807;
          }
          *(_OWORD *)(v636 + 152) = *(_OWORD *)(v6 + 2);
          break;
        case 0xADu:
          if ( (_DWORD)v7 == 8 )
          {
            v637 = CResourceTable::GetResource(v11, v6[1], 0x5Bu);
            if ( v637 && v637 != 16 )
            {
              v640 = CFlipChain::ProcessResetSourceFrameCounters((CFlipChain *)(v637 - 16), v638, v639);
              v13 = v640;
              if ( v640 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v640, 0x12B3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4783;
          }
          else
          {
            v860 = 4768;
          }
          goto LABEL_807;
        case 0xAEu:
          if ( (_DWORD)v7 == 24 )
          {
            v239 = (CCompositionSurfaceBitmap *)CResourceTable::GetResource(v11, v6[1], 0x5Cu);
            if ( v239 )
            {
              v240 = CCompositionSurfaceBitmap::ProcessUpdate(
                       v239,
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_COMPOSITIONSURFACEBITMAP *)v6);
              v13 = v240;
              if ( v240 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v240, 0x12CEu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4810;
          }
          else
          {
            v860 = 4795;
          }
          goto LABEL_807;
        case 0xAFu:
          if ( (_DWORD)v7 == 16 )
          {
            v641 = CResourceTable::GetResource(v11, v6[1], 0x5Eu);
            if ( v641 && v641 != 16 )
            {
              v642 = CHwndBitmap::ProcessUpdate(
                       (CHwndBitmap *)(v641 - 16),
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_HWNDBITMAP *)v6);
              v13 = v642;
              if ( v642 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v642, 0x12E9u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4837;
          }
          else
          {
            v860 = 4822;
          }
          goto LABEL_807;
        case 0xB0u:
          if ( (_DWORD)v7 == 12 )
          {
            v326 = v6[2];
            if ( v326 && !CResourceTable::GetResource(v11, v326, 0x20u) )
            {
              v860 = 4866;
            }
            else
            {
              v327 = CResourceTable::GetResource(v11, v6[1], 0x5Eu);
              if ( v327 && v327 != 16 )
              {
                v328 = CHwndBitmap::ProcessUpdateVisual(
                         (CHwndBitmap *)(v327 - 16),
                         (const struct CResourceTable *)v11,
                         (const struct MILCMD_HWNDBITMAP_UPDATEVISUAL *)v6);
                v13 = v328;
                if ( v328 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v328, 0x1313u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 4879;
            }
          }
          else
          {
            v860 = 4849;
          }
          goto LABEL_807;
        case 0xB1u:
          if ( (_DWORD)v7 == 24 )
          {
            v643 = (CSnapshot *)CResourceTable::GetResource(v11, v6[1], 0x65u);
            if ( v643 )
            {
              v644 = CSnapshot::ProcessUpdate(
                       v643,
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_SNAPSHOT *)v6);
              v13 = v644;
              if ( v644 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v644, 0x132Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4906;
          }
          else
          {
            v860 = 4891;
          }
          goto LABEL_807;
        case 0xB2u:
          if ( (_DWORD)v7 == 72 )
          {
            v645 = (CSnapshot *)CResourceTable::GetResource(v11, v6[1], 0x65u);
            if ( v645 )
            {
              v646 = CSnapshot::ProcessSetTransformMatrix(
                       v645,
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_SNAPSHOT_SETTRANSFORMMATRIX *)v6);
              v13 = v646;
              if ( v646 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v646, 0x1349u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4933;
          }
          else
          {
            v860 = 4918;
          }
          goto LABEL_807;
        case 0xB3u:
          if ( (_DWORD)v7 == 20 )
            goto LABEL_63;
          v860 = 4945;
          goto LABEL_807;
        case 0xB4u:
          if ( (_DWORD)v7 == 12 )
          {
            v647 = (CMeshGeometry2D *)CResourceTable::GetResource(v11, v6[1], 2u);
            if ( v647 )
            {
              v649 = CMeshGeometry2D::ProcessSetConstantOpacity(
                       v647,
                       v648,
                       (const struct MILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY *)v6);
              v13 = v649;
              if ( v649 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v649, 0x1377u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 4979;
          }
          else
          {
            v860 = 4964;
          }
          goto LABEL_807;
        case 0xB5u:
          if ( (_DWORD)v7 == 12 )
          {
            v394 = (CAtlasedRectsMesh *)CResourceTable::GetResource(v11, v6[1], 5u);
            if ( v394 )
            {
              v396 = CAtlasedRectsMesh::ProcessSetConstantOpacity(
                       v394,
                       v395,
                       (const struct MILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY *)v6);
              v13 = v396;
              if ( v396 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v396, 0x1392u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5006;
          }
          else
          {
            v860 = 4991;
          }
          goto LABEL_807;
        case 0xB6u:
          if ( (_DWORD)v7 == 24 )
          {
            v199 = (CEffectGroup *)CResourceTable::GetResource(v11, v6[1], 8u);
            if ( v199 )
            {
              v200 = CEffectGroup::ProcessUpdate(
                       v199,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_EFFECTGROUP *)v6);
              v13 = v200;
              if ( v200 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v200, 0x13ADu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5033;
          }
          else
          {
            v860 = 5018;
          }
          goto LABEL_807;
        case 0xB7u:
          if ( (_DWORD)v7 == 68 )
          {
            v305 = v6[12];
            if ( v305 && !CResourceTable::GetResource(v11, v305, 0x20u) )
            {
              v860 = 5062;
            }
            else
            {
              v306 = CResourceTable::GetResource(v11, v6[1], 0x39u);
              if ( v306 && v306 != 16 )
              {
                v307 = CCachedVisualImage::ProcessUpdate(
                         (CCachedVisualImage *)(v306 - 16),
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_CACHEDVISUALIMAGE *)v6);
                v13 = v307;
                if ( v307 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v307, 0x13D7u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 5075;
            }
          }
          else
          {
            v860 = 5045;
          }
          goto LABEL_807;
        case 0xB8u:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 5087;
            goto LABEL_807;
          }
          v363 = CResourceTable::GetResource(v11, v6[1], 0x39u);
          if ( !v363 || (v364 = v363 - 16) == 0 )
          {
            v860 = 5102;
            goto LABEL_807;
          }
          *(_BYTE *)(v364 + 368) = 1;
          break;
        case 0xB9u:
          if ( (_DWORD)v7 == 24 )
          {
            v370 = CResourceTable::GetResource(v11, v6[1], 0x39u);
            if ( v370 && v370 != 16 )
            {
              v371 = CCachedVisualImage::Snapshot((CCachedVisualImage *)(v370 - 16), (const struct tagRECT *)(v6 + 2));
              v13 = v371;
              if ( v371 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v371, 0x140Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5129;
          }
          else
          {
            v860 = 5114;
          }
          goto LABEL_807;
        case 0xBAu:
          if ( (_DWORD)v7 == 20 )
          {
            v125 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v125 )
            {
              v126 = CPrimitiveGroup::ProcessAddPrimitives(
                       v125,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *)v6);
              v13 = v126;
              if ( v126 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x1428u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5156;
          }
          else
          {
            v860 = 5141;
          }
          goto LABEL_807;
        case 0xBBu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5168;
          }
          else
          {
            v164 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v164 )
            {
              v165 = CPrimitiveGroup::ProcessAddSurfaceResources(
                       v164,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *)v6,
                       v6 + 3,
                       v859);
              v13 = v165;
              if ( v165 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v165, 0x1446u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5186;
          }
          goto LABEL_807;
        case 0xBCu:
          if ( (_DWORD)v7 == 8 )
          {
            v173 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v173 )
            {
              v176 = CPrimitiveGroup::ProcessClearSurfaceResources(v173, v174, v175);
              v13 = v176;
              if ( v176 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v176, 0x1461u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5213;
          }
          else
          {
            v860 = 5198;
          }
          goto LABEL_807;
        case 0xBDu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5225;
          }
          else
          {
            v413 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v413 )
            {
              v414 = CPrimitiveGroup::ProcessAddColorResources(
                       v413,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *)v6,
                       v6 + 3);
              v13 = v414;
              if ( v414 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v414, 0x147Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5243;
          }
          goto LABEL_807;
        case 0xBEu:
          if ( (_DWORD)v7 == 8 )
          {
            v418 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v418 )
            {
              v421 = CPrimitiveGroup::ProcessClearColorResources(v418, v419, v420);
              v13 = v421;
              if ( v421 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v421, 0x149Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5270;
          }
          else
          {
            v860 = 5255;
          }
          goto LABEL_807;
        case 0xBFu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5282;
          }
          else
          {
            v150 = v7 - 12;
            v151 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v151 )
            {
              v153 = CPrimitiveGroup::ProcessSetDirtyRect(
                       v151,
                       v152,
                       (const struct MILCMD_PRIMITIVEGROUP_SETDIRTYRECT *)v6,
                       v6 + 3,
                       v150);
              v13 = v153;
              if ( v153 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v153, 0x14B8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5300;
          }
          goto LABEL_807;
        case 0xC0u:
          if ( (_DWORD)v7 == 24 )
          {
            v170 = (CPrimitiveGroup *)CResourceTable::GetResource(v11, v6[1], 0x61u);
            if ( v170 )
            {
              v172 = CPrimitiveGroup::ProcessSetBoundsRect(
                       v170,
                       v171,
                       (const struct MILCMD_PRIMITIVEGROUP_SETBOUNDSRECT *)v6);
              v13 = v172;
              if ( v172 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v172, 0x14D3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5327;
          }
          else
          {
            v860 = 5312;
          }
          goto LABEL_807;
        case 0xC1u:
          if ( (_DWORD)v7 == 16 )
          {
            v426 = (CAnimationTrigger *)CResourceTable::GetResource(v11, v6[1], 0x60u);
            if ( v426 )
            {
              v428 = CAnimationTrigger::ProcessTrigger(v426, v427, (const struct MILCMD_ANIMATIONTRIGGER_TRIGGER *)v6);
              v13 = v428;
              if ( v428 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v428, 0x14EEu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5354;
          }
          else
          {
            v860 = 5339;
          }
          goto LABEL_807;
        case 0xC2u:
          if ( (_DWORD)v7 == 20 )
          {
            v650 = (CYCbCrSurface *)CResourceTable::GetResource(v11, v6[1], 0x64u);
            if ( v650 )
            {
              v651 = CYCbCrSurface::ProcessUpdate(
                       v650,
                       (const struct CResourceTable *)v11,
                       (const struct MILCMD_YCBCRSURFACE *)v6);
              v13 = v651;
              if ( v651 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v651, 0x1509u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5381;
          }
          else
          {
            v860 = 5366;
          }
          goto LABEL_807;
        case 0xC3u:
          if ( (unsigned int)v7 < 0x14 )
          {
            v860 = 5393;
          }
          else
          {
            v259 = v7 - 20;
            v260 = CResourceTable::GetResource(v11, v6[1], 0x66u);
            if ( v260 && v260 != 8 )
            {
              v262 = CInteraction::ProcessUpdateConfiguration(
                       (CInteraction *)(v260 - 8),
                       v261,
                       (const struct MILCMD_INTERACTION_UPDATECONFIGURATION *)v6,
                       v6 + 5,
                       v259);
              v13 = v262;
              if ( v262 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v262, 0x1527u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5411;
          }
          goto LABEL_807;
        case 0xC4u:
          if ( (_DWORD)v7 == 16 )
          {
            v332 = CResourceTable::GetResource(v11, v6[1], 0x66u);
            if ( v332 && v332 != 8 )
            {
              v334 = CInteraction::ProcessSetInputSink(
                       (CInteraction *)(v332 - 8),
                       v333,
                       (const struct MILCMD_INTERACTION_SETINPUTSINK *)v6);
              v13 = v334;
              if ( v334 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v334, 0x1542u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5438;
          }
          else
          {
            v860 = 5423;
          }
          goto LABEL_807;
        case 0xC5u:
          if ( (_DWORD)v7 == 12 )
          {
            v652 = v6[2];
            if ( v652 && ((v653 = CResourceTable::GetResource(v11, v652, 0x67u)) == 0 || v653 == 8) )
            {
              v860 = 5467;
            }
            else
            {
              v654 = CResourceTable::GetResource(v11, v6[1], 0x66u);
              if ( v654 && v654 != 8 )
              {
                v655 = CInteraction::ProcessSetManipulation(
                         (CInteraction *)(v654 - 8),
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_INTERACTION_SETMANIPULATION *)v6);
                v13 = v655;
                if ( v655 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v655, 0x156Cu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 5480;
            }
          }
          else
          {
            v860 = 5450;
          }
          goto LABEL_807;
        case 0xC6u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 5492;
            goto LABEL_807;
          }
          v338 = CResourceTable::GetResource(v11, v6[1], 0x66u);
          if ( !v338 || v338 == 8 )
          {
            v860 = 5507;
            goto LABEL_807;
          }
          *(_DWORD *)(v338 - 8 + 252) = v6[2];
          break;
        case 0xC7u:
          if ( (_DWORD)v7 == 24 )
          {
            v656 = CResourceTable::GetResource(v11, v6[1], 0x66u);
            if ( v656 && v656 != 8 )
            {
              v658 = CInteraction::ProcessCaptureManipulationInCompositor(
                       (CInteraction *)(v656 - 8),
                       v657,
                       (const struct MILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR *)v6);
              v13 = v658;
              if ( v658 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v658, 0x15A2u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5534;
          }
          else
          {
            v860 = 5519;
          }
          goto LABEL_807;
        case 0xC8u:
          if ( (_DWORD)v7 == 12 )
          {
            v659 = CResourceTable::GetResource(v11, v6[1], 0x66u);
            if ( v659 && v659 != 8 )
            {
              v661 = CInteraction::ProcessCapturePointer(
                       (CInteraction *)(v659 - 8),
                       v660,
                       (const struct MILCMD_INTERACTION_CAPTUREPOINTER *)v6);
              v13 = v661;
              if ( v661 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v661, 0x15BDu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5561;
          }
          else
          {
            v860 = 5546;
          }
          goto LABEL_807;
        case 0xC9u:
          if ( (_DWORD)v7 == 28 )
          {
            v339 = CResourceTable::GetResource(v11, v6[1], 0x66u);
            if ( v339 && v339 != 8 )
            {
              v341 = CInteraction::ProcessUpdateFlags(
                       (CInteraction *)(v339 - 8),
                       v340,
                       (const struct MILCMD_INTERACTION_UPDATEFLAGS *)v6);
              v13 = v341;
              if ( v341 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v341, 0x15D8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5588;
          }
          else
          {
            v860 = 5573;
          }
          goto LABEL_807;
        case 0xCAu:
          if ( (_DWORD)v7 == 16 )
          {
            v342 = CResourceTable::GetResource(v11, v6[1], 0x66u);
            if ( v342 && v342 != 8 )
            {
              v344 = CInteraction::ProcessUpdateRails(
                       (CInteraction *)(v342 - 8),
                       v343,
                       (const struct MILCMD_INTERACTION_UPDATERAILS *)v6);
              v13 = v344;
              if ( v344 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v344, 0x15F3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5615;
          }
          else
          {
            v860 = 5600;
          }
          goto LABEL_807;
        case 0xCBu:
          if ( (_DWORD)v7 == 36 )
          {
            v662 = CResourceTable::GetResource(v11, v6[1], 0x67u);
            if ( v662 && v662 != 8 )
            {
              v664 = CManipulation::ProcessUpdateSettings(
                       (CManipulation *)(v662 - 8),
                       v663,
                       (const struct MILCMD_MANIPULATION_UPDATESETTINGS *)v6);
              v13 = v664;
              if ( v664 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v664, 0x160Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5642;
          }
          else
          {
            v860 = 5627;
          }
          goto LABEL_807;
        case 0xCCu:
          if ( (_DWORD)v7 == 32 )
          {
            v106 = (CBaseExpression *)CResourceTable::GetResource(v11, v6[1], 0x68u);
            if ( v106 )
            {
              v107 = CBaseExpression::ProcessSetTarget(
                       v106,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_BASEEXPRESSION_SETTARGET *)v6);
              v13 = v107;
              if ( v107 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x1629u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5669;
          }
          else
          {
            v860 = 5654;
          }
          goto LABEL_807;
        case 0xCDu:
          if ( (_DWORD)v7 == 12 )
          {
            v140 = CResourceTable::GetResource(v11, v6[1], 0x68u);
            v141 = (CBaseExpression *)v140;
            if ( v140 )
            {
              v142 = *(__int64 (__fastcall **)(CKeyframeAnimation *, struct CResourceTable *, const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *))(*(_QWORD *)v140 + 112LL);
              if ( v142 == CBaseExpression::ProcessSetBindingBroken )
              {
                v143 = CBaseExpression::ProcessSetBindingBroken(
                         v141,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *)v6);
              }
              else if ( v142 == CKeyframeAnimation::ProcessSetBindingBroken )
              {
                v143 = CKeyframeAnimation::ProcessSetBindingBroken(
                         v141,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *)v6);
              }
              else
              {
                v143 = v142(
                         v141,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *)v6);
              }
              v13 = v143;
              if ( v143 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v143, 0x1644u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5696;
          }
          else
          {
            v860 = 5681;
          }
          goto LABEL_807;
        case 0xCEu:
          if ( (_DWORD)v7 == 12 )
          {
            v108 = (CBaseExpression *)CResourceTable::GetResource(v11, v6[1], 0x68u);
            if ( v108 )
            {
              v110 = CBaseExpression::ProcessSetTracingCookie(
                       v108,
                       v109,
                       (const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *)v6);
              v13 = v110;
              if ( v110 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x165Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5723;
          }
          else
          {
            v860 = 5708;
          }
          goto LABEL_807;
        case 0xCFu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5735;
          }
          else
          {
            v665 = (CBaseExpression *)CResourceTable::GetResource(v11, v6[1], 0x68u);
            if ( v665 )
            {
              v667 = CBaseExpression::ProcessSetDebugInfo(
                       v665,
                       v666,
                       (const struct MILCMD_BASEEXPRESSION_SETDEBUGINFO *)v6,
                       v6 + 3,
                       v859);
              v13 = v667;
              if ( v667 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v667, 0x167Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5753;
          }
          goto LABEL_807;
        case 0xD0u:
          if ( (_DWORD)v7 == 48 )
          {
            v132 = (CExpression *)CResourceTable::GetResource(v11, v6[1], 0x69u);
            if ( v132 )
            {
              v133 = CExpression::ProcessSetNodesInfo(
                       v132,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_EXPRESSION_SETNODESINFO *)v6);
              v13 = v133;
              if ( v133 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v133, 0x1698u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5780;
          }
          else
          {
            v860 = 5765;
          }
          goto LABEL_807;
        case 0xD1u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5792;
          }
          else
          {
            v130 = (CExpression *)CResourceTable::GetResource(v11, v6[1], 0x69u);
            if ( v130 )
            {
              v131 = CExpression::ProcessSetSources(
                       v130,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_EXPRESSION_SETSOURCES *)v6,
                       v6 + 3,
                       v859);
              v13 = v131;
              if ( v131 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0x16B6u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5810;
          }
          goto LABEL_807;
        case 0xD2u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5822;
          }
          else
          {
            v127 = (CExpression *)CResourceTable::GetResource(v11, v6[1], 0x69u);
            if ( v127 )
            {
              v129 = CExpression::ProcessSetReferenceInfo(
                       v127,
                       v128,
                       (const struct MILCMD_EXPRESSION_SETREFERENCEINFO *)v6,
                       v6 + 3,
                       v859);
              v13 = v129;
              if ( v129 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v129, 0x16D4u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5840;
          }
          goto LABEL_807;
        case 0xD3u:
          if ( (_DWORD)v7 == 64 )
          {
            v201 = (CKeyframeAnimation *)CResourceTable::GetResource(v11, v6[1], 0x6Au);
            if ( v201 )
            {
              v202 = CKeyframeAnimation::ProcessSetKeyframeData(
                       v201,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *)v6);
              v13 = v202;
              if ( v202 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v202, 0x16EFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5867;
          }
          else
          {
            v860 = 5852;
          }
          goto LABEL_807;
        case 0xD4u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5879;
          }
          else
          {
            v668 = (CKeyframeAnimation *)CResourceTable::GetResource(v11, v6[1], 0x6Au);
            if ( v668 )
            {
              v669 = CKeyframeAnimation::ProcessAddExpressionResources(
                       v668,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES *)v6,
                       v6 + 3,
                       v859);
              v13 = v669;
              if ( v669 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v669, 0x170Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5897;
          }
          goto LABEL_807;
        case 0xD5u:
          if ( (_DWORD)v7 == 24 )
          {
            v167 = (CKeyframeAnimation *)CResourceTable::GetResource(v11, v6[1], 0x6Au);
            if ( v167 )
            {
              v169 = CKeyframeAnimation::ProcessUpdatePlaybackState(
                       v167,
                       v168,
                       (const struct MILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *)v6);
              v13 = v169;
              if ( v169 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v169, 0x1728u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5924;
          }
          else
          {
            v860 = 5909;
          }
          goto LABEL_807;
        case 0xD6u:
          if ( (_DWORD)v7 == 28 )
          {
            v249 = (CKeyframeAnimation *)CResourceTable::GetResource(v11, v6[1], 0x6Au);
            if ( v249 )
            {
              v251 = CKeyframeAnimation::ProcessSetSeekState(
                       v249,
                       v250,
                       (const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *)v6);
              v13 = v251;
              if ( v251 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v251, 0x1743u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5951;
          }
          else
          {
            v860 = 5936;
          }
          goto LABEL_807;
        case 0xD7u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 5963;
          }
          else
          {
            v670 = (CConditionalExpression *)CResourceTable::GetResource(v11, v6[1], 0x6Bu);
            if ( v670 )
            {
              v671 = CConditionalExpression::ProcessAddConditionAnimationResources(
                       v670,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *)v6,
                       v6 + 3,
                       v859);
              v13 = v671;
              if ( v671 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v671, 0x1761u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 5981;
          }
          goto LABEL_807;
        case 0xD8u:
          if ( (_DWORD)v7 == 12 )
          {
            v672 = (CConditionalExpression *)CResourceTable::GetResource(v11, v6[1], 0x6Bu);
            if ( v672 )
            {
              v673 = CConditionalExpression::ProcessSetDefaultAnimation(
                       v672,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *)v6);
              v13 = v673;
              if ( v673 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v673, 0x177Cu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6008;
          }
          else
          {
            v860 = 5993;
          }
          goto LABEL_807;
        case 0xD9u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 6020;
            goto LABEL_807;
          }
          v674 = CResourceTable::GetResource(v11, v6[1], 0x6Bu);
          if ( !v674 )
          {
            v860 = 6035;
            goto LABEL_807;
          }
          *(_DWORD *)(v674 + 336) = v6[2];
          break;
        case 0xDAu:
          if ( (_DWORD)v7 == 56 )
          {
            v241 = (CManipulationTransform *)CResourceTable::GetResource(v11, v6[1], 0x41u);
            if ( v241 )
            {
              v243 = CManipulationTransform::ProcessSetComponents(
                       v241,
                       v242,
                       (const struct MILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *)v6);
              v13 = v243;
              if ( v243 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v243, 0x17B2u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6062;
          }
          else
          {
            v860 = 6047;
          }
          goto LABEL_807;
        case 0xDBu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 6074;
            goto LABEL_807;
          }
          v317 = CResourceTable::GetResource(v11, v6[1], 0x41u);
          if ( !v317 )
          {
            v860 = 6089;
            goto LABEL_807;
          }
          *(_DWORD *)(v317 + 332) = v6[2];
          break;
        case 0xDCu:
          if ( (_DWORD)v7 == 12 )
          {
            if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v11 + 16), v6[1]) )
            {
              v76 = *(_QWORD *)(v11 + 40) + (unsigned int)(v73 * *(_DWORD *)(v11 + 24));
              if ( *(_QWORD *)(v76 + 8) )
              {
                v77 = *(_QWORD *)(v76 + 8);
                v78 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)v77 + 48LL);
                if ( (char *)v78 == (char *)CExpression::IsOfType )
                {
                  v79 = CExpression::IsOfType(v77, 109LL);
                }
                else if ( v78 == v75 )
                {
                  v79 = CVisual::IsOfType(v77, (unsigned int)(v74 + 97));
                }
                else if ( (char *)v78 == (char *)CKeyframeAnimation::IsOfType )
                {
                  v79 = CKeyframeAnimation::IsOfType(v77, 109LL);
                }
                else
                {
                  v79 = v78 == CComponentTransform3D::IsOfType
                      ? CComponentTransform3D::IsOfType(v77, 109)
                      : v78(v77, 109);
                }
                if ( v79 )
                {
                  v97 = *(CNotificationResource **)(v76 + 8);
                  if ( v97 )
                  {
                    v98 = CNotificationResource::ProcessSetCallbackId(
                            v97,
                            (struct CResourceTable *)v11,
                            (const struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *)v6);
                    v13 = v98;
                    if ( v98 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0x17E8u);
                      goto LABEL_808;
                    }
                    break;
                  }
                }
              }
            }
            v860 = 6116;
          }
          else
          {
            v860 = 6101;
          }
          goto LABEL_807;
        case 0xDDu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 6128;
            goto LABEL_807;
          }
          v675 = CResourceTable::GetResource(v11, v6[1], 0x6Eu);
          if ( !v675 )
          {
            v860 = 6143;
            goto LABEL_807;
          }
          *(_DWORD *)(v675 + 128) = v6[2];
          break;
        case 0xDEu:
          if ( (_DWORD)v7 == 20 )
          {
            v676 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v676 )
            {
              v678 = CInteractionTracker::ProcessApplyPositionImpulse(
                       v676,
                       v677,
                       (const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *)v6);
              v13 = v678;
              if ( v678 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v678, 0x181Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6170;
          }
          else
          {
            v860 = 6155;
          }
          goto LABEL_807;
        case 0xDFu:
          if ( (_DWORD)v7 == 24 )
          {
            v679 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v679 )
            {
              v681 = CInteractionTracker::ProcessApplyScaleImpulse(
                       v679,
                       v680,
                       (const struct MILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *)v6);
              v13 = v681;
              if ( v681 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v681, 0x1839u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6197;
          }
          else
          {
            v860 = 6182;
          }
          goto LABEL_807;
        case 0xE0u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 6209;
          }
          else
          {
            v682 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v682 )
            {
              v684 = CInteractionTracker::ProcessApplyPositionShift(
                       v682,
                       v683,
                       (const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *)v6,
                       v6 + 3,
                       v859);
              v13 = v684;
              if ( v684 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v684, 0x1857u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6227;
          }
          goto LABEL_807;
        case 0xE1u:
          if ( (unsigned int)v7 < 8 )
          {
            v860 = 6239;
            goto LABEL_807;
          }
          v685 = (_DWORD *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
          if ( !v685 )
          {
            v860 = 6257;
            goto LABEL_807;
          }
          v685[155] = v6[2];
          v685[156] = v6[3];
          v685[157] = v6[4];
          v685[158] = v6[5];
          v685[159] = v6[6];
          break;
        case 0xE2u:
          if ( (_DWORD)v7 == 24 )
          {
            v686 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v686 )
            {
              v688 = CInteractionTracker::ProcessSetRequestedPosition(
                       v686,
                       v687,
                       (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *)v6);
              v13 = v688;
              if ( v688 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v688, 0x1890u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6284;
          }
          else
          {
            v860 = 6269;
          }
          goto LABEL_807;
        case 0xE3u:
          if ( (_DWORD)v7 == 24 )
          {
            v689 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v689 )
            {
              v691 = CInteractionTracker::ProcessSetRequestedPositionDelta(
                       v689,
                       v690,
                       (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONDELTA *)v6);
              v13 = v691;
              if ( v691 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v691, 0x18ABu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6311;
          }
          else
          {
            v860 = 6296;
          }
          goto LABEL_807;
        case 0xE4u:
          if ( (_DWORD)v7 == 20 )
          {
            v692 = v6[2];
            if ( v692 && !CResourceTable::GetResource(v11, v692, 0x68u) )
            {
              v860 = 6340;
            }
            else
            {
              v693 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
              if ( v693 )
              {
                v694 = CInteractionTracker::ProcessSetRequestedPositionAnimation(
                         v693,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *)v6);
                v13 = v694;
                if ( v694 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v694, 0x18D5u);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 6353;
            }
          }
          else
          {
            v860 = 6323;
          }
          goto LABEL_807;
        case 0xE5u:
          if ( (_DWORD)v7 == 28 )
          {
            v695 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v695 )
            {
              v697 = CInteractionTracker::ProcessSetRequestedScale(
                       v695,
                       v696,
                       (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *)v6);
              v13 = v697;
              if ( v697 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v697, 0x18F0u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6380;
          }
          else
          {
            v860 = 6365;
          }
          goto LABEL_807;
        case 0xE6u:
          if ( (_DWORD)v7 == 28 )
          {
            v698 = v6[2];
            if ( v698 && !CResourceTable::GetResource(v11, v698, 0x68u) )
            {
              v860 = 6409;
            }
            else
            {
              v699 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
              if ( v699 )
              {
                v700 = CInteractionTracker::ProcessSetRequestedScaleAnimation(
                         v699,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *)v6);
                v13 = v700;
                if ( v700 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v700, 0x191Au);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 6422;
            }
          }
          else
          {
            v860 = 6392;
          }
          goto LABEL_807;
        case 0xE7u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 6434;
          }
          else
          {
            v701 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v701 )
            {
              v702 = CInteractionTracker::ProcessSetManipulations(
                       v701,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *)v6,
                       v6 + 3,
                       v859);
              v13 = v702;
              if ( v702 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v702, 0x1938u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6452;
          }
          goto LABEL_807;
        case 0xE8u:
          if ( (_DWORD)v7 != 16 )
          {
            v860 = 6464;
            goto LABEL_807;
          }
          v703 = CResourceTable::GetResource(v11, v6[1], 0x6Cu);
          if ( !v703 )
          {
            v860 = 6479;
            goto LABEL_807;
          }
          *(_DWORD *)(v703 + 208) = v6[3];
          break;
        case 0xE9u:
          if ( (_DWORD)v7 == 16 )
          {
            v704 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v704 )
            {
              v706 = CInteractionTracker::ProcessSetMinPosition(
                       v704,
                       v705,
                       (const struct MILCMD_INTERACTIONTRACKER_SETMINPOSITION *)v6);
              v13 = v706;
              if ( v706 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v706, 0x196Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6506;
          }
          else
          {
            v860 = 6491;
          }
          goto LABEL_807;
        case 0xEAu:
          if ( (_DWORD)v7 == 16 )
          {
            v707 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v707 )
            {
              v709 = CInteractionTracker::ProcessSetMaxPosition(
                       v707,
                       v708,
                       (const struct MILCMD_INTERACTIONTRACKER_SETMAXPOSITION *)v6);
              v13 = v709;
              if ( v709 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v709, 0x1989u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6533;
          }
          else
          {
            v860 = 6518;
          }
          goto LABEL_807;
        case 0xEBu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 6545;
            goto LABEL_807;
          }
          v710 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
          if ( !v710 )
          {
            v860 = 6560;
            goto LABEL_807;
          }
          CInteractionTracker::SetMinScale(v710, *((float *)v6 + 2));
          break;
        case 0xECu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 6572;
            goto LABEL_807;
          }
          v711 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
          if ( !v711 )
          {
            v860 = 6587;
            goto LABEL_807;
          }
          CInteractionTracker::SetMaxScale(v711, *((float *)v6 + 2));
          break;
        case 0xEDu:
          if ( (unsigned int)v7 >= 0x18 )
          {
            v712 = v6[4];
            v713 = v7 - 24;
            if ( v712 && !CResourceTable::GetResource(v11, v712, 0x6Bu) )
            {
              v860 = 6619;
            }
            else
            {
              v714 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
              if ( v714 )
              {
                v715 = CInteractionTracker::ProcessSetInertiaModifierAnimations(
                         v714,
                         (struct CResourceTable *)v11,
                         (const struct MILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS *)v6,
                         v6 + 6,
                         v713);
                v13 = v715;
                if ( v715 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v715, 0x19ECu);
                  goto LABEL_808;
                }
                break;
              }
              v860 = 6632;
            }
          }
          else
          {
            v860 = 6599;
          }
          goto LABEL_807;
        case 0xEEu:
          if ( (_DWORD)v7 == 20 )
          {
            v716 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v716 )
            {
              v718 = CInteractionTracker::ProcessSetInertiaDecayRates(
                       v716,
                       v717,
                       (const struct MILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES *)v6);
              v13 = v718;
              if ( v718 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v718, 0x1A07u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6659;
          }
          else
          {
            v860 = 6644;
          }
          goto LABEL_807;
        case 0xEFu:
          if ( (_DWORD)v7 == 12 )
          {
            v719 = (CInteractionTracker *)CResourceTable::GetResource(v11, v6[1], 0x6Cu);
            if ( v719 )
            {
              v720 = CInteractionTracker::ProcessDwmStarted(
                       v719,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *)v6);
              v13 = v720;
              if ( v720 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v720, 0x1A22u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6686;
          }
          else
          {
            v860 = 6671;
          }
          goto LABEL_807;
        case 0xF0u:
          if ( (unsigned int)v7 < 0x10 )
          {
            v860 = 6698;
          }
          else
          {
            v721 = v7 - 16;
            v722 = (CFilterEffect *)CResourceTable::GetResource(v11, v6[1], 9u);
            if ( v722 )
            {
              v723 = CFilterEffect::ProcessUpdateInputs(
                       v722,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_FILTEREFFECT_UPDATEINPUTS *)v6,
                       v6 + 4,
                       v721);
              v13 = v723;
              if ( v723 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v723, 0x1A40u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6716;
          }
          goto LABEL_807;
        case 0xF1u:
          if ( (unsigned int)v7 < 0x10 )
          {
            v860 = 6728;
          }
          else
          {
            v724 = v7 - 16;
            v725 = (CTableTransferEffect *)CResourceTable::GetResource(v11, v6[1], 0x14u);
            if ( v725 )
            {
              v727 = CTableTransferEffect::ProcessUpdateTable(
                       v725,
                       v726,
                       (const struct MILCMD_TABLETRANSFEREFFECT_UPDATETABLE *)v6,
                       v6 + 4,
                       v724);
              v13 = v727;
              if ( v727 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v727, 0x1A5Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6746;
          }
          goto LABEL_807;
        case 0xF2u:
          if ( (_DWORD)v7 == 76 )
          {
            v728 = (CInk *)CResourceTable::GetResource(v11, v6[1], 0x72u);
            if ( v728 )
            {
              v730 = CInk::ProcessBasicStateUpdate(v728, v729, (const struct MILCMD_INK_BASICSTATEUPDATE *)v6);
              v13 = v730;
              if ( v730 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v730, 0x1A79u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6773;
          }
          else
          {
            v860 = 6758;
          }
          goto LABEL_807;
        case 0xF3u:
          if ( (_DWORD)v7 == 20 )
          {
            v731 = (CInk *)CResourceTable::GetResource(v11, v6[1], 0x72u);
            if ( v731 )
            {
              started = CInk::ProcessStartPointUpdate(v731, v732, (const struct MILCMD_INK_STARTPOINTUPDATE *)v6);
              v13 = started;
              if ( started < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x1A94u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6800;
          }
          else
          {
            v860 = 6785;
          }
          goto LABEL_807;
        case 0xF4u:
          if ( (_DWORD)v7 == 12 )
          {
            v734 = (CInk *)CResourceTable::GetResource(v11, v6[1], 0x72u);
            if ( v734 )
            {
              v736 = CInk::ProcessSegmentCountUpdate(v734, v735, (const struct MILCMD_INK_SEGMENTCOUNTUPDATE *)v6);
              v13 = v736;
              if ( v736 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v736, 0x1AAFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6827;
          }
          else
          {
            v860 = 6812;
          }
          goto LABEL_807;
        case 0xF5u:
          if ( (_DWORD)v7 == 48 )
          {
            v737 = (CInk *)CResourceTable::GetResource(v11, v6[1], 0x72u);
            if ( v737 )
            {
              v739 = CInk::ProcessSegmentUpdate(v737, v738, (const struct MILCMD_INK_SEGMENTUPDATE *)v6);
              v13 = v739;
              if ( v739 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v739, 0x1ACAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6854;
          }
          else
          {
            v860 = 6839;
          }
          goto LABEL_807;
        case 0xF6u:
          if ( (_DWORD)v7 == 88 )
          {
            v740 = (CPencil *)CResourceTable::GetResource(v11, v6[1], 0x73u);
            if ( v740 )
            {
              v741 = CPencil::ProcessBasicStateUpdate(
                       v740,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_PENCIL_BASICSTATEUPDATE *)v6);
              v13 = v741;
              if ( v741 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v741, 0x1AE5u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6881;
          }
          else
          {
            v860 = 6866;
          }
          goto LABEL_807;
        case 0xF7u:
          if ( (_DWORD)v7 == 20 )
          {
            v742 = (CPencil *)CResourceTable::GetResource(v11, v6[1], 0x73u);
            if ( v742 )
            {
              v744 = CPencil::ProcessStartPointUpdate(v742, v743, (const struct MILCMD_PENCIL_STARTPOINTUPDATE *)v6);
              v13 = v744;
              if ( v744 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v744, 0x1B00u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6908;
          }
          else
          {
            v860 = 6893;
          }
          goto LABEL_807;
        case 0xF8u:
          if ( (_DWORD)v7 == 12 )
          {
            v745 = (CPencil *)CResourceTable::GetResource(v11, v6[1], 0x73u);
            if ( v745 )
            {
              v747 = CPencil::ProcessSegmentCountUpdate(v745, v746, (const struct MILCMD_PENCIL_SEGMENTCOUNTUPDATE *)v6);
              v13 = v747;
              if ( v747 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v747, 0x1B1Bu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6935;
          }
          else
          {
            v860 = 6920;
          }
          goto LABEL_807;
        case 0xF9u:
          if ( (_DWORD)v7 == 32 )
          {
            v748 = (CPencil *)CResourceTable::GetResource(v11, v6[1], 0x73u);
            if ( v748 )
            {
              v750 = CPencil::ProcessSegmentUpdate(v748, v749, (const struct MILCMD_PENCIL_SEGMENTUPDATE *)v6);
              v13 = v750;
              if ( v750 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v750, 0x1B36u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6962;
          }
          else
          {
            v860 = 6947;
          }
          goto LABEL_807;
        case 0xFAu:
          if ( (_DWORD)v7 == 20 )
          {
            v751 = (CCompiledEffectTemplate *)CResourceTable::GetResource(v11, v6[1], 0x74u);
            if ( v751 )
            {
              v752 = CCompiledEffectTemplate::ProcessUpdate(
                       v751,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_COMPILEDEFFECTTEMPLATE *)v6);
              v13 = v752;
              if ( v752 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v752, 0x1B51u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 6989;
          }
          else
          {
            v860 = 6974;
          }
          goto LABEL_807;
        case 0xFBu:
          if ( (_DWORD)v7 == 20 )
          {
            v753 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v753 )
            {
              v755 = CPropertyBagBase::ProcessSetBooleanProperty(
                       v753,
                       v754,
                       (const struct MILCMD_PROPERTYBAGBASE_SETBOOLEANPROPERTY *)v6);
              v13 = v755;
              if ( v755 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v755, 0x1B6Cu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7016;
          }
          else
          {
            v860 = 7001;
          }
          goto LABEL_807;
        case 0xFCu:
          if ( (_DWORD)v7 == 20 )
          {
            v103 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v103 )
            {
              v105 = CPropertyBagBase::ProcessSetScalarProperty(
                       v103,
                       v104,
                       (const struct MILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY *)v6);
              v13 = v105;
              if ( v105 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x1B87u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7043;
          }
          else
          {
            v860 = 7028;
          }
          goto LABEL_807;
        case 0xFDu:
          if ( (_DWORD)v7 == 24 )
          {
            v756 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v756 )
            {
              v758 = CPropertyBagBase::ProcessSetVector2Property(
                       v756,
                       v757,
                       (const struct MILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY *)v6);
              v13 = v758;
              if ( v758 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v758, 0x1BA2u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7070;
          }
          else
          {
            v860 = 7055;
          }
          goto LABEL_807;
        case 0xFEu:
          if ( (_DWORD)v7 == 28 )
          {
            v759 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v759 )
            {
              v761 = CPropertyBagBase::ProcessSetVector3Property(
                       v759,
                       v760,
                       (const struct MILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY *)v6);
              v13 = v761;
              if ( v761 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v761, 0x1BBDu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7097;
          }
          else
          {
            v860 = 7082;
          }
          goto LABEL_807;
        case 0xFFu:
          if ( (_DWORD)v7 == 32 )
          {
            v762 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v762 )
            {
              v764 = CPropertyBagBase::ProcessSetVector4Property(
                       v762,
                       v763,
                       (const struct MILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY *)v6);
              v13 = v764;
              if ( v764 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v764, 0x1BD8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7124;
          }
          else
          {
            v860 = 7109;
          }
          goto LABEL_807;
        case 0x100u:
          if ( (_DWORD)v7 == 32 )
          {
            v765 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v765 )
            {
              v767 = CPropertyBagBase::ProcessSetColorProperty(
                       v765,
                       v766,
                       (const struct MILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY *)v6);
              v13 = v767;
              if ( v767 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v767, 0x1BF3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7151;
          }
          else
          {
            v860 = 7136;
          }
          goto LABEL_807;
        case 0x101u:
          if ( (_DWORD)v7 == 32 )
          {
            v768 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v768 )
            {
              v770 = CPropertyBagBase::ProcessSetQuaternionProperty(
                       v768,
                       v769,
                       (const struct MILCMD_PROPERTYBAGBASE_SETQUATERNIONPROPERTY *)v6);
              v13 = v770;
              if ( v770 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v770, 0x1C0Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7178;
          }
          else
          {
            v860 = 7163;
          }
          goto LABEL_807;
        case 0x102u:
          if ( (_DWORD)v7 == 40 )
          {
            v111 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v111 )
            {
              v113 = CPropertyBagBase::ProcessSetMatrix3x2Property(
                       v111,
                       v112,
                       (const struct MILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY *)v6);
              v13 = v113;
              if ( v113 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0x1C29u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7205;
          }
          else
          {
            v860 = 7190;
          }
          goto LABEL_807;
        case 0x103u:
          if ( (_DWORD)v7 == 80 )
          {
            v161 = (CPropertyBagBase *)CResourceTable::GetResource(v11, v6[1], 0x6Fu);
            if ( v161 )
            {
              v163 = CPropertyBagBase::ProcessSetMatrix4x4Property(
                       v161,
                       v162,
                       (const struct MILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY *)v6);
              v13 = v163;
              if ( v163 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v163, 0x1C44u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7232;
          }
          else
          {
            v860 = 7217;
          }
          goto LABEL_807;
        case 0x104u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 7244;
            goto LABEL_807;
          }
          v771 = CResourceTable::GetResource(v11, v6[1], 0x6Fu);
          if ( !v771 )
          {
            v860 = 7259;
            goto LABEL_807;
          }
          *(_DWORD *)(v771 + 112) = v6[2];
          break;
        case 0x105u:
          if ( (_DWORD)v7 == 16 )
          {
            v436 = (CComponentTransform2D *)CResourceTable::GetResource(v11, v6[1], 0x1Du);
            if ( v436 )
            {
              v438 = CComponentTransform2D::ProcessSetAnchorPoint(
                       v436,
                       v437,
                       (const struct MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT *)v6);
              v13 = v438;
              if ( v438 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v438, 0x1C7Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7286;
          }
          else
          {
            v860 = 7271;
          }
          goto LABEL_807;
        case 0x106u:
          if ( (_DWORD)v7 == 16 )
          {
            v439 = (CComponentTransform2D *)CResourceTable::GetResource(v11, v6[1], 0x1Du);
            if ( v439 )
            {
              v441 = CComponentTransform2D::ProcessSetCenterPoint(
                       v439,
                       v440,
                       (const struct MILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT *)v6);
              v13 = v441;
              if ( v441 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v441, 0x1C95u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7313;
          }
          else
          {
            v860 = 7298;
          }
          goto LABEL_807;
        case 0x107u:
          if ( (_DWORD)v7 == 16 )
          {
            v442 = (CComponentTransform2D *)CResourceTable::GetResource(v11, v6[1], 0x1Du);
            if ( v442 )
            {
              v444 = CComponentTransform2D::ProcessSetOffset(
                       v442,
                       v443,
                       (const struct MILCMD_COMPONENTTRANSFORM2D_SETOFFSET *)v6);
              v13 = v444;
              if ( v444 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v444, 0x1CB0u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7340;
          }
          else
          {
            v860 = 7325;
          }
          goto LABEL_807;
        case 0x108u:
          if ( (_DWORD)v7 == 12 )
          {
            v445 = (CComponentTransform2D *)CResourceTable::GetResource(v11, v6[1], 0x1Du);
            if ( v445 )
            {
              v447 = CComponentTransform2D::ProcessSetRotationAngle(
                       v445,
                       v446,
                       (const struct MILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE *)v6);
              v13 = v447;
              if ( v447 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v447, 0x1CCBu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7367;
          }
          else
          {
            v860 = 7352;
          }
          goto LABEL_807;
        case 0x109u:
          if ( (_DWORD)v7 == 16 )
          {
            v448 = (CComponentTransform2D *)CResourceTable::GetResource(v11, v6[1], 0x1Du);
            if ( v448 )
            {
              v450 = CComponentTransform2D::ProcessSetScale(
                       v448,
                       v449,
                       (const struct MILCMD_COMPONENTTRANSFORM2D_SETSCALE *)v6);
              v13 = v450;
              if ( v450 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v450, 0x1CE6u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7394;
          }
          else
          {
            v860 = 7379;
          }
          goto LABEL_807;
        case 0x10Au:
          if ( (_DWORD)v7 == 32 )
          {
            v451 = (CComponentTransform2D *)CResourceTable::GetResource(v11, v6[1], 0x1Du);
            if ( v451 )
            {
              v453 = CComponentTransform2D::ProcessSetTransformMatrix(
                       v451,
                       v452,
                       (const struct MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *)v6);
              v13 = v453;
              if ( v453 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v453, 0x1D01u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7421;
          }
          else
          {
            v860 = 7406;
          }
          goto LABEL_807;
        case 0x10Bu:
          if ( (_DWORD)v7 == 16 )
          {
            v203 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v203 )
            {
              v205 = CComponentTransform3D::ProcessSetAnchorPoint(
                       v203,
                       v204,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT *)v6);
              v13 = v205;
              if ( v205 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v205, 0x1D1Cu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7448;
          }
          else
          {
            v860 = 7433;
          }
          goto LABEL_807;
        case 0x10Cu:
          if ( (_DWORD)v7 == 20 )
          {
            v206 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v206 )
            {
              v208 = CComponentTransform3D::ProcessSetCenterPoint(
                       v206,
                       v207,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT *)v6);
              v13 = v208;
              if ( v208 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v208, 0x1D37u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7475;
          }
          else
          {
            v860 = 7460;
          }
          goto LABEL_807;
        case 0x10Du:
          if ( (_DWORD)v7 == 24 )
          {
            v209 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v209 )
            {
              v211 = CComponentTransform3D::ProcessSetOrientation(
                       v209,
                       v210,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION *)v6);
              v13 = v211;
              if ( v211 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v211, 0x1D52u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7502;
          }
          else
          {
            v860 = 7487;
          }
          goto LABEL_807;
        case 0x10Eu:
          if ( (_DWORD)v7 == 12 )
          {
            v212 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v212 )
            {
              v214 = CComponentTransform3D::ProcessSetRotationAngle(
                       v212,
                       v213,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE *)v6);
              v13 = v214;
              if ( v214 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v214, 0x1D6Du);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7529;
          }
          else
          {
            v860 = 7514;
          }
          goto LABEL_807;
        case 0x10Fu:
          if ( (_DWORD)v7 == 20 )
          {
            v215 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v215 )
            {
              v217 = CComponentTransform3D::ProcessSetRotationAxis(
                       v215,
                       v216,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS *)v6);
              v13 = v217;
              if ( v217 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v217, 0x1D88u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7556;
          }
          else
          {
            v860 = 7541;
          }
          goto LABEL_807;
        case 0x110u:
          if ( (_DWORD)v7 == 20 )
          {
            v218 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v218 )
            {
              v220 = CComponentTransform3D::ProcessSetScale(
                       v218,
                       v219,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETSCALE *)v6);
              v13 = v220;
              if ( v220 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v220, 0x1DA3u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7583;
          }
          else
          {
            v860 = 7568;
          }
          goto LABEL_807;
        case 0x111u:
          if ( (_DWORD)v7 == 72 )
          {
            v147 = (CComponentTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Eu);
            if ( v147 )
            {
              v149 = CComponentTransform3D::ProcessSetTransformMatrix(
                       v147,
                       v148,
                       (const struct MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *)v6);
              v13 = v149;
              if ( v149 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v149, 0x1DBEu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7610;
          }
          else
          {
            v860 = 7595;
          }
          goto LABEL_807;
        case 0x112u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 7622;
            goto LABEL_807;
          }
          v772 = (CDropShadow *)CResourceTable::GetResource(v11, v6[1], 0x76u);
          if ( !v772 )
          {
            v860 = 7637;
            goto LABEL_807;
          }
          CDropShadow::SetBlurRadius(v772, *((float *)v6 + 2));
          break;
        case 0x113u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 7649;
            goto LABEL_807;
          }
          v773 = (CDropShadow *)CResourceTable::GetResource(v11, v6[1], 0x76u);
          if ( !v773 )
          {
            v860 = 7664;
            goto LABEL_807;
          }
          CDropShadow::SetColor(v773, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4), *((float *)v6 + 5));
          break;
        case 0x114u:
          if ( (_DWORD)v7 == 12 )
          {
            v774 = (CDropShadow *)CResourceTable::GetResource(v11, v6[1], 0x76u);
            if ( v774 )
            {
              v775 = CDropShadow::ProcessSetMask(
                       v774,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_DROPSHADOW_SETMASK *)v6);
              v13 = v775;
              if ( v775 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v775, 0x1E0Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7691;
          }
          else
          {
            v860 = 7676;
          }
          goto LABEL_807;
        case 0x115u:
          if ( (_DWORD)v7 != 20 )
          {
            v860 = 7703;
            goto LABEL_807;
          }
          v776 = (CDropShadow *)CResourceTable::GetResource(v11, v6[1], 0x76u);
          if ( !v776 )
          {
            v860 = 7718;
            goto LABEL_807;
          }
          CDropShadow::SetOffset(v776, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4));
          break;
        case 0x116u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 7730;
            goto LABEL_807;
          }
          v777 = (CDropShadow *)CResourceTable::GetResource(v11, v6[1], 0x76u);
          if ( !v777 )
          {
            v860 = 7745;
            goto LABEL_807;
          }
          CDropShadow::SetOpacity(v777, *((float *)v6 + 2));
          break;
        case 0x117u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 7757;
          }
          else
          {
            v778 = (CCompositionLight *)CResourceTable::GetResource(v11, v6[1], 0x77u);
            if ( v778 )
            {
              v779 = CCompositionLight::ProcessAddTargets(
                       v778,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_COMPOSITIONLIGHT_ADDTARGETS *)v6,
                       v6 + 3,
                       v859);
              v13 = v779;
              if ( v779 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v779, 0x1E63u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7775;
          }
          goto LABEL_807;
        case 0x118u:
          if ( (_DWORD)v7 != 8 )
          {
            v860 = 7787;
            goto LABEL_807;
          }
          v780 = (CCompositionLight *)CResourceTable::GetResource(v11, v6[1], 0x77u);
          if ( !v780 )
          {
            v860 = 7802;
            goto LABEL_807;
          }
          CCompositionLight::RemoveAllTargets(v780);
          break;
        case 0x119u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 7814;
            goto LABEL_807;
          }
          v781 = (CCompositionDistantLight *)CResourceTable::GetResource(v11, v6[1], 0x78u);
          if ( !v781 )
          {
            v860 = 7829;
            goto LABEL_807;
          }
LABEL_1395:
          CCompositionDistantLight::SetColor(
            v781,
            *((float *)v6 + 2),
            *((float *)v6 + 3),
            *((float *)v6 + 4),
            *((float *)v6 + 5));
          break;
        case 0x11Au:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 7841;
            goto LABEL_807;
          }
          v781 = (CCompositionDistantLight *)CResourceTable::GetResource(v11, v6[1], 0x79u);
          if ( v781 )
            goto LABEL_1395;
          v860 = 7856;
          goto LABEL_807;
        case 0x11Bu:
          if ( (_DWORD)v7 == 12 )
          {
            v782 = (CCompositionDistantLight *)CResourceTable::GetResource(v11, v6[1], 0x79u);
            if ( v782 )
            {
              v783 = CCompositionDistantLight::ProcessSetCoordinateSpace(
                       v782,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *)v6);
              v13 = v783;
              if ( v783 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v783, 0x1ECFu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 7883;
          }
          else
          {
            v860 = 7868;
          }
          goto LABEL_807;
        case 0x11Cu:
          if ( (_DWORD)v7 != 20 )
          {
            v860 = 7895;
            goto LABEL_807;
          }
          v784 = (CCompositionDistantLight *)CResourceTable::GetResource(v11, v6[1], 0x79u);
          if ( !v784 )
          {
            v860 = 7910;
            goto LABEL_807;
          }
          CCompositionDistantLight::SetDirection(v784, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4));
          break;
        case 0x11Du:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 7922;
            goto LABEL_807;
          }
          v785 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Au);
          if ( !v785 )
          {
            v860 = 7937;
            goto LABEL_807;
          }
LABEL_1408:
          CCompositionPointLight::SetAttenuation0(v785, *((float *)v6 + 2));
          break;
        case 0x11Eu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 7949;
            goto LABEL_807;
          }
          v786 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Au);
          if ( !v786 )
          {
            v860 = 7964;
            goto LABEL_807;
          }
LABEL_1411:
          CCompositionPointLight::SetAttenuation1(v786, *((float *)v6 + 2));
          break;
        case 0x11Fu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 7976;
            goto LABEL_807;
          }
          v787 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Au);
          if ( !v787 )
          {
            v860 = 7991;
            goto LABEL_807;
          }
LABEL_1414:
          CCompositionPointLight::SetAttenuation2(v787, *((float *)v6 + 2));
          break;
        case 0x120u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 8003;
            goto LABEL_807;
          }
          v788 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Au);
          if ( !v788 )
          {
            v860 = 8018;
            goto LABEL_807;
          }
          CCompositionPointLight::SetColor(
            v788,
            *((float *)v6 + 2),
            *((float *)v6 + 3),
            *((float *)v6 + 4),
            *((float *)v6 + 5));
          break;
        case 0x121u:
          if ( (_DWORD)v7 == 12 )
          {
            v789 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Au);
            if ( v789 )
            {
              v790 = CCompositionPointLight::ProcessSetCoordinateSpace(
                       v789,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE *)v6);
              v13 = v790;
              if ( v790 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v790, 0x1F71u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8045;
          }
          else
          {
            v860 = 8030;
          }
          goto LABEL_807;
        case 0x122u:
          if ( (_DWORD)v7 != 20 )
          {
            v860 = 8057;
            goto LABEL_807;
          }
          v791 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Au);
          if ( !v791 )
          {
            v860 = 8072;
            goto LABEL_807;
          }
          CCompositionPointLight::SetOffset(v791, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4));
          break;
        case 0x123u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 8084;
            goto LABEL_807;
          }
          v785 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( v785 )
            goto LABEL_1408;
          v860 = 8099;
          goto LABEL_807;
        case 0x124u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 8111;
            goto LABEL_807;
          }
          v786 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( v786 )
            goto LABEL_1411;
          v860 = 8126;
          goto LABEL_807;
        case 0x125u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 8138;
            goto LABEL_807;
          }
          v787 = (CCompositionPointLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( v787 )
            goto LABEL_1414;
          v860 = 8153;
          goto LABEL_807;
        case 0x126u:
          if ( (_DWORD)v7 == 12 )
          {
            v792 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
            if ( v792 )
            {
              v793 = CCompositionSpotLight::ProcessSetCoordinateSpace(
                       v792,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE *)v6);
              v13 = v793;
              if ( v793 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v793, 0x1FF8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8180;
          }
          else
          {
            v860 = 8165;
          }
          goto LABEL_807;
        case 0x127u:
          if ( (_DWORD)v7 != 20 )
          {
            v860 = 0x2000;
            goto LABEL_807;
          }
          v794 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( !v794 )
          {
            v860 = 8207;
            goto LABEL_807;
          }
          CCompositionSpotLight::SetDirection(v794, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4));
          break;
        case 0x128u:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 8219;
            goto LABEL_807;
          }
          v795 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( !v795 )
          {
            v860 = 8234;
            goto LABEL_807;
          }
          CCompositionSpotLight::SetInnerConeAngle(v795, *((float *)v6 + 2));
          break;
        case 0x129u:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 8246;
            goto LABEL_807;
          }
          v796 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( !v796 )
          {
            v860 = 8261;
            goto LABEL_807;
          }
          CCompositionSpotLight::SetInnerConeColor(
            v796,
            *((float *)v6 + 2),
            *((float *)v6 + 3),
            *((float *)v6 + 4),
            *((float *)v6 + 5));
          break;
        case 0x12Au:
          if ( (_DWORD)v7 != 20 )
          {
            v860 = 8273;
            goto LABEL_807;
          }
          v797 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( !v797 )
          {
            v860 = 8288;
            goto LABEL_807;
          }
          CCompositionSpotLight::SetOffset(v797, *((float *)v6 + 2), *((float *)v6 + 3), *((float *)v6 + 4));
          break;
        case 0x12Bu:
          if ( (_DWORD)v7 != 12 )
          {
            v860 = 8300;
            goto LABEL_807;
          }
          v798 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( !v798 )
          {
            v860 = 8315;
            goto LABEL_807;
          }
          CCompositionSpotLight::SetOuterConeAngle(v798, *((float *)v6 + 2));
          break;
        case 0x12Cu:
          if ( (_DWORD)v7 != 24 )
          {
            v860 = 8327;
            goto LABEL_807;
          }
          v799 = (CCompositionSpotLight *)CResourceTable::GetResource(v11, v6[1], 0x7Bu);
          if ( !v799 )
          {
            v860 = 8342;
            goto LABEL_807;
          }
          CCompositionSpotLight::SetOuterConeColor(
            v799,
            *((float *)v6 + 2),
            *((float *)v6 + 3),
            *((float *)v6 + 4),
            *((float *)v6 + 5));
          break;
        case 0x13Au:
          if ( (unsigned int)v7 < 0x18 )
          {
            v860 = 8354;
          }
          else
          {
            v800 = v7 - 24;
            v801 = (CMeshGeometry2D *)CResourceTable::GetResource(v11, v6[1], 2u);
            if ( v801 )
            {
              v803 = CMeshGeometry2D::ProcessUpdate(v801, v802, (const struct MILCMD_MESHGEOMETRY2D *)v6, v6 + 6, v800);
              v13 = v803;
              if ( v803 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v803, 0x20BAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8374;
          }
          goto LABEL_807;
        case 0x13Bu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 8386;
          }
          else
          {
            v804 = v7 - 12;
            v805 = (CGeometry2DGroup *)CResourceTable::GetResource(v11, v6[1], 3u);
            if ( v805 )
            {
              v806 = CGeometry2DGroup::ProcessUpdate(
                       v805,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_GEOMETRY2DGROUP *)v6,
                       v6 + 3,
                       v804);
              v13 = v806;
              if ( v806 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v806, 0x20DAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8406;
          }
          goto LABEL_807;
        case 0x13Cu:
          if ( (unsigned int)v7 < 0x18 )
          {
            v860 = 8418;
          }
          else
          {
            v99 = v7 - 24;
            v100 = (CAtlasedRectsMesh *)CResourceTable::GetResource(v11, v6[1], 5u);
            if ( v100 )
            {
              v102 = CAtlasedRectsMesh::ProcessUpdate(
                       v100,
                       v101,
                       (const struct MILCMD_ATLASEDRECTSMESH *)v6,
                       v6 + 6,
                       v99);
              v13 = v102;
              if ( v102 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v102, 0x20FAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8438;
          }
          goto LABEL_807;
        case 0x13Du:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 8450;
          }
          else
          {
            v276 = v7 - 12;
            v277 = (CAtlasedRectsGroup *)CResourceTable::GetResource(v11, v6[1], 6u);
            if ( v277 )
            {
              v278 = CAtlasedRectsGroup::ProcessUpdate(
                       v277,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_ATLASEDRECTSGROUP *)v6,
                       v6 + 3,
                       v276);
              v13 = v278;
              if ( v278 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v278, 0x211Au);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8470;
          }
          goto LABEL_807;
        case 0x13Eu:
          if ( (_DWORD)v7 == 20 )
          {
            v415 = (CGaussianBlurEffect *)CResourceTable::GetResource(v11, v6[1], 0xAu);
            if ( v415 )
            {
              v417 = CGaussianBlurEffect::ProcessUpdate(v415, v416, (__m128 *)v6);
              v13 = v417;
              if ( v417 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v417, 0x2137u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8499;
          }
          else
          {
            v860 = 8482;
          }
          goto LABEL_807;
        case 0x13Fu:
          if ( (_DWORD)v7 == 24 )
          {
            v807 = (CBrightnessEffect *)CResourceTable::GetResource(v11, v6[1], 0xBu);
            if ( v807 )
            {
              v809 = CBrightnessEffect::ProcessUpdate(v807, v808, (const struct MILCMD_BRIGHTNESSEFFECT *)v6);
              v13 = v809;
              if ( v809 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v809, 0x2154u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8528;
          }
          else
          {
            v860 = 8511;
          }
          goto LABEL_807;
        case 0x140u:
          if ( (_DWORD)v7 == 96 )
          {
            v810 = (CColorMatrixEffect *)CResourceTable::GetResource(v11, v6[1], 0xCu);
            if ( v810 )
            {
              v812 = CColorMatrixEffect::ProcessUpdate(v810, v811, (const struct MILCMD_COLORMATRIXEFFECT *)v6);
              v13 = v812;
              if ( v812 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v812, 0x2171u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8557;
          }
          else
          {
            v860 = 8540;
          }
          goto LABEL_807;
        case 0x141u:
          if ( (_DWORD)v7 == 12 )
          {
            v813 = (CSaturationEffect *)CResourceTable::GetResource(v11, v6[1], 0xDu);
            if ( v813 )
            {
              v815 = CSaturationEffect::ProcessUpdate(v813, v814, (const struct MILCMD_SATURATIONEFFECT *)v6);
              v13 = v815;
              if ( v815 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v815, 0x218Eu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8586;
          }
          else
          {
            v860 = 8569;
          }
          goto LABEL_807;
        case 0x142u:
          if ( (_DWORD)v7 == 32 )
          {
            v816 = (CShadowEffect *)CResourceTable::GetResource(v11, v6[1], 0xEu);
            if ( v816 )
            {
              v818 = CShadowEffect::ProcessUpdate(v816, v817, (const struct MILCMD_SHADOWEFFECT *)v6);
              v13 = v818;
              if ( v818 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v818, 0x21ABu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8615;
          }
          else
          {
            v860 = 8598;
          }
          goto LABEL_807;
        case 0x143u:
          if ( (_DWORD)v7 == 12 )
          {
            v819 = (CSaturationEffect *)CResourceTable::GetResource(v11, v6[1], 0xFu);
            if ( v819 )
            {
              v821 = CSaturationEffect::ProcessUpdate(v819, v820, (const struct MILCMD_SATURATIONEFFECT *)v6);
              v13 = v821;
              if ( v821 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v821, 0x21C8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8644;
          }
          else
          {
            v860 = 8627;
          }
          goto LABEL_807;
        case 0x144u:
          if ( (_DWORD)v7 == 48 )
          {
            v822 = (CTurbulenceEffect *)CResourceTable::GetResource(v11, v6[1], 0x10u);
            if ( v822 )
            {
              v824 = CTurbulenceEffect::ProcessUpdate(v822, v823, (const struct MILCMD_TURBULENCEEFFECT *)v6);
              v13 = v824;
              if ( v824 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v824, 0x21E5u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8673;
          }
          else
          {
            v860 = 8656;
          }
          goto LABEL_807;
        case 0x145u:
          if ( (_DWORD)v7 == 24 )
          {
            v825 = (CFloodEffect *)CResourceTable::GetResource(v11, v6[1], 0x11u);
            if ( v825 )
            {
              v827 = CFloodEffect::ProcessUpdate(v825, v826, (const struct MILCMD_FLOODEFFECT *)v6);
              v13 = v827;
              if ( v827 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v827, 0x2202u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8702;
          }
          else
          {
            v860 = 8685;
          }
          goto LABEL_807;
        case 0x146u:
          if ( (_DWORD)v7 == 28 )
          {
            v828 = (CArithmeticCompositeEffect *)CResourceTable::GetResource(v11, v6[1], 0x12u);
            if ( v828 )
            {
              v830 = CArithmeticCompositeEffect::ProcessUpdate(
                       v828,
                       v829,
                       (const struct MILCMD_ARITHMETICCOMPOSITEEFFECT *)v6);
              v13 = v830;
              if ( v830 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v830, 0x221Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8731;
          }
          else
          {
            v860 = 8714;
          }
          goto LABEL_807;
        case 0x147u:
          if ( (_DWORD)v7 == 60 )
          {
            v831 = (CLinearTransferEffect *)CResourceTable::GetResource(v11, v6[1], 0x13u);
            if ( v831 )
            {
              v833 = CLinearTransferEffect::ProcessUpdate(v831, v832, (const struct MILCMD_LINEARTRANSFEREFFECT *)v6);
              v13 = v833;
              if ( v833 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v833, 0x223Cu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8760;
          }
          else
          {
            v860 = 8743;
          }
          goto LABEL_807;
        case 0x148u:
          if ( (_DWORD)v7 == 28 )
          {
            v834 = (CTableTransferEffect *)CResourceTable::GetResource(v11, v6[1], 0x14u);
            if ( v834 )
            {
              v836 = CTableTransferEffect::ProcessUpdate(v834, v835, (const struct MILCMD_TABLETRANSFEREFFECT *)v6);
              v13 = v836;
              if ( v836 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v836, 0x2259u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8789;
          }
          else
          {
            v860 = 8772;
          }
          goto LABEL_807;
        case 0x149u:
          if ( (_DWORD)v7 == 12 )
          {
            v837 = (CBlendEffect *)CResourceTable::GetResource(v11, v6[1], 0x15u);
            if ( v837 )
            {
              v839 = CBlendEffect::ProcessUpdate(v837, v838, (const struct MILCMD_BLENDEFFECT *)v6);
              v13 = v839;
              if ( v839 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v839, 0x2276u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8818;
          }
          else
          {
            v860 = 8801;
          }
          goto LABEL_807;
        case 0x14Au:
          if ( (_DWORD)v7 == 12 )
          {
            v840 = (CBlendEffect *)CResourceTable::GetResource(v11, v6[1], 0x16u);
            if ( v840 )
            {
              v842 = CBlendEffect::ProcessUpdate(v840, v841, (const struct MILCMD_BLENDEFFECT *)v6);
              v13 = v842;
              if ( v842 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v842, 0x2293u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8847;
          }
          else
          {
            v860 = 8830;
          }
          goto LABEL_807;
        case 0x14Bu:
          if ( (_DWORD)v7 == 44 )
          {
            v843 = (CAffineTransform2DEffect *)CResourceTable::GetResource(v11, v6[1], 0x17u);
            if ( v843 )
            {
              v845 = CAffineTransform2DEffect::ProcessUpdate(
                       v843,
                       v844,
                       (const struct MILCMD_AFFINETRANSFORM2DEFFECT *)v6);
              v13 = v845;
              if ( v845 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v845, 0x22B0u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8876;
          }
          else
          {
            v860 = 8859;
          }
          goto LABEL_807;
        case 0x14Cu:
          if ( (_DWORD)v7 == 32 )
          {
            v457 = (CTranslateTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x19u);
            if ( v457 )
            {
              v459 = CTranslateTransform3D::ProcessUpdate(v457, v458, (const struct MILCMD_TRANSLATETRANSFORM3D *)v6);
              v13 = v459;
              if ( v459 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v459, 0x22CDu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8905;
          }
          else
          {
            v860 = 8888;
          }
          goto LABEL_807;
        case 0x14Du:
          if ( (_DWORD)v7 == 56 )
          {
            v846 = (CScaleTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Au);
            if ( v846 )
            {
              v848 = CScaleTransform3D::ProcessUpdate(v846, v847, (const struct MILCMD_SCALETRANSFORM3D *)v6);
              v13 = v848;
              if ( v848 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v848, 0x22EAu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8934;
          }
          else
          {
            v860 = 8917;
          }
          goto LABEL_807;
        case 0x14Eu:
          if ( (_DWORD)v7 == 64 )
          {
            v454 = (CRotateTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Bu);
            if ( v454 )
            {
              v456 = CRotateTransform3D::ProcessUpdate(v454, v455, (const struct MILCMD_ROTATETRANSFORM3D *)v6);
              v13 = v456;
              if ( v456 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v456, 0x2307u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8963;
          }
          else
          {
            v860 = 8946;
          }
          goto LABEL_807;
        case 0x14Fu:
          if ( (_DWORD)v7 == 72 )
          {
            v460 = (CMatrixTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x1Cu);
            if ( v460 )
            {
              v462 = CMatrixTransform3D::ProcessUpdate(v460, v461, (const struct MILCMD_MATRIXTRANSFORM3D *)v6);
              v13 = v462;
              if ( v462 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v462, 0x2324u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 8992;
          }
          else
          {
            v860 = 8975;
          }
          goto LABEL_807;
        case 0x150u:
          if ( (unsigned int)v7 < 0x10 )
          {
            v860 = 9004;
          }
          else
          {
            v466 = v7 - 16;
            v467 = (CTransform3DGroup *)CResourceTable::GetResource(v11, v6[1], 0x1Fu);
            if ( v467 )
            {
              v468 = CTransform3DGroup::ProcessUpdate(v467, (struct CResourceTable *)v11, (__m128i *)v6, v6 + 4, v466);
              v13 = v468;
              if ( v468 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v468, 0x2344u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9024;
          }
          goto LABEL_807;
        case 0x151u:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 9036;
          }
          else
          {
            v387 = v7 - 12;
            v388 = (CDcompRenderTargetGroup *)CResourceTable::GetResource(v11, v6[1], 0x29u);
            if ( v388 )
            {
              v389 = CDcompRenderTargetGroup::ProcessUpdate(
                       v388,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_DCOMPRENDERTARGETGROUP *)v6,
                       v6 + 3,
                       v387);
              v13 = v389;
              if ( v389 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v389, 0x2364u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9056;
          }
          goto LABEL_807;
        case 0x152u:
          if ( (unsigned int)v7 < 0x10 )
          {
            v860 = 9068;
          }
          else
          {
            v287 = v7 - 16;
            v288 = (CTransformGroup *)CResourceTable::GetResource(v11, v6[1], 0x3Bu);
            if ( v288 )
            {
              v289 = CTransformGroup::ProcessUpdate(v288, (struct CResourceTable *)v11, (__m128i *)v6, v6 + 4, v287);
              v13 = v289;
              if ( v289 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v289, 0x2384u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9088;
          }
          goto LABEL_807;
        case 0x153u:
          if ( (_DWORD)v7 == 24 )
          {
            v270 = (CTranslateTransform *)CResourceTable::GetResource(v11, v6[1], 0x3Cu);
            if ( v270 )
            {
              v272 = CTranslateTransform::ProcessUpdate(v270, v271, (const struct MILCMD_TRANSLATETRANSFORM *)v6);
              v13 = v272;
              if ( v272 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v272, 0x23A1u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9117;
          }
          else
          {
            v860 = 9100;
          }
          goto LABEL_807;
        case 0x154u:
          if ( (_DWORD)v7 == 40 )
          {
            v263 = (CSkewTransform *)CResourceTable::GetResource(v11, v6[1], 0x3Du);
            if ( v263 )
            {
              v265 = CSkewTransform::ProcessUpdate(v263, v264, (const struct MILCMD_SKEWTRANSFORM *)v6);
              v13 = v265;
              if ( v265 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v265, 0x23BEu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9146;
          }
          else
          {
            v860 = 9129;
          }
          goto LABEL_807;
        case 0x155u:
          if ( (_DWORD)v7 == 32 )
          {
            v377 = (CTranslateTransform3D *)CResourceTable::GetResource(v11, v6[1], 0x3Eu);
            if ( v377 )
            {
              v379 = CTranslateTransform3D::ProcessUpdate(v377, v378, (const struct MILCMD_TRANSLATETRANSFORM3D *)v6);
              v13 = v379;
              if ( v379 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v379, 0x23DBu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9175;
          }
          else
          {
            v860 = 9158;
          }
          goto LABEL_807;
        case 0x156u:
          if ( (_DWORD)v7 == 40 )
          {
            v849 = (CSkewTransform *)CResourceTable::GetResource(v11, v6[1], 0x3Fu);
            if ( v849 )
            {
              v851 = CSkewTransform::ProcessUpdate(v849, v850, (const struct MILCMD_SKEWTRANSFORM *)v6);
              v13 = v851;
              if ( v851 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v851, 0x23F8u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9204;
          }
          else
          {
            v860 = 9187;
          }
          goto LABEL_807;
        case 0x157u:
          if ( (_DWORD)v7 == 56 )
          {
            v196 = (CMatrixTransform *)CResourceTable::GetResource(v11, v6[1], 0x40u);
            if ( v196 )
            {
              v198 = CMatrixTransform::ProcessUpdate(v196, v197, (const struct MILCMD_MATRIXTRANSFORM *)v6);
              v13 = v198;
              if ( v198 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v198, 0x2415u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9233;
          }
          else
          {
            v860 = 9216;
          }
          goto LABEL_807;
        case 0x158u:
          if ( (_DWORD)v7 == 8 )
          {
            v852 = (CManipulationTransform *)CResourceTable::GetResource(v11, v6[1], 0x41u);
            if ( v852 )
            {
              v855 = CManipulationTransform::ProcessUpdate(v852, v853, v854);
              v13 = v855;
              if ( v855 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v855, 0x2432u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9262;
          }
          else
          {
            v860 = 9245;
          }
          goto LABEL_807;
        case 0x159u:
          if ( (unsigned int)v7 < 0x10 )
          {
            v860 = 9274;
          }
          else
          {
            v856 = v7 - 16;
            v857 = (CGeometryGroup *)CResourceTable::GetResource(v11, v6[1], 0x43u);
            if ( v857 )
            {
              v858 = CGeometryGroup::ProcessUpdate(
                       v857,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_GEOMETRYGROUP *)v6,
                       v6 + 4,
                       v856);
              v13 = v858;
              if ( v858 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v858, 0x2452u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9294;
          }
          goto LABEL_807;
        case 0x15Au:
          if ( (_DWORD)v7 == 20 )
          {
            v375 = (struct CResource **)CResourceTable::GetResource(v11, v6[1], 0x45u);
            if ( v375 )
            {
              v376 = CCombinedGeometry::ProcessUpdate(v375, (struct CResourceTable *)v11, (__m128i *)v6);
              v13 = v376;
              if ( v376 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v376, 0x246Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9323;
          }
          else
          {
            v860 = 9306;
          }
          goto LABEL_807;
        case 0x15Bu:
          if ( (unsigned int)v7 < 0xC )
          {
            v860 = 9335;
          }
          else
          {
            v134 = v7 - 12;
            v135 = (CRgnGeometry *)CResourceTable::GetResource(v11, v6[1], 0x46u);
            if ( v135 )
            {
              v137 = CRgnGeometry::ProcessUpdate(v135, v136, (const struct MILCMD_RGNGEOMETRY *)v6, v6 + 3, v134);
              v13 = v137;
              if ( v137 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v137, 0x248Fu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9355;
          }
          goto LABEL_807;
        case 0x15Cu:
          if ( (_DWORD)v7 == 44 )
          {
            v293 = (struct CResource **)CResourceTable::GetResource(v11, v6[1], 0x48u);
            if ( v293 )
            {
              v294 = CSolidColorLegacyMilBrush::ProcessUpdate(v293, (struct CResourceTable *)v11, (__m128i *)v6);
              v13 = v294;
              if ( v294 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v294, 0x24ACu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9384;
          }
          else
          {
            v860 = 9367;
          }
          goto LABEL_807;
        case 0x15Du:
          if ( (unsigned int)v7 < 0x4C )
          {
            v860 = 9396;
          }
          else
          {
            v390 = v7 - 76;
            v391 = (CLinearGradientLegacyMilBrush *)CResourceTable::GetResource(v11, v6[1], 0x4Au);
            if ( v391 )
            {
              v392 = CLinearGradientLegacyMilBrush::ProcessUpdate(
                       v391,
                       (struct CResourceTable *)v11,
                       (const struct MILCMD_LINEARGRADIENTLEGACYMILBRUSH *)v6,
                       v6 + 19,
                       v390);
              v13 = v392;
              if ( v392 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v392, 0x24CCu);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9416;
          }
          goto LABEL_807;
        case 0x15Eu:
          if ( (_DWORD)v7 == 116 )
          {
            v313 = (CImageLegacyMilBrush *)CResourceTable::GetResource(v11, v6[1], 0x4Cu);
            if ( v313 )
            {
              v314 = CImageLegacyMilBrush::ProcessUpdate(v313, (struct CResourceTable *)v11, (__m128i *)v6);
              v13 = v314;
              if ( v314 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v314, 0x24E9u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9445;
          }
          else
          {
            v860 = 9428;
          }
          goto LABEL_807;
        case 0x15Fu:
          if ( (_DWORD)v7 == 20 )
          {
            v323 = (CSharedSection *)CResourceTable::GetResource(v11, v6[1], 0x5Fu);
            if ( v323 )
            {
              v325 = CSharedSection::ProcessUpdate(v323, v324, (const struct MILCMD_SHAREDSECTION *)v6);
              v13 = v325;
              if ( v325 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v325, 0x2506u);
                goto LABEL_808;
              }
              break;
            }
            v860 = 9474;
          }
          else
          {
            v860 = 9457;
          }
          goto LABEL_807;
        default:
          v860 = 9484;
          goto LABEL_807;
      }
    }
LABEL_62:
    v7 = v869;
    v12 = v861;
LABEL_63:
    v13 = -2147467259;
    v47 = (unsigned __int64)v9 + v14 - (_QWORD)v12;
    if ( v47 )
    {
      if ( v47 >= 8 )
      {
        v48 = *(unsigned int *)v12;
        if ( (unsigned int)v48 >= 8 && (v48 & 3) == 0 && v48 <= v47 )
        {
          v8 = *((_DWORD *)v12 + 1);
          v6 = (unsigned int *)((char *)v12 + 4);
          v12 = (struct CResourceTable *)((char *)v12 + v48);
          v863 = v6;
          v7 = (unsigned int)(v48 - 4);
          v861 = v12;
          v13 = 0;
          v869 = v48 - 4;
        }
      }
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2A2u);
        goto LABEL_808;
      }
      v10 = this;
    }
    else
    {
      v10 = this;
      v6 = 0LL;
      v7 = 0LL;
      v863 = 0LL;
      v869 = 0;
      v13 = 1;
    }
  }
  if ( (_DWORD)v7 != 12 )
  {
    v860 = 442;
    goto LABEL_807;
  }
  v28 = v6[1];
  v29 = v6[2];
  if ( !v28 )
    goto LABEL_827;
  if ( v28 >= *(_DWORD *)(v11 + 28) )
    goto LABEL_827;
  v30 = *(_QWORD *)(v11 + 40);
  if ( !*(_DWORD *)(v28 * *(_DWORD *)(v11 + 24) + v30) )
    goto LABEL_827;
  v31 = v30 + v28 * *(_DWORD *)(v11 + 24);
  if ( !*(_QWORD *)(v31 + 8) )
    goto LABEL_827;
  v32 = *(_QWORD *)(v31 + 8);
  v33 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v32 + 48LL);
  if ( (char *)v33 == (char *)CVisual::IsOfType )
  {
    v34 = CVisual::IsOfType(v32, v29);
  }
  else if ( v33 == CRgnGeometry::IsOfType )
  {
    v34 = CRgnGeometry::IsOfType(v32, v29);
  }
  else if ( (char *)v33 == (char *)CExpression::IsOfType )
  {
    v34 = CExpression::IsOfType(v32, v29);
  }
  else if ( (char *)v33 == (char *)CPropertyBag::IsOfType )
  {
    v34 = CPropertyBag::IsOfType(v32, v29);
  }
  else
  {
    v34 = (char *)v33 == (char *)CRenderData::IsOfType ? CRenderData::IsOfType(v32, v29) : v33(v32, v29);
  }
  if ( !v34 )
    goto LABEL_827;
  v36 = *(_QWORD *)(v31 + 8);
  if ( !v36 )
    goto LABEL_827;
  v37 = v6[1];
  if ( v37 && v37 < *(_DWORD *)(v11 + 28) )
    v38 = *(_DWORD *)(*(_DWORD *)(v11 + 24) * v37 + *(_QWORD *)(v11 + 40));
  else
    v38 = 0;
  v39 = v6[2];
  if ( v38 == v39 )
  {
    if ( v39 == 39 )
    {
      CComposition::RemoveDesktopRenderTarget((CComposition *)this, (struct CDesktopRenderTarget *)v36);
      CDesktopRenderTarget::ReleaseResourcesForDisplayChange((CDesktopRenderTarget *)(v36 + 112));
    }
    else if ( ((v39 - 38) & 0xFFFFFFEF) == 0 )
    {
      CRenderTargetManager::RemoveRenderTarget(this[4], (struct CRenderTarget *)v36);
    }
    v40 = v6[1];
    v41 = *(void (__fastcall **)(__int64, struct CResourceTable **, _QWORD))(*(_QWORD *)v36 + 96LL);
    if ( (char *)v41 == (char *)CNotificationResource::DetachFromChannel )
    {
      CNotificationResource::DetachFromChannel((CNotificationResource *)v36, (struct CChannelContext *)v4, 0LL, v35);
    }
    else if ( (char *)v41 == (char *)CWindowNode::DetachFromChannel )
    {
      CWindowNode::DetachFromChannel((CWindowNode *)v36, (struct CChannelContext *)v4, 0LL, v35);
    }
    else if ( (char *)v41 == (char *)CAnimation::DetachFromChannel )
    {
      CAnimation::DetachFromChannel((CAnimation *)v36, (struct CChannelContext *)v4);
    }
    else
    {
      v41(v36, v4, 0LL);
    }
    v42 = v4[3];
    v13 = -2147024890;
    if ( v40
      && v40 < *((_DWORD *)v42 + 7)
      && (v43 = *((_QWORD *)v42 + 5), *(_DWORD *)(v40 * *((_DWORD *)v42 + 6) + v43))
      && (v44 = v43 + v40 * *((_DWORD *)v42 + 6)) != 0
      && *(_DWORD *)v44 )
    {
      if ( *(_QWORD *)(v44 + 8) )
      {
        v45 = *(CResource **)(v44 + 8);
        v46 = *(void (**)(void))(*(_QWORD *)v45 + 16LL);
        if ( (char *)v46 == (char *)CResource::Release )
        {
          CResource::Release(v45);
        }
        else if ( (char *)v46 == (char *)CVisual::Release )
        {
          CVisual::Release(v45);
        }
        else if ( (char *)v46 == (char *)CAtlasedRects::Release )
        {
          CAtlasedRects::Release(v45);
        }
        else if ( (char *)v46 == (char *)CPrimitiveGroup::Release )
        {
          CPrimitiveGroup::Release(v45);
        }
        else if ( (char *)v46 == (char *)CCompositionSurfaceBitmap::Release )
        {
          CCompositionSurfaceBitmap::Release(v45);
        }
        else
        {
          v46();
        }
        *(_QWORD *)(v44 + 8) = 0LL;
      }
      memset_0((void *)(*((_QWORD *)v42 + 5) + v40 * *((_DWORD *)v42 + 6)), 0, *((unsigned int *)v42 + 6));
      v13 = 0;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0xF90u);
    }
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x939u);
    v14 = v865;
    v9 = a2;
  }
  else
  {
LABEL_827:
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x922u);
  }
  if ( v13 >= 0 )
    goto LABEL_62;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1C5u);
LABEL_808:
  if ( !IsOOM(v13) )
    MilUnexpectedErrorWithAsimovEvent(v463, L"batch processing error");
  return (unsigned int)v13;
}
