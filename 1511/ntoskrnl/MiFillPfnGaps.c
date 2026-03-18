/*
 * XREFs of MiFillPfnGaps @ 0x140767B20
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x140138348 (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  if ( !(unsigned int)MiInitializeGapFrames(0LL, qword_1402FF288) )
    return 0LL;
  MiFillGapAddresses(0xFFFFFA8000000000uLL, 48 * qword_1402FE758 - 0x57FFFFFFFD1LL, (int)qword_1402FF288);
  return 1LL;
}
