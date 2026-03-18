/*
 * XREFs of ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C
 * Callers:
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180008DCC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x18000C0B0 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180023584 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024040 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800507B0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180051FB0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x180053838 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800608B0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180060F20 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180073980 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800AD988 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800AE004 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800AE0A0 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x1801254C0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801381E8 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z @ 0x18013843C (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z.c)
 *     ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x180138960 (-HasSecondaryRepresentations@CVisual@@QEAA_NXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180138C1C (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x1801502A8 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 *     ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x18015D108 (-GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV-$CPtrA.c)
 *     ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x18015D2A8 (-AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPtrArrayBase::operator[](__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8

  v2 = *a1;
  if ( (*a1 & 2) != 0 )
    v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *a1 & 1;
  if ( a2 >= v3 )
    return 0LL;
  v4 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v3 == 1 )
    return v4;
  else
    return *(_QWORD *)(v4 + 8 * a2 + 16);
}
