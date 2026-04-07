/*
 * XREFs of ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180003434
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000357C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180003610 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
