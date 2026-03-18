/*
 * XREFs of ResetMouseAccelerationCurves @ 0x1C0135A58
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     BuildMouseAccelerationCurve @ 0x1C00F77F0 (BuildMouseAccelerationCurve.c)
 */

void ResetMouseAccelerationCurves()
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
    BuildMouseAccelerationCurve((struct tagMONITOR *)i);
}
