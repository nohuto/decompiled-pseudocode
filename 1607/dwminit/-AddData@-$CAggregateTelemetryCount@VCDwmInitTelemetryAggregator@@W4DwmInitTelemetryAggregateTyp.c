/*
 * XREFs of ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x1800038F0
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000271C (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800028C4 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001380 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 */

_DWORD *__fastcall CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5)
{
  CDwmInitTelemetryAggregator *v8; // rcx
  _DWORD *v9; // rax
  _DWORD *result; // rax
  int v11; // edi
  int v12; // edi

  if ( a4
    && *(_BYTE *)(a1 + 16)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) >= *(_DWORD *)(a1 + 36)
    && *(_DWORD *)(a1 + 36) )
  {
    v8 = *(CDwmInitTelemetryAggregator **)(a1 + 8);
    if ( v8 )
      CDwmInitTelemetryAggregator::LogTelemetry(v8);
    if ( a5 )
    {
      v9 = *(_DWORD **)(a1 + 8);
      if ( v9 )
      {
        v9[2] = 0;
        v9[3] = 0;
        v9[4] = 0;
        v9[5] = 0;
      }
      *(_BYTE *)(a1 + 16) = 0;
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  }
  result = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
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
