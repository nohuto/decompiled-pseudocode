/*
 * XREFs of ResetMouseAccelerationCurves @ 0x1C00FD5CC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     BuildMouseAccelerationCurve @ 0x1C00FD7F0 (BuildMouseAccelerationCurve.c)
 */

__int64 ResetMouseAccelerationCurves()
{
  __int64 result; // rax
  __int64 i; // rbx

  result = gpDispInfo;
  for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
    result = BuildMouseAccelerationCurve((struct tagMONITOR *)i);
  return result;
}
