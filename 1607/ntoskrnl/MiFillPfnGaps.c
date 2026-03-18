/*
 * XREFs of MiFillPfnGaps @ 0x14078F034
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x1400B53E0 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_1403276E8) )
    return 0LL;
  MiFillGapAddresses(0xFFFFFA8000000000uLL, 48 * qword_140326A90 - 0x57FFFFFFFD1LL, (int)&qword_1403276E8);
  return 1LL;
}
