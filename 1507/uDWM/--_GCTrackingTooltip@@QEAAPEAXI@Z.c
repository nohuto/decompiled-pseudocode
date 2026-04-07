/*
 * XREFs of ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x18007DBC0
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18007E290 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18007E4D4 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
