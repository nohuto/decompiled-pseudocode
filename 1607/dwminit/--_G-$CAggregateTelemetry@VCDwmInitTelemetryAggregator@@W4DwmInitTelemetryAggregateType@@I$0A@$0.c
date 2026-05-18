/*
 * XREFs of ??_G?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x180003A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003724 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ??3@YAXPEAX@Z @ 0x180004240 (--3@YAXPEAX@Z.c)
 */

void *__fastcall CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::~CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
