/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1406A6F38
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406A6B9C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6C80 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x140495A88 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140495B04 (EtwpKernelTraceRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(unsigned int a1, __int128 *a2, unsigned __int8 a3)
{
  EtwpLogGroupMask(a1, a2, 0x20u);
  EtwpKernelTraceRundown((int *)a2, a1, a3);
  EtwpLogAlwaysPresentRundown(a1);
}
