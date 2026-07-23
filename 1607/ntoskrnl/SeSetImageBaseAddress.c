/*
 * XREFs of SeSetImageBaseAddress @ 0x14068CA84
 * Callers:
 *     MiRelocateImageAgain @ 0x14042B18C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140661760 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     <none>
 */

__int64 SeSetImageBaseAddress()
{
  if ( qword_1403011A0 )
    return qword_1403011A0();
  else
    return 3221225659LL;
}
