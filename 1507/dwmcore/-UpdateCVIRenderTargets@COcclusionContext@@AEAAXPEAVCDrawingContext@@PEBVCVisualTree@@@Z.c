/*
 * XREFs of ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18001F774
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z @ 0x18000EC84 (-RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z.c)
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000EE8C (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ @ 0x18005C018 (-UnregisterGraphWalkRoot@CGraphWalker@@SAXXZ.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800DC290 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 */

void __fastcall COcclusionContext::UpdateCVIRenderTargets(
        COcclusionContext *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3)
{
  __int64 i; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  char v8; // r12
  __int64 v9; // r13
  struct IGraphNode *v10; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 190); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 92);
    v7 = *(_QWORD *)(v6 + 40 * i);
    v8 = *(_BYTE *)(v6 + 40 * i + 16);
    v9 = *(_QWORD *)(v6 + 40 * i + 8);
    if ( v7 )
      v10 = (struct IGraphNode *)(v7 + 64);
    else
      v10 = 0LL;
    if ( (int)CGraphWalker::RegisterGraphWalkRoot(v10) >= 0 )
    {
      if ( v8 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(a2, a3, v7, v6 + 20 + 40 * i) )
        CCachedVisualImage::UpdateRenderTargetIfDirty(v9, *((_QWORD *)a2 + 48), *((_DWORD *)a2 + 98));
      CGraphWalker::UnregisterGraphWalkRoot();
    }
  }
  *((_DWORD *)this + 190) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 736, 40LL);
}
