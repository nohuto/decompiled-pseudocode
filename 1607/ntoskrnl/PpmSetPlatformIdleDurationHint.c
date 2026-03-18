/*
 * XREFs of PpmSetPlatformIdleDurationHint @ 0x140201044
 * Callers:
 *     PoIdle @ 0x1400D9F40 (PoIdle.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __fastcall PpmSetPlatformIdleDurationHint(unsigned __int64 a1)
{
  ULONG result; // eax

  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( result != 1 )
  {
    if ( a1 > 0xFFFFFFFFFFFFLL )
      a1 = 0xFFFFFFFFFFFFLL;
    _InterlockedExchange64(&PpmPlatformIdleHint, (a1 << 16) | (unsigned __int16)--result);
  }
  return result;
}
