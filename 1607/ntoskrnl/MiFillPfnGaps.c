/*
 * XREFs of MiFillPfnGaps @ 0x14078F034
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1400B3218 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140327728) )
    return 0LL;
  MiFillGapAddresses(0xFFFFFA8000000000uLL, 48 * qword_140326AD0 - 0x57FFFFFFFD1LL, (int)&qword_140327728);
  return 1LL;
}
