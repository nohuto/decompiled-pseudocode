/*
 * XREFs of PerfInfoLogIpi @ 0x14025EC4C
 * Callers:
 *     KiIpiProcessRequests @ 0x1400FED70 (KiIpiProcessRequests.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 */

void *__fastcall PerfInfoLogIpi(__int64 a1)
{
  _DWORD v2[6]; // [rsp+30h] [rbp-18h] BYREF

  v2[0] = 0;
  return EtwTraceTimedEvent(0xF5Bu, 0x40400000u, (__int64)v2, 4, 4196866, a1);
}
