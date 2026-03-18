/*
 * XREFs of LdrpCompareResourceNames_U @ 0x1404A20DC
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 *     LdrEnumResources @ 0x140648290 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x140145C64 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNames_U(const wchar_t *a1, __int64 a2, int *a3)
{
  __int64 v5; // rdi
  unsigned __int16 *v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx

  if ( ((unsigned __int64)a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v5 = (unsigned int)*a3;
    if ( (int)v5 >= 0 )
      return -1LL;
    LODWORD(v5) = v5 & 0x7FFFFFFF;
    v6 = (unsigned __int16 *)(a2 + v5);
    v7 = wcsncmp(a1, v6 + 1, *v6);
    if ( v7 )
      return v7;
    v8 = -1LL;
    do
      ++v8;
    while ( a1[v8] );
    if ( v8 == *v6 )
      return v7;
  }
  else if ( *a3 >= 0 )
  {
    return (unsigned int)((_DWORD)a1 - *a3);
  }
  return 1LL;
}
