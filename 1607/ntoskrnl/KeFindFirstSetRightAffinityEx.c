/*
 * XREFs of KeFindFirstSetRightAffinityEx @ 0x1401D3CB8
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightAffinityEx(_WORD *a1)
{
  __int16 v1; // r8
  unsigned __int64 v3; // rdx

  v1 = 0;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= (int)(unsigned __int16)*a1 )
      return 0xFFFFFFFFLL;
  }
  _BitScanForward64(&v3, *(_QWORD *)&a1[4 * v1 + 4]);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v3 + (v1 << 6))];
}
