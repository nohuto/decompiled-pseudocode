/*
 * XREFs of ConvertDbToEngineVolume @ 0x18001D13C
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001B22C (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     pow @ 0x180021684 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
