/*
 * XREFs of ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180028360
 * Callers:
 *     ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x1800955F0 (-Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 * Callees:
 *     <none>
 */

bool __fastcall DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  bool result; // al

  result = 0;
  if ( a2 >= 0x30 && *a1 == 4096 )
  {
    v2 = (unsigned __int16)a1[1];
    if ( v2 <= a2 && (_WORD *)((char *)a1 + a2) >= a1 )
    {
      v3 = a1[16];
      if ( !v3 || (v3 & 3) == 0 && (unsigned __int64)v3 + 16 <= v2 )
      {
        v4 = a1[17];
        if ( !v4
          || (v4 & 1) == 0
          && (unsigned __int64)v4 + 2LL * ((unsigned __int16)a1[18] + 1) <= v2
          && !*(_WORD *)((char *)&a1[(unsigned __int16)a1[18]] + v4) )
        {
          v5 = a1[19];
          if ( !v5
            || (v5 & 1) == 0
            && (unsigned __int64)v5 + 2LL * ((unsigned __int16)a1[20] + 1) <= v2
            && !*(_WORD *)((char *)&a1[(unsigned __int16)a1[20]] + v5) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}
