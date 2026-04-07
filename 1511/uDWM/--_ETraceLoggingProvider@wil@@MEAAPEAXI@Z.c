/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180075CE0
 * Callers:
 *     ??1?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x18004E9FC (--1-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ??1?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004EB54 (--1-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180075C9C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
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
