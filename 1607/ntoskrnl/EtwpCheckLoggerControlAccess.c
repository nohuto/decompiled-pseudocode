/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x140490C98
 * Callers:
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x140490A88 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140495818 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140581100 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9DBC (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140490CE4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140490D1C (EtwpReferenceLoggerSecurityDescriptor.c)
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
