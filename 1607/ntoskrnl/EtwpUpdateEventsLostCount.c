/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x1400A86DC
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x140224BC4 (EtwpFailLogging.c)
 *     EtwpCompressBuffer @ 0x140229F34 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 240));
  result = *(unsigned int *)(a1 + 816);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 448) = 1;
  return result;
}
