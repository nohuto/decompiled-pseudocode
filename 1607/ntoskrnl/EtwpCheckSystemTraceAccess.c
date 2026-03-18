/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x140580C54
 * Callers:
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 816) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess((unsigned int *)&SystemTraceControlGuid, a2, 0LL);
}
