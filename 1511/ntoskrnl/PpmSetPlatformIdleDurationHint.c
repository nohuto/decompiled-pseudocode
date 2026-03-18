/*
 * XREFs of PpmSetPlatformIdleDurationHint @ 0x1401E8634
 * Callers:
 *     PoIdle @ 0x140046FE0 (PoIdle.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
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
