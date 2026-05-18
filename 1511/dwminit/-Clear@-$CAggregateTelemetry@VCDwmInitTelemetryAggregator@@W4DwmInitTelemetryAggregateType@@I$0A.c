/*
 * XREFs of ?Clear@?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXXZ @ 0x1800038B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::Clear(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
