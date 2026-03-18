/*
 * XREFs of StringCbCopyNW @ 0x140207CEC
 * Callers:
 *     SmUniqueIdParseProductName @ 0x140207860 (SmUniqueIdParseProductName.c)
 * Callees:
 *     sub_140207D44 @ 0x140207D44 (sub_140207D44.c)
 */

HRESULT __stdcall StringCbCopyNW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  HRESULT v5; // edx
  size_t v6; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 >= 0 )
  {
    v6 = cbToCopy >> 1;
    if ( v6 <= 0x7FFFFFFE )
    {
      return sub_140207D44((_DWORD)pszDest, v4, (_DWORD)pszSrc, (_DWORD)pszSrc, v6);
    }
    else
    {
      v5 = -2147024809;
      *pszDest = 0;
    }
  }
  return v5;
}
