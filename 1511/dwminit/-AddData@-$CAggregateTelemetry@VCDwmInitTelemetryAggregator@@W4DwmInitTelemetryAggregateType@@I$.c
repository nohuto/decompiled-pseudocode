/*
 * XREFs of ?AddData@?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I@Z @ 0x1800037B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CAggregateTelemetry<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
        __int64 a1,
        int a2,
        int a3)
{
  _DWORD *result; // rax
  int v4; // edx
  int v5; // edx

  result = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            result[5] += a3;
        }
        else
        {
          result[4] += a3;
        }
      }
      else
      {
        result[3] += a3;
      }
    }
    else
    {
      result[2] += a3;
    }
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
