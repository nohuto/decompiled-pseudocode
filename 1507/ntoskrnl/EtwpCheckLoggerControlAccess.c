/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1404D3244
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x1404D315C (EtwpUpdateEnableMask.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405C4B58 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1404D32A8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404D32E0 (EtwpReferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  if ( !PsEqualCurrentServerSilo(*(_QWORD *)(a2 + 912)) )
    return 3221225506LL;
  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess, 0LL);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
