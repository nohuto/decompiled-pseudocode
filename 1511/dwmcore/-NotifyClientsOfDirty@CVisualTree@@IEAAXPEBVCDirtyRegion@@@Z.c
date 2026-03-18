/*
 * XREFs of ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x180075CB8
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18007C670 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 */

void __fastcall CVisualTree::NotifyClientsOfDirty(CVisualTree *this, const struct CDirtyRegion *a2)
{
  int i; // ebx
  CHwndRenderTarget *v5; // rsi
  void (__fastcall *v6)(CHwndRenderTarget *__hidden, const struct CVisualTree *, const struct CDirtyRegion *); // r14

  for ( i = *((_DWORD *)this + 190); i > 0; --i )
  {
    v5 = *(CHwndRenderTarget **)(*((_QWORD *)this + 92) + 8LL * (unsigned int)(i - 1));
    v6 = *(void (__fastcall **)(CHwndRenderTarget *__hidden, const struct CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v5 + 24LL);
    if ( v6 == CHwndRenderTarget::NotifyTreeDirtyRegion )
      CHwndRenderTarget::NotifyTreeDirtyRegion(v5, this, a2);
    else
      v6(v5, this, a2);
  }
}
