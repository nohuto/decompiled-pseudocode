/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x1400AA15C
 * Callers:
 *     EtwpLogKernelEvent @ 0x140059740 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14007394C (EtwpLogSystemEventUnsafe.c)
 *     EtwpReserveTraceBuffer @ 0x1400D68F0 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x140224D98 (EtwpFailLogging.c)
 *     EtwpCompressBuffer @ 0x14022A108 (EtwpCompressBuffer.c)
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
