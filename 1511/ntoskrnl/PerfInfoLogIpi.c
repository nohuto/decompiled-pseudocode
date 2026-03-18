/*
 * XREFs of PerfInfoLogIpi @ 0x14020F924
 * Callers:
 *     KiIpiProcessRequests @ 0x1400C6AB0 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 */

void __fastcall PerfInfoLogIpi(__int64 a1)
{
  _DWORD v1[6]; // [rsp+30h] [rbp-18h] BYREF

  v1[0] = 0;
  EtwTraceTimedEvent(0xF5Bu, 0x40400000u, (__int64)v1, 4, 0x400A02u, a1);
}
