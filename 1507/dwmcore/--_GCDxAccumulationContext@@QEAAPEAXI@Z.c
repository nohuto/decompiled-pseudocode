/*
 * XREFs of ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x180104CD4
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C1A0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDxAccumulationContext *__fastcall CDxAccumulationContext::`scalar deleting destructor'(CDxAccumulationContext *this)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDxAccumulationContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
