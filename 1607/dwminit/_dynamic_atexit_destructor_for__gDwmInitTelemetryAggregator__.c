/*
 * XREFs of _dynamic_atexit_destructor_for__gDwmInitTelemetryAggregator__ @ 0x180008510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__gDwmInitTelemetryAggregator__()
{
  gDwmInitTelemetryAggregator = &CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::`vftable';
  CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::~CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>((__int64)&gDwmInitTelemetryAggregator);
}
