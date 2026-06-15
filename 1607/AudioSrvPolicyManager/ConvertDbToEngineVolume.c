/*
 * XREFs of ConvertDbToEngineVolume @ 0x18001F6F0
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D1F0 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     pow_0 @ 0x180024CD2 (pow_0.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow_0(10.0, a1 / 20.0);
}
