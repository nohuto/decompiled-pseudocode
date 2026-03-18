/*
 * XREFs of ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079840 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18007C5A0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180079700 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 */

void __fastcall CDirtyRegion::SetFullDirty(CDirtyRegion *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // esi

  v4 = *((_BYTE *)this + 1014);
  LOBYTE(a4) = 1;
  v5 = *((_DWORD *)this + 248);
  CDirtyRegion::Initialize(this, *((_QWORD *)this + 2), (char *)this + 996, a4);
  *((_BYTE *)this + 1014) = v4;
  if ( v4 )
    *((_DWORD *)this + 110) = 1;
  *((_DWORD *)this + 248) = v5;
}
