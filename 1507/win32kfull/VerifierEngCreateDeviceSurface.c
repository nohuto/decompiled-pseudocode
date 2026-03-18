/*
 * XREFs of VerifierEngCreateDeviceSurface @ 0x1C0290B70
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290828 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HSURF __fastcall VerifierEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, ULONG a3)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDeviceSurface(dhsurf, a2, a3);
}
