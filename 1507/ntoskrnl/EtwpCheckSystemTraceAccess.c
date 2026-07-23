/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x1405C4B58
 * Callers:
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 832) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, a2, 0LL);
}
