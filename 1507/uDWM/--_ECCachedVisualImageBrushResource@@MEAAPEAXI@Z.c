/*
 * XREFs of ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x1800123D0
 * Callers:
 *     ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x180014BE0 (--1CDrawGeometryInstruction@@EEAA@XZ.c)
 * Callees:
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180012430 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CCachedVisualImageBrushResource *__fastcall CCachedVisualImageBrushResource::`vector deleting destructor'(
        CCachedVisualImageBrushResource *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
