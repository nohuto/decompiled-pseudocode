/*
 * XREFs of EtwpTraceFltTimedIo @ 0x14020F2F4
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 */

void __fastcall EtwpTraceFltTimedIo(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  EtwTraceTimedEvent(a4, a3, a1, a2, 0x401803u, a5);
}
