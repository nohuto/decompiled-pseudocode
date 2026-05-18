/*
 * XREFs of ??_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z @ 0x1800014C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001380 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180004240 (--3@YAXPEAX@Z.c)
 */

CDwmInitTelemetryAggregator *__fastcall CDwmInitTelemetryAggregator::`scalar deleting destructor'(
        CDwmInitTelemetryAggregator *this,
        char a2)
{
  *(_QWORD *)this = &CDwmInitTelemetryAggregator::`vftable';
  CDwmInitTelemetryAggregator::LogTelemetry(this);
  *(_QWORD *)this = &CAggregateValuesBase<enum DwmInitTelemetryAggregateType,unsigned int>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
