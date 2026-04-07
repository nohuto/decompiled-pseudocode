/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x180018F70
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180006D3C (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003AA88 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x180017EEC (--1CWindowData@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
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
