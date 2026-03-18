/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140500714
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140500298 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140665544 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(unsigned int a1)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, 0LL, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, 0LL, 8u, 0x401802u);
}
