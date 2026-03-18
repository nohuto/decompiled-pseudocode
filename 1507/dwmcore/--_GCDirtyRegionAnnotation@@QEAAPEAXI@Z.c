/*
 * XREFs of ??_GCDirtyRegionAnnotation@@QEAAPEAXI@Z @ 0x1800DBB88
 * Callers:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x18003DA40 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDirtyRegionAnnotation *__fastcall CDirtyRegionAnnotation::`scalar deleting destructor'(CDirtyRegionAnnotation *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDirtyRegionAnnotation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
