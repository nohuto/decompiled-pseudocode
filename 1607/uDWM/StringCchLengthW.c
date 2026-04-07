/*
 * XREFs of StringCchLengthW @ 0x180015664
 * Callers:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180018984 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038EAC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180049EF4 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // r9
  HRESULT result; // eax

  if ( psz )
  {
    v3 = 0x7FFFFFFFLL;
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
        *pcchLength = 0x7FFFFFFF - v3;
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
