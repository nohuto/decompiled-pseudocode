/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18006DC30
 * Callers:
 *     ??1?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1800484B4 (--1-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ??1?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x1800484F8 (--1-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18006DBF4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wil::TraceLoggingProvider *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
