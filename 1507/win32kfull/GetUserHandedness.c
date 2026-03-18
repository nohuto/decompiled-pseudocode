/*
 * XREFs of GetUserHandedness @ 0x1C01CBD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUserHandedness()
{
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
  {
    if ( !*(_DWORD *)(gpsi + 2040LL) )
      return 2LL;
  }
  else if ( *(_DWORD *)(gpsi + 2040LL) )
  {
    return 2LL;
  }
  return 1LL;
}
