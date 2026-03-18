/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x14054A870
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1406E8638 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 */

unsigned __int64 __fastcall EtwpLogAlwaysPresentRundown(unsigned int a1)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, 0, 0xF3Au, 4200450);
  return EtwpLogKernelEvent(0LL, a1, 0, 8u, 4200450);
}
