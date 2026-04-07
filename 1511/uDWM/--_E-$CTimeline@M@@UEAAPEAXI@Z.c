/*
 * XREFs of ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x18001ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

_QWORD *__fastcall CTimeline<float>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  __int64 v2; // rsi
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  v2 = a1[8];
  *a1 = &CTimelineBase::`vftable';
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    a1[8] = 0LL;
  }
  *a1 = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a1);
    else
      v5(WPF::g_pProcessHeap, a1);
  }
  return a1;
}
