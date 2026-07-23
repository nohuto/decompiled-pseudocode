/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x140581100
 * Callers:
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 816) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, a2, 0LL);
}
