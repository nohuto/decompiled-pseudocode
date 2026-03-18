/*
 * XREFs of ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x18012357C
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800629E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800640B0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CDxAccumulationContext *__fastcall CDxAccumulationContext::`scalar deleting destructor'(CDxAccumulationContext *this)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDxAccumulationContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
