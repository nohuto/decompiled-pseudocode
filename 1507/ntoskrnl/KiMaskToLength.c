/*
 * XREFs of KiMaskToLength @ 0x1403F8DC0
 * Callers:
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x1401191F8 (RtlFindLeastSignificantBit.c)
 */

__int64 __fastcall KiMaskToLength(ULONGLONG a1)
{
  CCHAR LeastSignificantBit; // cl

  if ( a1 )
    LeastSignificantBit = RtlFindLeastSignificantBit(a1);
  else
    LeastSignificantBit = KiMtrrMaxRangeShift;
  return 1LL << LeastSignificantBit;
}
