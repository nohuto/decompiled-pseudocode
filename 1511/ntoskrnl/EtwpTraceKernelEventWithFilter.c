/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x14020F3CC
 * Callers:
 *     EtwTraceObjectOperation @ 0x14020DECC (EtwTraceObjectOperation.c)
 *     EtwTraceDuplicateHandle @ 0x1406607E8 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x14066104C (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x140662228 (EtwpTraceHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
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
    EtwpLogKernelEvent(a1, (unsigned __int16)EtwpSystemLogger[2 * a3], a2, a4, a5);
  }
}
