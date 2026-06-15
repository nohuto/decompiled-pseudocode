/*
 * XREFs of ?ValidateScreenReaderDuckingGain@@YAMM@Z @ 0x18009D808
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18009D4E8 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ConvertDbToEngineVolume @ 0x1800A8F6C (ConvertDbToEngineVolume.c)
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
