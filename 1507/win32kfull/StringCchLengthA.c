/*
 * XREFs of StringCchLengthA @ 0x1C0148974
 * Callers:
 *     vVtfdFill_IFIMetrics @ 0x1C0146DB4 (vVtfdFill_IFIMetrics.c)
 *     cjVTFDIFIMETRICS @ 0x1C0147890 (cjVTFDIFIMETRICS.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C0147B24 (vBmfdFill_IFIMETRICS.c)
 *     bBmfdLoadFont @ 0x1C0148294 (bBmfdLoadFont.c)
 *     vtfdQueryFontFile @ 0x1C0153230 (vtfdQueryFontFile.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  HRESULT result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = 0;
    if ( !v3 )
      result = -2147024809;
    if ( pcchLength )
    {
      if ( result < 0 )
        *pcchLength = 0LL;
      else
        *pcchLength = cchMax - v3;
    }
  }
  else
  {
    result = -2147024809;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
