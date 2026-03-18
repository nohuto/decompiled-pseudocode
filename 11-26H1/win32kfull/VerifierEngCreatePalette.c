/*
 * XREFs of VerifierEngCreatePalette @ 0x140349860
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HPALETTE __fastcall VerifierEngCreatePalette(
        ULONG iMode,
        __int64 cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  ULONG v8; // esi

  v8 = cColors;
  if ( (unsigned int)VerifierRandomFailure(iMode, cColors) )
    return 0LL;
  else
    return EngCreatePalette(iMode, v8, pulColors, flRed, flGreen, flBlue);
}
