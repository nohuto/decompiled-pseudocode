/*
 * XREFs of VerifierEngCreatePalette @ 0x1C028F740
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HPALETTE __fastcall VerifierEngCreatePalette(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePalette(iMode, cColors, pulColors, flRed, flGreen, flBlue);
}
