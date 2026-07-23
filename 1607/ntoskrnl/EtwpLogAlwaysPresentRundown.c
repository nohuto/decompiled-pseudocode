/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x14049673C
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1404962BC (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1406A7070 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(unsigned int a1)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, EtwpHostSiloState, a1, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, EtwpHostSiloState, a1, 0, 8u, 0x401802u);
}
