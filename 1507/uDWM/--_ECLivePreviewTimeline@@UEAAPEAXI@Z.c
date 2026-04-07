/*
 * XREFs of ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18006B850
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CTimelineBase@@UEAA@XZ @ 0x1800676A0 (--1CTimelineBase@@UEAA@XZ.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::`vector deleting destructor'(
        CLivePreviewTimeline *this,
        char a2)
{
  *(_QWORD *)this = &CLivePreviewTimeline::`vftable';
  CTimelineBase::~CTimelineBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLivePreviewTimeline *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
