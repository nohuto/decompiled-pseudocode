/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x140665544
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406651C8 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140665298 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x1405004F4 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 */

void __fastcall EtwpLogKernelTraceRundown(unsigned int a1, __int128 *a2, unsigned __int8 a3)
{
  EtwpLogGroupMask(a1, a2, 0x20u);
  EtwpKernelTraceRundown((int *)a2, a1, a3);
  EtwpLogAlwaysPresentRundown(a1);
}
