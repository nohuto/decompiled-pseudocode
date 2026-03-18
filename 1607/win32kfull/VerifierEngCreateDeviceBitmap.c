/*
 * XREFs of VerifierEngCreateDeviceBitmap @ 0x1C028F670
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL a2, ULONG a3)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceBitmap(dhsurf, a2, a3);
}
