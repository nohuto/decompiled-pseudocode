/*
 * XREFs of StringCchLengthA @ 0x1C00194CC
 * Callers:
 *     vVtfdFill_IFIMetrics @ 0x1C00174B8 (vVtfdFill_IFIMetrics.c)
 *     cjVTFDIFIMETRICS @ 0x1C0018CBC (cjVTFDIFIMETRICS.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C0019518 (vBmfdFill_IFIMETRICS.c)
 *     bBmfdLoadFont @ 0x1C001F2CC (bBmfdLoadFont.c)
 *     vtfdQueryFontFile @ 0x1C012F7D0 (vtfdQueryFontFile.c)
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
