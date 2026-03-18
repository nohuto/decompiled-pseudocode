/*
 * XREFs of ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180015B54 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18001665C (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18005E4E8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180062CA8 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180123958 (-GetShapeBounds@CWindowNode@@AEBAJPEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180123A0C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CShape::IsAxisAlignedRectangle(CShape *this)
{
  __int64 v3; // rsi
  int v4; // eax

  if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) )
    return 1;
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) != 2 )
    return 0;
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 136LL))(v3);
  else
    v4 = 0;
  return v4 == 1;
}
