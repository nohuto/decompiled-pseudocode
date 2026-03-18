/*
 * XREFs of ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@@Z @ 0x18010CF90 (-ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH.c)
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x18010D07C (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@.c)
 *     ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x18010D12C (-ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SET.c)
 *     ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x18010D158 (-ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFOR.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18010D234 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x18010D51C (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18010D64C (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x18010D748 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x18010D828 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@.c)
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x18010D908 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETIN.c)
 *     ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x18010D990 (-ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETI.c)
 *     ??1CColorBrush@@UEAA@XZ @ 0x18012B1C4 (--1CColorBrush@@UEAA@XZ.c)
 *     ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x1801394E0 (-SetColor@CColorBrush@@AEAAXMMMM@Z.c)
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x18013967C (--1CSurfaceBrush@@UEAA@XZ.c)
 *     ?SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x18013AD4C (-SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z.c)
 *     ?SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x18013AE90 (-SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013C440 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x18013F624 (-SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x18013F700 (-SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013FD60 (-SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?InvalidateShadow@CDropShadow@@AEAAX_N@Z @ 0x18014FA54 (-InvalidateShadow@CDropShadow@@AEAAX_N@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CSpriteVisualContent::ReleasePrimitiveCaches(CSpriteVisualContent *this)
{
  *((_QWORD *)this + 14) = 0LL;
  CResource::NotifyOnChanged(this, 5u, 0LL);
  CResource::NotifyOnChanged(this, 0, 0LL);
}
