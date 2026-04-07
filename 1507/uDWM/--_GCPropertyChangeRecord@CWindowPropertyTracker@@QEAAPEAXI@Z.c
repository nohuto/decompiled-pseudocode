/*
 * XREFs of ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180009984
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180009A0C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180009AA0 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CWindowPropertyTracker::CPropertyChangeRecord *__fastcall CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(
        CWindowPropertyTracker::CPropertyChangeRecord *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 8);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowPropertyTracker::CPropertyChangeRecord *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
