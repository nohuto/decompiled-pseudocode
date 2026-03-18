/*
 * XREFs of SeSetImageBaseAddress @ 0x14068C9A0
 * Callers:
 *     MiRelocateImageAgain @ 0x14042C2BC (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14066167C (MiCaptureSecureImageBaseAddress.c)
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
