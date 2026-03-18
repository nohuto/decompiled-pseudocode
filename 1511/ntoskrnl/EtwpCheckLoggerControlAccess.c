/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x14046D32C
 * Callers:
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405453E4 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140665298 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14046D378 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14046D3B0 (EtwpReferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess, 0LL);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
