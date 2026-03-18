/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x14025E6F4
 * Callers:
 *     EtwTraceObjectOperation @ 0x14025D138 (EtwTraceObjectOperation.c)
 *     EtwTraceDuplicateHandle @ 0x1406E379C (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1406E4034 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1406E52FC (EtwpTraceHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 */

_UNKNOWN **__fastcall EtwpTraceKernelEventWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v7; // ebx
  bool i; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a3 & EtwpActiveSystemLoggers;
  for ( i = !_BitScanForward((unsigned int *)&a3, a3 & EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&a3, v7) )
  {
    v7 &= v7 - 1;
    result = (_UNKNOWN **)EtwpLogKernelEvent(a1, (unsigned __int16)EtwpSystemLogger[2 * a3], a2, a4, a5);
  }
  return result;
}
