/*
 * XREFs of ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18000AB88
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000ABF8 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18000AC8C (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
