/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x1406E8638
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406E82C4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogGroupMask @ 0x14054A654 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 */

unsigned __int64 __fastcall EtwpLogKernelTraceRundown(unsigned int a1, __int128 *a2, unsigned __int8 a3)
{
  EtwpLogGroupMask(a1, a2, 0x20u);
  EtwpKernelTraceRundown((int *)a2, a1, a3);
  return EtwpLogAlwaysPresentRundown(a1);
}
