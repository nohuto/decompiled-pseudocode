/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140495CAC
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14049582C (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1406A6F38 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140059740 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(unsigned int a1)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, EtwpHostSiloState, a1, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, EtwpHostSiloState, a1, 0, 8u, 0x401802u);
}
