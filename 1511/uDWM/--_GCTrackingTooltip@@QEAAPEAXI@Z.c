/*
 * XREFs of ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800855F0
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180085AFC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180085D38 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CTrackingTooltip *__fastcall CTrackingTooltip::`scalar deleting destructor'(CTrackingTooltip *this)
{
  HWND v2; // rcx

  v2 = (HWND)*((_QWORD *)this + 1);
  if ( v2 )
    DestroyWindow(v2);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTrackingTooltip *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
