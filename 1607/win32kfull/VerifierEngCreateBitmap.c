/*
 * XREFs of VerifierEngCreateBitmap @ 0x1C028F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateBitmap(SIZEL a1, LONG a2, ULONG a3, FLONG a4, PVOID pvBits)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateBitmap(a1, a2, a3, a4, pvBits);
}
