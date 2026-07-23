/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x1402270D8
 * Callers:
 *     EtwTraceObjectOperation @ 0x140225BB0 (EtwTraceObjectOperation.c)
 *     EtwTraceDuplicateHandle @ 0x1406A1698 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1406A1E94 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpTraceKernelEventWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  bool i; // zf

  v6 = a3 & EtwpActiveSystemLoggers;
  for ( i = !_BitScanForward((unsigned int *)&a3, a3 & EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&a3, v6) )
  {
    v6 &= v6 - 1;
    EtwpLogKernelEvent(a1, EtwpHostSiloState, (unsigned __int16)EtwpSystemLogger[2 * a3], a2, a4, a5);
  }
}
