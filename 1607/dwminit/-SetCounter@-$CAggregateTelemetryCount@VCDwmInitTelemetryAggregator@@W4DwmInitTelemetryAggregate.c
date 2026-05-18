/*
 * XREFs of ?SetCounter@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXK@Z @ 0x180003A10
 * Callers:
 *     <none>
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001380 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 */

void __fastcall CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::SetCounter(
        __int64 a1,
        int a2)
{
  CDwmInitTelemetryAggregator *v4; // rcx
  _DWORD *v5; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = *(CDwmInitTelemetryAggregator **)(a1 + 8);
    if ( v4 )
      CDwmInitTelemetryAggregator::LogTelemetry(v4);
    v5 = *(_DWORD **)(a1 + 8);
    if ( v5 )
    {
      v5[2] = 0;
      v5[3] = 0;
      v5[4] = 0;
      v5[5] = 0;
    }
    *(_BYTE *)(a1 + 16) = 0;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = a2;
}
