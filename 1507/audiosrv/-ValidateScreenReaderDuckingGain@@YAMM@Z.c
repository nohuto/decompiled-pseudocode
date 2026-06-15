/*
 * XREFs of ?ValidateScreenReaderDuckingGain@@YAMM@Z @ 0x1800A061C
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ConvertDbToEngineVolume @ 0x1800A154C (ConvertDbToEngineVolume.c)
 */

float __fastcall ValidateScreenReaderDuckingGain(float a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx
  float v4; // xmm0_4
  float v5; // xmm0_4

  v4 = ConvertDbToEngineVolume(v1);
  if ( a1 > v4 )
    a1 = v4;
  v5 = ConvertDbToEngineVolume(v3);
  if ( v5 > a1 )
    return v5;
  return a1;
}
