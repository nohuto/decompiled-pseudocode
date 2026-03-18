/*
 * XREFs of SeSetImageBaseAddress @ 0x1406D07CC
 * Callers:
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 SeSetImageBaseAddress()
{
  if ( qword_14032C1A0 )
    return qword_14032C1A0();
  else
    return 3221225659LL;
}
