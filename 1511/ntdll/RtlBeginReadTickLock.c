/*
 * XREFs of RtlBeginReadTickLock @ 0x18004A814
 * Callers:
 *     RtlGetSystemTimePrecise @ 0x18004A6F0 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800D6620 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
