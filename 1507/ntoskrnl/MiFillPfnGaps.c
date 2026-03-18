/*
 * XREFs of MiFillPfnGaps @ 0x1407D4FC4
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x140163BCC (MiFillGapAddresses.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_14034F748) )
    return 0LL;
  MiFillGapAddresses(0xFFFFFA8000000000uLL, 48 * qword_14034EC10 - 0x57FFFFFFFD1LL, (int)&qword_14034F748);
  return 1LL;
}
