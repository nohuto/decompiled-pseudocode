/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x1402113F8
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1404FFD34 (LdrpSearchResourceSection_U.c)
 *     LdrEnumResources @ 0x140686058 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int *a5,
        _BYTE *a6)
{
  __int64 v7; // rdi
  unsigned __int16 *v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rax

  *a6 = 1;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v7 = (unsigned int)*a5;
    if ( (int)v7 >= 0 )
      return -1LL;
    LODWORD(v7) = v7 & 0x7FFFFFFF;
    v9 = (unsigned __int16 *)(a4 + v7);
    v10 = wcsncmp(a3, v9 + 1, *v9);
    if ( !v10 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a3[v11] );
      if ( v11 != *v9 )
        return 1LL;
    }
    return v10;
  }
  else
  {
    if ( *a5 < 0 )
      return 1LL;
    return (unsigned int)((_DWORD)a3 - *a5);
  }
}
