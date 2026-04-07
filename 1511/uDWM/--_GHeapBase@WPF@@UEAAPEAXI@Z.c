/*
 * XREFs of ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x18009E090
 * Callers:
 *     AvDestroyProcessHeap @ 0x18009E180 (AvDestroyProcessHeap.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

WPF::HeapBase *__fastcall WPF::HeapBase::`scalar deleting destructor'(WPF::HeapBase *this, char a2)
{
  *(_QWORD *)this = &WPF::HeapBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
