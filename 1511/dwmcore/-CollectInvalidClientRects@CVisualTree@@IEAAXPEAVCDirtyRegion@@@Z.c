/*
 * XREFs of ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x180075DF0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18007C5A0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 */

void __fastcall CVisualTree::CollectInvalidClientRects(CVisualTree *this, struct CDirtyRegion *a2)
{
  int i; // ebx
  CHwndRenderTarget *v5; // rsi
  void (*v6)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *); // r14

  for ( i = *((_DWORD *)this + 190); i > 0; --i )
  {
    v5 = *(CHwndRenderTarget **)(*((_QWORD *)this + 92) + 8LL * (unsigned int)(i - 1));
    v6 = *(void (**)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *))(*(_QWORD *)v5 + 32LL);
    if ( v6 == CHwndRenderTarget::AddInvalidRects )
      CHwndRenderTarget::AddInvalidRects(v5, this, a2);
    else
      ((void (__fastcall *)(CHwndRenderTarget *, CVisualTree *, struct CDirtyRegion *))v6)(v5, this, a2);
  }
}
