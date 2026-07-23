/*
 * XREFs of PpmSetPlatformIdleDurationHint @ 0x140200E70
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
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
