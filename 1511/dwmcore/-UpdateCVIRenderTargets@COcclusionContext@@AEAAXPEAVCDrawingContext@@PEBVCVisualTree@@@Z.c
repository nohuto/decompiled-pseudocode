/*
 * XREFs of ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800555EC
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000B2BC (-UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800A8A98 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800AAB70 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F38F0 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 */

void __fastcall COcclusionContext::UpdateCVIRenderTargets(
        COcclusionContext *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3)
{
  __int64 i; // rbx
  __int64 v6; // r14
  void *v7; // r12
  char v8; // r15
  __int64 v9; // r13

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 190); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 92);
    v7 = *(void **)(v6 + 40 * i);
    v8 = *(_BYTE *)(v6 + 40 * i + 16);
    v9 = *(_QWORD *)(v6 + 40 * i + 8);
    if ( (int)CThreadContext::RegisterGraphWalkRoot(v7) >= 0 )
    {
      if ( v8 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(a2, a3, v7, v6 + 20 + 40 * i) )
        CCachedVisualImage::UpdateRenderTargetIfDirty(v9, *((_QWORD *)a2 + 48), *((_DWORD *)a2 + 98));
      CThreadContext::UnregisterGraphWalkRoot();
    }
  }
  *((_DWORD *)this + 190) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 736, 40LL);
}
