/*
 * XREFs of ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18001C4A0
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180020E14 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CTopLevelAtlasedRectsVisual *__fastcall CTopLevelAtlasedRectsVisual::`scalar deleting destructor'(
        CTopLevelAtlasedRectsVisual *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *(_QWORD *)this = &CTopLevelAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
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
