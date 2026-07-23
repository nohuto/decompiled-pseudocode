/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1406A7070
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406A6CD4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x140496518 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(unsigned int a1, __int128 *a2, unsigned __int8 a3)
{
  EtwpLogGroupMask(a1, a2, 0x20u);
  EtwpKernelTraceRundown((int *)a2, a1, a3);
  EtwpLogAlwaysPresentRundown(a1);
}
