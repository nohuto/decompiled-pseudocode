/*
 * XREFs of ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x1801188F8
 * Callers:
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18011894C (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180119060 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CTelemetryTracking::CTelemetryTrackingInfo *__fastcall CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(
        CTelemetryTracking::CTelemetryTrackingInfo *this)
{
  if ( *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTelemetryTracking::CTelemetryTrackingInfo *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
