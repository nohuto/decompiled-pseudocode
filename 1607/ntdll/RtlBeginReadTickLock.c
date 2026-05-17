/*
 * XREFs of RtlBeginReadTickLock @ 0x18005BFA0
 * Callers:
 *     RtlGetSystemTimePrecise @ 0x18005BE20 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800DEF70 (RtlGetInterruptTimePrecise.c)
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
