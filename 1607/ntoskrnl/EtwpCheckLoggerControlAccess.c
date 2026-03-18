/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x140490208
 * Callers:
 *     EtwTraceRaw @ 0x1402256C4 (EtwTraceRaw.c)
 *     EtwpQueryTrace @ 0x14048DD54 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14048FFF8 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140494D88 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140580C54 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6C80 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9C84 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA708 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpAccessCheck @ 0x14040EFCC (EtwpAccessCheck.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140490254 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14049028C (EtwpReferenceLoggerSecurityDescriptor.c)
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
