/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001E824
 * Callers:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003BA44 (--1CWindowIconic@@MEAA@XZ.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x18003DEB8 (--1CWindowSnapshot@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001D6EC (--1CWindowData@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void **__fastcall CWindowData::`scalar deleting destructor'(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CWindowData::~CWindowData(this);
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v2(WPF::g_pProcessHeap, this);
  return this;
}
