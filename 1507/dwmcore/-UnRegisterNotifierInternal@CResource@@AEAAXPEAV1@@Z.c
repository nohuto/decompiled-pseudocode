/*
 * XREFs of ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180002C40 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180011E04 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18001211C (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@IEAAJPEAVCContent@@@Z @ 0x180034514 (-SetContent@CVisual@@IEAAJPEAVCContent@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800349B4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180034C00 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x180034C90 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 *     ??1CEffectGroup@@MEAA@XZ @ 0x18003C7F0 (--1CEffectGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x18003C830 (-ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800480B8 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800485EC (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x18004868C (--$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z.c)
 *     ??$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z @ 0x1800488EC (--$UnRegisterNotifier@VCInteraction@@@CResource@@QEAAXAEAPEAVCInteraction@@@Z.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180049C6C (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18004F3DC (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180053470 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18006E5D0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x180079478 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1800796BC (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180079B20 (-ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C1A0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18007C664 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ @ 0x180083E10 (-UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CImageBrush@@UEAAXXZ @ 0x180085A40 (-UnRegisterNotifiers@CImageBrush@@UEAAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1800EAEC0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1800EBD78 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x1800ECC98 (-ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAP.c)
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETFILTERLIST@@@Z @ 0x1800ECD38 (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPREND.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETTRANSFORM@@@Z @ 0x1800ECE4C (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDE.c)
 *     ?ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180104500 (-ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x180104D9C (-DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18010BA6C (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18010C6FC (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x18010CAC8 (--1CYCbCrSurface@@MEAA@XZ.c)
 *     ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x18010CBF0 (-ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ??1CCompiledEffect@@MEAA@XZ @ 0x1801122DC (--1CCompiledEffect@@MEAA@XZ.c)
 *     ?EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ @ 0x18011259C (-EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574 (-ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEI.c)
 *     ?ProcessEffectStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_EFFECTSTATEUPDATE@@@Z @ 0x1801176D4 (-ProcessEffectStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_EFFECTSTATEU.c)
 *     ?ProcessSurfaceStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_SURFACESTATEUPDATE@@@Z @ 0x180117764 (-ProcessSurfaceStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_SURFACESTAT.c)
 *     ?ReleaseResources@CPrimitive@@AEAAXXZ @ 0x1801178C8 (-ReleaseResources@CPrimitive@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180118FF0 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ @ 0x180119110 (-UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18001B1E0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180048180 (-Release@CResource@@UEAAKXZ.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18006E070 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x180070290 (-Release@CAtlasedRects@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CResource::UnRegisterNotifierInternal(CResource *this, struct CResource *a2)
{
  __int64 (__fastcall *v3)(CResource *); // rdi

  if ( a2 && CPtrArrayBase::Remove((struct CResource *)((char *)a2 + 24), (__int64)this) )
  {
    v3 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)a2 + 16LL);
    if ( v3 == CResource::Release )
    {
      CResource::Release(a2);
    }
    else if ( (char *)v3 == (char *)CAtlasedRects::Release )
    {
      CAtlasedRects::Release(a2);
    }
    else if ( (char *)v3 == (char *)CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(a2);
    }
    else
    {
      v3(a2);
    }
  }
}
