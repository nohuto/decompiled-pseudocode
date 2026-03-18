/*
 * XREFs of KiMaskToLength @ 0x1403A7698
 * Callers:
 *     KiInitializeMTRR @ 0x14074E92C (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x1400E3090 (RtlFindLeastSignificantBit.c)
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
