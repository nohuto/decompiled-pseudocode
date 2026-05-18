/*
 * XREFs of ?Clear@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x1800013B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDwmInitTelemetryAggregator::Clear(CDwmInitTelemetryAggregator *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
