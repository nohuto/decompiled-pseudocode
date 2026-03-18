/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x1400F4628
 * Callers:
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
