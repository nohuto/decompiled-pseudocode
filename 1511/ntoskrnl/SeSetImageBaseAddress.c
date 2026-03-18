/*
 * XREFs of SeSetImageBaseAddress @ 0x14064D394
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14062B9EC (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     <none>
 */

__int64 SeSetImageBaseAddress()
{
  if ( qword_1402DBE40 )
    return qword_1402DBE40();
  else
    return 3221225659LL;
}
