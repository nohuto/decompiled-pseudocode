/*
 * XREFs of VerifierEngCreateBitmap @ 0x1403496B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateBitmap(SIZEL sizl, __int64 lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  LONG v7; // ebp

  v7 = lWidth;
  if ( (unsigned int)VerifierRandomFailure(sizl.cx, lWidth) )
    return 0LL;
  else
    return EngCreateBitmap(sizl, v7, iFormat, fl, pvBits);
}
