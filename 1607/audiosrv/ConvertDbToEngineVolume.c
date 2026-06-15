/*
 * XREFs of ConvertDbToEngineVolume @ 0x18007A154
 * Callers:
 *     s_apmSetVolumeGroupGainForId @ 0x18007A3C0 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x180036D3C (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
