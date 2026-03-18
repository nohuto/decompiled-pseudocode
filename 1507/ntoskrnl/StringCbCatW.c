/*
 * XREFs of StringCbCatW @ 0x140256EC0
 * Callers:
 *     SmUniqueIdParseProductName @ 0x140256ABC (SmUniqueIdParseProductName.c)
 * Callees:
 *     sub_140256FA0 @ 0x140256FA0 (sub_140256FA0.c)
 */

HRESULT __stdcall StringCbCatW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v3; // rdx
  HRESULT v4; // r8d
  size_t v6; // rcx
  STRSAFE_LPWSTR v7; // rax
  int v8; // eax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 >= 0 )
  {
    v6 = v3;
    v7 = pszDest;
    v4 = 0;
    if ( v3 )
    {
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v6;
      }
      while ( v6 );
      if ( v6 )
      {
        v8 = v3 - v6;
        goto LABEL_11;
      }
    }
    v4 = -2147024809;
  }
  v8 = 0;
LABEL_11:
  if ( v4 >= 0 )
    return sub_140256FA0((int)pszDest + 2 * v8, (int)v3 - v8, v4, (unsigned int)L" ", 2147483646LL);
  return v4;
}
