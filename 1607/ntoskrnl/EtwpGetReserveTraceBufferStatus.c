/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x1400A88E8
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
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
