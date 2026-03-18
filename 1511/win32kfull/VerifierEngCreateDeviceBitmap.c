/*
 * XREFs of VerifierEngCreateDeviceBitmap @ 0x1C0290940
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290640 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL a2, ULONG a3)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceBitmap(dhsurf, a2, a3);
}
