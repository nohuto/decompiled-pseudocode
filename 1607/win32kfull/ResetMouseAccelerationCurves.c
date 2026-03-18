/*
 * XREFs of ResetMouseAccelerationCurves @ 0x1C00915D0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     BuildMouseAccelerationCurve @ 0x1C0091600 (BuildMouseAccelerationCurve.c)
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
