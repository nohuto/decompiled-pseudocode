/*
 * XREFs of VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0290A90
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290640 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL a2, ULONG a3)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateRedirectionDeviceBitmap(dhsurf, a2, a3);
}
